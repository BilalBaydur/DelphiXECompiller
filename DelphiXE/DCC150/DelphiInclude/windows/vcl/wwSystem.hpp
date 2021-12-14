// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwSystem.pas' rev: 22.00

#ifndef WwsystemHPP
#define WwsystemHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwsystem
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwDateOrder { doMDY, doDMY, doYMD };
#pragma option pop

#pragma option push -b-
enum TwwDateTimeSelection { wwdsDay, wwdsMonth, wwdsYear, wwdsHour, wwdsMinute, wwdsSecond, wwdsAMPM };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwDateOrder __fastcall wwGetDateOrder(const System::UnicodeString DateFormat);
extern PACKAGE int __fastcall wwNextDay(System::Word Year, System::Word Month, System::Word Day);
extern PACKAGE int __fastcall wwPriorDay(System::Word Year, System::Word Month, System::Word Day);
extern PACKAGE bool __fastcall wwDoEncodeDate(System::Word Year, System::Word Month, System::Word Day, System::TDateTime &Date);
extern PACKAGE bool __fastcall wwScanDate(const System::UnicodeString S, System::TDateTime &Date);
extern PACKAGE bool __fastcall wwScanDateEpoch(const System::UnicodeString S, System::TDateTime &Date, int Epoch);
extern PACKAGE bool __fastcall wwDoEncodeTime(System::Word Hour, System::Word Min, System::Word Sec, System::Word MSec, System::TDateTime &Time);
extern PACKAGE bool __fastcall wwStrToDate(const System::UnicodeString S);
extern PACKAGE bool __fastcall wwStrToTime(const System::UnicodeString S);
extern PACKAGE bool __fastcall wwStrToDateTime(const System::UnicodeString S);
extern PACKAGE System::TDateTime __fastcall wwStrToDateTimeVal(const System::UnicodeString S);
extern PACKAGE System::TDateTime __fastcall wwStrToDateVal(const System::UnicodeString S);
extern PACKAGE System::TDateTime __fastcall wwStrToTimeVal(const System::UnicodeString S);
extern PACKAGE bool __fastcall wwStrToInt(const System::UnicodeString S);
extern PACKAGE bool __fastcall wwStrToFloat(const System::UnicodeString S);
extern PACKAGE TwwDateTimeSelection __fastcall wwGetDateTimeCursorPosition(int SelStart, System::UnicodeString Text, bool TimeOnly);
extern PACKAGE TwwDateTimeSelection __fastcall wwGetTimeCursorPosition(int SelStart, System::UnicodeString Text);
extern PACKAGE void __fastcall wwSetDateTimeCursorSelection(TwwDateTimeSelection dateCursor, Stdctrls::TCustomEdit* edit, bool TimeOnly);
extern PACKAGE bool __fastcall wwStrToFloat2(const System::UnicodeString S, System::Extended &FloatValue, System::UnicodeString DisplayFormat);

}	/* namespace Wwsystem */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwsystem;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwsystemHPP
