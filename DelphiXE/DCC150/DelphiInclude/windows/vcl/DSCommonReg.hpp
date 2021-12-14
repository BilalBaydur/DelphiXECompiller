// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSCommonReg.pas' rev: 22.00

#ifndef DscommonregHPP
#define DscommonregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dscommonreg
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Generics_collections::TList__1<System::UnicodeString>* __fastcall GetDesignerAvailableProtocols(void);
extern PACKAGE void __fastcall GetDesignerAvailableProtocolValues(Classes::TGetStrProc Proc);

}	/* namespace Dscommonreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dscommonreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DscommonregHPP
