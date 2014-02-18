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


#include "UNIX_SwitchPortSpanningTreeProvider.h"

UNIX_SwitchPortSpanningTreeProvider::UNIX_SwitchPortSpanningTreeProvider()
{
}

UNIX_SwitchPortSpanningTreeProvider::~UNIX_SwitchPortSpanningTreeProvider()
{
}

CIMInstance UNIX_SwitchPortSpanningTreeProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_SwitchPortSpanningTree &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_SwitchPortSpanningTree"),
			constructKeyBindings(_p)));

	//CIM_Dependency Properties
	if (_p.getAntecedent(p)) inst.addProperty(p);
	if (_p.getDependent(p)) inst.addProperty(p);

	//CIM_ServiceSAPDependency Properties

	//CIM_SwitchPortSpanningTree Properties
	if (_p.getPriority(p)) inst.addProperty(p);
	if (_p.getState(p)) inst.addProperty(p);
	if (_p.getEnable(p)) inst.addProperty(p);
	if (_p.getPathCost(p)) inst.addProperty(p);
	if (_p.getDesignatedRoot(p)) inst.addProperty(p);
	if (_p.getDesignatedCost(p)) inst.addProperty(p);
	if (_p.getDesignatedBridge(p)) inst.addProperty(p);
	if (_p.getDesignatedPort(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_SwitchPortSpanningTreeProvider::constructKeyBindings(const UNIX_SwitchPortSpanningTree& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_ANTECEDENT,
		CIMValue(_p.getAntecedent()).toString(),
		CIMKeyBinding::REFERENCE));
	keys.append(CIMKeyBinding(
		PROPERTY_DEPENDENT,
		CIMValue(_p.getDependent()).toString(),
		CIMKeyBinding::REFERENCE));


	return keys;
}



#define UNIX_PROVIDER UNIX_SwitchPortSpanningTreeProvider
#define UNIX_PROVIDER_NAME "UNIX_SwitchPortSpanningTreeProvider"
#define CLASS_IMPLEMENTATION UNIX_SwitchPortSpanningTree
#define CLASS_IMPLEMENTATION_NAME "UNIX_SwitchPortSpanningTree"
#define BASE_CLASS_NAME "CIM_SwitchPortSpanningTree"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

