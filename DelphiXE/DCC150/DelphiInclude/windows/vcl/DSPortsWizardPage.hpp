// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSPortsWizardPage.pas' rev: 22.00

#ifndef DsportswizardpageHPP
#define DsportswizardpageHPP

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
#include <DSPortFrame.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <AppEvnts.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsportswizardpage
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSAvailablePort { poNone, poHTTP, poHTTPS, poTCPIP };
#pragma option pop

typedef System::Set<TDSAvailablePort, TDSAvailablePort::poNone, TDSAvailablePort::poTCPIP>  TDSAvailablePorts;

struct DECLSPEC_DRECORD TDSPortDescription
{
	
public:
	TDSAvailablePort Port;
	System::UnicodeString PortLabel;
	int DefaultValue;
};


typedef System::DynamicArray<TDSPortDescription> TDSPortDescriptions;

class DELPHICLASS TDSPortsWizardFrame;
class PASCALIMPLEMENTATION TDSPortsWizardFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Appevnts::TApplicationEvents* ApplicationEvents1;
	void __fastcall ApplicationEvents1Idle(System::TObject* Sender, bool &Done);
	
private:
	TDSAvailablePort FFocusedPort;
	Generics_collections::TDictionary__2<TDSAvailablePort,Dsportframe::TDSPortFram*>* FPortFrames;
	Generics_collections::TDictionary__2<TDSAvailablePort,TDSPortDescription>* FPortDescriptionsDictionary;
	Classes::TNotifyEvent FOnFocusedPortChange;
	int FLeftMargin;
	int __fastcall GetPort(TDSAvailablePort I);
	void __fastcall SetPortDescriptions(const TDSPortDescriptions Value);
	void __fastcall ShowPortPages(void);
	void __fastcall SetPort(TDSAvailablePort I, const int Value);
	void __fastcall SetFocusedPort(const TDSAvailablePort Value);
	void __fastcall SetLeftMargin(const int Value);
	bool __fastcall ValidateFields(void);
	
public:
	__property TDSPortDescriptions PortDescriptions = {write=SetPortDescriptions};
	__fastcall virtual TDSPortsWizardFrame(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSPortsWizardFrame(void);
	__property int Ports[TDSAvailablePort I] = {read=GetPort, write=SetPort};
	__property TDSAvailablePort FocusedPort = {read=FFocusedPort, write=SetFocusedPort, nodefault};
	__property int LeftMargin = {read=FLeftMargin, write=SetLeftMargin, nodefault};
	__property Classes::TNotifyEvent OnFocusedPortChange = {read=FOnFocusedPortChange, write=FOnFocusedPortChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSPortsWizardFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSPortsWizardPage;
typedef System::DelphiInterface<IDSPortsWizardPage> _di_IDSPortsWizardPage;
__interface  INTERFACE_UUID("{2149E34E-3931-4EBF-9A09-B7E7D59D0E96}") IDSPortsWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual TDSPortsWizardFrame* __fastcall GetFrame(void) = 0 ;
	virtual void __fastcall SetPortDescriptions(const TDSPortDescriptions Value) = 0 ;
	__property TDSPortsWizardFrame* Frame = {read=GetFrame};
	__property TDSPortDescriptions PortDescriptions = {write=SetPortDescriptions};
};

class DELPHICLASS TDSPortsWizardPage;
class PASCALIMPLEMENTATION TDSPortsWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSPortsWizardFrame* FFrame;
	TDSPortDescriptions FAvailablePorts;
	void __fastcall OnFocusedPortChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	virtual void __fastcall OnLeavingPage(Wizardapi::TPageTransition PageTransition, bool &Allow);
	
public:
	__fastcall TDSPortsWizardPage(const System::UnicodeString AName);
	TDSPortsWizardFrame* __fastcall GetFrame(void);
	void __fastcall SetPortDescriptions(const TDSPortDescriptions Value);
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSPortsWizardPage(void) { }
	
private:
	void *__IDSPortsWizardPage;	/* IDSPortsWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSPortsWizardPage()
	{
		_di_IDSPortsWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSPortsWizardPage*(void) { return (IDSPortsWizardPage*)&__IDSPortsWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSPortsWizardPage L"DSPortsWizardPage"
#define sDSWebServerPortPage L"WebServerPortPage"

}	/* namespace Dsportswizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsportswizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsportswizardpageHPP
