// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwprpcom.pas' rev: 22.00

#ifndef WwprpcomHPP
#define WwprpcomHPP

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
#include <Grids.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwprpcom
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwPrpEditComboList;
class PASCALIMPLEMENTATION TwwPrpEditComboList : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Extctrls::TNotebook* Notebook1;
	Grids::TStringGrid* StringGrid1;
	Stdctrls::TMemo* Memo1;
	Extctrls::TPanel* Panel1;
	Stdctrls::TCheckBox* SeparateStoredList;
	Stdctrls::TButton* Button1;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall StringGrid1KeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall SeparateStoredListClick(System::TObject* Sender);
	void __fastcall Button1Click(System::TObject* Sender);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall OKBtnClick(System::TObject* Sender);
	
private:
	bool MapList;
	Classes::TStrings* Items;
	bool init;
	bool changingMapCheckbox;
	bool okBtnPressed;
	bool changed;
	int startWidth1;
	void __fastcall DeleteCurrentRow(void);
	void __fastcall ComputeGridColumns(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwPrpEditComboList(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwPrpEditComboList(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwPrpEditComboList(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwPrpEditComboList(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwPrpEditComboList* wwPrpEditComboList;
extern PACKAGE bool __fastcall wwEditComboList(Classes::TStrings* AItems, bool &AMapList);

}	/* namespace Wwprpcom */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwprpcom;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwprpcomHPP
