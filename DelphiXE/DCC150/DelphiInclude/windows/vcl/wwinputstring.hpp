// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwinputstring.pas' rev: 22.00

#ifndef WwinputstringHPP
#define WwinputstringHPP

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
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwdbdatetimepicker.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwinputstring
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwInputStringForm;
class PASCALIMPLEMENTATION TwwInputStringForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Wwdbedit::TwwDBEdit* filtervalue;
	Stdctrls::TLabel* FilterLabel;
	Wwdbdatetimepicker::TwwDBDateTimePicker* FilterDateEdit;
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	bool OKBtnpressed;
	Db::TField* Field;
	void __fastcall OKBtnClick(System::TObject* Sender);
	
public:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	__fastcall virtual TwwInputStringForm(Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwInputStringForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwInputStringForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwInputStringForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwInputStringForm* wwInputStringForm;
extern PACKAGE bool __fastcall wwInputStringDialog(Classes::TComponent* AOwner, Db::TField* AField, System::UnicodeString ACaption, System::UnicodeString &value);

}	/* namespace Wwinputstring */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwinputstring;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwinputstringHPP
