//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////


#include "UNIX_X509CertificateProvider.h"

UNIX_X509CertificateProvider::UNIX_X509CertificateProvider()
{
}

UNIX_X509CertificateProvider::~UNIX_X509CertificateProvider()
{
}

CIMInstance UNIX_X509CertificateProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_X509Certificate &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_X509Certificate"),
			constructKeyBindings(_p)));

	if (_p.getSubject(p)) inst.addProperty(p);
	if (_p.getAltSubject(p)) inst.addProperty(p);
	if (_p.getPublicKey(p)) inst.addProperty(p);
	if (_p.getPublicKeySize(p)) inst.addProperty(p);
	if (_p.getIsValid(p)) inst.addProperty(p);
	if (_p.getSerialNumber(p)) inst.addProperty(p);
	if (_p.getPublicKeyAlgorithm(p)) inst.addProperty(p);
	if (_p.getKeyUsage(p)) inst.addProperty(p);
	if (_p.getExtendedKeyUsage(p)) inst.addProperty(p);
	if (_p.getPathLengthConstraint(p)) inst.addProperty(p);
	if (_p.getEncodedCertificate(p)) inst.addProperty(p);
	if (_p.getExtensionID(p)) inst.addProperty(p);
	if (_p.getExtensionValue(p)) inst.addProperty(p);
	if (_p.getIsCritical(p)) inst.addProperty(p);
	if (_p.getIssuerUniqueID(p)) inst.addProperty(p);
	if (_p.getSubjectUniqueID(p)) inst.addProperty(p);
	if (_p.getTrustedRootCertificate(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_X509CertificateProvider::constructKeyBindings(const UNIX_X509Certificate& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		String("CIM_X509Certificate"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_X509CertificateProvider
#define UNIX_PROVIDER_NAME "UNIX_X509CertificateProvider"
#define CLASS_IMPLEMENTATION UNIX_X509Certificate
#define CLASS_IMPLEMENTATION_NAME "UNIX_X509Certificate"
#define BASE_CLASS_NAME "CIM_X509Certificate"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

