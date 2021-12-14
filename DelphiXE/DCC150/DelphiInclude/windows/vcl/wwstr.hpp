// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwstr.pas' rev: 22.00

#ifndef WwstrHPP
#define WwstrHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwstr
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::UnicodeString __fastcall strWhiteSpace(void);
extern PACKAGE System::UnicodeString __fastcall wwExtractFileNameOnly(const System::UnicodeString FileName);
extern PACKAGE System::UnicodeString __fastcall strGetToken(System::UnicodeString s, System::UnicodeString delimeter, int &APos);
extern PACKAGE void __fastcall strBreakApart(System::UnicodeString s, System::UnicodeString delimeter, Classes::TStrings* parts);
extern PACKAGE void __fastcall strStripWhiteSpace(System::UnicodeString &s);
extern PACKAGE void __fastcall strStripPreceding(System::UnicodeString &s, System::UnicodeString delimeter);
extern PACKAGE void __fastcall strStripTrailing(System::UnicodeString &s, System::UnicodeString delimeter);
extern PACKAGE System::UnicodeString __fastcall strRemoveChar(System::UnicodeString str, System::WideChar removeChar);
extern PACKAGE System::UnicodeString __fastcall strReplaceChar(System::UnicodeString str, System::WideChar removeChar, System::WideChar replaceChar);
extern PACKAGE System::UnicodeString __fastcall strReplaceCharWithStr(System::UnicodeString str, System::WideChar removeChar, System::UnicodeString replaceStr);
extern PACKAGE bool __fastcall wwEqualStr(System::UnicodeString s1, System::UnicodeString s2);
extern PACKAGE int __fastcall strCount(System::UnicodeString s, System::WideChar delimeter);
extern PACKAGE System::UnicodeString __fastcall wwGetWord(System::UnicodeString s, int &APos, Wwtypes::TwwGetWordOptions Options, System::UnicodeString DelimChars);
extern PACKAGE System::UnicodeString __fastcall strTrailing(System::UnicodeString s, System::WideChar delimeter);
extern PACKAGE System::UnicodeString __fastcall strPreceding(System::UnicodeString s, System::WideChar delimeter);
extern PACKAGE System::UnicodeString __fastcall strReplace(System::UnicodeString s, System::UnicodeString Find, System::UnicodeString Replace);
extern PACKAGE bool __fastcall strCharMatch(const System::WideChar ch, System::UnicodeString SetChar);

}	/* namespace Wwstr */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwstr;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwstrHPP
