// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployWizardForm.pas' rev: 22.00

#ifndef DeploywizardformHPP
#define DeploywizardformHPP

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
#include <WizardMainForm.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <WizardPageFrame.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <DeployAuthenticationPage.hpp>	// Pascal unit
#include <WizardContentFrame.hpp>	// Pascal unit
#include <DeployFilesPage.hpp>	// Pascal unit
#include <DeploySummaryPage.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deploywizardform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmDeployWizard;
class PASCALIMPLEMENTATION TfrmDeployWizard : public Wizardmainform::TfrmWizardMain
{
	typedef Wizardmainform::TfrmWizardMain inherited;
	
__published:
	void __fastcall FormCloseQuery(System::TObject* Sender, bool &CanClose);
	void __fastcall bHelpClick(System::TObject* Sender);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, Classes::TShiftState Shift);
	void __fastcall FormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	
private:
	Deployauthenticationpage::TfmDeployAuthentication* FAuthentication;
	Deployfilespage::TfmDeployFiles* FDeployFiles;
	Deploysummarypage::TfmDeploySummary* FDeploySummary;
	System::UnicodeString FProjectName;
	bool FWizardComplete;
	System::UnicodeString FMachines;
	void __fastcall SetProjectName(const System::UnicodeString Value);
	bool __fastcall DeployProject(void);
	void __fastcall SetFiles(const Classes::TStringList* Value);
	void __fastcall LoadFormPosition(void);
	void __fastcall SaveFormPosition(void);
	
protected:
	virtual void __fastcall LoadTemplatePages(void);
	virtual void __fastcall ProcessFinishButton(void);
	virtual void __fastcall PageChangeHandler(System::TObject* Sender);
	
public:
	__fastcall virtual TfrmDeployWizard(Classes::TComponent* AOwner);
	__classmethod bool __fastcall Execute(const Toolsapi::_di_IOTAProject AProject, Classes::TStringList* AFiles);
	__property System::UnicodeString ProjectName = {read=FProjectName, write=SetProjectName};
	__property Classes::TStringList* Files = {write=SetFiles};
	__property bool WizardComplete = {read=FWizardComplete, nodefault};
public:
	/* TfrmWizardMain.Destroy */ inline __fastcall virtual ~TfrmDeployWizard(void) { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmDeployWizard(Classes::TComponent* AOwner, int Dummy) : Wizardmainform::TfrmWizardMain(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmDeployWizard(HWND ParentWindow) : Wizardmainform::TfrmWizardMain(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfrmDeployWizard* frmDeployWizard;

}	/* namespace Deploywizardform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deploywizardform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploywizardformHPP
