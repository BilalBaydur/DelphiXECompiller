// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSServerMrWizard.pas' rev: 22.00

#ifndef DsservermrwizardHPP
#define DsservermrwizardHPP

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
#include <DSStandAloneCreators.hpp>	// Pascal unit
#include <DSCreators.hpp>	// Pascal unit
#include <InetWiz.hpp>	// Pascal unit
#include <WizardAPI.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit
#include <DSServerClassWizardPage.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <WebServerWizardPage.hpp>	// Pascal unit
#include <DSPortsWizardPage.hpp>	// Pascal unit
#include <DSProjectLocationWizardPage.hpp>	// Pascal unit
#include <DSStandAloneAppWizardPage.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsservermrwizard
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TNewDataSnapAppExpert;
class PASCALIMPLEMENTATION TNewDataSnapAppExpert : public Toolsapi::TNotifierObject
{
	typedef Toolsapi::TNotifierObject inherited;
	
private:
	System::UnicodeString FPersonality;
	System::UnicodeString FCaption;
	System::UnicodeString FComment;
	System::UnicodeString FName;
	System::UnicodeString FID;
	System::UnicodeString FIcon;
	System::UnicodeString __fastcall GetIDString(void);
	System::UnicodeString __fastcall GetName(void);
	System::UnicodeString __fastcall GetAuthor(void);
	System::UnicodeString __fastcall GetComment(void);
	unsigned __fastcall GetGlyph(void);
	Toolsapi::TWizardState __fastcall GetState(void);
	Toolsapi::_di_IOTAGalleryCategory __fastcall GetGalleryCategory(void);
	System::UnicodeString __fastcall GetPersonality(void);
	System::UnicodeString __fastcall GetDesigner(void);
	
protected:
	virtual System::UnicodeString __fastcall GetPage(void);
	virtual void __fastcall Execute(void);
	
public:
	__fastcall virtual ~TNewDataSnapAppExpert(void);
	__fastcall TNewDataSnapAppExpert(const System::UnicodeString APersonality, const System::UnicodeString ACaption, const System::UnicodeString AComment, const System::UnicodeString AName, const System::UnicodeString AID, const System::UnicodeString AIcon);
	__property System::UnicodeString Personality = {read=FPersonality};
	__property System::UnicodeString Caption = {read=FCaption};
private:
	void *__IOTARepositoryWizard80;	/* Toolsapi::IOTARepositoryWizard80 */
	void *__IOTAProjectWizard;	/* Toolsapi::IOTAProjectWizard */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTARepositoryWizard80()
	{
		Toolsapi::_di_IOTARepositoryWizard80 intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard80*(void) { return (Toolsapi::IOTARepositoryWizard80*)&__IOTARepositoryWizard80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTAProjectWizard()
	{
		Toolsapi::_di_IOTAProjectWizard intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAProjectWizard*(void) { return (Toolsapi::IOTAProjectWizard*)&__IOTAProjectWizard; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTARepositoryWizard()
	{
		Toolsapi::_di_IOTARepositoryWizard intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTARepositoryWizard*(void) { return (Toolsapi::IOTARepositoryWizard*)&__IOTARepositoryWizard80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTAWizard()
	{
		Toolsapi::_di_IOTAWizard intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAWizard*(void) { return (Toolsapi::IOTAWizard*)&__IOTARepositoryWizard80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Toolsapi::_di_IOTANotifier()
	{
		Toolsapi::_di_IOTANotifier intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTANotifier*(void) { return (Toolsapi::IOTANotifier*)&__IOTARepositoryWizard80; }
	#endif
	
};


#pragma option push -b-
enum TDSServerFeature { dsNull, dsProtocols, dsFilters, dsTCPProtocol, dsHTTPProtocol, dsHTTPSProtocol, dsAuthentication, dsServerMethodClass, dsSampleMethods, dsAuthorization, dsRSAFilter, dsPC1Filter, dsZLibFilter, dsProjectLocation, dsWebServerPort };
#pragma option pop

typedef System::Set<TDSServerFeature, TDSServerFeature::dsNull, TDSServerFeature::dsWebServerPort>  TDSServerFeatures;

class DELPHICLASS TDSServerPageClass;
class PASCALIMPLEMENTATION TDSServerPageClass : public Dsmrwizardcommon::TDSPageClass
{
	typedef Dsmrwizardcommon::TDSPageClass inherited;
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	TDSServerFeatures Filter;
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDSServerPageClass(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDSServerPageClass(void) : Dsmrwizardcommon::TDSPageClass() { }
	
};


class DELPHICLASS TDSServerMrWizard;
class PASCALIMPLEMENTATION TDSServerMrWizard : public Dsmrwizardcommon::TDSPageListMrWizard
{
	typedef Dsmrwizardcommon::TDSPageListMrWizard inherited;
	
private:
	TDSServerFeatures FNotCheckableFeatures;
	TDSServerFeatures FAvailableFeatures;
	TDSServerFeatures FSelectedFeatures;
	TDSServerFeatures FRequiredFeatures;
	Dsserverclasswizardpage::_di_IDSServerClassNameWizardPage FDSServerClassNameWizardPage;
	Dsprojectlocationwizardpage::_di_IDSProjectLocationWizardPage FDSProjectLocationWizardPage;
	Wizardapi::_di_IFeaturesPage FDSFeaturesWizardPage;
	Dsportswizardpage::_di_IDSPortsWizardPage FDSPortsWizardPage;
	Dsportswizardpage::_di_IDSPortsWizardPage FDSWebServerPortWizardPage;
	Wizardapi::_di_IFeaturesPage __fastcall GetDSFeaturesWizardPage(void);
	Dsserverclasswizardpage::_di_IDSServerClassNameWizardPage __fastcall GetDSServerClassNameWizardPage(void);
	Dsprojectlocationwizardpage::_di_IDSProjectLocationWizardPage __fastcall GetDSProjectLocationWizardPage(void);
	Dsportswizardpage::_di_IDSPortsWizardPage __fastcall GetDSPortsWizardPage(void);
	void __fastcall OnFeatureChecked(const Wizardapi::_di_IFeaturesPage Sender);
	void __fastcall OnFeatureSelected(const Wizardapi::_di_IFeaturesPage Sender);
	void __fastcall UpdateSelectedFeatures(void);
	void __fastcall UpdateFeaturePageInfo(void);
	Dsportswizardpage::_di_IDSPortsWizardPage __fastcall CreateDSPortsWizardPage(const System::UnicodeString AName);
	Dsportswizardpage::_di_IDSPortsWizardPage __fastcall GetDSWebServerPortWizardPage(void);
	void __fastcall UpdatePorts(const Dsportswizardpage::_di_IDSPortsWizardPage APage);
	
protected:
	virtual Graphics::TBitmap* __fastcall LoadImage(const System::UnicodeString AImageName)/* overload */;
	virtual void __fastcall OnEnterPage(Wizardapi::_di_IWizardPage LastPage, Wizardapi::_di_IWizardPage CurrentPage, Wizardapi::TPageTransition PageTransition);
	virtual void __fastcall OnLeavePage(Wizardapi::_di_IWizardPage CurrentPage, Wizardapi::TPageTransition PageTransition);
	virtual void __fastcall OnLeavingPage(Wizardapi::_di_IWizardPage WizardPage, Wizardapi::TPageTransition PageTransition, bool &Allow);
	virtual bool __fastcall CanFinish(void);
	virtual void __fastcall GetPageList(Generics_collections::TList__1<Dsmrwizardcommon::TDSPageClass*>* AList);
	virtual bool __fastcall IsPageSelected(Dsmrwizardcommon::TDSPageClass* APage);
	virtual Wizardapi::_di_IWizardPage __fastcall CreateWizardPage(Dsmrwizardcommon::TDSPageClass* APage);
	virtual void __fastcall InitializeFeatures(void);
	__property TDSServerFeatures AvailableFeatures = {read=FAvailableFeatures, write=FAvailableFeatures, nodefault};
	__property TDSServerFeatures SelectedFeatures = {read=FSelectedFeatures, write=FSelectedFeatures, nodefault};
	__property TDSServerFeatures RequiredFeatures = {read=FRequiredFeatures, write=FRequiredFeatures, nodefault};
	
public:
	__fastcall TDSServerMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName);
	bool __fastcall IsFeatureEnabled(TDSServerFeature AFeature);
	System::UnicodeString __fastcall GetProjectLocation(void);
	System::UnicodeString __fastcall GetAncestorClass(void);
	int __fastcall GetPort(Dsportswizardpage::TDSAvailablePort I);
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSServerMrWizard(void) { }
	
/* Hoisted overloads: */
	
protected:
	inline Graphics::TBitmap* __fastcall  LoadImage(unsigned Instance, const System::UnicodeString ResourceName){ return Dsmrwizardcommon::TCustomPageMrWizard::LoadImage(Instance, ResourceName); }
	
};


class DELPHICLASS TDSWebBrokerServerMrWizard;
class PASCALIMPLEMENTATION TDSWebBrokerServerMrWizard : public TDSServerMrWizard
{
	typedef TDSServerMrWizard inherited;
	
private:
	Webserverwizardpage::_di_IWebServerWizardPage FWebServerWizardPage;
	Wizardapi::_di_IWizardPage __fastcall HandleFirstPage(const Wizardapi::_di_IWizardPage CurrentPage);
	void __fastcall OnProjectTypeChange(System::TObject* Sender);
	
protected:
	virtual void __fastcall InitializeFeatures(void);
	virtual Inetwiz::_di_IWebProjectCreatorExt __fastcall GetWebProjectCreatorExt(void);
	virtual void __fastcall Finish(void);
	virtual void __fastcall AddFirstPage(/* out */ GUID &AID, /* out */ System::UnicodeString &AName);
	virtual Wizardapi::_di_IWizardPage __fastcall GetFirstPage(void);
public:
	/* TDSServerMrWizard.Create */ inline __fastcall TDSWebBrokerServerMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName) : TDSServerMrWizard(APersonality, ACaption, AHelpContext, AImageName, AOptionsFileName) { }
	
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSWebBrokerServerMrWizard(void) { }
	
};


class DELPHICLASS TDSStandaloneServerMrWizard;
class PASCALIMPLEMENTATION TDSStandaloneServerMrWizard : public TDSServerMrWizard
{
	typedef TDSServerMrWizard inherited;
	
private:
	Dsstandaloneappwizardpage::_di_IDSStandAloneAppWizardPage FDSStandAloneAppWizardPage;
	Wizardapi::_di_IWizardPage __fastcall HandleFirstPage(const Wizardapi::_di_IWizardPage CurrentPage);
	Dsstandaloneappwizardpage::_di_IDSStandAloneAppWizardPage __fastcall GetDSStandAloneAppWizardPage(void);
	Dsstandalonecreators::TProjectType __fastcall GetProjectType(void);
	
protected:
	virtual void __fastcall InitializeFeatures(void);
	virtual void __fastcall GetProjectDescription(Dsstandalonecreators::TProjectDescription &AProjectDescription);
	virtual void __fastcall Finish(void);
	virtual void __fastcall AddFirstPage(/* out */ GUID &AID, /* out */ System::UnicodeString &AName);
	virtual Wizardapi::_di_IWizardPage __fastcall GetFirstPage(void);
	
public:
	__property Dsstandalonecreators::TProjectType ProjectType = {read=GetProjectType, nodefault};
public:
	/* TDSServerMrWizard.Create */ inline __fastcall TDSStandaloneServerMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName) : TDSServerMrWizard(APersonality, ACaption, AHelpContext, AImageName, AOptionsFileName) { }
	
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSStandaloneServerMrWizard(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsservermrwizard */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsservermrwizard;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsservermrwizardHPP
