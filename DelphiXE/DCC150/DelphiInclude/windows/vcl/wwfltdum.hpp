// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwfltdum.pas' rev: 22.00

#ifndef WwfltdumHPP
#define WwfltdumHPP

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
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwfltdum
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDummyForm;
class PASCALIMPLEMENTATION TwwDummyForm : public Forms::TCustomForm
{
	typedef Forms::TCustomForm inherited;
	
private:
	Db::TParam* FFilterParam;
	char *FFilterFieldBuffer;
	
public:
	Classes::TComponent* DlgComponent;
	bool MatchAny;
	Db::TDataSet* DataSet;
	Classes::TStringStream* MemoryStream;
	Comctrls::TCustomRichEdit* TempRichEdit;
	void __fastcall OnFilterEvent(Db::TDataSet* table, bool &Accept);
	Db::TParam* __fastcall GetFilterField(System::UnicodeString AFieldName);
	bool __fastcall IsNullValue(System::UnicodeString Token, System::UnicodeString Value, System::UnicodeString NullStr);
	bool __fastcall CheckFilterField(int Index);
	__fastcall virtual TwwDummyForm(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDummyForm(void);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwDummyForm(Classes::TComponent* AOwner, int Dummy) : Forms::TCustomForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDummyForm(HWND ParentWindow) : Forms::TCustomForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwDummyForm* wwDummyForm;

}	/* namespace Wwfltdum */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwfltdum;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwfltdumHPP
