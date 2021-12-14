// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSMrWizardCommon.pas' rev: 22.00

#ifndef DsmrwizardcommonHPP
#define DsmrwizardcommonHPP

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
#include <Generics.Collections.hpp>	// Pascal unit
#include <WizardIniOptions.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsmrwizardcommon
{
//-- type declarations -------------------------------------------------------
__interface IDsWizardImage;
typedef System::DelphiInterface<IDsWizardImage> _di_IDsWizardImage;
__interface  INTERFACE_UUID("{6B5D8B03-6C84-4276-92A0-6F76D50E8315}") IDsWizardImage  : public System::IInterface 
{
	
public:
	virtual Graphics::TBitmap* __fastcall GetImage(void) = 0 ;
	virtual Graphics::TBitmap* __fastcall LoadImage(void) = 0 ;
};

class DELPHICLASS TCustomPageMrWizard;
class PASCALIMPLEMENTATION TCustomPageMrWizard : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Wizardapi::_di_IWizard FWizard;
	System::UnicodeString FPersonality;
	int FHelpContext;
	System::UnicodeString FCaption;
	System::UnicodeString FImageName;
	Graphics::TBitmap* FBitmap;
	Wizardinioptions::TWizardIniOptions* FUIOptions;
	void __fastcall InitOptions(const System::UnicodeString AOptionsFileName);
	
private:
	void __fastcall Start(void);
	Wizardapi::_di_IWizardPage __fastcall FirstPage(void);
	void __fastcall Cancel(void);
	Wizardapi::_di_IWizard __fastcall GetWizard(void);
	void __fastcall SetWizard(const Wizardapi::_di_IWizard Value);
	System::UnicodeString __fastcall GetPersonality(void);
	Graphics::TBitmap* __fastcall GetImage(void);
	Graphics::TBitmap* __fastcall LoadImage(void)/* overload */;
	
protected:
	Graphics::TBitmap* __fastcall LoadImage(unsigned Instance, const System::UnicodeString ResourceName)/* overload */;
	virtual Graphics::TBitmap* __fastcall LoadImage(const System::UnicodeString ResourceName) = 0 /* overload */;
	bool __fastcall CreatePage(const GUID &IID, /* out */ void *Intf, const System::UnicodeString name = L"");
	virtual Wizardapi::_di_IWizardPage __fastcall GetFirstPage(void);
	virtual void __fastcall Finish(void);
	System::UnicodeString __fastcall Caption(void);
	int __fastcall GetHelpContext(void);
	virtual void __fastcall AddFirstPage(/* out */ GUID &AID, /* out */ System::UnicodeString &AName);
	virtual void __fastcall AddCustomPages(const GUID &ParentID, const System::UnicodeString ParentName);
	virtual bool __fastcall HasCustomPages(void);
	virtual Wizardapi::_di_IWizardPage __fastcall FirstCustomPage(void);
	virtual bool __fastcall CanFinish(void);
	__property Wizardapi::_di_IWizard Wizard = {read=GetWizard};
	__property System::UnicodeString Personality = {read=FPersonality};
	
public:
	__fastcall TCustomPageMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImage, const System::UnicodeString AOptionsFile);
	__fastcall virtual ~TCustomPageMrWizard(void);
private:
	void *__IDsWizardImage;	/* IDsWizardImage */
	void *__IMrWizard;	/* Wizardapi::IMrWizard */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDsWizardImage()
	{
		_di_IDsWizardImage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDsWizardImage*(void) { return (IDsWizardImage*)&__IDsWizardImage; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wizardapi::_di_IMrWizard()
	{
		Wizardapi::_di_IMrWizard intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Wizardapi::IMrWizard*(void) { return (Wizardapi::IMrWizard*)&__IMrWizard; }
	#endif
	
};


class DELPHICLASS TDSPageClass;
class PASCALIMPLEMENTATION TDSPageClass : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	System::UnicodeString Name;
	#pragma pack(push,1)
	GUID Guid;
	#pragma pack(pop)
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TDSPageClass(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDSPageClass(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TDSPageListMrWizard;
class PASCALIMPLEMENTATION TDSPageListMrWizard : public TCustomPageMrWizard
{
	typedef TCustomPageMrWizard inherited;
	
private:
	Generics_collections::TDictionary__2<System::UnicodeString,TDSPageClass*>* __fastcall GetNextPageDictionary(void);
	void __fastcall UpdatePageCount(Generics_collections::TList__1<TDSPageClass*>* AList)/* overload */;
	Generics_collections::TList__1<TDSPageClass*>* __fastcall GetSelectedPageList(void);
	TDSPageClass* __fastcall ClonePage(TDSPageClass* APage);
	
protected:
	void __fastcall UpdatePageCount(void)/* overload */;
	virtual void __fastcall OnEnterPage(Wizardapi::_di_IWizardPage LastPage, Wizardapi::_di_IWizardPage CurrentPage, Wizardapi::TPageTransition PageTransition);
	virtual void __fastcall OnLeavePage(Wizardapi::_di_IWizardPage WizardPage, Wizardapi::TPageTransition PageTransition);
	virtual void __fastcall OnLeavingPage(Wizardapi::_di_IWizardPage WizardPage, Wizardapi::TPageTransition PageTransition, bool &Allow);
	virtual bool __fastcall IsPageSelected(TDSPageClass* APage);
	virtual Wizardapi::_di_IWizardPage __fastcall CreateWizardPage(TDSPageClass* APage);
	virtual void __fastcall GetPageList(Generics_collections::TList__1<TDSPageClass*>* AList);
	Wizardapi::_di_IWizardPage __fastcall HandleNextPage(const Wizardapi::_di_IWizardPage CurrentPage);
	virtual void __fastcall AddCustomPages(const GUID &ParentID, const System::UnicodeString ParentName);
	virtual bool __fastcall HasCustomPages(void);
	virtual Wizardapi::_di_IWizardPage __fastcall FirstCustomPage(void);
	
public:
	__fastcall TDSPageListMrWizard(const System::UnicodeString APersonality, const System::UnicodeString ACaption, int AHelpContext, const System::UnicodeString AImageName, const System::UnicodeString AOptionsFileName);
public:
	/* TCustomPageMrWizard.Destroy */ inline __fastcall virtual ~TDSPageListMrWizard(void) { }
	
private:
	void *__IWizardEvents;	/* Wizardapi::IWizardEvents */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wizardapi::_di_IWizardEvents()
	{
		Wizardapi::_di_IWizardEvents intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Wizardapi::IWizardEvents*(void) { return (Wizardapi::IWizardEvents*)&__IWizardEvents; }
	#endif
	
};


class DELPHICLASS TDSWizardPage;
class PASCALIMPLEMENTATION TDSWizardPage : public Wizardapi::TWizardPage
{
	typedef Wizardapi::TWizardPage inherited;
	
private:
	#pragma pack(push,1)
	GUID FID;
	#pragma pack(pop)
	HIDESBASE bool __fastcall Close(void);
	HIDESBASE void __fastcall Clear(void);
	void __fastcall OnEnterPage(Wizardapi::TPageTransition PageTransition);
	void __fastcall OnLeavePage(Wizardapi::TPageTransition PageTransition);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	HIDESBASE virtual Forms::TFrame* __fastcall Page(void);
	virtual void __fastcall OnLeavingPage(Wizardapi::TPageTransition PageTransition, bool &Allow);
	
public:
	virtual GUID __fastcall PageID(void);
	__fastcall TDSWizardPage(const GUID &AID, const System::UnicodeString AName, const System::UnicodeString ATitle, const System::UnicodeString ADescription);
	virtual Graphics::TBitmap* __fastcall GetImage(void);
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSWizardPage(void) { }
	
private:
	void *__IWizardPageEvents;	/* Wizardapi::IWizardPageEvents */
	void *__IWizardPage;	/* Wizardapi::IWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wizardapi::_di_IWizardPageEvents()
	{
		Wizardapi::_di_IWizardPageEvents intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Wizardapi::IWizardPageEvents*(void) { return (Wizardapi::IWizardPageEvents*)&__IWizardPageEvents; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wizardapi::_di_IWizardPage()
	{
		Wizardapi::_di_IWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Wizardapi::IWizardPage*(void) { return (Wizardapi::IWizardPage*)&__IWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt cRadioLeftMargin = 0xa;
static const System::ShortInt cLabelLeftMargin = 0xa;

}	/* namespace Dsmrwizardcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsmrwizardcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsmrwizardcommonHPP
