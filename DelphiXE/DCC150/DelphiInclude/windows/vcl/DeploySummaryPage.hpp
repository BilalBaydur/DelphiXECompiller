// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeploySummaryPage.pas' rev: 22.00

#ifndef DeploysummarypageHPP
#define DeploysummarypageHPP

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
#include <DeployTypes.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deploysummarypage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfmDeploySummary;
class PASCALIMPLEMENTATION TfmDeploySummary : public Wizardcontentframe::TfmWizardContent
{
	typedef Wizardcontentframe::TfmWizardContent inherited;
	
__published:
	Stdctrls::TListBox* lbMachines;
	Stdctrls::TLabel* MachinesLabel;
	Stdctrls::TLabel* FilesBeingDeployedLabel;
	Stdctrls::TListBox* lbFileList;
	Stdctrls::TListBox* lbRemoteSummary;
	Stdctrls::TLabel* RemoteLocationOfFilesLabel;
	Extctrls::TSplitter* Splitter1;
	Extctrls::TPanel* pRemoteLocation;
	
private:
	Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* FFilesToDeploy;
	void __fastcall UpdateDeploymentFileList(void);
	void __fastcall SetFilesToDeploy(const Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* Value);
	
public:
	__fastcall virtual ~TfmDeploySummary(void);
	virtual bool __fastcall CanMoveNext(void);
	virtual bool __fastcall CanMoveBack(void);
	virtual bool __fastcall CanFinish(void);
	virtual System::UnicodeString __fastcall MainInstruction(void);
	virtual System::UnicodeString __fastcall Content(void);
	virtual bool __fastcall ValidatePage(void);
	virtual Controls::TWinControl* __fastcall FocusControl(void);
	virtual void __fastcall FirstActivation(void);
	void __fastcall DisplayMachines(Classes::TStringList* AMachines);
	virtual System::UnicodeString __fastcall FinishButtonCaption(void);
	void __fastcall GetFilesToBeDeployed(Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* AFiles);
	__property Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* FilesToDeploy = {write=SetFilesToDeploy};
public:
	/* TfmWizardContent.Create */ inline __fastcall virtual TfmDeploySummary(Classes::TComponent* AOwner) : Wizardcontentframe::TfmWizardContent(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfmDeploySummary(HWND ParentWindow) : Wizardcontentframe::TfmWizardContent(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfmDeploySummary* fmDeploySummary;

}	/* namespace Deploysummarypage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deploysummarypage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploysummarypageHPP
