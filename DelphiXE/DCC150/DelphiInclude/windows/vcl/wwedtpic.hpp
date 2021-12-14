// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwedtpic.pas' rev: 22.00

#ifndef WwedtpicHPP
#define WwedtpicHPP

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
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwpicdb.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwedtpic
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwPictureDialog;
class PASCALIMPLEMENTATION TwwPictureDialog : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Grids::TStringGrid* StringGrid1;
	Buttons::TBitBtn* BitBtn1;
	Buttons::TBitBtn* BitBtn2;
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall BitBtn1Click(System::TObject* Sender);
	void __fastcall BitBtn2Click(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall StringGrid1DblClick(System::TObject* Sender);
	
private:
	void __fastcall DeleteCurrentRow(void);
	
public:
	bool MaskChanged;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwPictureDialog(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwPictureDialog(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwPictureDialog(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwPictureDialog(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwPictureDialog* wwPictureDialog;

}	/* namespace Wwedtpic */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwedtpic;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwedtpicHPP
