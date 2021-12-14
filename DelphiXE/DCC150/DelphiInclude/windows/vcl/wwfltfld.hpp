// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwfltfld.pas' rev: 22.00

#ifndef WwfltfldHPP
#define WwfltfldHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <TabNotBk.hpp>	// Pascal unit
#include <Tabs.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <Wwdbcomb.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <Wwdbdlg.hpp>	// Pascal unit
#include <wwidlg.hpp>	// Pascal unit
#include <Wwprpfld.hpp>	// Pascal unit
#include <wwfltdlg.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwfltfld
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSelFilterFieldsForm;
class PASCALIMPLEMENTATION TSelFilterFieldsForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TListBox* DstList;
	Stdctrls::TButton* AddButton;
	Stdctrls::TButton* Button3;
	Extctrls::TPanel* Panel1;
	Stdctrls::TEdit* FieldDisplay;
	Stdctrls::TLabel* Label1;
	Extctrls::TPanel* OKCancelPanel;
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	bool __fastcall InDestList(System::UnicodeString Value);
	void __fastcall ExcludeItems(void);
	void __fastcall ExcludeBtnClick(System::TObject* Sender);
	void __fastcall Button3Click(System::TObject* Sender);
	void __fastcall AddButtonClick(System::TObject* Sender);
	void __fastcall DstListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall DstListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	void __fastcall DstListMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall DstListClick(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall DstListKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FieldDisplayExit(System::TObject* Sender);
	
private:
	Db::TField* curField;
	int dragFromRow;
	bool initialized;
	Classes::TStrings* SrcListItems;
	Classes::TStrings* SelectedList;
	Wwfltdlg::TwwFilterDialog* Dialog;
	void __fastcall UpdateFieldDisplay(void);
	int __fastcall GetSelectedListIndex(System::UnicodeString value);
	
public:
	__fastcall virtual TSelFilterFieldsForm(Classes::TComponent* AOwner);
	__fastcall virtual ~TSelFilterFieldsForm(void);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSelFilterFieldsForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSelFilterFieldsForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall wwSelectFilterableFields(Wwfltdlg::TwwFilterDialog* ADialog, Classes::TStrings* FieldList);

}	/* namespace Wwfltfld */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwfltfld;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwfltfldHPP
