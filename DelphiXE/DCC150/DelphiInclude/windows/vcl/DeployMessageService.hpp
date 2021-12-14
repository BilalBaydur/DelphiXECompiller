// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployMessageService.pas' rev: 22.00

#ifndef DeploymessageserviceHPP
#define DeploymessageserviceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deploymessageservice
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall AddTitleMessage(const System::UnicodeString AMessage);
extern PACKAGE void * __fastcall AddMessage(const System::UnicodeString AMessage, void * AParent = (void *)(0x0));

}	/* namespace Deploymessageservice */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deploymessageservice;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploymessageserviceHPP
