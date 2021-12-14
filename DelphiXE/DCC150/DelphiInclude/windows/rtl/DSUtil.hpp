// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSUtil.pas' rev: 22.00

#ifndef DsutilHPP
#define DsutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsutil
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall StrListToVarArray(const System::UnicodeString StrList, /* out */ System::OleVariant &VarArray);
extern PACKAGE void __fastcall VarArrayToStrings(const System::OleVariant &VarData, Classes::TStrings* List);
extern PACKAGE void __fastcall VariantToStream(const System::OleVariant &VariantValue, const Classes::TStream* Stream);
extern PACKAGE void __fastcall StreamToVariant(const Classes::TStream* Stream, /* out */ System::OleVariant &VariantValue);

}	/* namespace Dsutil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsutil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsutilHPP
