// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployFilesPage.pas' rev: 22.00

#ifndef DeployfilespageHPP
#define DeployfilespageHPP

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
#include <ComCtrls.hpp>	// Pascal unit
#include <DeployTypes.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deployfilespage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfmDeployFiles;
class PASCALIMPLEMENTATION TfmDeployFiles : public Wizardcontentframe::TfmWizardContent
{
	typedef Wizardcontentframe::TfmWizardContent inherited;
	
__published:
	Comctrls::TListView* lvFilesToDeploy;
	Extctrls::TPanel* pButtons;
	Stdctrls::TButton* bRemoveFile;
	Stdctrls::TButton* bAddFile;
	Stdctrls::TButton* bEditFile;
	Actnlist::TActionList* ActionList1;
	Actnlist::TAction* AddFileActn;
	Actnlist::TAction* EditFileActn;
	Actnlist::TAction* RemoveFileActn;
	void __fastcall AddFileActnExecute(System::TObject* Sender);
	void __fastcall EditFileActnExecute(System::TObject* Sender);
	void __fastcall RemoveFileActnExecute(System::TObject* Sender);
	void __fastcall EditFileActnUpdate(System::TObject* Sender);
	void __fastcall RemoveFileActnUpdate(System::TObject* Sender);
	
private:
	Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* FFilesToDeploy;
	void __fastcall AddFileToList(const System::UnicodeString ASource, const System::UnicodeString ADestination);
	void __fastcall AddMultipleFilesToList(const System::UnicodeString ASource, const System::UnicodeString ADestination);
	Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* __fastcall GetFilesToDeploy(void);
	
public:
	__fastcall virtual ~TfmDeployFiles(void);
	virtual bool __fastcall CanMoveNext(void);
	virtual bool __fastcall CanMoveBack(void);
	virtual bool __fastcall CanFinish(void);
	virtual System::UnicodeString __fastcall MainInstruction(void);
	virtual System::UnicodeString __fastcall Content(void);
	virtual bool __fastcall ValidatePage(void);
	virtual Controls::TWinControl* __fastcall FocusControl(void);
	void __fastcall AddFile(const System::UnicodeString AFilename, const System::UnicodeString ADestination);
	virtual void __fastcall FirstActivation(void);
	__property Generics_collections::TObjectList__1<Deploytypes::TFileDeployItem*>* FilesToDeploy = {read=GetFilesToDeploy};
public:
	/* TfmWizardContent.Create */ inline __fastcall virtual TfmDeployFiles(Classes::TComponent* AOwner) : Wizardcontentframe::TfmWizardContent(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfmDeployFiles(HWND ParentWindow) : Wizardcontentframe::TfmWizardContent(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfmDeployFiles* fmDeployFiles;

}	/* namespace Deployfilespage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deployfilespage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeployfilespageHPP
