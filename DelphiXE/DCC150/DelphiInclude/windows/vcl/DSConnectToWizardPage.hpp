// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSConnectToWizardPage.pas' rev: 22.00

#ifndef DsconnecttowizardpageHPP
#define DsconnecttowizardpageHPP

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

namespace Dsconnecttowizardpage
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSServerHostType { slLocal, slRemote };
#pragma option pop

class DELPHICLASS TDSConnectionToFrame;
class PASCALIMPLEMENTATION TDSConnectionToFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TRadioButton* RadioButtonLocal;
	Stdctrls::TRadioButton* RadioButtonRemote;
	void __fastcall OnButtonClick(System::TObject* Sender);
	
private:
	Classes::TNotifyEvent FOnServerHostTypeChange;
	TDSServerHostType __fastcall GetServerHostType(void);
	void __fastcall SetServerHostType(const TDSServerHostType Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	
public:
	__property TDSServerHostType ServerHostType = {read=GetServerHostType, write=SetServerHostType, nodefault};
	__property Classes::TNotifyEvent OnServerHostTypeChange = {read=FOnServerHostTypeChange, write=FOnServerHostTypeChange};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSConnectionToFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSConnectionToFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSConnectionToFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSConnectToWizardPage;
typedef System::DelphiInterface<IDSConnectToWizardPage> _di_IDSConnectToWizardPage;
__interface  INTERFACE_UUID("{F300E35C-110E-4DA5-B1E7-B785A36D316D}") IDSConnectToWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual int __fastcall GetLeftMargin(void) = 0 ;
	virtual void __fastcall SetLeftMargin(const int Value) = 0 ;
	virtual TDSServerHostType __fastcall GetServerHostType(void) = 0 ;
	virtual void __fastcall SetServerHostType(const TDSServerHostType Value) = 0 ;
	__property TDSServerHostType ServerHostType = {read=GetServerHostType, write=SetServerHostType};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin};
};

class DELPHICLASS TDSConnectToWizardPage;
class PASCALIMPLEMENTATION TDSConnectToWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSConnectionToFrame* FFrame;
	TDSServerHostType FServerHostType;
	int FLeftMargin;
	void __fastcall OnServerHostTypeChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	
public:
	__fastcall TDSConnectToWizardPage(void);
	TDSServerHostType __fastcall GetServerHostType(void);
	void __fastcall SetServerHostType(const TDSServerHostType Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	__property TDSServerHostType ServerHostType = {read=GetServerHostType, write=SetServerHostType, nodefault};
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSConnectToWizardPage(void) { }
	
private:
	void *__IDSConnectToWizardPage;	/* IDSConnectToWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSConnectToWizardPage()
	{
		_di_IDSConnectToWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSConnectToWizardPage*(void) { return (IDSConnectToWizardPage*)&__IDSConnectToWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSConnectToWizardPage L"sDSConnectToWizardPage"

}	/* namespace Dsconnecttowizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsconnecttowizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsconnecttowizardpageHPP
