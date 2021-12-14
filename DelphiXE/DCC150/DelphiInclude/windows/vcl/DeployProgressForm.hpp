// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployProgressForm.pas' rev: 22.00

#ifndef DeployprogressformHPP
#define DeployprogressformHPP

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
#include <ComCtrls.hpp>	// Pascal unit
#include <DeployTypes.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deployprogressform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmDeployProgress;
class PASCALIMPLEMENTATION TfrmDeployProgress : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Comctrls::TProgressBar* ProgressBar1;
	Stdctrls::TLabel* ToPromptLabel;
	Stdctrls::TLabel* FromPromptLabel;
	Stdctrls::TLabel* DestinationFilenameLabel;
	Stdctrls::TLabel* SourceFilenameLabel;
	Extctrls::TPanel* pButtons;
	Stdctrls::TButton* bCancel;
	void __fastcall bCancelClick(System::TObject* Sender);
	
private:
	bool FCancelled;
	void __fastcall SetProgressBarState(const Comctrls::TProgressBarState Value);
	
public:
	__fastcall virtual TfrmDeployProgress(Classes::TComponent* AOwner);
	__classmethod TfrmDeployProgress* __fastcall Execute();
	bool __fastcall UpdateProgress(const System::UnicodeString AFilename, const System::UnicodeString ADestination);
	__property Comctrls::TProgressBarState ProgressBarState = {write=SetProgressBarState, nodefault};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmDeployProgress(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmDeployProgress(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmDeployProgress(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfrmDeployProgress* frmDeployProgress;

}	/* namespace Deployprogressform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deployprogressform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeployprogressformHPP
