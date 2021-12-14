// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployAddFileForm.pas' rev: 22.00

#ifndef DeployaddfileformHPP
#define DeployaddfileformHPP

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

//-- user supplied -----------------------------------------------------------

namespace Deployaddfileform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmDeployAddFile;
class PASCALIMPLEMENTATION TfrmDeployAddFile : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TEdit* eSourceFile;
	Stdctrls::TEdit* eDestinationFolder;
	Stdctrls::TButton* bOK;
	Stdctrls::TButton* bCancel;
	Stdctrls::TButton* bBrowse;
	Dialogs::TOpenDialog* odSelectFiles;
	void __fastcall bBrowseClick(System::TObject* Sender);
	void __fastcall bOKClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	
private:
	System::UnicodeString __fastcall GetDestination(void);
	System::UnicodeString __fastcall GetSourceFilename(void);
	void __fastcall SetDestination(const System::UnicodeString Value);
	void __fastcall SetSourceFilename(const System::UnicodeString Value);
	
public:
	__classmethod bool __fastcall Execute(Classes::TComponent* AOwner, System::UnicodeString &ASource, System::UnicodeString &ADestination);
	__property System::UnicodeString SourceFilename = {read=GetSourceFilename, write=SetSourceFilename};
	__property System::UnicodeString Destination = {read=GetDestination, write=SetDestination};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TfrmDeployAddFile(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmDeployAddFile(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TfrmDeployAddFile(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmDeployAddFile(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfrmDeployAddFile* frmDeployAddFile;

}	/* namespace Deployaddfileform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deployaddfileform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeployaddfileformHPP
