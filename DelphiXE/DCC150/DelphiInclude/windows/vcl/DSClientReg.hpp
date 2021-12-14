// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientReg.pas' rev: 22.00

#ifndef DsclientregHPP
#define DsclientregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DSClientRest.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientreg
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall GenerateProxy(Toolsapi::_di_IOTAProject AProject, Dsclientrest::TDSCustomRestConnection* ARestConnection, System::UnicodeString &LUnitName, System::DynamicArray<System::UnicodeString> &AClassNames)/* overload */;
extern PACKAGE void __fastcall GenerateProxy(Toolsapi::_di_IOTAProject AProject, Sqlexpr::TSQLConnection* ASQLConnection, System::UnicodeString &LUnitName, System::DynamicArray<System::UnicodeString> &AClassNames)/* overload */;
extern PACKAGE void __fastcall Register(void);

}	/* namespace Dsclientreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientregHPP
