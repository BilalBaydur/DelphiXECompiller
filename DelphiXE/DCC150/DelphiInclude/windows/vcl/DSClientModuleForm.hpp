// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientModuleForm.pas' rev: 22.00

#ifndef DsclientmoduleformHPP
#define DsclientmoduleformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <DSClientSource.hpp>	// Pascal unit
#include <DSClientModuleCreators.hpp>	// Pascal unit
#include <DSClientCreators.hpp>	// Pascal unit
#include <DSRestConnectionFrameUnit.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DSSQLConnectionFrameUnit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientmoduleform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TNewDataSnapClientModuleForm;
class PASCALIMPLEMENTATION TNewDataSnapClientModuleForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKButton;
	Stdctrls::TButton* CancelButton;
	Stdctrls::TButton* HelpButton;
	Actnlist::TActionList* ActionList1;
	Actnlist::TAction* EnableAction;
	void __fastcall HelpButtonClick(System::TObject* Sender);
	void __fastcall EnableActionExecute(System::TObject* Sender);
	void __fastcall EnableActionUpdate(System::TObject* Sender);
	void __fastcall OKButtonClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	Sysutils::_di_TProc FGenerateProxyCallback;
	
protected:
	void __fastcall ValidateFields(void);
	
public:
	virtual void __fastcall GetModuleDescription(Dsclientsource::TClientModuleDescription &AModuleDescription) = 0 ;
	__property Sysutils::_di_TProc GenerateProxyCallback = {read=FGenerateProxyCallback, write=FGenerateProxyCallback};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TNewDataSnapClientModuleForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TNewDataSnapClientModuleForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TNewDataSnapClientModuleForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNewDataSnapClientModuleForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsclientmoduleform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientmoduleform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientmoduleformHPP
