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


#include "UNIX_PrinterProvider.h"

UNIX_PrinterProvider::UNIX_PrinterProvider()
{
}

UNIX_PrinterProvider::~UNIX_PrinterProvider()
{
}

CIMInstance UNIX_PrinterProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Printer &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_Printer"),
			constructKeyBindings(_p)));

	if (_p.getElementName(p)) inst.addProperty(p);
	if (_p.getPrinterStatus(p)) inst.addProperty(p);
	if (_p.getDetectedErrorState(p)) inst.addProperty(p);
	if (_p.getErrorInformation(p)) inst.addProperty(p);
	if (_p.getPaperSizesSupported(p)) inst.addProperty(p);
	if (_p.getPaperTypesAvailable(p)) inst.addProperty(p);
	if (_p.getDefaultPaperType(p)) inst.addProperty(p);
	if (_p.getCurrentPaperType(p)) inst.addProperty(p);
	if (_p.getLanguagesSupported(p)) inst.addProperty(p);
	if (_p.getMimeTypesSupported(p)) inst.addProperty(p);
	if (_p.getCurrentLanguage(p)) inst.addProperty(p);
	if (_p.getCurrentMimeType(p)) inst.addProperty(p);
	if (_p.getDefaultLanguage(p)) inst.addProperty(p);
	if (_p.getDefaultMimeType(p)) inst.addProperty(p);
	if (_p.getJobCountSinceLastReset(p)) inst.addProperty(p);
	if (_p.getTimeOfLastReset(p)) inst.addProperty(p);
	if (_p.getCapabilities(p)) inst.addProperty(p);
	if (_p.getCapabilityDescriptions(p)) inst.addProperty(p);
	if (_p.getDefaultCapabilities(p)) inst.addProperty(p);
	if (_p.getCurrentCapabilities(p)) inst.addProperty(p);
	if (_p.getMaxCopies(p)) inst.addProperty(p);
	if (_p.getDefaultCopies(p)) inst.addProperty(p);
	if (_p.getMaxNumberUp(p)) inst.addProperty(p);
	if (_p.getDefaultNumberUp(p)) inst.addProperty(p);
	if (_p.getHorizontalResolution(p)) inst.addProperty(p);
	if (_p.getVerticalResolution(p)) inst.addProperty(p);
	if (_p.getCharSetsSupported(p)) inst.addProperty(p);
	if (_p.getCurrentCharSet(p)) inst.addProperty(p);
	if (_p.getNaturalLanguagesSupported(p)) inst.addProperty(p);
	if (_p.getCurrentNaturalLanguage(p)) inst.addProperty(p);
	if (_p.getMaxSizeSupported(p)) inst.addProperty(p);
	if (_p.getAvailableJobSheets(p)) inst.addProperty(p);
	if (_p.getMarkingTechnology(p)) inst.addProperty(p);
	if (_p.getConsoleNaturalLanguage(p)) inst.addProperty(p);
	if (_p.getConsoleDisplayBufferText(p)) inst.addProperty(p);



return inst;
}

Array<CIMKeyBinding> UNIX_PrinterProvider::constructKeyBindings(const UNIX_Printer& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		String("CIM_Printer"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		String("CIM_Printer"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		String("CIM_Printer"),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		String("CIM_Printer"),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_PrinterProvider
#define UNIX_PROVIDER_NAME "UNIX_PrinterProvider"
#define CLASS_IMPLEMENTATION UNIX_Printer
#define CLASS_IMPLEMENTATION_NAME "UNIX_Printer"
#define BASE_CLASS_NAME "CIM_Printer"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

