// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSConnectToTypeWizardPage.pas' rev: 22.00

#ifndef DsconnecttotypewizardpageHPP
#define DsconnecttotypewizardpageHPP

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
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsconnecttotypewizardpage
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSServerApplicationType { atStandalone, atStandAloneIndy, atIISModule, atWebAppDebug, atUnknown };
#pragma option pop

class DELPHICLASS TDSConnectionToTypeFrame;
class PASCALIMPLEMENTATION TDSConnectionToTypeFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TRadioButton* RadioButtonStandAlone;
	Stdctrls::TRadioButton* RadioButtonIIS;
	Stdctrls::TRadioButton* RadioButtonUnknown;
	Stdctrls::TRadioButton* RadioButtonStandAloneIndy;
	Extctrls::TBevel* Bevel1;
	Extctrls::TBevel* Bevel2;
	void __fastcall OnButtonClick(System::TObject* Sender);
	
private:
	Classes::TNotifyEvent FOnSelectedApplicationTypeChange;
	TDSServerApplicationType __fastcall GetSelectedApplicationType(void);
	void __fastcall SetSelectedApplicationType(const TDSServerApplicationType Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	
public:
	__property TDSServerApplicationType SelectedApplicationType = {read=GetSelectedApplicationType, write=SetSelectedApplicationType, nodefault};
	__property Classes::TNotifyEvent OnSelectedApplicationTypeChange = {read=FOnSelectedApplicationTypeChange, write=FOnSelectedApplicationTypeChange};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSConnectionToTypeFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSConnectionToTypeFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSConnectionToTypeFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSConnectToTypeWizardPage;
typedef System::DelphiInterface<IDSConnectToTypeWizardPage> _di_IDSConnectToTypeWizardPage;
__interface  INTERFACE_UUID("{F300E35C-110E-4DA5-B1E7-B785A36D316D}") IDSConnectToTypeWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual Classes::TNotifyEvent __fastcall GetOnSelectedApplicationTypeChange(void) = 0 ;
	virtual void __fastcall SetOnSelectedApplicationTypeChange(const Classes::TNotifyEvent Value) = 0 ;
	virtual int __fastcall GetLeftMargin(void) = 0 ;
	virtual void __fastcall SetLeftMargin(const int Value) = 0 ;
	virtual TDSServerApplicationType __fastcall GetSelectedApplicationType(void) = 0 ;
	virtual void __fastcall SetSelectedApplicationType(const TDSServerApplicationType Value) = 0 ;
	__property TDSServerApplicationType SelectedApplicationType = {read=GetSelectedApplicationType, write=SetSelectedApplicationType};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin};
	__property Classes::TNotifyEvent OnSelectedApplicationTypeChange = {read=GetOnSelectedApplicationTypeChange, write=SetOnSelectedApplicationTypeChange};
};

class DELPHICLASS TDSConnectToTypeWizardPage;
class PASCALIMPLEMENTATION TDSConnectToTypeWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSConnectionToTypeFrame* FFrame;
	TDSServerApplicationType FSelectedApplicationType;
	int FLeftMargin;
	Classes::TNotifyEvent FOnSelectedApplicationTypeChange;
	void __fastcall OnSelectedApplicationTypeChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	
public:
	__fastcall TDSConnectToTypeWizardPage(void);
	Classes::TNotifyEvent __fastcall GetOnSelectedApplicationTypeChange(void);
	void __fastcall SetOnSelectedApplicationTypeChange(const Classes::TNotifyEvent Value);
	TDSServerApplicationType __fastcall GetSelectedApplicationType(void);
	void __fastcall SetSelectedApplicationType(const TDSServerApplicationType Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	__property TDSServerApplicationType SelectedApplicationType = {read=GetSelectedApplicationType, write=SetSelectedApplicationType, nodefault};
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSConnectToTypeWizardPage(void) { }
	
private:
	void *__IDSConnectToTypeWizardPage;	/* IDSConnectToTypeWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSConnectToTypeWizardPage()
	{
		_di_IDSConnectToTypeWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSConnectToTypeWizardPage*(void) { return (IDSConnectToTypeWizardPage*)&__IDSConnectToTypeWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSConnectToTypeWizardPage L"sDSConnectToTypeWizardPage"

}	/* namespace Dsconnecttotypewizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsconnecttotypewizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsconnecttotypewizardpageHPP
