// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WizardContentFrame.pas' rev: 22.00

#ifndef WizardcontentframeHPP
#define WizardcontentframeHPP

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

//-- user supplied -----------------------------------------------------------

namespace Wizardcontentframe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TfmWizardContent;
class PASCALIMPLEMENTATION TfmWizardContent : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
private:
	bool FFirstActivation;
	bool FCanShowPage;
	
public:
	__fastcall virtual TfmWizardContent(Classes::TComponent* AOwner);
	virtual bool __fastcall CanMoveNext(void);
	virtual bool __fastcall CanMoveBack(void);
	virtual bool __fastcall CanFinish(void);
	virtual System::UnicodeString __fastcall FinishButtonCaption(void);
	virtual System::UnicodeString __fastcall MainInstruction(void);
	virtual System::UnicodeString __fastcall Content(void);
	virtual bool __fastcall ValidatePage(void);
	virtual Controls::TWinControl* __fastcall FocusControl(void);
	virtual void __fastcall Activate(void);
	virtual void __fastcall FirstActivation(void);
	__property bool CanShowPage = {read=FCanShowPage, write=FCanShowPage, nodefault};
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TfmWizardContent(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TfmWizardContent(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wizardcontentframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wizardcontentframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WizardcontentframeHPP
