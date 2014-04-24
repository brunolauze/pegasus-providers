/*-
 * Copyright (c) 2011-2013 Baptiste Daroussin <bapt@FreeBSD.org>
 * Copyright (c) 2011-2012 Julien Laffaye <jlaffaye@FreeBSD.org>
 * Copyright (c) 2011 Will Andrews <will@FreeBSD.org>
 * Copyright (c) 2011 Philippe Pepiot <phil@philpep.org>
 * Copyright (c) 2011-2012 Marin Atanasov Nikolov <dnaeon@gmail.com>
 * Copyright (c) 2013-2014 Matthew Seaman <matthew@FreeBSD.org>
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer
 *    in this position and unchanged.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR(S) ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _PKG_H
#define _PKG_H
#define restrict 
#include <sys/types.h>
#include <stdarg.h>
#include <stdbool.h>
#include <sys/sbuf.h>
#include <stringlist.h>
#include <openssl/pem.h>
#include <sysexits.h>

/* The expected name of the pkg(8) binary executable. */
#ifndef PKG_EXEC_NAME
#define PKG_EXEC_NAME	"pkg"
#endif

/* The expected name of the pkg-static(8) binary */
#ifndef PKG_STATIC_NAME
#define PKG_STATIC_NAME	"pkg-static"
#endif

#define PKGVERSION "1.3.0.a9"

/* PORTVERSION equivalent for proper pkg-static->ports-mgmt/pkg
 * version comparison in pkgdb_query_newpkgversion() */

#define PKG_PORTVERSION "1.3.0.a9"

/* The OS major version at the time of compilation */
#ifdef __FreeBSD__
#define OSMAJOR	__FreeBSD__
#endif

#ifdef __DragonFly__
#define OSMAJOR	__DragonFly__
#endif

/* Special exit status for worker processes indicating that a restart
 * is desired -- eg. after a child has updated pkg(8) itself.  Don't
 * clash with any of the sysexits values */

#define EX_NEEDRESTART	(EX__MAX + 1)

struct pkg;
struct pkg_dep;
struct pkg_conflict;
struct pkg_file;
struct pkg_dir;
struct pkg_category;
struct pkg_option;
struct pkg_license;
struct pkg_user;
struct pkg_group;
struct pkg_shlib;
struct pkg_provide;

struct pkgdb;
struct pkgdb_it;

struct pkg_jobs;
struct pkg_solve_problem;

struct pkg_repo;

struct pkg_plugin;

struct pkg_manifest_key;
struct pkg_manifest_parser;

typedef struct ucl_object_s pkg_object;
typedef void * pkg_iter;

/**
 * The system-wide pkg(8) status: ie. is it a) installed or otherwise
 * available on the sysem, b) database (local.sqlite) initialised and
 * c) has at least one package installed (which should be pkg
 * itself). PKG_STATUS_UNINSTALLED logically cannot be returned by
 * pkg(8) itself, but it can be useful for the pkg bootstrapper
 * /usr/bin/pkg or for applications that link against libpkg.so
 */

typedef enum {
	PKG_STATUS_ACTIVE = 0,	/* pkg in use */
	PKG_STATUS_NOPACKAGES,	/* local.sqlite empty */
	PKG_STATUS_NODB,	/* local.sqlite not found, unreadable or not initialised */
	PKG_STATUS_UNINSTALLED,	/* pkg not argv[0] or not on $PATH */
} pkg_status_t;

typedef enum {
	/**
	 * The license logic is OR (dual in the ports)
	 */
	LICENSE_OR = '|',
	/**
	 * The license logic is AND (multi in the ports)
	 */
	LICENSE_AND = '&',
	/**
	 * The license logic un single (default in the ports)
	 */
	LICENSE_SINGLE = 1U
} lic_t;

typedef enum {
	PKGDB_DEFAULT = 0,
	PKGDB_REMOTE,
	PKGDB_MAYBE_REMOTE
} pkgdb_t;

/**
 * Specify how an argument should be used by query functions.
 */
typedef enum {
	/**
	 * The argument does not matter, all items will be matched.
	 */
	MATCH_ALL,
	/**
	 * The argument is the exact pattern.  Match will be case
	 * sensitive or case insensitive according to
	 * pkgdb_case_sensitive()
	 */
	MATCH_EXACT,
	/**
	 * The argument is an exact pattern except that matches will
	 * be made case insensitively.  Match is always case sensitive
	 */
	MATCH_GLOB,
	/**
	 * The argument is a regular expression ('modern' style
	 * according to re_format(7).  Match will be case sensitive or
	 * case insensitive according to pkgdb_case_sensitive()
	 */
	MATCH_REGEX,
	/**
	 * The argument is a WHERE clause to use as condition
	 */
	MATCH_CONDITION,
} match_t;

/**
 * Specify on which field the pattern will be matched uppon.
 */

typedef enum {
	FIELD_NONE,
	FIELD_ORIGIN,
	FIELD_NAME,
	FIELD_NAMEVER,
	FIELD_COMMENT,
	FIELD_DESC
} pkgdb_field;

/**
 * The type of package.
 */
typedef enum {
	/**
	 * The pkg type can not be determined.
	 */
	PKG_NONE = 0,

	/**
	 * The pkg refers to a local file archive.
	 */
	PKG_FILE = (1U << 0),
	/**
         * The pkg refers to data read from a non-regular file
         * (device, pipeline, unix dmain socket etc.)
	 */
	PKG_STREAM = (1U << 1),
	/**
	 * The pkg refers to a package available on the remote repository.
	 * @todo Document which attributes are available.
	 */
	PKG_REMOTE = (1U << 2),
	/**
	 * The pkg refers to a localy installed package.
	 */
	PKG_INSTALLED = (1U << 3),
	/**
	 * The pkg refers to a local file old archive.
	 */
	PKG_OLD_FILE = (1U << 4),
} pkg_t;

/**
 * Contains keys to refer to a string attribute.
 * Used by pkg_get() and pkg_set()
 */
typedef enum {
	PKG_ORIGIN = 1U,
	PKG_NAME,
	PKG_VERSION,
	PKG_COMMENT,
	PKG_DESC,
	PKG_MTREE,
	PKG_MESSAGE,
	PKG_ARCH,
	PKG_MAINTAINER,
	PKG_WWW,
	PKG_PREFIX,
	PKG_REPOPATH,
	PKG_CKSUM,
	PKG_OLD_VERSION,
	PKG_REPONAME,
	PKG_REPOURL,
	PKG_DIGEST,
	PKG_REASON,
	PKG_NUM_FIELDS, 	/* end of fields */
	PKG_FLATSIZE = 64U,
	PKG_OLD_FLATSIZE,
	PKG_PKGSIZE,
	PKG_LICENSE_LOGIC,
	PKG_AUTOMATIC,
	PKG_LOCKED,
	PKG_ROWID,
	PKG_TIME
} pkg_attr;

typedef enum {
	PKG_SET_FLATSIZE = 1U,
	PKG_SET_AUTOMATIC,
	PKG_SET_LOCKED,
	PKG_SET_DEPORIGIN,
	PKG_SET_ORIGIN
} pkg_set_attr;

/**
 * contains keys to refer to a string attribute
 * Used by pkg_dep_get()
 */
typedef enum {
	PKG_DEP_NAME = 0,
	PKG_DEP_ORIGIN,
	PKG_DEP_VERSION
} pkg_dep_attr;

typedef enum {
	PKG_FILE_PATH = 0,
	PKG_FILE_SUM,
	PKG_FILE_UNAME,
	PKG_FILE_GNAME
} pkg_file_attr;

typedef enum {
	PKG_DIR_PATH = 0,
	PKG_DIR_UNAME,
	PKG_DIR_GNAME
} pkg_dir_attr;

typedef enum {
	PKG_DEPS = 0,
	PKG_RDEPS,
	PKG_LICENSES,
	PKG_OPTIONS,
	PKG_CATEGORIES,
	PKG_FILES,
	PKG_DIRS,
	PKG_USERS,
	PKG_GROUPS,
	PKG_SHLIBS_REQUIRED,
	PKG_SHLIBS_PROVIDED,
	PKG_ANNOTATIONS,
	PKG_CONFLICTS,
	PKG_PROVIDES
} pkg_list;

typedef enum {
	REPO_BINARY_PKGS,
} repo_t;

typedef enum {
	SRV,
	HTTP,
	NOMIRROR,
} mirror_t;

typedef enum {
	SIG_NONE = 0,
	SIG_PUBKEY,
	SIG_FINGERPRINT
} signature_t;

/**
 * Determine the type of a pkg_script.
 */
typedef enum {
	PKG_SCRIPT_PRE_INSTALL = 0,
	PKG_SCRIPT_POST_INSTALL,
	PKG_SCRIPT_PRE_DEINSTALL,
	PKG_SCRIPT_POST_DEINSTALL,
	PKG_SCRIPT_PRE_UPGRADE,
	PKG_SCRIPT_POST_UPGRADE,
	PKG_SCRIPT_INSTALL,
	PKG_SCRIPT_DEINSTALL,
	PKG_SCRIPT_UPGRADE,
	PKG_SCRIPT_UNKNOWN
} pkg_script;

typedef enum _pkg_jobs_t {
	PKG_JOBS_INSTALL,
	PKG_JOBS_DEINSTALL,
	PKG_JOBS_FETCH,
	PKG_JOBS_AUTOREMOVE,
	PKG_JOBS_UPGRADE,
} pkg_jobs_t;

typedef enum _pkg_flags {
	PKG_FLAG_NONE = 0,
	PKG_FLAG_DRY_RUN = (1U << 0),
	PKG_FLAG_FORCE = (1U << 1),
	PKG_FLAG_RECURSIVE = (1U << 2),
	PKG_FLAG_AUTOMATIC = (1U << 3),
	PKG_FLAG_WITH_DEPS = (1U << 4),
	PKG_FLAG_NOSCRIPT = (1U << 5),
	PKG_FLAG_PKG_VERSION_TEST = (1U << 6),
	PKG_FLAG_UPGRADES_FOR_INSTALLED = (1U << 7),
	PKG_FLAG_SKIP_INSTALL = (1U << 8),
	PKG_FLAG_FORCE_MISSING = (1U << 9)
} pkg_flags;

typedef enum _pkg_stats_t {
	PKG_STATS_LOCAL_COUNT = 0,
	PKG_STATS_LOCAL_SIZE,
	PKG_STATS_REMOTE_COUNT,
	PKG_STATS_REMOTE_UNIQUE,
	PKG_STATS_REMOTE_SIZE,
	PKG_STATS_REMOTE_REPOS,
} pkg_stats_t;

typedef enum {
	PKG_STRING = 0,
	PKG_BOOL,
	PKG_INT,
	PKG_ARRAY,
	PKG_OBJECT,
	PKG_NULL
} pkg_object_t;

/**
 * Keys for accessing pkg plugin data
 */
typedef enum _pkg_plugin_key {
	PKG_PLUGIN_NAME = 0,
	PKG_PLUGIN_DESC,
	PKG_PLUGIN_VERSION,
	PKG_PLUGIN_PLUGINFILE
} pkg_plugin_key;

/**
 * Keys for hooking into the library
 */
typedef enum _pkg_plugin_hook_t {
	PKG_PLUGIN_HOOK_PRE_INSTALL = 1,
	PKG_PLUGIN_HOOK_POST_INSTALL,
	PKG_PLUGIN_HOOK_PRE_DEINSTALL,
	PKG_PLUGIN_HOOK_POST_DEINSTALL,
	PKG_PLUGIN_HOOK_PRE_FETCH,
	PKG_PLUGIN_HOOK_POST_FETCH,
	PKG_PLUGIN_HOOK_EVENT,
	PKG_PLUGIN_HOOK_PRE_UPGRADE,
	PKG_PLUGIN_HOOK_POST_UPGRADE,
	PKG_PLUGIN_HOOK_PRE_AUTOREMOVE,
	PKG_PLUGIN_HOOK_POST_AUTOREMOVE,
	PKG_PLUGIN_HOOK_PKGDB_CLOSE_RW,
} pkg_plugin_hook_t;

/**
 * Error type used everywhere by libpkg.
 */
typedef enum {
	EPKG_OK = 0,
	/**
	 * No more items available (end of the loop).
	 */
	EPKG_END,
	EPKG_WARN,
	/**
	 * The function encountered a fatal error.
	 */
	EPKG_FATAL,
	/**
	 * Can not delete the package because it is required by
	 * another package.
	 */
	EPKG_REQUIRED,
	/**
	 * Can not install the package because it is already installed.
	 */
	EPKG_INSTALLED,
	/**
	 * Can not install the package because some dependencies are
	 * unresolved.
	 */
	EPKG_DEPENDENCY,
	/**
         * Can not operate on package because it is locked
	 */
	EPKG_LOCKED,
	/**
	 * Can not create local database or database non-existent
	 */
	EPKG_ENODB,
	/**
	 * local file newer than remote
	 */
	EPKG_UPTODATE,
	/**
	 * unkown keyword
	 */
	EPKG_UNKNOWN,
	/**
	 * repo DB schema incompatible version
	 */
	EPKG_REPOSCHEMA,
	/**
         * Insufficient privilege for action
         */
	EPKG_ENOACCESS,
	/**
	 * Insecure permissions on any component of
	 * $PKGDB_DIR/local.sqlite or any of the repo database bits
	 */
	EPKG_INSECURE,
	/**
	 * A conflict between packages found
	 */
	EPKG_CONFLICT
} pkg_error_t;

/**
 * Upgrade, downgrade or reinstall?
 */

typedef enum {
	PKG_DOWNGRADE = 0,
	PKG_REINSTALL,
	PKG_UPGRADE,
} pkg_change_t;

/**
 * Locking types for database:
 * `PKGDB_LOCK_READONLY`: lock for read only queries (can be nested)
 * `PKGDB_LOCK_ADVISORY`: write to DB inside a transaction (allows `PKGDB_LOCK_READONLY`)
 * `PKGDB_LOCK_EXCLUSIVE`: possibly destructive operations (does not allow other locks)
 */
typedef enum {
	PKGDB_LOCK_READONLY,
	PKGDB_LOCK_ADVISORY,
	PKGDB_LOCK_EXCLUSIVE
} pkgdb_lock_t;

typedef enum {
	PKG_SOLVED_INSTALL,
	PKG_SOLVED_DELETE,
	PKG_SOLVED_UPGRADE,
	PKG_SOLVED_UPGRADE_REMOVE,
	PKG_SOLVED_FETCH
} pkg_solved_t;

#define PKG_OPEN_MANIFEST_ONLY 0x1
#define PKG_OPEN_MANIFEST_COMPACT (0x1 << 1)

/**
 * test if pkg is installed and activated.
 * @param count  If all the tests pass, and count is non-NULL,
 * write the number of installed packages into *count
 */
pkg_status_t pkg_status(int *count);

/**
 * Allocate a new pkg.
 * Allocated pkg must be deallocated by pkg_free().
 */
int pkg_new(struct pkg **, pkg_t type);

/**
 * Reset a pkg to its initial state.
 * Useful to avoid sequences of pkg_new() and pkg_free().
 */
void pkg_reset(struct pkg *, pkg_t type);

/**
 * Deallocate a pkg
 */
void pkg_free(struct pkg *);

/**
 * Check if a package is valid according to its type.
 */
int pkg_is_valid(const struct pkg * restrict);

/**
 * Open a package file archive and retrive informations.
 * @param p A pointer to pkg allocated by pkg_new(), or if it points to a
 * NULL pointer, the function allocate a new pkg using pkg_new().
 * @param path The path to the local package archive.
 * @param keys manifest keys that should be initialised
 * @param flags open flags
 */
int pkg_open(struct pkg **p, const char *path, struct pkg_manifest_key *keys, int flags);
int pkg_open_fd(struct pkg **p, int fd, struct pkg_manifest_key *keys, int flags);

/**
 * @return the type of the package.
 * @warning returns PKG_NONE on error.
 */
pkg_t pkg_type(const struct pkg * restrict);

/**
 * Generic getter for simple attributes.
 * @return NULL-terminated string.
 * @warning May return a NULL pointer.
 */
int pkg_get2(struct pkg const *const, ...);
#define pkg_get(pkg, ...) pkg_get2(pkg, __VA_ARGS__, -1)

int pkg_list_count(const struct pkg *, pkg_list);

/**
 * Iterates over the dependencies of the package.
 * @param dep Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_deps(const struct pkg *, struct pkg_dep **dep);

struct pkg_dep *pkg_dep_lookup(const struct pkg *, const char *origin);

/**
 * Iterates over the reverse dependencies of the package.
 * That is, the packages which require this package.
 * @param dep Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_rdeps(const struct pkg *, struct pkg_dep **dep);

/**
 * Iterates over the files of the package.
 * @param file Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_files(const struct pkg *, struct pkg_file **file);

/**
 * Iterates over the directories of the package.
 * @param Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_dirs(const struct pkg *pkg, struct pkg_dir **dir);

pkg_object *pkg_categories(const struct pkg *pkg);
pkg_object *pkg_licenses(const struct pkg *pkg);

/**
 * Iterates over the users of the package.
 * @param Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_users(const struct pkg *pkg, struct pkg_user **user);

/**
 * Iterates over the groups of the package.
 * @param Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_groups(const struct pkg *pkg, struct pkg_group **group);

/**
 * Iterates over the options of the package.
 * @param  option Must be set to NULL for the first call.
 * @return An error code.
 */
int pkg_options(const struct pkg *, struct pkg_option **option);

/**
 * Iterates over the shared libraries used by the package.
 * @param shlib must be set to NULL for the first call.
 * @return An error code
 */
int pkg_shlibs_required(const struct pkg *pkg, struct pkg_shlib **shlib);

/**
 * Iterates over the shared libraries provided by the package.
 * @param shlib must be set to NULL for the first call.
 * @return An error code
 */
int pkg_shlibs_provided(const struct pkg *pkg, struct pkg_shlib **shlib);

/**
 * Iterates over the conflicts registered in the package.
 * @param conflict must be set to NULL for the first call.
 * @return An error code
 */
int pkg_conflicts(const struct pkg *pkg, struct pkg_conflict **conflict);

/**
 * Iterates over the provides registered in the package.
 * @param provide must be set to NULL for the first call.
 * @return An error code
 */
int pkg_provides(const struct pkg *pkg, struct pkg_provide **provide);

/**
 * Iterates over the annotations associated with the package.
 * @param note must be set to NULL for the first call.
 * @return An error code
 */
pkg_object *pkg_annotation_lookup(const struct pkg *p, const char *tag);
pkg_object *pkg_annotations(const struct pkg *p);

/**
 * Iterate over all of the files within the package pkg, ensuring the
 * dependency list contains all applicable packages providing the
 * shared objects used by pkg.
 * Also add all the shared object into the shlibs.
 * It respects the SHLIBS and AUTODEPS options from configuration
 * @return An error code
 */

 /* Don't conflict with PKG_LOAD_* q.v. */
#define PKG_CONTAINS_ELF_OBJECTS	(1U << 24)
#define PKG_CONTAINS_STATIC_LIBS	(1U << 25)
#define PKG_CONTAINS_H_OR_LA		(1U << 26)

int pkg_analyse_files(struct pkgdb *, struct pkg *, const char *);

/**
 * Suggest if a package could be marked architecture independent or
 * not.
 */
int pkg_suggest_arch(struct pkg *, const char *, bool);

/**
 * Generic setter for simple attributes.
 */
int pkg_set2(struct pkg *pkg, ...);
#define pkg_set(pkg, ...) pkg_set2(pkg, __VA_ARGS__, -1)

int pkgdb_set2(struct pkgdb *db, struct pkg *pkg, ...);
#define pkgdb_set(db, pkg, ...) pkgdb_set2(db, pkg, __VA_ARGS__, -1)

/**
 * update the checksum of a file in the database (and the object)
 * XXX I don't think this function should be part of a public API.
 * @param db A pointer to a struct pkgdb object
 * @param file A pointer to a struct pkg_file object
 * @param sha256 The new checksum
 * @return An error code
 */
int pkgdb_file_set_cksum(struct pkgdb *db, struct pkg_file *file,
			 const char *sha256);

/**
 * Read the content of a file into a buffer, then call pkg_set().
 */
int pkg_set_from_file(struct pkg *pkg, pkg_attr attr, const char *file, bool trimcr);

/**
 * Allocate a new struct pkg and add it to the deps of pkg.
 * @return An error code.
 */
int pkg_adddep(struct pkg *pkg, const char *name, const char *origin, const
			   char *version, bool locked);
int pkg_addrdep(struct pkg *pkg, const char *name, const char *origin, const
			   char *version, bool locked);

//int pkg_addfile(struct pkg *, const char *fmt);
/**
 * Allocate a new struct pkg_file and add it to the files of pkg.
 * @param sha256 The ascii representation of the sha256 or a NULL pointer.
 * @param check_duplicates ensure no duplicate files are added to the pkg?
 * @return An error code.
 */
int pkg_addfile(struct pkg *pkg, const char *path, const char *sha256,
		bool check_duplicates);

/**
 * Allocate a new struct pkg_file and add it to the files of pkg;
 * @param path path of the file
 * @param sha256 The ascii representation of the sha256 or a NULL pointer.
 * @param uname the user name of the file
 * @param gname the group name of the file
 * @param perm the permission
 * @param check_duplicates ensure no duplicate files are added to the pkg?
 * @return An error code.
 */
int pkg_addfile_attr(struct pkg *pkg, const char *path, const char *sha256,
		     const char *uname, const char *gname, mode_t perm,
		     bool check_duplicates);

/**
 * Add a path
 * @return An error code.
 */
int pkg_adddir(struct pkg *pkg, const char *path, bool _try,
		    bool check_duplicates);

/**
 * Allocate a new struct pkg_file and add it to the files of pkg;
 * @param path path of the file
 * @param uname the user name of the file
 * @param gname the group name of the file
 * @param perm the permission
 * @return An error code.
 */
int pkg_adddir_attr(struct pkg *pkg, const char *path, const char *uname,
		    const char *gname, mode_t perm, bool _try,
		    bool check_duplicates);

/**
 * Add a category
 * @return An error code.
 */
int pkg_addcategory(struct pkg *pkg, const char *name);

/**
 * Add a license
 * @return An error code.
 */
int pkg_addlicense(struct pkg *pkg, const char *name);

/**
 * Add a user
 * @return An error code.
 */
int pkg_adduser(struct pkg *pkg, const char *name);

/**
 * Add a group
 * @return An error code.
 */
int pkg_addgroup(struct pkg *pkg, const char *group);

/**
 * Add a user
 * @return An error code.
 */
int pkg_adduid(struct pkg *pkg, const char *name, const char *uidstr);

/**
 * Add a gid
 * @return an error code
 */
int pkg_addgid(struct pkg *pkg, const char *group, const char *gidstr);

/**
 * Allocate a new struct pkg_script and add it to the scripts of pkg.
 * @param path The path to the script on disk.
 @ @return An error code.
 */
int pkg_addscript(struct pkg *pkg, const char *data, pkg_script type);

/**
 * Helper which call pkg_addscript() with the content of the file and
 * with the correct type.
 */
int pkg_addscript_file(struct pkg *pkg, const char *path);
int pkg_appendscript(struct pkg *pkg, const char *cmd, pkg_script type);

/**
 * Allocate a new struct pkg_option and add it to the options of pkg.
 * @return An error code.
 */
int pkg_addoption(struct pkg *pkg, const char *name, const char *value);

/**
 * Add a default value to an already existing struct pkg_option
 * @return An error code
 */
int pkg_addoption_default(struct pkg *pkg, const char *key,
                          const char *default_value);

/**
 * Add a description to an already exsting struct pkg_option
 * @return An error code.
 */
int pkg_addoption_description(struct pkg *pkg, const char *key,
                              const char *description);

/**
 * Add a shared library used by this package
 * @return An error code.
 */
int pkg_addshlib_required(struct pkg *pkg, const char *name);

/**
 * Add a shared library provided by this package
 * @return An error code.
 */
int pkg_addshlib_provided(struct pkg *pkg, const char *name);

/**
 * Add a conflict registered with this package
 * @return An error code.
 */
int pkg_addconflict(struct pkg *pkg, const char *name);

/**
 * Add a provide registered with this package
 * @return An error code.
 */
int pkg_addprovide(struct pkg *pkg, const char *name);

/**
 * Add annotation key+value pair
 * @return An error code
 */
int pkg_addannotation(struct pkg *pkg, const char *tag, const char *value);

/**
 * Delete annotation identified by the key
 * @return An error code
 */
int pkg_delannotation(struct pkg *pkg, const char *tag);

/**
 * Parse a manifest and set the attributes of pkg accordingly.
 * @param buf An NULL-terminated buffer containing the manifest data.
 * @return An error code.
 */
int pkg_parse_manifest(struct pkg *pkg, char *buf, size_t len, struct pkg_manifest_key *key);
int pkg_parse_manifest_file(struct pkg *pkg, const char *, struct pkg_manifest_key *key);
int pkg_manifest_keys_new(struct pkg_manifest_key **k);
void pkg_manifest_keys_free(struct pkg_manifest_key *k);
int pkg_manifest_parser_new(struct pkg_manifest_parser **p);
void pkg_manifest_parser_free(struct pkg_manifest_parser *p);

#define PKG_MANIFEST_EMIT_COMPACT 0x1
#define PKG_MANIFEST_EMIT_NOFILES (0x1 << 1)
#define PKG_MANIFEST_EMIT_PRETTY (0x1 << 2)

/**
 * Emit a manifest according to the attributes of pkg.
 * @param buf A pointer which will hold the allocated buffer containing the
 * manifest. To be free'ed.
 * @param flags Flags for manifest emitting.
 * @param pdigest A pointer that will hold digest of manifest produced, ignored
 * if NULL. To be free'ed if not NULL.
 * @return An error code.
 */
int pkg_emit_manifest(struct pkg *pkg, char **buf, short flags, char **pdigest);
int pkg_emit_manifest_file(struct pkg*, FILE *, short, char **pdigest);

/* pkg_dep */
const char *pkg_dep_get(struct pkg_dep const * const , const pkg_dep_attr);
#define pkg_dep_name(d) pkg_dep_get(d, PKG_DEP_NAME)
#define pkg_dep_origin(d) pkg_dep_get(d, PKG_DEP_ORIGIN)
#define pkg_dep_version(d) pkg_dep_get(d, PKG_DEP_VERSION)
bool pkg_dep_is_locked(struct pkg_dep const * const);

/* pkg_file */
const char *pkg_file_get(struct pkg_file const * const, const pkg_file_attr);
#define pkg_file_path(f) pkg_file_get(f, PKG_FILE_PATH)
#define pkg_file_cksum(f) pkg_file_get(f, PKG_FILE_SUM)
#define pkg_file_uname(f) pkg_file_get(f, PKG_FILE_UNAME)
#define pkg_file_gname(f) pkg_file_get(f, PKG_FILE_GNAME)
mode_t pkg_file_mode(struct pkg_file const * const);
bool pkg_file_keep(struct pkg_file const * const);

bool pkg_has_dir(struct pkg *, const char *);
bool pkg_has_file(struct pkg *, const char *);
/* pkg_dir */
const char *pkg_dir_get(struct pkg_dir const * const, const pkg_dir_attr);
#define pkg_dir_path(d) pkg_dir_get(d, PKG_DIR_PATH)
#define pkg_dir_uname(d) pkg_dir_get(d, PKG_DIR_UNAME)
#define pkg_dir_gname(d) pkg_dir_get(d, PKG_DIR_GNAME)
mode_t pkg_dir_mode(struct pkg_dir const * const);
bool pkg_dir_keep(struct pkg_dir const * const);
bool pkg_dir_try(struct pkg_dir const * const);

/* pkg_category */
const char *pkg_category_name(struct pkg_category const * const);

/* pkg_license */
const char *pkg_license_name(struct pkg_license const * const);

/* pkg_user */
const char *pkg_user_name(struct pkg_user const * const);
const char *pkg_user_uidstr(struct pkg_user const * const);

/* pkg_group */
const char *pkg_group_name(struct pkg_group const * const);
const char *pkg_group_gidstr(struct pkg_group const * const);

/* pkg_script */
const char *pkg_script_get(struct pkg const * const, pkg_script);

/* pkg_option */
const char *pkg_option_opt(struct pkg_option const * const);
const char *pkg_option_value(struct pkg_option const * const);
const char *pkg_option_default_value(struct pkg_option const * const);
const char *pkg_option_description(struct pkg_option const * const);

/* pkg_shlib */
const char *pkg_shlib_name(struct pkg_shlib const * const);

/* pkg_conflict */
const char *pkg_conflict_origin(const struct pkg_conflict *);

/* pkg_provide */
const char *pkg_provide_name(const struct pkg_provide *);

/**
 * @param db A pointer to a struct pkgdb object
 * @param origin Package origin
 * @param pkg An allocated struct pkg or a pointer to a NULL pointer. In the
 * last case, the function take care of the allocation.
 * @param flags OR'ed PKG_LOAD_*
 * @return EPKG_OK if the package is installed,
 * and != EPKG_OK if the package is not installed or an error occurred
 * Match will be case sensitive or insensitive depending 
 */
int pkg_try_installed(struct pkgdb *db, const char *origin,
		struct pkg **pkg, unsigned flags);

/**
 * @param db A pointer to a struct pkgdb object
 * @param origin Package origin
 * @return EPKG_OK if the package is installed,
 * and != EPKG_OK if the package is not installed or an error occurred
 * Match will be case sensitive or insensitive depending on
 * pkgdb_case_sensitive()
 */
int pkg_is_installed(struct pkgdb *db, const char *origin);

/**
 * Create a repository database.
 * @param path The path where the repository live.
 * @param output_dir The path where the package repository should be created.
 * @param force If true, rebuild the repository catalogue from scratch
 * @param filesite If true, create a list of all files in repo
 * @param callback A function which is called at every step of the process.
 * @param data A pointer which is passed to the callback.
 * @param sum An 65 long char array to receive the sha256 sum
 */
int pkg_create_repo(char *path, const char *output_dir, bool filelist,
    void (*callback)(struct pkg *, void *), void *);
int pkg_finish_repo(const char *output_dir, pem_password_cb *cb, char **argv,
    int argc, bool filelist);

/**
 * Test if the EUID has sufficient privilege to carry out some
 * operation (mode is a bitmap indicating READ, WRITE, CREATE) on the
 * databases indicated in the database bitmap.
 */
#define PKGDB_MODE_READ		(0x1<<0)
#define PKGDB_MODE_WRITE	(0x1<<1)
#define PKGDB_MODE_CREATE	(0x1<<2)

#define PKGDB_DB_LOCAL		(0x1<<0)
#define PKGDB_DB_REPO		(0x1<<1)
int pkgdb_access(unsigned mode, unsigned database);

/**
 * Open the local package database.
 * The db must be free'ed with pkgdb_close().
 * @return An error code.
 */
int pkgdb_open(struct pkgdb **db, pkgdb_t type);

/**
 * Open the local package database and repositories, possibly
 * overriding configured repositories and replacing with the given
 * reponame if not NULL
 * @return An error code
 */
int pkgdb_open_all(struct pkgdb **db, pkgdb_t type, const char *reponame);

/**
 * Locking functions
 */
int pkgdb_obtain_lock(struct pkgdb *db, pkgdb_lock_t type, double delay, unsigned int retries);
int pkgdb_upgrade_lock(struct pkgdb *db, pkgdb_lock_t old_type, pkgdb_lock_t new_type,
		double delay, unsigned int retries);
int pkgdb_release_lock(struct pkgdb *db, pkgdb_lock_t type);

/**
 * Close and free the struct pkgdb.
 */
void pkgdb_close(struct pkgdb *db);

/**
 * Initialize the local cache of the remote database with indicies
 */
int pkgdb_remote_init(struct pkgdb *db, const char *reponame);

/**
 * Dump to or load from a backup copy of the main database file
 * (local.sqlite)
 */

int pkgdb_dump(struct pkgdb *db, const char *dest);
int pkgdb_load(struct pkgdb *db, const char *src);

/**
 * Register a ports to the database.
 * @return An error code.
 */

int pkgdb_register_ports(struct pkgdb *db, struct pkg *pkg);

/**
 * Unregister a package from the database
 * @return An error code.
 */
int pkgdb_unregister_pkg(struct pkgdb *pkg, const char *origin);

/**
 * Set the case sensitivity flag on or off.  Defaults to 
 * true (case_sensitive)
 */
void pkgdb_set_case_sensitivity(bool);

/**
 * Query the state of the case sensitity setting.
 */
bool pkgdb_case_sensitive(void);

/**
 * Query the local package database.
 * @param type Describe how pattern should be used.
 * @warning Returns NULL on failure.
 */
struct pkgdb_it * pkgdb_query(struct pkgdb *db, const char *pattern,
    match_t type);
struct pkgdb_it * pkgdb_rquery(struct pkgdb *db, const char *pattern,
    match_t type, const char *reponame);
struct pkgdb_it * pkgdb_search(struct pkgdb *db, const char *pattern,
    match_t type, pkgdb_field field, pkgdb_field sort, const char *reponame);

/**
 * @todo Return directly the struct pkg?
 */
struct pkgdb_it * pkgdb_query_which(struct pkgdb *db, const char *path, bool glob);

struct pkgdb_it * pkgdb_query_shlib_required(struct pkgdb *db, const char *shlib);
struct pkgdb_it * pkgdb_query_shlib_provided(struct pkgdb *db, const char *shlib);

struct pkgdb_it * pkgdb_rquery_provide(struct pkgdb *db, 
    const char *provide, const char *repo);

/**
 * Add/Modify/Delete an annotation for a package
 * @param key -- tag for the annotation
 * @param value -- text of the annotation
 * @return An error code
 */
int pkgdb_add_annotation(struct pkgdb *db, struct pkg *pkg,
	const char *tag, const char *value);
int pkgdb_modify_annotation(struct pkgdb *db, struct pkg *pkg,
	const char *tag, const char *value);
int pkgdb_delete_annotation(struct pkgdb *db, struct pkg *pkg,
        const char *tag);

#define PKG_LOAD_BASIC			0
#define PKG_LOAD_DEPS			(1U << 0)
#define PKG_LOAD_RDEPS			(1U << 1)
#define PKG_LOAD_FILES			(1U << 2)
#define PKG_LOAD_SCRIPTS		(1U << 3)
#define PKG_LOAD_OPTIONS		(1U << 4)
#define PKG_LOAD_MTREE			(1U << 5)
#define PKG_LOAD_DIRS			(1U << 6)
#define PKG_LOAD_CATEGORIES		(1U << 7)
#define PKG_LOAD_LICENSES		(1U << 8)
#define PKG_LOAD_USERS			(1U << 9)
#define PKG_LOAD_GROUPS			(1U << 10)
#define PKG_LOAD_SHLIBS_REQUIRED	(1U << 11)
#define PKG_LOAD_SHLIBS_PROVIDED	(1U << 12)
#define PKG_LOAD_ANNOTATIONS		(1U << 13)
#define PKG_LOAD_CONFLICTS		(1U << 14)
#define PKG_LOAD_PROVIDES		(1U << 15)
/* Make sure new PKG_LOAD don't conflict with PKG_CONTAINS_* */

/**
 * Get the next pkg.
 * @param pkg An allocated struct pkg or a pointer to a NULL pointer. In the
 * last case, the function take care of the allocation.
 * @param flags OR'ed PKG_LOAD_*
 * @return An error code.
 */
int pkgdb_it_next(struct pkgdb_it *, struct pkg **pkg, unsigned flags);

/**
 * Reset the pkgdb_it iterator, allowing for re-iterating over it
 */
void pkgdb_it_reset(struct pkgdb_it *);

/**
 * Free a struct pkgdb_it.
 */
void pkgdb_it_free(struct pkgdb_it *);

/**
 * Compact the database to save space.
 * Note that the function will really compact the database only if some
 * internal criterias are met.
 * @return An error code.
 */
int pkgdb_compact(struct pkgdb *db);

/**
 * Install and register a new package.
 * @param db An opened pkgdb
 * @param path The path to the package archive file on the local disk
 * @return An error code.
 */
int pkg_add(struct pkgdb *db, const char *path, unsigned flags,
    struct pkg_manifest_key *keys, const char *location);

#define PKG_ADD_UPGRADE			(1U << 0)
#define PKG_ADD_USE_UPGRADE_SCRIPTS	(1U << 1)
#define PKG_ADD_AUTOMATIC		(1U << 2)
#define PKG_ADD_FORCE			(1U << 3)
#define PKG_ADD_NOSCRIPT		(1U << 4)
#define PKG_ADD_FORCE_MISSING		(1U << 5)

/**
 * Allocate a new pkg_jobs.
 * @param db A pkgdb open with PKGDB_REMOTE.
 * @return An error code.
 */
int pkg_jobs_new(struct pkg_jobs **jobs, pkg_jobs_t type, struct pkgdb *db);

/**
 * Free a pkg_jobs
 */
void pkg_jobs_free(struct pkg_jobs *jobs);

/**
 * Add a pkg to the jobs queue.
 * @return An error code.
 */
int pkg_jobs_add(struct pkg_jobs *j, match_t match, char **argv, int argc);
int pkg_jobs_solve(struct pkg_jobs *j);
int pkg_jobs_set_repository(struct pkg_jobs *j, const char *name);
void pkg_jobs_set_flags(struct pkg_jobs *j, pkg_flags f);
pkg_jobs_t pkg_jobs_type(struct pkg_jobs *j);

/**
 * Returns the number of elements in the job queue
 */
int pkg_jobs_count(struct pkg_jobs *jobs);

/**
 * Returns the number of total elements in pkg universe
 */
int pkg_jobs_total(struct pkg_jobs *jobs);

/**
 * Iterates over the packages in the jobs queue.
 * @param iter Must be set to NULL for the first call.
 * @return A next pkg or NULL.
 */
bool pkg_jobs_iter(struct pkg_jobs *jobs, void **iter, struct pkg **n, 
	struct pkg **o, int *type);

/**
 * Apply the jobs in the queue (fetch and install).
 * @return An error code.
 */
int pkg_jobs_apply(struct pkg_jobs *jobs);

/**
 * Emit CUDF spec to a file for a specified jobs request
 * @return error code
 */
int pkg_jobs_cudf_emit_file(struct pkg_jobs *, pkg_jobs_t , FILE *);

/**
 * Parse the output of an external CUDF solver
 * @return error code
 */
int pkg_jobs_cudf_parse_output(struct pkg_jobs *j, FILE *f);

/**
 * Solve a SAT problem
 * @return true if a problem is solvable
 */
bool pkg_solve_sat_problem(struct pkg_solve_problem *problem);

/**
 * Convert package jobs to a SAT problem
 * @return SAT problem or NULL if failed
 */
struct pkg_solve_problem * pkg_solve_jobs_to_sat(struct pkg_jobs *j);

/**
 * Export sat problem to the DIMACS format
 * @return error code
 */
int pkg_solve_dimacs_export(struct pkg_solve_problem *problem, FILE *f);

/**
 * Move solved problem to the jobs structure
 * @return error code
 */
int pkg_solve_sat_to_jobs(struct pkg_solve_problem *problem, struct pkg_jobs *j);

/**
 * Parse SAT solver output and convert it to jobs
 * @return error code
 */
int pkg_solve_parse_sat_output(FILE *f, struct pkg_solve_problem *problem, struct pkg_jobs *j);

/**
 * Free a SAT problem structure
 */
void pkg_solve_problem_free(struct pkg_solve_problem *problem);

/**
 * Archive formats options.
 */
typedef enum pkg_formats { TAR, TGZ, TBZ, TXZ } pkg_formats;

/**
 * Create package from an installed & registered package
 */
int pkg_create_installed(const char *, pkg_formats, struct pkg *);

/**
 * Create package from stage install with a metadata directory
 */
int pkg_create_staged(const char *, pkg_formats, const char *, const char *,
		      char *, bool);

/**
 * Download the latest repo db file and checks its signature if any
 * @param force Always download the repo catalogue
 */
int pkg_update(struct pkg_repo *repo, bool force);

/**
 * Get statistics information from the package database(s)
 * @param db A valid database object as returned by pkgdb_open()
 * @param type Type of statistics to be returned
 * @return The statistic information requested
 */
int64_t pkgdb_stats(struct pkgdb *db, pkg_stats_t type);

/**
 * pkg plugin functions
 * @todo Document
 */
int pkg_plugins_init(void);
void pkg_plugins_shutdown(void);
int pkg_plugins(struct pkg_plugin **plugin);
int pkg_plugin_set(struct pkg_plugin *p, pkg_plugin_key key, const char *str);
const char *pkg_plugin_get(struct pkg_plugin *p, pkg_plugin_key key);
void *pkg_plugin_func(struct pkg_plugin *p, const char *func);

int pkg_plugin_conf_add(struct pkg_plugin *p, pkg_object_t type, const char *key, const char *def);
pkg_object *pkg_plugin_conf(struct pkg_plugin *p);

int pkg_plugin_parse(struct pkg_plugin *p);
void pkg_plugin_errno(struct pkg_plugin *p, const char *func, const char *arg);
void pkg_plugin_error(struct pkg_plugin *p, const char *fmt, ...);
void pkg_plugin_info(struct pkg_plugin *p, const char *fmt, ...);
/**
 * This is where plugin hook into the library using pkg_plugin_hook()
 * @todo: Document
 */
typedef int(*pkg_plugin_callback)(void *data, struct pkgdb *db);
int pkg_plugins_hook_run(pkg_plugin_hook_t hook, void *data, struct pkgdb *db);
int pkg_plugin_hook_register(struct pkg_plugin *p, pkg_plugin_hook_t hook, pkg_plugin_callback callback);

/**
 * Get the value of a configuration key
 */

pkg_object *pkg_conf(void);
pkg_object *pkg_config_get(const char *);
pkg_object_t pkg_object_type(pkg_object *);
int64_t pkg_object_int(pkg_object *o);
bool pkg_object_bool(pkg_object *o);
const char *pkg_object_string(pkg_object *o);
void pkg_object_free(pkg_object *o);
const char *pkg_object_key(pkg_object *);
pkg_object *pkg_object_iterate(pkg_object *, pkg_iter *);
unsigned pkg_object_count(pkg_object *);
const char *pkg_object_dump(pkg_object *o);
const char *pkg_config_dump(void);

/**
 * @todo Document
 */
int pkg_version_cmp(const char * const , const char * const);
pkg_change_t pkg_version_change(const struct pkg * restrict);
pkg_change_t pkg_version_change_between(const struct pkg * pkg1, const struct pkg *pkg2);

/**
 * Fetch a file.
 * @return An error code.
 */
int pkg_fetch_file(struct pkg_repo *repo, const char *url, char *dest, time_t t);

/**
 * Get cached name of a package
 */
void pkg_repo_cached_name(struct pkg *pkg, char *dest, size_t destlen);

/* glue to deal with ports */
int ports_parse_plist(struct pkg *, const char *, const char *);

/**
 * @todo Document
 */
int pkg_copy_tree(struct pkg *, const char *src, const char *dest);

/**
 * Special structure to report about conflicts
 */
struct pkg_event_conflict {
	char *name;
	char *origin;
	char *version;
	struct pkg_event_conflict *next;
};

/**
 * Event type used to report progress or problems.
 */
typedef enum {
	/* informational */
	PKG_EVENT_INSTALL_BEGIN = 0,
	PKG_EVENT_INSTALL_FINISHED,
	PKG_EVENT_DEINSTALL_BEGIN,
	PKG_EVENT_DEINSTALL_FINISHED,
	PKG_EVENT_UPGRADE_BEGIN,
	PKG_EVENT_UPGRADE_FINISHED,
	PKG_EVENT_FETCHING,
	PKG_EVENT_UPDATE_ADD,
	PKG_EVENT_UPDATE_REMOVE,
	PKG_EVENT_INTEGRITYCHECK_BEGIN,
	PKG_EVENT_INTEGRITYCHECK_FINISHED,
	PKG_EVENT_INTEGRITYCHECK_CONFLICT,
	PKG_EVENT_NEWPKGVERSION,
	PKG_EVENT_NOTICE,
	PKG_EVENT_DEBUG,
	PKG_EVENT_INCREMENTAL_UPDATE,
	PKG_EVENT_QUERY_YESNO,
	PKG_EVENT_QUERY_SELECT,
	/* errors */
	PKG_EVENT_ERROR,
	PKG_EVENT_ERRNO,
	PKG_EVENT_ARCHIVE_COMP_UNSUP = 65536,
	PKG_EVENT_ALREADY_INSTALLED,
	PKG_EVENT_FAILED_CKSUM,
	PKG_EVENT_CREATE_DB_ERROR,
	PKG_EVENT_LOCKED,
	PKG_EVENT_REQUIRED,
	PKG_EVENT_MISSING_DEP,
	PKG_EVENT_NOREMOTEDB,
	PKG_EVENT_NOLOCALDB,
	PKG_EVENT_FILE_MISMATCH,
	PKG_EVENT_DEVELOPER_MODE,
	PKG_EVENT_PLUGIN_ERRNO,
	PKG_EVENT_PLUGIN_ERROR,
	PKG_EVENT_PLUGIN_INFO,
	PKG_EVENT_NOT_FOUND,
} pkg_event_t;

struct pkg_event {
	pkg_event_t type;
	union {
		struct {
			const char *func;
			const char *arg;
			int no;
		} e_errno;
		struct {
			char *msg;
		} e_pkg_error;
		struct {
			char *msg;
		} e_pkg_notice;
		struct {
			int total;
			int done;
		} e_upd_add;
		struct {
			int total;
			int done;
		} e_upd_remove;
		struct {
			const char *url;
			off_t total;
			off_t done;
			time_t elapsed;
		} e_fetching;
		struct {
			struct pkg *pkg;
		} e_already_installed;
		struct {
			struct pkg *pkg;
		} e_install_begin;
		struct {
			struct pkg *pkg;
		} e_install_finished;
		struct {
			struct pkg *pkg;
		} e_deinstall_begin;
		struct {
			struct pkg *pkg;
		} e_deinstall_finished;
		struct {
			struct pkg *_new;
			struct pkg *old;
		} e_upgrade_begin;
		struct {
			struct pkg *_new;
			struct pkg *old;
		} e_upgrade_finished;
		struct {
			struct pkg *pkg;
			struct pkg_dep *dep;
		} e_missing_dep;
		struct {
			struct pkg *pkg;
		} e_locked;
		struct {
			struct pkg *pkg;
			int force;
		} e_required;
		struct {
			const char *repo;
		} e_remotedb;
		struct {
			struct pkg *pkg;
			struct pkg_file *file;
			const char *newsum;
		} e_file_mismatch;
		struct {
			struct pkg_plugin *plugin;
			char *msg;
		} e_plugin_info;
		struct {
			struct pkg_plugin *plugin;
			const char *func;
			const char *arg;
			int no;
		} e_plugin_errno;
		struct {
			struct pkg_plugin *plugin;
			char *msg;
		} e_plugin_error;
		struct {
			const char *pkg_name;
		} e_not_found;
		struct {
			const char *pkg_name;
			const char *pkg_version;
			const char *pkg_origin;
			const char *pkg_path;
			struct pkg_event_conflict *conflicts;
		} e_integrity_conflict;
		struct {
			int conflicting;
		} e_integrity_finished;
		struct {
			int updated;
			int removed;
			int added;
			int processed;
		} e_incremental_update;
		struct {
			int level;
			char *msg;
		} e_debug;
		struct {
			const char *msg;
			int deft;
		} e_query_yesno;
		struct {
			const char *msg;
			const char **items;
			int ncnt;
			int deft;
		} e_query_select;
	};
};

/**
 * Event callback mechanism.  Events will be reported using this callback,
 * providing an event identifier and up to two event-specific pointers.
 */
typedef int(*pkg_event_cb)(void *, struct pkg_event *);

void pkg_event_register(pkg_event_cb cb, void *data);

bool pkg_compiled_for_same_os_major(void);
int pkg_init(const char *, const char *);
int pkg_initialized(void);
void pkg_shutdown(void);

int pkg_test_filesum(struct pkg *);
int pkg_recompute(struct pkgdb *, struct pkg *);
int pkgdb_reanalyse_shlibs(struct pkgdb *, struct pkg *);

int pkg_get_myarch(char *pkgarch, size_t sz);

void pkgdb_cmd(int argc, char **argv);
int pkg_old_load_from_path(struct pkg *pkg, const char *path);
int pkg_old_emit_content(struct pkg *pkg, char **dest);
int pkg_from_old(struct pkg *pkg);
int pkg_to_old(struct pkg *pkg);
int pkg_register_old(struct pkg *pkg);
int pkg_sshserve(int fd);

int pkg_repos_total_count(void);
int pkg_repos_activated_count(void);
int pkg_repos(struct pkg_repo **);
const char *pkg_repo_url(struct pkg_repo *r);
const char *pkg_repo_ident(struct pkg_repo *r);
const char *pkg_repo_name(struct pkg_repo *r);
const char * pkg_repo_ident_from_name(const char *repo_name);
const char *pkg_repo_key(struct pkg_repo *r);
const char *pkg_repo_fingerprints(struct pkg_repo *r);
signature_t pkg_repo_signature_type(struct pkg_repo *r);
bool pkg_repo_enabled(struct pkg_repo *r);
mirror_t pkg_repo_mirror_type(struct pkg_repo *r);
struct pkg_repo *pkg_repo_find_ident(const char *ident);
struct pkg_repo *pkg_repo_find_name(const char *name);

/**
 * pkg_printf() and friends.  These parallel the similarly named libc
 * functions printf(), fprintf() etc.
 */

/**
 * print to stdout data from pkg as indicated by the format code format
 * @param ... Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to print
 * @return count of the number of characters printed
 */
int pkg_printf(const char * restrict format, ...);

/**
 * print to stdout data from pkg as indicated by the format code format
 * @param ap Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to print
 * @return count of the number of characters printed
 */
int pkg_vprintf(const char * restrict format, va_list ap);

/**
 * print to named stream from pkg as indicated by the format code format
 * @param ... Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters printed
 */
int pkg_fprintf(FILE * restrict stream, const char * restrict format, ...);

/**
 * print to named stream from pkg as indicated by the format code format
 * @param ap varargs arglist
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters printed
 */
int pkg_vfprintf(FILE * restrict stream, const char * restrict format,
	va_list ap);

/**
 * print to file descriptor fd data from pkg as indicated by the format
 * code format
 * @param fd Previously opened file descriptor to print to
 * @param ... Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to print
 * @return count of the number of characters printed
 */
int pkg_dprintf(int fd, const char * restrict format, ...);

/**
 * print to file descriptor fd data from pkg as indicated by the format
 * code format
 * @param fd Previously opened file descriptor to print to
 * @param ap Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to print
 * @return count of the number of characters printed
 */
int pkg_vdprintf(int fd, const char * restrict format, va_list ap);

/**
 * print to buffer str of given size data from pkg as indicated by the
 * format code format as a NULL-terminated string
 * @param str Character array buffer to receive output
 * @param size Length of the buffer str
 * @param ... Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters that would have been output
 * disregarding truncation to fit size
 */
int pkg_snprintf(char * restrict str, size_t size,
	const char * restrict format, ...);

/**
 * print to buffer str of given size data from pkg as indicated by the
 * format code format as a NULL-terminated string
 * @param str Character array buffer to receive output
 * @param size Length of the buffer str
 * @param ap Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters that would have been output
 * disregarding truncation to fit size
 */
int pkg_vsnprintf(char * restrict str, size_t size,
	const char * restrict format,va_list ap);

/**
 * Allocate a string buffer ret sufficiently big to contain formatted
 * data data from pkg as indicated by the format code format
 * @param ret location of pointer to be set to point to buffer containing
 * result 
 * @param ... Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters printed
 */
int pkg_asprintf(char **ret, const char * restrict format, ...);

/**
 * Allocate a string buffer ret sufficiently big to contain formatted
 * data data from pkg as indicated by the format code format
 * @param ret location of pointer to be set to point to buffer containing
 * result 
 * @param ap Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters printed
 */
int pkg_vasprintf(char **ret, const char * restrict format, va_list ap);

/**
 * store data from pkg into sbuf as indicated by the format code format.
 * @param sbuf contains the result
 * @param ... Varargs list of struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters in the result
 */
struct sbuf *pkg_sbuf_printf(struct sbuf * restrict sbuf,
	const char * restrict format, ...);

/**
 * store data from pkg into sbuf as indicated by the format code format.
 * This is the core function called by all the other pkg_printf() family.
 * @param sbuf contains the result
 * @param ap Arglist with struct pkg etc. supplying the data
 * @param format String with embedded %-escapes indicating what to output
 * @return count of the number of characters in the result
 */
struct sbuf *pkg_sbuf_vprintf(struct sbuf * restrict sbuf,
	const char * restrict format, va_list ap);

bool pkg_has_message(struct pkg *p);
bool pkg_is_locked(const struct pkg * restrict p);


/**
 * Defines how many chars of checksum are there in a package's name
 * We define this number as sufficient for 24k packages.
 * To find out probability of collision it is possible to use the following
 * python function to calculate 'birthday paradox' probability:
 *  def bp(m, n):
 *      power = -(n * n) / (2. * m)
 *      return 1. - exp(power)
 * 
 * For our choice of 2^40 (or 10 hex characters) it is:
 *  >>> bp(float(2 ** 40), 24500.)
 *  0.00027292484660568217
 * 
 * And it is negligible probability
 */ 
#define PKG_FILE_CKSUM_CHARS 10

#endif
