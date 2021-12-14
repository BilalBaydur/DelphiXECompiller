// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSStandAloneAppWizardPage.pas' rev: 22.00

#ifndef DsstandaloneappwizardpageHPP
#define DsstandaloneappwizardpageHPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <AppEvnts.hpp>	// Pascal unit
#include <InetWiz.hpp>	// Pascal unit
#include <DSStandAloneCreators.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsstandaloneappwizardpage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSStandAloneAppWizardFrame;
class PASCALIMPLEMENTATION TDSStandAloneAppWizardFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TRadioButton* rbVCLApp;
	Stdctrls::TRadioButton* rbConsoleApp;
	Stdctrls::TRadioButton* rbServiceApp;
	void __fastcall OnRadioClick(System::TObject* Sender);
	
private:
	Classes::TNotifyEvent FOnProjectTypeChange;
	Dsstandalonecreators::TProjectType __fastcall GetProjectType(void);
	void __fastcall SetProjectType(Dsstandalonecreators::TProjectType AProjectType);
	int __fastcall GetLeftMargin(void);
	void __fastcall SetLeftMargin(const int Value);
	
public:
	__property Dsstandalonecreators::TProjectType ProjectType = {read=GetProjectType, write=SetProjectType, nodefault};
	__property Classes::TNotifyEvent OnProjectTypeChange = {read=FOnProjectTypeChange, write=FOnProjectTypeChange};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSStandAloneAppWizardFrame(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSStandAloneAppWizardFrame(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSStandAloneAppWizardFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSStandAloneAppWizardPage;
typedef System::DelphiInterface<IDSStandAloneAppWizardPage> _di_IDSStandAloneAppWizardPage;
__interface  INTERFACE_UUID("{700C4143-9D85-4FFD-9E14-5CBF10474E1E}") IDSStandAloneAppWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual Dsstandalonecreators::TProjectType __fastcall GetProjectType(void) = 0 ;
	__property Dsstandalonecreators::TProjectType ProjectType = {read=GetProjectType};
};

class DELPHICLASS TDSStandAloneAppWizardPage;
class PASCALIMPLEMENTATION TDSStandAloneAppWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TDSStandAloneAppWizardFrame* FFrame;
	Dsstandalonecreators::TProjectType FProjectType;
	void __fastcall OnProjectTypeChange(System::TObject* ASender);
	Dsstandalonecreators::TProjectType __fastcall GetProjectType(void);
	System::UnicodeString __fastcall GetWizardInfo(Dsstandalonecreators::TProjectType AProjectType);
	void __fastcall SetProjectType(const Dsstandalonecreators::TProjectType Value);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	
public:
	__fastcall TDSStandAloneAppWizardPage(void);
	__property Dsstandalonecreators::TProjectType ProjectType = {read=GetProjectType, write=SetProjectType, nodefault};
public:
	/* TWizardPage.Destroy */ inline __fastcall virtual ~TDSStandAloneAppWizardPage(void) { }
	
private:
	void *__IDSStandAloneAppWizardPage;	/* IDSStandAloneAppWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSStandAloneAppWizardPage()
	{
		_di_IDSStandAloneAppWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSStandAloneAppWizardPage*(void) { return (IDSStandAloneAppWizardPage*)&__IDSStandAloneAppWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSStandAloneAppWizardPage L"sDSStandAloneAppWizardPage"

}	/* namespace Dsstandaloneappwizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsstandaloneappwizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsstandaloneappwizardpageHPP
