// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSConnectProtocolTypeWizardPage.pas' rev: 22.00

#ifndef DsconnectprotocoltypewizardpageHPP
#define DsconnectprotocoltypewizardpageHPP

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

namespace Dsconnectprotocoltypewizardpage
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSConnectionProtocolType { prHTTP, prTCPIP };
#pragma option pop

class DELPHICLASS TDSConnectionProtocolTypeFrame;
class PASCALIMPLEMENTATION TDSConnectionProtocolTypeFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TRadioButton* RadioButtonHTTP;
	Stdctrls::TRadioButton* RadioButtonTCPIP;
	void __fastcall OnButtonClick(System::TObject* Sender);
	
private:
	Classes::TNotifyEvent FOnSelectedApplicationTypeChange;
	TDSConnectionProtocolType __fastcall GetSelectedProtocolType(void);
	void __fastcall SetSelectedProtocolType(const TDSConnectionProtocolType Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	
public:
	__property TDSConnectionProtocolType SelectedProtocolType = {read=GetSelectedProtocolType, write=SetSelectedProtocolType, nodefault};
	__property Classes::TNotifyEvent OnSelectedProtocolTypeChange = {read=FOnSelectedApplicationTypeChange, write=FOnSelectedApplicationTypeChange};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSConnectionProtocolTypeFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSConnectionProtocolTypeFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSConnectionProtocolTypeFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSConnectProtocolTypeWizardPage;
typedef System::DelphiInterface<IDSConnectProtocolTypeWizardPage> _di_IDSConnectProtocolTypeWizardPage;
__interface  INTERFACE_UUID("{F300E35C-110E-4DA5-B1E7-B785A36D316D}") IDSConnectProtocolTypeWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual int __fastcall GetLeftMargin(void) = 0 ;
	virtual void __fastcall SetLeftMargin(const int Value) = 0 ;
	virtual TDSConnectionProtocolType __fastcall GetSelectedProtocolType(void) = 0 ;
	virtual Classes::TNotifyEvent __fastcall GetOnSelectedProtocolTypeChange(void) = 0 ;
	virtual void __fastcall SetOnSelectedProtocolTypeChange(const Classes::TNotifyEvent Value) = 0 ;
	virtual void __fastcall SetSelectedProtocolType(const TDSConnectionProtocolType Value) = 0 ;
	__property TDSConnectionProtocolType SelectedProtocolType = {read=GetSelectedProtocolType, write=SetSelectedProtocolType};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin};
	__property Classes::TNotifyEvent OnSelectedProtocolTypeChange = {read=GetOnSelectedProtocolTypeChange, write=SetOnSelectedProtocolTypeChange};
};

class DELPHICLASS TDSConnectProtocolTypeWizardPage;
class PASCALIMPLEMENTATION TDSConnectProtocolTypeWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSConnectionProtocolTypeFrame* FFrame;
	TDSConnectionProtocolType FSelectedProtocolType;
	int FLeftMargin;
	Classes::TNotifyEvent FOnSelectedProtocolTypeChange;
	void __fastcall OnSelectedProtocolTypeChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	
public:
	__fastcall TDSConnectProtocolTypeWizardPage(void);
	TDSConnectionProtocolType __fastcall GetSelectedProtocolType(void);
	void __fastcall SetSelectedProtocolType(const TDSConnectionProtocolType Value);
	int __fastcall GetLeftMargin(void);
	Classes::TNotifyEvent __fastcall GetOnSelectedProtocolTypeChange(void);
	void __fastcall SetOnSelectedProtocolTypeChange(const Classes::TNotifyEvent Value);
	void __fastcall SetLeftMargin(const int Value);
	__property TDSConnectionProtocolType SelectedProtocolType = {read=GetSelectedProtocolType, write=SetSelectedProtocolType, nodefault};
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSConnectProtocolTypeWizardPage(void) { }
	
private:
	void *__IDSConnectProtocolTypeWizardPage;	/* IDSConnectProtocolTypeWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSConnectProtocolTypeWizardPage()
	{
		_di_IDSConnectProtocolTypeWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSConnectProtocolTypeWizardPage*(void) { return (IDSConnectProtocolTypeWizardPage*)&__IDSConnectProtocolTypeWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSConnectProtocolTypeWizardPage L"sDSConnectProtocolTypeWizardPage"

}	/* namespace Dsconnectprotocoltypewizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsconnectprotocoltypewizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsconnectprotocoltypewizardpageHPP
