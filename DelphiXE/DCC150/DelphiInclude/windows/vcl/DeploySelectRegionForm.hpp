// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeploySelectRegionForm.pas' rev: 22.00

#ifndef DeployselectregionformHPP
#define DeployselectregionformHPP

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

//-- user supplied -----------------------------------------------------------

namespace Deployselectregionform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfrmDeploySelectRegion;
class PASCALIMPLEMENTATION TfrmDeploySelectRegion : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TComboBox* cboxAvailableRegions;
	Stdctrls::TButton* bOK;
	Stdctrls::TButton* bCancel;
	Stdctrls::TGroupBox* gbAvailableRegions;
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	System::UnicodeString FUsername;
	System::UnicodeString FPassword;
	Classes::TStringList* FErrors;
	System::UnicodeString FCachedRegionEndPoint;
	System::UnicodeString __fastcall GetSelectedRegionEndPoint(void);
	void __fastcall LoadRegions(void);
	MESSAGE void __fastcall WMCopyData(Messages::TWMCopyData &Msg);
	
public:
	__fastcall TfrmDeploySelectRegion(Classes::TComponent* AOwner, const System::UnicodeString AUsername, const System::UnicodeString APassword, const System::UnicodeString ARegionEndPoint);
	__fastcall virtual ~TfrmDeploySelectRegion(void);
	__classmethod bool __fastcall Execute(Classes::TComponent* AOwner, const System::UnicodeString AUsername, const System::UnicodeString APassword, System::UnicodeString &ARegionEndPoint);
	__property System::UnicodeString SelectedRegionEndPoint = {read=GetSelectedRegionEndPoint};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TfrmDeploySelectRegion(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfrmDeploySelectRegion(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TfrmDeploySelectRegion* frmDeploySelectRegion;

}	/* namespace Deployselectregionform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deployselectregionform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeployselectregionformHPP
