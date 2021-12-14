// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwInspectorPrpEdt.pas' rev: 22.00

#ifndef WwinspectorprpedtHPP
#define WwinspectorprpedtHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <wwDataInspector.hpp>	// Pascal unit
#include <wwInspectorProp.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <Wwprpcom.hpp>	// Pascal unit
#include <Wwprpedt.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwinspectorprpedt
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwObjectViewComponentEditor;
class PASCALIMPLEMENTATION TwwObjectViewComponentEditor : public Wwprpedt::TwwComponentEditor
{
	typedef Wwprpedt::TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwObjectViewComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Wwprpedt::TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwObjectViewComponentEditor(void) { }
	
};


class DELPHICLASS TwwInspectorItemsProperty;
class PASCALIMPLEMENTATION TwwInspectorItemsProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwInspectorItemsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwInspectorItemsProperty(void) { }
	
};


class DELPHICLASS TwwCustomEditPropertyEditor;
class PASCALIMPLEMENTATION TwwCustomEditPropertyEditor : public Designeditors::TComponentProperty
{
	typedef Designeditors::TComponentProperty inherited;
	
public:
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
	void __fastcall wwGetStrProc(const System::UnicodeString s);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwCustomEditPropertyEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TComponentProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwCustomEditPropertyEditor(void) { }
	
};


class DELPHICLASS TwwDataFieldEditor;
class PASCALIMPLEMENTATION TwwDataFieldEditor : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwDataFieldEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwDataFieldEditor(void) { }
	
};


class DELPHICLASS TwwInspectorCollectionEditor;
class PASCALIMPLEMENTATION TwwInspectorCollectionEditor : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwInspectorCollectionEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwInspectorCollectionEditor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwinspectorprpedt */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwinspectorprpedt;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwinspectorprpedtHPP
