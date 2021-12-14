// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'AddConn.pas' rev: 22.00

#ifndef AddconnHPP
#define AddconnHPP

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
#include <Buttons.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Addconn
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TNewConnectionForm;
class PASCALIMPLEMENTATION TNewConnectionForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* HelpBtn;
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TGroupBox* AliasBox;
	Stdctrls::TComboBox* DriverList;
	Stdctrls::TEdit* ConnectionName;
	Stdctrls::TLabel* DriverLabel;
	Stdctrls::TLabel* ConnectionNameLabel;
	void __fastcall HelpBtnClick(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TNewConnectionForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TNewConnectionForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TNewConnectionForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNewConnectionForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TNewConnectionForm* NewConnectionForm;
extern PACKAGE bool __fastcall GetNewConnectionName(Forms::TForm* ParentForm, Classes::TStrings* Drivers, System::UnicodeString &DefaultDriver, System::UnicodeString &Connection);

}	/* namespace Addconn */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Addconn;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AddconnHPP
