// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployAuthenticationPage.pas' rev: 22.00

#ifndef DeployauthenticationpageHPP
#define DeployauthenticationpageHPP

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
#include <WizardContentFrame.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <CheckLst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deployauthenticationpage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfmDeployAuthentication;
class PASCALIMPLEMENTATION TfmDeployAuthentication : public Wizardcontentframe::TfmWizardContent
{
	typedef Wizardcontentframe::TfmWizardContent inherited;
	
__published:
	Stdctrls::TLabel* UsernameLabel;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TEdit* eUsername;
	Stdctrls::TEdit* ePassword;
	Stdctrls::TComboBox* cboxCloudInfrastructure;
	Stdctrls::TButton* bGetMachines;
	Checklst::TCheckListBox* clbMachines;
	Stdctrls::TLabel* AvailableMachinesLabel;
	void __fastcall bGetMachinesClick(System::TObject* Sender);
	
private:
	System::UnicodeString __fastcall GetInfrastructure(void);
	System::UnicodeString __fastcall GetPasword(void);
	System::UnicodeString __fastcall GetUsername(void);
	void __fastcall SetInfrastructure(const System::UnicodeString Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetUsername(const System::UnicodeString Value);
	MESSAGE void __fastcall WMCopyData(Messages::TWMCopyData &Msg);
	void __fastcall GetMachines(void);
	void __fastcall UpdateStorageOptions(void);
	
public:
	virtual bool __fastcall CanMoveNext(void);
	virtual bool __fastcall CanMoveBack(void);
	virtual bool __fastcall CanFinish(void);
	virtual System::UnicodeString __fastcall MainInstruction(void);
	virtual System::UnicodeString __fastcall Content(void);
	virtual bool __fastcall ValidatePage(void);
	virtual Controls::TWinControl* __fastcall FocusControl(void);
	int __fastcall SelectedMachines(Classes::TStringList* ASelected);
	virtual void __fastcall FirstActivation(void);
	__property System::UnicodeString Username = {read=GetUsername, write=SetUsername};
	__property System::UnicodeString Password = {read=GetPasword, write=SetPassword};
	__property System::UnicodeString Infrastructure = {read=GetInfrastructure, write=SetInfrastructure};
public:
	/* TfmWizardContent.Create */ inline __fastcall virtual TfmDeployAuthentication(Classes::TComponent* AOwner) : Wizardcontentframe::TfmWizardContent(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TfmDeployAuthentication(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfmDeployAuthentication(HWND ParentWindow) : Wizardcontentframe::TfmWizardContent(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfmDeployAuthentication* fmDeployAuthentication;

}	/* namespace Deployauthenticationpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deployauthenticationpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeployauthenticationpageHPP
