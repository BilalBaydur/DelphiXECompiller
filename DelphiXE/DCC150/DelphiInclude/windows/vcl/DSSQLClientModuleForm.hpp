// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSSQLClientModuleForm.pas' rev: 22.00

#ifndef DssqlclientmoduleformHPP
#define DssqlclientmoduleformHPP

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
#include <DSSQLConnectionFrameUnit.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dssqlclientmoduleform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSQLClientModuleForm;
class PASCALIMPLEMENTATION TSQLClientModuleForm : public Dsclientmoduleform::TNewDataSnapClientModuleForm
{
	typedef Dsclientmoduleform::TNewDataSnapClientModuleForm inherited;
	
__published:
	Dssqlconnectionframeunit::TSQLConnectionFrame* SQLConnectionFrame1;
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	
public:
	virtual void __fastcall GetModuleDescription(Dsclientsource::TClientModuleDescription &AModuleDescription);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TSQLClientModuleForm(Classes::TComponent* AOwner) : Dsclientmoduleform::TNewDataSnapClientModuleForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSQLClientModuleForm(Classes::TComponent* AOwner, int Dummy) : Dsclientmoduleform::TNewDataSnapClientModuleForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TSQLClientModuleForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSQLClientModuleForm(HWND ParentWindow) : Dsclientmoduleform::TNewDataSnapClientModuleForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TSQLClientModuleForm* SQLClientModuleForm;

}	/* namespace Dssqlclientmoduleform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dssqlclientmoduleform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DssqlclientmoduleformHPP
