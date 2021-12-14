// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwinputstring2.pas' rev: 22.00

#ifndef Wwinputstring2HPP
#define Wwinputstring2HPP

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

namespace Wwinputstring2
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwInputTwoStringForm;
class PASCALIMPLEMENTATION TwwInputTwoStringForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Wwdbedit::TwwDBEdit* filtervalue;
	Stdctrls::TLabel* FilterLabel;
	Stdctrls::TLabel* FilterLabel2;
	Wwdbdatetimepicker::TwwDBDateTimePicker* FilterDateEdit;
	Wwdbedit::TwwDBEdit* filterValue2;
	Stdctrls::TLabel* FieldLabel;
	Wwdbdatetimepicker::TwwDBDateTimePicker* FilterDateEdit2;
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
	__fastcall virtual TwwInputTwoStringForm(Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwInputTwoStringForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwInputTwoStringForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwInputTwoStringForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwInputTwoStringForm* wwInputTwoStringForm;
extern PACKAGE bool __fastcall wwInputTwoStringDialog(Classes::TComponent* AOwner, Db::TField* AField, System::UnicodeString fieldCaption, System::UnicodeString &value, System::UnicodeString &value2);

}	/* namespace Wwinputstring2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwinputstring2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Wwinputstring2HPP
