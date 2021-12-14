// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwmemo.pas' rev: 22.00

#ifndef WwmemoHPP
#define WwmemoHPP

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
#include <DBCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwmemo
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwMemoAttribute { mSizeable, mWordWrap, mGridShow, mViewOnly, mDisableDialog };
#pragma option pop

typedef System::Set<TwwMemoAttribute, TwwMemoAttribute::mSizeable, TwwMemoAttribute::mDisableDialog>  TwwMemoAttributes;

class DELPHICLASS TwwMemoDlg;
class PASCALIMPLEMENTATION TwwMemoDlg : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TMemo* Memo;
	Extctrls::TPanel* UserButtonPanel;
	Stdctrls::TButton* UserButton1;
	Stdctrls::TButton* UserButton2;
	Menus::TPopupMenu* PopupMenu1;
	void __fastcall ResizeControls(System::TObject* Sender);
	void __fastcall OKBtnClick(System::TObject* Sender);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall MemoKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall UserButton1Click(System::TObject* Sender);
	void __fastcall UserButton2Click(System::TObject* Sender);
	void __fastcall MemoChange(System::TObject* Sender);
	
private:
	bool OKBtnpressed;
	Types::TRect posRect;
	void __fastcall ApplyIntl(void);
	
protected:
	bool changed;
	bool init;
	bool allowClose;
	DYNAMIC void __fastcall KeyPress(System::WideChar &key);
	
public:
	Graphics::TFont* TempFont;
	System::UnicodeString TempTitle;
	Classes::TComponent* CallingComponent;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	__fastcall virtual TwwMemoDlg(Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwMemoDlg(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwMemoDlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwMemoDlg(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall wwEditMemoField(Forms::TForm* AParentForm, Classes::TComponent* ADialog, bool Editable);
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwmemo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwmemo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwmemoHPP
