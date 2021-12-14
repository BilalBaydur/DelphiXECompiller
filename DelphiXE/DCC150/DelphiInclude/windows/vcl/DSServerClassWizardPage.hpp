// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSServerClassWizardPage.pas' rev: 22.00

#ifndef DsserverclasswizardpageHPP
#define DsserverclasswizardpageHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsserverclasswizardpage
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSServerClassName { scComponent, scDataModule, scDSServerModule };
#pragma option pop

class DELPHICLASS TDSServerClassFrame;
class PASCALIMPLEMENTATION TDSServerClassFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TRadioButton* rbTComponent;
	Stdctrls::TRadioButton* rbDataModule;
	Stdctrls::TRadioButton* rbDSServerModule;
	void __fastcall OnButtonClick(System::TObject* Sender);
	
private:
	Classes::TNotifyEvent FOnSelectedClassNameChange;
	TDSServerClassName __fastcall GetSelectedClassName(void);
	void __fastcall SetSelectedClassName(const TDSServerClassName Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	
public:
	__property TDSServerClassName SelectedClassName = {read=GetSelectedClassName, write=SetSelectedClassName, nodefault};
	__property Classes::TNotifyEvent OnSelectedClassNameChange = {read=FOnSelectedClassNameChange, write=FOnSelectedClassNameChange};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSServerClassFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSServerClassFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSServerClassFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSServerClassNameWizardPage;
typedef System::DelphiInterface<IDSServerClassNameWizardPage> _di_IDSServerClassNameWizardPage;
__interface  INTERFACE_UUID("{235E1184-68CA-4370-94C4-AFE77D67ADFD}") IDSServerClassNameWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual TDSServerClassName __fastcall GetSelectedClassName(void) = 0 ;
	virtual void __fastcall SetSelectedClassName(const TDSServerClassName Value) = 0 ;
	__property TDSServerClassName SelectedClassName = {read=GetSelectedClassName, write=SetSelectedClassName};
};

class DELPHICLASS TDSServerClassNameWizardPage;
class PASCALIMPLEMENTATION TDSServerClassNameWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSServerClassFrame* FFrame;
	TDSServerClassName FSelectedClassName;
	void __fastcall OnSelectedClassNameChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	
public:
	__fastcall TDSServerClassNameWizardPage(void);
	TDSServerClassName __fastcall GetSelectedClassName(void);
	void __fastcall SetSelectedClassName(const TDSServerClassName Value);
	__property TDSServerClassName SelectedClassName = {read=GetSelectedClassName, write=SetSelectedClassName, nodefault};
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSServerClassNameWizardPage(void) { }
	
private:
	void *__IDSServerClassNameWizardPage;	/* IDSServerClassNameWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSServerClassNameWizardPage()
	{
		_di_IDSServerClassNameWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSServerClassNameWizardPage*(void) { return (IDSServerClassNameWizardPage*)&__IDSServerClassNameWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSServerClassNameWizardPage L"DSServerClassNameWizardPage"

}	/* namespace Dsserverclasswizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsserverclasswizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsserverclasswizardpageHPP
