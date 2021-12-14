// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwgttbl.pas' rev: 22.00

#ifndef WwgttblHPP
#define WwgttblHPP

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
#include <DBTables.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwgttbl
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TGetTableForm;
class PASCALIMPLEMENTATION TGetTableForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TListBox* DBListBox;
	Stdctrls::TListBox* TableListBox;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TCheckBox* UseTableExtension;
	void __fastcall DBListBoxClick(System::TObject* Sender);
	void __fastcall OKBtnClick(System::TObject* Sender);
	void __fastcall TableListBoxDblClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TGetTableForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TGetTableForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TGetTableForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGetTableForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall wwGetTableDlg(System::UnicodeString &databaseName, System::UnicodeString &tablename, System::WideChar &useExtension);

}	/* namespace Wwgttbl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwgttbl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwgttblHPP
