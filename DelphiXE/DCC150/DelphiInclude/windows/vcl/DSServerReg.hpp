// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSServerReg.pas' rev: 22.00

#ifndef DsserverregHPP
#define DsserverregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <DSSource.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsserverreg
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);
extern PACKAGE Toolsapi::_di_IOTAModule __fastcall CreateServerMethodsModule(const System::UnicodeString APersonality, const System::UnicodeString APrefix, const System::UnicodeString AAncestorName, Dssource::TSourceFlags ASourceFlags);

}	/* namespace Dsserverreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsserverreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsserverregHPP
