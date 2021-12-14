// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwbdecommon.pas' rev: 22.00

#ifndef WwbdecommonHPP
#define WwbdecommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <BDE.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <DBCommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwbdecommon
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall wwSaveAnswerTable(Dbtables::TDBDataSet* ADataSet, Bde::hDBICur AHandle, System::UnicodeString tableName);
extern PACKAGE System::UnicodeString __fastcall wwGetAlias(System::UnicodeString aliasName);
extern PACKAGE int __fastcall wwCallbackMemoRead(Dbtables::TBDEDataSet* DataSet, void * FFilterBuffer, void *Buffer, Db::TField* curField, int Count);
extern PACKAGE bool __fastcall wwSetLookupField(Db::TDataSet* dataSet, Db::TField* linkedField);
extern PACKAGE char * __fastcall wwGetQueryText(Classes::TStrings* tempQBE, bool Sql);

}	/* namespace Wwbdecommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwbdecommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwbdecommonHPP
