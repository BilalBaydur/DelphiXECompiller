// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSRestClientModuleForm.pas' rev: 22.00

#ifndef DsrestclientmoduleformHPP
#define DsrestclientmoduleformHPP

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
#include <DSClientModuleForm.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <DSClientSource.hpp>	// Pascal unit
#include <DSRestConnectionFrameUnit.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsrestclientmoduleform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRestClientModuleForm;
class PASCALIMPLEMENTATION TRestClientModuleForm : public Dsclientmoduleform::TNewDataSnapClientModuleForm
{
	typedef Dsclientmoduleform::TNewDataSnapClientModuleForm inherited;
	
__published:
	Dsrestconnectionframeunit::TRestConnectionFrame* RestConnectionFrame1;
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	
public:
	virtual void __fastcall GetModuleDescription(Dsclientsource::TClientModuleDescription &AModuleDescription);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TRestClientModuleForm(Classes::TComponent* AOwner) : Dsclientmoduleform::TNewDataSnapClientModuleForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TRestClientModuleForm(Classes::TComponent* AOwner, int Dummy) : Dsclientmoduleform::TNewDataSnapClientModuleForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TRestClientModuleForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRestClientModuleForm(HWND ParentWindow) : Dsclientmoduleform::TNewDataSnapClientModuleForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TRestClientModuleForm* RestClientModuleForm;

}	/* namespace Dsrestclientmoduleform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsrestclientmoduleform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsrestclientmoduleformHPP
