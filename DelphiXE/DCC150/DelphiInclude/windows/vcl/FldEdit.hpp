// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FldEdit.pas' rev: 22.00

#ifndef FldeditHPP
#define FldeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <WideStrings.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Fldedit
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TExecuteEvent)(void);

typedef void __fastcall (__closure *TGetFieldNamesProc)(const System::UnicodeString TableName, Classes::TStrings* List);

typedef void __fastcall (__closure *TGetFieldNamesForSchemaProc)(const System::UnicodeString TableName, System::UnicodeString SchemaName, Classes::TStrings* List);

class DELPHICLASS TFieldEditForm;
class PASCALIMPLEMENTATION TFieldEditForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TButton* HelpBtn;
	Stdctrls::TListBox* SrcList;
	Stdctrls::TListBox* DstList;
	Stdctrls::TLabel* SrcLabel;
	Stdctrls::TLabel* DstLabel;
	Buttons::TBitBtn* IncludeBtn;
	Buttons::TBitBtn* IncAllBtn;
	Buttons::TBitBtn* ExcludeBtn;
	Buttons::TBitBtn* ExAllBtn;
	Buttons::TBitBtn* DownButton;
	Buttons::TBitBtn* UpButton;
	void __fastcall IncludeBtnClick(System::TObject* Sender);
	void __fastcall ExcludeBtnClick(System::TObject* Sender);
	void __fastcall IncAllBtnClick(System::TObject* Sender);
	void __fastcall ExcAllBtnClick(System::TObject* Sender);
	void __fastcall SrcListDblClick(System::TObject* Sender);
	void __fastcall DownButtonClick(System::TObject* Sender);
	void __fastcall UpButtonClick(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	
private:
	TGetFieldNamesProc GetFieldNames;
	TGetFieldNamesForSchemaProc GetFieldNamesForSchema;
	System::UnicodeString FTableName;
	System::UnicodeString FSchemaName;
	System::UnicodeString FQuoteChar;
	void __fastcall PopulateFieldList(void);
	void __fastcall MoveDstSelected(bool Up);
	
public:
	void __fastcall MoveSelected(Stdctrls::TCustomListBox* List, Classes::TStrings* Items);
	void __fastcall SetItem(Stdctrls::TListBox* List, int Index);
	int __fastcall GetFirstSelection(Stdctrls::TCustomListBox* List);
	void __fastcall SetButtons(void);
	__property System::UnicodeString TableName = {read=FTableName, write=FTableName};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFieldEditForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFieldEditForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFieldEditForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFieldEditForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TFieldEditForm* FieldEditForm;
extern PACKAGE bool __fastcall EditFields(System::UnicodeString &SQL, System::UnicodeString ATableName, TGetFieldNamesProc AGetFieldNames, System::UnicodeString QuoteChar)/* overload */;
extern PACKAGE bool __fastcall EditFields(Classes::TStrings* SQL, System::UnicodeString ATableName, TGetFieldNamesProc AGetFieldNames, System::UnicodeString QuoteChar)/* overload */;
extern PACKAGE bool __fastcall EditFields(System::UnicodeString &SQL, System::UnicodeString ATableName, TGetFieldNamesForSchemaProc AGetFieldNamesForSchema, System::UnicodeString ASchemaName, System::UnicodeString QuoteChar)/* overload */;

}	/* namespace Fldedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Fldedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FldeditHPP
