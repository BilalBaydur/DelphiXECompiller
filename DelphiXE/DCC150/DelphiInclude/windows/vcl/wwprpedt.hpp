// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwprpedt.pas' rev: 22.00

#ifndef WwprpedtHPP
#define WwprpedtHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Wwselfld.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <DBTables.hpp>	// Pascal unit
#include <Wwtable.hpp>	// Pascal unit
#include <Wwquery.hpp>	// Pascal unit
#include <Wwqbe.hpp>	// Pascal unit
#include <wwstorep.hpp>	// Pascal unit
#include <wwidlg.hpp>	// Pascal unit
#include <wwDataInspector.hpp>	// Pascal unit
#include <wwricheditbar.hpp>	// Pascal unit
#include <Wwlocate.hpp>	// Pascal unit
#include <Wwfltfld.hpp>	// Pascal unit
#include <wwfltdlg.hpp>	// Pascal unit
#include <wwrcdvw.hpp>	// Pascal unit
#include <wwrcdpnl.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <wwrich.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ipabout.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Wwrgxed2.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwprpedt
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwComponentEditor;
class PASCALIMPLEMENTATION TwwComponentEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
private:
	void __fastcall ShowAboutBox(void);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
	__fastcall virtual TwwComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwComponentEditor(void) { }
	
};


class DELPHICLASS TwwGridComponentEditor;
class PASCALIMPLEMENTATION TwwGridComponentEditor : public TwwComponentEditor
{
	typedef TwwComponentEditor inherited;
	
private:
	bool __fastcall SupportIniSave(void);
	
public:
	virtual int __fastcall GetVerbCount(void);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual void __fastcall ExecuteVerb(int Index);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwGridComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwGridComponentEditor(void) { }
	
};


class DELPHICLASS TwwIndexDefsProperty;
class PASCALIMPLEMENTATION TwwIndexDefsProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwIndexDefsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwIndexDefsProperty(void) { }
	
};


class DELPHICLASS TwwControllerListProperty;
class PASCALIMPLEMENTATION TwwControllerListProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwControllerListProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwControllerListProperty(void) { }
	
};


class DELPHICLASS TwwIndexFieldProperty;
class PASCALIMPLEMENTATION TwwIndexFieldProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwIndexFieldProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwIndexFieldProperty(void) { }
	
};


class DELPHICLASS TwwTableProperty;
class PASCALIMPLEMENTATION TwwTableProperty : public Designeditors::TComponentProperty
{
	typedef Designeditors::TComponentProperty inherited;
	
public:
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwTableProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TComponentProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwTableProperty(void) { }
	
};


class DELPHICLASS TwwSearchFieldProperty;
class PASCALIMPLEMENTATION TwwSearchFieldProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwSearchFieldProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwSearchFieldProperty(void) { }
	
};


class DELPHICLASS TwwDBLookupDisplayProperty;
class PASCALIMPLEMENTATION TwwDBLookupDisplayProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwDBLookupDisplayProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwDBLookupDisplayProperty(void) { }
	
};


class DELPHICLASS TwwTableDisplayProperty;
class PASCALIMPLEMENTATION TwwTableDisplayProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwTableDisplayProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwTableDisplayProperty(void) { }
	
};


class DELPHICLASS TwwDBLookupDisplayComponentEditor;
class PASCALIMPLEMENTATION TwwDBLookupDisplayComponentEditor : public TwwComponentEditor
{
	typedef TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwDBLookupDisplayComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwDBLookupDisplayComponentEditor(void) { }
	
};


class DELPHICLASS TSelectedFieldsProperty;
class PASCALIMPLEMENTATION TSelectedFieldsProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TSelectedFieldsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSelectedFieldsProperty(void) { }
	
};


class DELPHICLASS TwwDBGridComponentEditor;
class PASCALIMPLEMENTATION TwwDBGridComponentEditor : public TwwGridComponentEditor
{
	typedef TwwGridComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwDBGridComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwGridComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwDBGridComponentEditor(void) { }
	
};


class DELPHICLASS TwwRecordViewPanelComponentEditor;
class PASCALIMPLEMENTATION TwwRecordViewPanelComponentEditor : public TwwComponentEditor
{
	typedef TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwRecordViewPanelComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwRecordViewPanelComponentEditor(void) { }
	
};


class DELPHICLASS TwwObjPictureProperty;
class PASCALIMPLEMENTATION TwwObjPictureProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwObjPictureProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwObjPictureProperty(void) { }
	
};


class DELPHICLASS TwwFilterFieldsProperty;
class PASCALIMPLEMENTATION TwwFilterFieldsProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwFilterFieldsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwFilterFieldsProperty(void) { }
	
};


class DELPHICLASS TwwComboItemsProperty;
class PASCALIMPLEMENTATION TwwComboItemsProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwComboItemsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwComboItemsProperty(void) { }
	
};


class DELPHICLASS TwwMultiLineStringProperty;
class PASCALIMPLEMENTATION TwwMultiLineStringProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual void __fastcall SetValue(const System::UnicodeString value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwMultiLineStringProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwMultiLineStringProperty(void) { }
	
/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};


class DELPHICLASS TwwPictureProperty;
class PASCALIMPLEMENTATION TwwPictureProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwPictureProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwPictureProperty(void) { }
	
};


class DELPHICLASS TwwPicturePropertyGen;
class PASCALIMPLEMENTATION TwwPicturePropertyGen : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwPicturePropertyGen(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwPicturePropertyGen(void) { }
	
};


class DELPHICLASS TwwRegexProperty;
class PASCALIMPLEMENTATION TwwRegexProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwRegexProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwRegexProperty(void) { }
	
};


class DELPHICLASS TwwRecordViewComponentEditor;
class PASCALIMPLEMENTATION TwwRecordViewComponentEditor : public TwwComponentEditor
{
	typedef TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwRecordViewComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwRecordViewComponentEditor(void) { }
	
};


class DELPHICLASS TwwRichEditItemsProperty;
class PASCALIMPLEMENTATION TwwRichEditItemsProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwRichEditItemsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwRichEditItemsProperty(void) { }
	
};


class DELPHICLASS TwwRichEditComponentEditor;
class PASCALIMPLEMENTATION TwwRichEditComponentEditor : public TwwComponentEditor
{
	typedef TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwRichEditComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwRichEditComponentEditor(void) { }
	
};


class DELPHICLASS TwwRichEditBarComponentEditor;
class PASCALIMPLEMENTATION TwwRichEditBarComponentEditor : public TwwComponentEditor
{
	typedef TwwComponentEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TwwComponentEditor.Create */ inline __fastcall virtual TwwRichEditBarComponentEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TwwComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwRichEditBarComponentEditor(void) { }
	
};


class DELPHICLASS TwwGridIndicatorProperty;
class PASCALIMPLEMENTATION TwwGridIndicatorProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetValue(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TwwGridIndicatorProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TwwGridIndicatorProperty(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall EditSelectedFieldsProperty(Classes::TComponent* AComponent, Classes::TStrings* listHandle, Db::TDataSet* dataSet, Designintf::_di_IDesigner designer, bool readFromTableComponent, bool &useTFields, Wwselfld::TwwSelectedPropertyType propertyType);
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwprpedt */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwprpedt;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwprpedtHPP
