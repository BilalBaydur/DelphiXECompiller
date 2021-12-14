// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WizardMainForm.pas' rev: 22.00

#ifndef WizardmainformHPP
#define WizardmainformHPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <WizardPageFrame.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wizardmainform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmWizardMain;
class PASCALIMPLEMENTATION TfrmWizardMain : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* pButtons;
	Stdctrls::TButton* bNext;
	Stdctrls::TButton* bExit;
	Stdctrls::TButton* bBack;
	Stdctrls::TButton* bHelp;
	Extctrls::TBevel* Bevel1;
	void __fastcall bNextClick(System::TObject* Sender);
	void __fastcall bExitClick(System::TObject* Sender);
	void __fastcall bBackClick(System::TObject* Sender);
	
private:
	Wizardpageframe::TfmWizardPage* FWizardPage;
	void __fastcall UpdateButtonStates(void);
	
protected:
	virtual void __fastcall LoadTemplatePages(void);
	virtual void __fastcall ProcessBackButton(void);
	virtual void __fastcall ProcessNextButton(void);
	virtual void __fastcall ProcessFinishButton(void);
	virtual void __fastcall PageChangeHandler(System::TObject* Sender);
	
public:
	__fastcall virtual TfrmWizardMain(Classes::TComponent* AOwner);
	__fastcall virtual ~TfrmWizardMain(void);
	__property Wizardpageframe::TfmWizardPage* WizardPage = {read=FWizardPage};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmWizardMain(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmWizardMain(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfrmWizardMain* frmWizardMain;

}	/* namespace Wizardmainform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wizardmainform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WizardmainformHPP
