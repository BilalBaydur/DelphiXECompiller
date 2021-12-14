// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwDBNavEdt.pas' rev: 22.00

#ifndef WwdbnavedtHPP
#define WwdbnavedtHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <wwDBNavigator.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <wwCollection.hpp>	// Pascal unit
#include <wwCollectionEditor.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Wwprpedt.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbnavedt
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDBNavigatorEditorEvents;
class PASCALIMPLEMENTATION TwwDBNavigatorEditorEvents : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod void __fastcall AddInfoPowerDialogsClick(System::TObject* Sender);
public:
	/* TObject.Create */ inline __fastcall TwwDBNavigatorEditorEvents(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TwwDBNavigatorEditorEvents(void) { }
	
};


class DELPHICLASS TwwDBNavigatorButtonsEditor;
class PASCALIMPLEMENTATION TwwDBNavigatorButtonsEditor : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
	void __fastcall CollectionCustomize(Wwcollectioneditor::TwwCollectionEditorForm* EditorForm);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwDBNavigatorButtonsEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwDBNavigatorButtonsEditor(void) { }
	
};


class DELPHICLASS TwwNavButtonEditor;
class PASCALIMPLEMENTATION TwwNavButtonEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	__fastcall virtual TwwNavButtonEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner);
	__fastcall virtual ~TwwNavButtonEditor(void);
};


class DELPHICLASS TwwDBNavigatorEditor;
class PASCALIMPLEMENTATION TwwDBNavigatorEditor : public Wwprpedt::TwwComponentEditor
{
	typedef Wwprpedt::TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
	void __fastcall CollectionCustomize(Wwcollectioneditor::TwwCollectionEditorForm* EditorForm);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwDBNavigatorEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Wwprpedt::TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwDBNavigatorEditor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt WW_ADD_BUTTON = 0x0;
static const System::ShortInt WW_ADD_INFOPOWERDIALOGS = 0x1;
static const System::ShortInt WW_SELECT_ALL = 0x2;
static const System::ShortInt WW_VERB_COUNT = 0x3;

}	/* namespace Wwdbnavedt */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbnavedt;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbnavedtHPP
