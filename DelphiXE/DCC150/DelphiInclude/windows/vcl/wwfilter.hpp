// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwfilter.pas' rev: 22.00

#ifndef WwfilterHPP
#define WwfilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwStacks.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <BDE.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwfilter
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall wwSetFilter(System::UnicodeString a_line, Dbtables::TTable* table, Bde::hDBIFilter &fh, bool InOpen);
extern PACKAGE void __fastcall wwRemoveFilter(Dbtables::TDBDataSet* table, Bde::hDBIFilter &fh);
extern PACKAGE bool __fastcall wwAddFilter(System::UnicodeString a_line, Dbtables::TTable* table, Bde::hDBIFilter &fh);
extern PACKAGE bool __fastcall wwSetFilterFunction(void * func, Dbtables::TDBDataSet* table, Bde::hDBIFilter &fh);

}	/* namespace Wwfilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwfilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwfilterHPP
