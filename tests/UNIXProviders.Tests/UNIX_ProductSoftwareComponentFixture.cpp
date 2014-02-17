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

#include "UNIX_ProductSoftwareComponentFixture.h"
#include <ProductSoftwareComponent/UNIX_ProductSoftwareComponentProvider.h>

UNIX_ProductSoftwareComponentFixture::UNIX_ProductSoftwareComponentFixture()
{
}

UNIX_ProductSoftwareComponentFixture::~UNIX_ProductSoftwareComponentFixture()
{
}

void UNIX_ProductSoftwareComponentFixture::Run()
{
	CIMName className("UNIX_ProductSoftwareComponent");
	CIMNamespaceName nameSpace("root/cimv2");
	UNIX_ProductSoftwareComponent _p;
	UNIX_ProductSoftwareComponentProvider _provider;
	Uint32 propertyCount;
	CIMOMHandle omHandle;
	_provider.initialize(omHandle);
	_p.initialize();

	for(int pIndex = 0; _p.load(pIndex); pIndex++)
	{
		CIMInstance instance = _provider.constructInstance(className,
					nameSpace,
					_p);
		propertyCount = instance.getPropertyCount();
		for(Uint32 i = 0; i < propertyCount; i++)
		{

			CIMProperty propertyItem = instance.getProperty(i);
			const char* name = propertyItem.getName().getString().getCString();
			const char* value = propertyItem.getValue().toString().getCString();
			printf("Name: %s - Value: %s", name, value);

		}
	}

	_p.finalize();
}

