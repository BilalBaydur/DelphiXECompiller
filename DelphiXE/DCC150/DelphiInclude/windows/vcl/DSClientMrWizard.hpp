// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientMrWizard.pas' rev: 22.00

#ifndef DsclientmrwizardHPP
#define DsclientmrwizardHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <ComObj.hpp>	// Pascal unit
#include <WizardAPI.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <DSConnectToWizardPage.hpp>	// Pascal unit
#include <DSConnectionWizardPage.hpp>	// Pascal unit
#include <DSConnectToTypeWizardPage.hpp>	// Pascal unit
#include <DSClientSource.hpp>	// Pascal unit
#include <DSConnectProtocolTypeWizardPage.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientmrwizard
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TDSClientFeature { dsNull, dsREST, dsMultipleProtocols, dsHTTPClient, dsHTTPSClient, dsTCPIPClient, dsLocalConnection, dsRemoteConnection, dsURLPath };
#pragma option pop

typedef System::Set<TDSClientFeature, TDSClientFeature::dsNull, TDSClientFeature::dsURLPath>  TDSClientFeatures;

class DELPHICLASS TDSClientPageClass;
class PASCALIMPLEMENTATION TDSClientPageClass : public Dsmrwizardcommon::TDSPageClass
{
	typedef Dsmrwizardcommon::TDSPageClass inherited;
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	TDSClientFeatures Filter;
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDSClientPageClass(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDSClientPageClass(void) : Dsmrwizardcommon::TDSPageClass() { }
	
};


class DELPHICLASS TDSClientMrWizard;
class PASCALIMPLEMENTATION TDSClientMrWizard : public Dsmrwizardcommon::TDSPageListMrWizard
{
	typedef Dsmrwizardcommon::TDSPageListMrWizard inherited;
	
private:
	Dsconnectionwizardpage::_di_IDSConnectionWizardPage FDSHTTPConnectionWizardPage;
	Dsconnecttotypewizardpage::_di_IDSConnectToTypeWizardPage FDSConnectToTypeWizardPage;
	Dsconnectionwizardpage::_di_IDSConnectionWizardPage FDSTCPIPConnectionWizardPage;
	Dsconnectprotocoltypewizardpage::_di_IDSConnectProtocolTypeWizardPage FDSConnectProtocolTypeWizardPage;
	TDSClientFeatures FSelectedFeatures;
	TDSClientFeatures FAvailableFeatures;
	Dsconnectionwizardpage::_di_IDSConnectionWizardPage __fastcall GetDSHTTPConnectionWizardPage(void);
	Dsconnectionwizardpage::_di_IDSConnectionWizardPage __fastcall GetDSTCPIPConnectionWizardPage(void);
	Dsconnecttotypewizardpage::_di_IDSConnectToTypeWizardPage __fastcall GetDSConnectToTypeWizardPage(void);
	Dsconnectprotocoltypewizardpage::_di_IDSConnectProtocolTypeWizardPage __fastcall GetDSConnectProtocolTypeWizardPage(void);
	void __fastcall OnSelectedApplicationTypeChange(System::TObject* Sender);
	void __fastcall OnSelectedProtocolTypeChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetConnectionProtocolString(void);
	Dsconnectionwizardpage::_di_IDSConnectionWizardPage __fastcall GetActiveConnectionPage(void);
	static System::UnicodeString __fastcall GetConnectionPageControlText(Dsconnectionwizardpage::_di_IDSConnectionWizardPage APage, Dsconnectionwizardpage::TConnectionPageControlID AControl);
	static void __fastcall SetConnectionPageControlText(Dsconnectionwizardpage::_di_IDSConnectionWizardPage APage, Dsconnectionwizardpage::TConnectionPageControlID AControl, const System::UnicodeString AValue);
	void __fastcall OnTestRESTConnection(System::TObject* Sender);
	void __fastcall OnTestSQLConnection(System::TObject* Sender);
	
protected:
	virtual void __fastcall OnEnterPage(Wizardapi::_di_IWizardPage LastPage, Wizardapi::_di_IWizardPage CurrentPage, Wizardapi::TPageTransition PageTransition);
	virtual bool __fastcall CanFinish(void);
	virtual void __fastcall GetPageList(Generics_collections::TList__1<Dsmrwizardcommon::TDSPageClass*>* AList);
	virtual bool __fastcall IsPageSelected(Dsmrwizardcommon::TDSPageClass* APage);
	virtual Wizardapi::_di_IWizardPage __fastcall CreateWizardPage(Dsmrwizardcommon::TDSPageClass* APage);
	virtual void __fastcall InitializeFeatures(void);
	virtual Dsconnecttowizardpage::TDSServerHostType __fastcall GetServerHostType(void) = 0 ;
	Dsconnecttotypewizardpage::TDSServerApplicationType __fastcall GetServerApplicationType(void);
	Dsconnectprotocoltypewizardpage::TDSConnectionProtocolType __fastcall GetConnectionProtocolType(void);
	bool __fastcall GetHTTPS(void);
	
public:
	__fastcall TDSClientMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName);
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSClientMrWizard(void) { }
	
};


class DELPHICLASS TDSClientConnectToMrWizard;
class PASCALIMPLEMENTATION TDSClientConnectToMrWizard : public TDSClientMrWizard
{
	typedef TDSClientMrWizard inherited;
	
private:
	Dsconnecttowizardpage::_di_IDSConnectToWizardPage FDSConnectToWizardPage;
	Wizardapi::_di_IWizardPage __fastcall HandleFirstPage(const Wizardapi::_di_IWizardPage CurrentPage);
	void __fastcall GenerateClientModule(void);
	
protected:
	virtual Graphics::TBitmap* __fastcall LoadImage(const System::UnicodeString AImageName)/* overload */;
	virtual void __fastcall OnLeavingPage(Wizardapi::_di_IWizardPage WizardPage, Wizardapi::TPageTransition PageTransition, bool &Allow);
	virtual void __fastcall Finish(void);
	virtual void __fastcall AddFirstPage(/* out */ GUID &AID, /* out */ System::UnicodeString &AName);
	virtual Wizardapi::_di_IWizardPage __fastcall GetFirstPage(void);
	virtual Dsclientsource::TClientModuleDescription __fastcall GetModuleDescription(void);
	virtual Dsconnecttowizardpage::TDSServerHostType __fastcall GetServerHostType(void);
public:
	/* TDSClientMrWizard.Create */ inline __fastcall TDSClientConnectToMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName) : TDSClientMrWizard(APersonality, ACaption, AHelpContext, AImageName, AOptionsFileName) { }
	
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSClientConnectToMrWizard(void) { }
	
/* Hoisted overloads: */
	
protected:
	inline Graphics::TBitmap* __fastcall  LoadImage(unsigned Instance, const System::UnicodeString ResourceName){ return Dsmrwizardcommon::TCustomPageMrWizard::LoadImage(Instance, ResourceName); }
	
};


class DELPHICLASS TDSRESTClientMrWizard;
class PASCALIMPLEMENTATION TDSRESTClientMrWizard : public TDSClientConnectToMrWizard
{
	typedef TDSClientConnectToMrWizard inherited;
	
protected:
	virtual void __fastcall InitializeFeatures(void);
	virtual Dsclientsource::TClientModuleDescription __fastcall GetModuleDescription(void);
public:
	/* TDSClientMrWizard.Create */ inline __fastcall TDSRESTClientMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName) : TDSClientConnectToMrWizard(APersonality, ACaption, AHelpContext, AImageName, AOptionsFileName) { }
	
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSRESTClientMrWizard(void) { }
	
};


class DELPHICLASS TDSQLClientMrWizard;
class PASCALIMPLEMENTATION TDSQLClientMrWizard : public TDSClientConnectToMrWizard
{
	typedef TDSClientConnectToMrWizard inherited;
	
protected:
	virtual void __fastcall InitializeFeatures(void);
	virtual Dsclientsource::TClientModuleDescription __fastcall GetModuleDescription(void);
	virtual bool __fastcall IsPageSelected(Dsmrwizardcommon::TDSPageClass* APage);
public:
	/* TDSClientMrWizard.Create */ inline __fastcall TDSQLClientMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName) : TDSClientConnectToMrWizard(APersonality, ACaption, AHelpContext, AImageName, AOptionsFileName) { }
	
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSQLClientMrWizard(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define WIZARDDBXCLIENTMODULE L"WIZARDDBXCLIENTMODULE"
#define WIZARDRESTCLIENTMODULE L"WIZARDRESTCLIENTMODULE"

}	/* namespace Dsclientmrwizard */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientmrwizard;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientmrwizardHPP
