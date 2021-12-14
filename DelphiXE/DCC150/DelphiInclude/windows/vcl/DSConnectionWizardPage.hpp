// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSConnectionWizardPage.pas' rev: 22.00

#ifndef DsconnectionwizardpageHPP
#define DsconnectionwizardpageHPP

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
#include <Generics.Collections.hpp>	// Pascal unit
#include <AppEvnts.hpp>	// Pascal unit
#include <DSMrWizardCommon.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsconnectionwizardpage
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TConnectionPageType { cpHTTP, cpTCPIP };
#pragma option pop

#pragma option push -b-
enum TConnectionPageControlID { hcNone, hcHost, hcPort, hcHTTPS, hcUrlPath, hcContext, hcPassword, hcUserName };
#pragma option pop

typedef System::Set<TConnectionPageControlID, TConnectionPageControlID::hcNone, TConnectionPageControlID::hcUserName>  TConnectionPageControlIDs;

class DELPHICLASS TConnectionPageControl;
class PASCALIMPLEMENTATION TConnectionPageControl : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static int FHeight;
	bool __fastcall GetChecked(void);
	System::UnicodeString __fastcall GetText(void);
	void __fastcall SetChecked(const bool Value);
	void __fastcall SetText(const System::UnicodeString Value);
	
private:
	Stdctrls::TEdit* FEditControl;
	Stdctrls::TLabel* FLabelControl;
	Stdctrls::TCheckBox* FCheckBoxControl;
	TConnectionPageControlID FControlID;
	
public:
	__fastcall TConnectionPageControl(Stdctrls::TLabel* ALabel, Stdctrls::TEdit* AEdit, TConnectionPageControlID AControlID)/* overload */;
	__fastcall TConnectionPageControl(Stdctrls::TCheckBox* ACheckBox, TConnectionPageControlID AControlID)/* overload */;
	bool __fastcall Focused(void);
	bool __fastcall GetVisible(void);
	void __fastcall MoveTop(int Y);
	void __fastcall SetVisible(const bool Value);
	int __fastcall GetHeight(void);
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property Stdctrls::TEdit* EditControl = {read=FEditControl};
	__property Stdctrls::TLabel* LabelControl = {read=FLabelControl};
	__property Stdctrls::TCheckBox* CheckBoxControl = {read=FCheckBoxControl};
	__property TConnectionPageControlID ControlID = {read=FControlID, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TConnectionPageControl(void) { }
	
};


class DELPHICLASS TDSConnectionWizardFrame;
class PASCALIMPLEMENTATION TDSConnectionWizardFrame : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Appevnts::TApplicationEvents* ApplicationEvents1;
	Stdctrls::TLabel* LabelPort;
	Stdctrls::TLabel* LabelEditHost;
	Stdctrls::TLabel* LabelUserName;
	Stdctrls::TLabel* LabelPasword;
	Stdctrls::TLabel* LabelURLPath;
	Stdctrls::TLabel* LabelContext;
	Stdctrls::TEdit* EditPort;
	Stdctrls::TEdit* EditHost;
	Stdctrls::TEdit* EditUrlPath;
	Stdctrls::TEdit* EditUserName;
	Stdctrls::TEdit* EditPassword;
	Stdctrls::TEdit* EditContext;
	Stdctrls::TCheckBox* CheckBoxHTTPS;
	Stdctrls::TButton* ButtonTestConnection;
	void __fastcall ApplicationEvents1Idle(System::TObject* Sender, bool &Done);
	void __fastcall ButtonTestConnectionClick(System::TObject* Sender);
	
private:
	TConnectionPageType FType;
	TConnectionPageControlIDs FAllowedControls;
	TConnectionPageControlIDs FHiddenControls;
	TConnectionPageControlID FFocusedControl;
	int FLeftMargin;
	Classes::TNotifyEvent FOnTestConnection;
	Classes::TNotifyEvent FOnFocusedControlChange;
	Generics_collections::TList__1<TConnectionPageControl*>* FControls;
	Generics_collections::TDictionary__2<TConnectionPageControlID,TConnectionPageControl*>* FControlsDictionary;
	void __fastcall SetLeftMargin(const int Value);
	void __fastcall SetFocusedControl(const TConnectionPageControlID Value);
	void __fastcall HideShowControls(void);
	void __fastcall SetHiddenControls(const TConnectionPageControlIDs Value);
	void __fastcall SetAllowedControls(const TConnectionPageControlIDs Value);
	System::UnicodeString __fastcall GetControlText(TConnectionPageControlID I);
	void __fastcall SetControlText(TConnectionPageControlID I, const System::UnicodeString Value);
	void __fastcall SetControlFocus(TConnectionPageControlID I);
	bool __fastcall ValidateFields(void);
	
public:
	__fastcall virtual TDSConnectionWizardFrame(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSConnectionWizardFrame(void);
	__property TConnectionPageControlIDs HiddenControls = {read=FHiddenControls, write=SetHiddenControls, nodefault};
	__property int LeftMargin = {read=FLeftMargin, write=SetLeftMargin, nodefault};
	__property TConnectionPageControlID FocusedControl = {read=FFocusedControl, write=SetFocusedControl, nodefault};
	__property Classes::TNotifyEvent OnFocusedControlChange = {read=FOnFocusedControlChange, write=FOnFocusedControlChange};
	__property TConnectionPageControlIDs AllowedControls = {read=FAllowedControls, write=SetAllowedControls, nodefault};
	__property System::UnicodeString ControlText[TConnectionPageControlID I] = {read=GetControlText, write=SetControlText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSConnectionWizardFrame(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


__interface IDSConnectionWizardPage;
typedef System::DelphiInterface<IDSConnectionWizardPage> _di_IDSConnectionWizardPage;
__interface  INTERFACE_UUID("{C8794655-BE51-4DCC-BBD0-5B9484057DEF}") IDSConnectionWizardPage  : public Wizardapi::IWizardPage 
{
	
public:
	virtual TDSConnectionWizardFrame* __fastcall GetFrame(void) = 0 ;
	virtual void __fastcall SetLeftMargin(const int Value) = 0 ;
	virtual bool __fastcall GetHTTPS(void) = 0 ;
	virtual void __fastcall SetHTTPS(bool AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetControlText(TConnectionPageControlID I) = 0 ;
	virtual void __fastcall SetControlText(TConnectionPageControlID I, System::UnicodeString AValue) = 0 ;
	virtual int __fastcall GetLeftMargin(void) = 0 ;
	virtual void __fastcall SetHiddenControls(const TConnectionPageControlIDs Value) = 0 ;
	virtual TConnectionPageControlIDs __fastcall GetHiddenControls(void) = 0 ;
	virtual Classes::TNotifyEvent __fastcall GetOnTestConnection(void) = 0 ;
	virtual void __fastcall SetOnTestConnection(Classes::TNotifyEvent ANotifyEvent) = 0 ;
	__property TDSConnectionWizardFrame* Frame = {read=GetFrame};
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin};
	__property TConnectionPageControlIDs HiddenControls = {read=GetHiddenControls, write=SetHiddenControls};
	__property bool HTTPS = {read=GetHTTPS, write=SetHTTPS};
	__property System::UnicodeString ControlText[TConnectionPageControlID I] = {read=GetControlText, write=SetControlText};
	__property Classes::TNotifyEvent OnTestConnection = {read=GetOnTestConnection, write=SetOnTestConnection};
};

struct DECLSPEC_DRECORD TConnectionPageControlInfo
{
	
public:
	TConnectionPageControlID ID;
	System::UnicodeString HTTPInfo;
	System::UnicodeString TCPIPInfo;
};


class DELPHICLASS TDSConnectionWizardPage;
class PASCALIMPLEMENTATION TDSConnectionWizardPage : public Dsmrwizardcommon::TDSWizardPage
{
	typedef Dsmrwizardcommon::TDSWizardPage inherited;
	
private:
	TConnectionPageType FType;
	int FLeftMargin;
	TDSConnectionWizardFrame* FFrame;
	TConnectionPageControlIDs FHiddenControls;
	TConnectionPageControlIDs FAllowedControls;
	Generics_collections::TDictionary__2<TConnectionPageControlID,TConnectionPageControlInfo>* FInfoDictionary;
	bool FHTTPS;
	Generics_collections::TDictionary__2<TConnectionPageControlID,System::UnicodeString>* FControlText;
	Classes::TNotifyEvent FOnTestConnection;
	void __fastcall SetLeftMargin(const int Value);
	int __fastcall GetLeftMargin(void);
	void __fastcall OnFocusedControlChange(System::TObject* Sender);
	bool __fastcall GetHTTPS(void);
	void __fastcall SetHTTPS(bool AValue);
	System::UnicodeString __fastcall GetControlText(TConnectionPageControlID I);
	void __fastcall SetControlText(TConnectionPageControlID I, System::UnicodeString AValue);
	Classes::TNotifyEvent __fastcall GetOnTestConnection(void);
	void __fastcall SetOnTestConnection(Classes::TNotifyEvent ANotifyEvent);
	
protected:
	virtual void __fastcall UpdateInfo(void);
	virtual Forms::TFrame* __fastcall Page(void);
	virtual void __fastcall OnLeavingPage(Wizardapi::TPageTransition PageTransition, bool &Allow);
	void __fastcall SetHiddenControls(const TConnectionPageControlIDs Value);
	TConnectionPageControlIDs __fastcall GetHiddenControls(void);
	
public:
	__fastcall TDSConnectionWizardPage(TConnectionPageType AType);
	__fastcall virtual ~TDSConnectionWizardPage(void);
	TDSConnectionWizardFrame* __fastcall GetFrame(void);
private:
	void *__IDSConnectionWizardPage;	/* IDSConnectionWizardPage */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IDSConnectionWizardPage()
	{
		_di_IDSConnectionWizardPage intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IDSConnectionWizardPage*(void) { return (IDSConnectionWizardPage*)&__IDSConnectionWizardPage; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDSHTTPConnectionWizardPage L"sDSHTTPConnectionWizardPage"
#define sDSTCPIPConnectionWizardPage L"sDSTCPIPConnectionWizardPage"

}	/* namespace Dsconnectionwizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsconnectionwizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsconnectionwizardpageHPP
