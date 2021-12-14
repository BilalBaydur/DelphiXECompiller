// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwaddlk.pas' rev: 22.00

#ifndef WwaddlkHPP
#define WwaddlkHPP

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
#include <Wwgttbl.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <Wwtable.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwaddlk
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwAddLookupForm;
class PASCALIMPLEMENTATION TwwAddLookupForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TGroupBox* TableNameCaption;
	Stdctrls::TLabel* Label6;
	Stdctrls::TComboBox* FieldNameComboBox;
	Stdctrls::TGroupBox* GroupBox2;
	Stdctrls::TLabel* MasterFieldsCaption;
	Stdctrls::TLabel* IndexFieldsCaption;
	Stdctrls::TLabel* Label7;
	Stdctrls::TListBox* MasterFieldsList;
	Stdctrls::TListBox* IndexFieldsList;
	Stdctrls::TComboBox* IndexComboBox;
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Buttons::TBitBtn* HelpBtn;
	Stdctrls::TListBox* JoinedFieldsList;
	Stdctrls::TLabel* Label5;
	Stdctrls::TButton* Button1;
	Buttons::TBitBtn* AddJoinButton;
	Stdctrls::TButton* Button2;
	Wwtable::TwwTable* Table1;
	void __fastcall IndexComboBoxChange(System::TObject* Sender);
	void __fastcall IndexFieldsListClick(System::TObject* Sender);
	void __fastcall MasterFieldsListClick(System::TObject* Sender);
	void __fastcall AddJoinButtonClick(System::TObject* Sender);
	void __fastcall Button1Click(System::TObject* Sender);
	void __fastcall Button2Click(System::TObject* Sender);
	void __fastcall FormActivate(System::TObject* Sender);
	void __fastcall FieldNameComboBoxChange(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	
private:
	Db::TDataSet* MasterTable;
	bool firstTime;
	
public:
	System::UnicodeString databaseName;
	System::UnicodeString tableName;
	System::UnicodeString fieldName;
	System::UnicodeString indexName;
	System::UnicodeString indexFields;
	System::UnicodeString joins;
	System::WideChar useExtension;
	__fastcall virtual TwwAddLookupForm(Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwAddLookupForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwAddLookupForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwAddLookupForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwAddLookupForm* wwAddLookupForm;
extern PACKAGE bool __fastcall wwAddLookupfield(System::UnicodeString &aDbName, System::UnicodeString &aTblName, System::UnicodeString &aFieldName, System::UnicodeString &aIndex, System::UnicodeString &aIndexFields, System::UnicodeString &aJoins, System::WideChar &aUseExtension, Db::TDataSet* aMasterTable);

}	/* namespace Wwaddlk */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwaddlk;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwaddlkHPP
