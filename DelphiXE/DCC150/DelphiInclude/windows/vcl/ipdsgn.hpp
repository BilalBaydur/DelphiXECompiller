// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ipdsgn.pas' rev: 22.00

#ifndef IpdsgnHPP
#define IpdsgnHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ipdsgn
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Inifiles::TIniFile* __fastcall IniPict(void);
extern PACKAGE void __fastcall wwVerifyPictureKeyValue(System::UnicodeString &Key, System::UnicodeString &Value);
extern PACKAGE System::UnicodeString __fastcall wwIniGetPictureDescription(System::UnicodeString Mask);
extern PACKAGE System::UnicodeString __fastcall wwIniGetRegexDescription(System::UnicodeString Mask);
extern PACKAGE void __fastcall wwOpenPictureIni(void);
extern PACKAGE void __fastcall wwClosePictureIni(void);

}	/* namespace Ipdsgn */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Ipdsgn;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IpdsgnHPP
