#if defined(PEGASUS_OS_FREEBSD)

	enum DBTYPE {
		POSTGRESQL, MYSQL, MARIADB, SQLITE, BDB, MONGODB, MEMCACHED
	};

	DBTYPE currenttype;
	String caption;
	String name;
	String version;
	String desc;

#endif
