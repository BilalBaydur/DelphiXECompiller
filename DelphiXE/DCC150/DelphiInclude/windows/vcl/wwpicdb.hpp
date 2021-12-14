// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwpicdb.pas' rev: 22.00

#ifndef WwpicdbHPP
#define WwpicdbHPP

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
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwpicdb
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwEditMaskForm;
class PASCALIMPLEMENTATION TwwEditMaskForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Buttons::TBitBtn* OKBtn;
	Buttons::TBitBtn* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Wwdbedit::TwwDBEdit* MaskEdit;
	Wwdbedit::TwwDBEdit* Description;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TwwEditMaskForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwEditMaskForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwEditMaskForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwEditMaskForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwEditMaskForm* wwEditMaskForm;

}	/* namespace Wwpicdb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwpicdb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwpicdbHPP
