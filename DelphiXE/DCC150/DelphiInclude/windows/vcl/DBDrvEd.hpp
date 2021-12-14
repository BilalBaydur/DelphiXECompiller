// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBDrvEd.pas' rev: 22.00

#ifndef DbdrvedHPP
#define DbdrvedHPP

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
#include <ComCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DBConnAdmin.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbdrved
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDriverSettingsForm;
class PASCALIMPLEMENTATION TDriverSettingsForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Stdctrls::TButton* HelpBtn;
	Comctrls::TListView* DriverList;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	
private:
	Classes::TStrings* FDriverList;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TDriverSettingsForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDriverSettingsForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDriverSettingsForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDriverSettingsForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::ResourceString _SDriverFormCaption;
#define Dbdrved_SDriverFormCaption System::LoadResourceString(&Dbdrved::_SDriverFormCaption)
extern PACKAGE TDriverSettingsForm* DriverSettingsForm;
extern PACKAGE void __fastcall EditDriverSettings(Forms::TForm* ParentForm);

}	/* namespace Dbdrved */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbdrved;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbdrvedHPP
