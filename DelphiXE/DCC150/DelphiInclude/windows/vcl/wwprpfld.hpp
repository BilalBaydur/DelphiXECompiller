// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwprpfld.pas' rev: 22.00

#ifndef WwprpfldHPP
#define WwprpfldHPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwprpfld
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwSelectField;
class PASCALIMPLEMENTATION TwwSelectField : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TListBox* ListBox1;
	Stdctrls::TCheckBox* SortAvailCheckbox;
	Stdctrls::TLabel* Label1;
	void __fastcall SortAvailCheckboxClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	
private:
	Db::TDataSet* MyDataSet;
	Classes::TStrings* CurrentList;
	bool FilterListFlag;
	Classes::TStrings* AvailList;
	void __fastcall RefreshList(void);
	void __fastcall RefreshFilteredList(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwSelectField(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwSelectField(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwSelectField(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwSelectField(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwSelectField* wwSelectField;
extern PACKAGE bool __fastcall wwDlgSelectFields(Db::TDataSet* AMyDataSet, Classes::TStrings* ACurrentList, Classes::TStrings* selectedList);
extern PACKAGE bool __fastcall wwDlgSelectFilterFields(Classes::TStrings* AAvailList, Classes::TStrings* ACurrentList, Classes::TStrings* selectedList);

}	/* namespace Wwprpfld */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwprpfld;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwprpfldHPP
