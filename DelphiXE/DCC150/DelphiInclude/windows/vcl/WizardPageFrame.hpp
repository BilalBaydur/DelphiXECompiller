// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WizardPageFrame.pas' rev: 22.00

#ifndef WizardpageframeHPP
#define WizardpageframeHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <WizardContentFrame.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wizardpageframe
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TWizardPageDirection { wpdNone, wpdBack, wpdNext };
#pragma option pop

typedef void __fastcall (__closure *TBeforePageChangeEvent)(System::TObject* Sender, Wizardcontentframe::TfmWizardContent* Page, const TWizardPageDirection Direction, bool &Allow);

class DELPHICLASS TfmWizardPage;
class PASCALIMPLEMENTATION TfmWizardPage : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TLabel* MainInstruction;
	Stdctrls::TLabel* Content;
	Extctrls::TPanel* Page;
	Extctrls::TPanel* ContentPanel;
	
private:
	Generics_collections::TObjectList__1<Wizardcontentframe::TfmWizardContent*>* FPages;
	int FActivePageIndex;
	Wizardcontentframe::TfmWizardContent* FActivePage;
	Classes::TNotifyEvent FOnPageChange;
	TBeforePageChangeEvent FOnBeforePageChange;
	TWizardPageDirection FDirection;
	Classes::TStringList* FHiddenPages;
	void __fastcall SetActivePageIndex(const int Value);
	MESSAGE void __fastcall SetFocusControl(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall DoPageChange(void);
	virtual void __fastcall DoBeforePageChange(Wizardcontentframe::TfmWizardContent* APage, bool &aAllow);
	
public:
	__fastcall virtual TfmWizardPage(Classes::TComponent* AOwner);
	__fastcall virtual ~TfmWizardPage(void);
	void __fastcall AddPages(Wizardcontentframe::TfmWizardContent* APage);
	void __fastcall InsertPage(const int aIndex, Wizardcontentframe::TfmWizardContent* APage);
	void __fastcall RemovePage(const int aIndex)/* overload */;
	void __fastcall RemovePage(Wizardcontentframe::TfmWizardContent* APage)/* overload */;
	void __fastcall HidePage(Wizardcontentframe::TfmWizardContent* APage);
	void __fastcall ShowPage(Wizardcontentframe::TfmWizardContent* APage);
	void __fastcall MoveNext(void);
	void __fastcall MoveBack(void);
	void __fastcall Initialise(void);
	__property Wizardcontentframe::TfmWizardContent* ActivePage = {read=FActivePage};
	__property int ActivePageIndex = {read=FActivePageIndex, write=SetActivePageIndex, nodefault};
	__property Classes::TNotifyEvent OnPageChange = {read=FOnPageChange, write=FOnPageChange};
	__property TBeforePageChangeEvent OnBeforePageChange = {read=FOnBeforePageChange, write=FOnBeforePageChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TfmWizardPage(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wizardpageframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wizardpageframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WizardpageframeHPP
