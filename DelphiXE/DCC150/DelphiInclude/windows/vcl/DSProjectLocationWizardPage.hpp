// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProjectLocationWizardPage.pas' rev: 22.00

#ifndef DsprojectlocationwizardpageHPP
#define DsprojectlocationwizardpageHPP

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
#include <WizardAPI.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <StdActns.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsprojectlocationwizardpage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSProjectLocationWizardFrame;
class PASCALIMPLEMENTATION TDSProjectLocationWizardFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TLabel* Label1;
	Stdctrls::TEdit* LocationEdit;
	Stdctrls::TButton* BrowseBtn;
	Actnlist::TActionList* ActionList1;
	Stdactns::TBrowseForFolder* BrowseForFolder1;
	void __fastcall BrowseForFolder1Accept(System::TObject* Sender);
	void __fastcall BrowseForFolder1BeforeExecute(System::TObject* Sender);
	
private:
	void __fastcall LocationEditChange(System::TObject* Sender);
	System::UnicodeString __fastcall LocationEditText(void);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	bool __fastcall ValidateFields(void);
	
public:
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSProjectLocationWizardFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSProjectLocationWizardFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSProjectLocationWizardFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSProjectLocationWizardPage;
typedef System::DelphiInterface<IDSProjectLocationWizardPage> _di_IDSProjectLocationWizardPage;
__interface  INTERFACE_UUID("{19C4C460-CD1B-44CC-94F5-16556A372EE5}") IDSProjectLocationWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual System::UnicodeString __fastcall GetProjectLocation(void) = 0 ;
	__property System::UnicodeString ProjectLocation = {read=GetProjectLocation};
};

class DELPHICLASS TDSProjectLocationWizardPage;
class PASCALIMPLEMENTATION TDSProjectLocationWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSProjectLocationWizardFrame* FFrame;
	System::UnicodeString __fastcall GetProjectLocation(void);
	
protected:
	virtual Forms::TFrame* __fastcall Page(void);
	virtual void __fastcall UpdateInfo(void);
	virtual void __fastcall OnLeavingPage(Wizardapi::TPageTransition PageTransition, bool &Allow);
	
public:
	__fastcall TDSProjectLocationWizardPage(void);
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSProjectLocationWizardPage(void) { }
	
private:
	void *__IDSProjectLocationWizardPage;	/* IDSProjectLocationWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSProjectLocationWizardPage()
	{
		_di_IDSProjectLocationWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSProjectLocationWizardPage*(void) { return (IDSProjectLocationWizardPage*)&__IDSProjectLocationWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSProjectLocationWizardPage L"DSProjectLocationWizardPage"

}	/* namespace Dsprojectlocationwizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsprojectlocationwizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsprojectlocationwizardpageHPP
