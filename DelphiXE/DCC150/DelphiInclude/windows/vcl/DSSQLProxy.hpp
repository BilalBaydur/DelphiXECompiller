// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSSQLProxy.pas' rev: 22.00

#ifndef DssqlproxyHPP
#define DssqlproxyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dssqlproxy
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall GenerateProxy(Dbxcommon::TDBXConnection* Connection, const System::UnicodeString APersonality, const System::UnicodeString AUnitName, System::DelphiInterface<Sysutils::TFunc__1<Classes::TStream*> >  CreateOutputStream, System::DelphiInterface<Sysutils::TFunc__1<Classes::TStream*> >  CreateHeaderOutputStream, System::DelphiInterface<Sysutils::TFunc__1<Sysutils::TEncoding*> >  GetStreamEncoding, System::DelphiInterface<Sysutils::TProc__2<Classes::TStream*,Classes::TStream*> >  GenerationFinished);

}	/* namespace Dssqlproxy */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dssqlproxy;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DssqlproxyHPP
