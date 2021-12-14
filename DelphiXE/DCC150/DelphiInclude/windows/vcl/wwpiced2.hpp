// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwpiced2.pas' rev: 22.00

#ifndef Wwpiced2HPP
#define Wwpiced2HPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <Wwdotdot.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <wwedtpic.hpp>	// Pascal unit
#include <ipdsgn.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwpiced2
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwEditPictureMaskdlg;
class PASCALIMPLEMENTATION TwwEditPictureMaskdlg : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Extctrls::TPanel* Panel1;
	Stdctrls::TCheckBox* AllowInvalidCheckbox;
	Stdctrls::TCheckBox* AutoFillCheckbox;
	Stdctrls::TMemo* PictureDescription;
	Stdctrls::TLabel* PictureMaskLabel;
	Stdctrls::TButton* DesignMaskButton;
	Stdctrls::TCheckBox* UsePictureMask;
	Wwdotdot::TwwDBComboDlg* PictureMaskEdit;
	void __fastcall PictureMaskEditChange(System::TObject* Sender);
	void __fastcall PictureMaskEditCloseUp(System::TObject* Sender, Db::TDataSet* LookupTable, Db::TDataSet* FillTable, bool modified);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall DesignMaskButtonClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall PictureMaskEditCustomDlg(System::TObject* Sender);
	void __fastcall PictureMaskEditExit(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	
private:
	void __fastcall RefreshDescription(void);
	void __fastcall VerifyKeyValue(System::UnicodeString &Key, System::UnicodeString &Value);
	
public:
	Wwdbedit::TwwCustomMaskEdit* MyComponent;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwEditPictureMaskdlg(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwEditPictureMaskdlg(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwEditPictureMaskdlg(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwEditPictureMaskdlg(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwEditPictureMaskdlg* wwEditPictureMaskdlg;
extern PACKAGE bool __fastcall wwPrpEdit_PictureMask2(Wwdbedit::TwwCustomMaskEdit* AComponent);
extern PACKAGE bool __fastcall wwPrpEdit_PictureMask3(Wwdbedit::TwwDBPicture* Picture, Controls::TWinControl* TempParent);

}	/* namespace Wwpiced2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwpiced2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Wwpiced2HPP
