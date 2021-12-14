// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSStandAloneForm.pas' rev: 22.00

#ifndef DsstandaloneformHPP
#define DsstandaloneformHPP

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
#include <DSSource.hpp>	// Pascal unit
#include <DSStandAloneCreators.hpp>	// Pascal unit
#include <DSCreators.hpp>	// Pascal unit
#include <DSServerMethodsFrame.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsstandaloneform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TNewDataSnapStandaloneAppForm;
class PASCALIMPLEMENTATION TNewDataSnapStandaloneAppForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TRadioButton* rbConsoleApp;
	Stdctrls::TRadioButton* rbServiceApp;
	Stdctrls::TCheckBox* cbHTTP;
	Stdctrls::TCheckBox* cbTCPIP;
	Extctrls::TPanel* Panel1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TButton* OKButton;
	Stdctrls::TButton* CancelButton;
	Stdctrls::TButton* HelpButton;
	Actnlist::TActionList* ActionList1;
	Actnlist::TAction* EnableAction;
	Stdctrls::TRadioButton* rbVCLApp;
	Stdctrls::TCheckBox* cbHTTPAuthentication;
	Dsservermethodsframe::TDSServerMethodsFrame* DSServerMethodsFrame1;
	Stdctrls::TCheckBox* cbTCPIPAuthentication;
	void __fastcall HelpButtonClick(System::TObject* Sender);
	void __fastcall EnableActionExecute(System::TObject* Sender);
	void __fastcall EnableActionUpdate(System::TObject* Sender);
	void __fastcall OKButtonClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	Dsstandalonecreators::TProjectOptions __fastcall ProjectOptions(void);
	Dsstandalonecreators::TProjectType __fastcall ProjectType(void);
	
protected:
	void __fastcall ValidateFields(void);
	
public:
	void __fastcall GetProjectDescription(Dsstandalonecreators::TProjectDescription &AProjectDescription);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TNewDataSnapStandaloneAppForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TNewDataSnapStandaloneAppForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TNewDataSnapStandaloneAppForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNewDataSnapStandaloneAppForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsstandaloneform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsstandaloneform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsstandaloneformHPP
