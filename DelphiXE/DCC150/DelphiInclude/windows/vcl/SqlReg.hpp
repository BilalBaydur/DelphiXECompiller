// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlReg.pas' rev: 22.00

#ifndef SqlregHPP
#define SqlregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <FldLinks.hpp>	// Pascal unit
#include <TreeIntf.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <DsnDb.hpp>	// Pascal unit
#include <DsnDBCst.hpp>	// Pascal unit
#include <DBReg.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <DBLogDlg.hpp>	// Pascal unit
#include <DBCommon.hpp>	// Pascal unit
#include <ColnEdit.hpp>	// Pascal unit
#include <DBConnAdmin.hpp>	// Pascal unit
#include <XMLIntf.hpp>	// Pascal unit
#include <StrEdit.hpp>	// Pascal unit
#include <DesignMenus.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <ToolsAPI.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlreg
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TPropertyType { typeSortFields, typeCommandText, typeKeyNames, typeDriverName, typeConnectionName, typeTableName, typeProcedureName, typeIndexName, typePackageName, typeSchemaName, typeDbxCommandType, typeServerMethodName };
#pragma option pop

class DELPHICLASS TSQLStringProperty;
class PASCALIMPLEMENTATION TSQLStringProperty : public Dbreg::TDBStringProperty
{
	typedef Dbreg::TDBStringProperty inherited;
	
private:
	TPropertyType FPropertyType;
	Sqlexpr::TSQLConnection* FConnection;
	Db::TPSCommandType FCommandType;
	
public:
	virtual void __fastcall Activate(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	Sqlexpr::TSQLConnection* __fastcall GetConnection(bool Open = true);
	virtual void __fastcall GetValueList(Classes::TStrings* List);
	__fastcall virtual TSQLStringProperty(const Designintf::_di_IDesigner ADesigner, int APropCount);
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLStringProperty(void) { }
	
};


class DELPHICLASS TSQLEditProperty;
class PASCALIMPLEMENTATION TSQLEditProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
private:
	System::UnicodeString FTableName;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
	virtual void __fastcall Edit(void);
	virtual void __fastcall EditSQLText(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLEditProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLEditProperty(void) { }
	
};


class DELPHICLASS TSQLTableNameProperty;
class PASCALIMPLEMENTATION TSQLTableNameProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLTableNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLTableNameProperty(void) { }
	
};


class DELPHICLASS TSQLIndexNameProperty;
class PASCALIMPLEMENTATION TSQLIndexNameProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLIndexNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLIndexNameProperty(void) { }
	
};


class DELPHICLASS TIdxColNamesProperty;
class PASCALIMPLEMENTATION TIdxColNamesProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TIdxColNamesProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TIdxColNamesProperty(void) { }
	
};


class DELPHICLASS TSQLDriversProperty;
class PASCALIMPLEMENTATION TSQLDriversProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
	virtual System::UnicodeString __fastcall GetName(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLDriversProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLDriversProperty(void) { }
	
};


class DELPHICLASS TSQLConnectionsProperty;
class PASCALIMPLEMENTATION TSQLConnectionsProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual System::UnicodeString __fastcall GetName(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLConnectionsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLConnectionsProperty(void) { }
	
};


class DELPHICLASS TSQLStoredProcNameProperty;
class PASCALIMPLEMENTATION TSQLStoredProcNameProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLStoredProcNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLStoredProcNameProperty(void) { }
	
};


class DELPHICLASS TSQLPackageNameProperty;
class PASCALIMPLEMENTATION TSQLPackageNameProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLPackageNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLPackageNameProperty(void) { }
	
};


class DELPHICLASS TSQLDbxCommandTypeProperty;
class PASCALIMPLEMENTATION TSQLDbxCommandTypeProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLDbxCommandTypeProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLDbxCommandTypeProperty(void) { }
	
};


class DELPHICLASS TSQLSchemaNameProperty;
class PASCALIMPLEMENTATION TSQLSchemaNameProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLSchemaNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLSchemaNameProperty(void) { }
	
};


class DELPHICLASS TSQLServerMethodNameProperty;
class PASCALIMPLEMENTATION TSQLServerMethodNameProperty : public TSQLStringProperty
{
	typedef TSQLStringProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
	virtual bool __fastcall AutoFill(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLServerMethodNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLStringProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLServerMethodNameProperty(void) { }
	
};


class DELPHICLASS TSQLMonitorFileNameProperty;
class PASCALIMPLEMENTATION TSQLMonitorFileNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TSQLMonitorFileNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLMonitorFileNameProperty(void) { }
	
};


class DELPHICLASS TSQLSortFieldsNameProperty;
class PASCALIMPLEMENTATION TSQLSortFieldsNameProperty : public TSQLEditProperty
{
	typedef TSQLEditProperty inherited;
	
public:
	virtual void __fastcall Activate(void);
public:
	/* TSQLStringProperty.Create */ inline __fastcall virtual TSQLSortFieldsNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TSQLEditProperty(ADesigner, APropCount) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLSortFieldsNameProperty(void) { }
	
};


class DELPHICLASS TParamsProperty;
class PASCALIMPLEMENTATION TParamsProperty : public Colnedit::TCollectionProperty
{
	typedef Colnedit::TCollectionProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TParamsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Colnedit::TCollectionProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TParamsProperty(void) { }
	
};


class DELPHICLASS TConnectionDataProperty;
class PASCALIMPLEMENTATION TConnectionDataProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	__fastcall TConnectionDataProperty(Designeditors::TPropertyEditor* Parent, Sqlexpr::TConnectionData* Instance);
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TConnectionDataProperty(void) { }
	
};


class DELPHICLASS TDelegateDriverProperty;
class PASCALIMPLEMENTATION TDelegateDriverProperty : public TConnectionDataProperty
{
	typedef TConnectionDataProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetName(void);
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
public:
	/* TConnectionDataProperty.Create */ inline __fastcall TDelegateDriverProperty(Designeditors::TPropertyEditor* Parent, Sqlexpr::TConnectionData* Instance) : TConnectionDataProperty(Parent, Instance) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDelegateDriverProperty(void) { }
	
/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};


class DELPHICLASS TDelegateNameProperty;
class PASCALIMPLEMENTATION TDelegateNameProperty : public TConnectionDataProperty
{
	typedef TConnectionDataProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual System::UnicodeString __fastcall GetName(void);
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TConnectionDataProperty.Create */ inline __fastcall TDelegateNameProperty(Designeditors::TPropertyEditor* Parent, Sqlexpr::TConnectionData* Instance) : TConnectionDataProperty(Parent, Instance) { }
	
public:
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDelegateNameProperty(void) { }
	
/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};


class DELPHICLASS TSQLConnectionEditor;
class PASCALIMPLEMENTATION TSQLConnectionEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
private:
	int __fastcall ConnectionStringVerbCount(Sqlexpr::TSQLConnection* connection);
	System::UnicodeString __fastcall GetAddConnectionString(Sqlexpr::TSQLConnection* connection);
	void __fastcall AddConnectionString(Sqlexpr::TSQLConnection* connection);
	void __fastcall DeleteConnectionString(Sqlexpr::TSQLConnection* connection);
	void __fastcall SaveConnectionProperties(void);
	void __fastcall ReloadConnectionProperties(void);
	void __fastcall GenerateProxy(void);
	bool __fastcall IsDataSnap(void);
	bool __fastcall CanGenerateProxy(void);
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
	virtual void __fastcall Edit(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TSQLConnectionEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSQLConnectionEditor(void) { }
	
};


class DELPHICLASS TSqlDataSetEditor;
class PASCALIMPLEMENTATION TSqlDataSetEditor : public Dbreg::TDataSetEditor
{
	typedef Dbreg::TDataSetEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TSqlDataSetEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Dbreg::TDataSetEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlDataSetEditor(void) { }
	
};


class DELPHICLASS TSqlStoredProcEditor;
class PASCALIMPLEMENTATION TSqlStoredProcEditor : public Dbreg::TDataSetEditor
{
	typedef Dbreg::TDataSetEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TSqlStoredProcEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Dbreg::TDataSetEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlStoredProcEditor(void) { }
	
};


class DELPHICLASS TSqlQueryEditor;
class PASCALIMPLEMENTATION TSqlQueryEditor : public Dbreg::TDataSetEditor
{
	typedef Dbreg::TDataSetEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TSqlQueryEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Dbreg::TDataSetEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlQueryEditor(void) { }
	
};


class DELPHICLASS TSQLConnectionSprig;
class PASCALIMPLEMENTATION TSQLConnectionSprig : public Treeintf::TComponentSprig
{
	typedef Treeintf::TComponentSprig inherited;
	
public:
	virtual System::UnicodeString __fastcall Name(void);
	virtual bool __fastcall AnyProblems(void);
	virtual System::UnicodeString __fastcall Caption(void);
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TSQLConnectionSprig(Classes::TPersistent* AItem)/* overload */ : Treeintf::TComponentSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TSQLConnectionSprig(void) { }
	
};


class DELPHICLASS TSQLImpliedConnectionSprig;
class PASCALIMPLEMENTATION TSQLImpliedConnectionSprig : public Treeintf::TTransientSprig
{
	typedef Treeintf::TTransientSprig inherited;
	
private:
	System::UnicodeString FConnectionName;
	
public:
	virtual bool __fastcall AnyProblems(void);
	virtual System::UnicodeString __fastcall UniqueName(void);
	virtual System::UnicodeString __fastcall Caption(void);
	virtual System::TClass __fastcall ItemClass(void);
public:
	/* TSprig.Create */ inline __fastcall virtual TSQLImpliedConnectionSprig(Classes::TPersistent* AItem)/* overload */ : Treeintf::TTransientSprig(AItem) { }
	/* TSprig.Destroy */ inline __fastcall virtual ~TSQLImpliedConnectionSprig(void) { }
	
};


class DELPHICLASS TSqlDataSetSprig;
class PASCALIMPLEMENTATION TSqlDataSetSprig : public Dsndb::TDataSetSprig
{
	typedef Dsndb::TDataSetSprig inherited;
	
public:
	virtual bool __fastcall AnyProblems(void);
	virtual System::UnicodeString __fastcall Caption(void);
	virtual void __fastcall FigureParent(void);
	virtual bool __fastcall DragDropTo(Treeintf::TSprig* AItem);
	virtual bool __fastcall DragOverTo(Treeintf::TSprig* AItem);
	__classmethod virtual bool __fastcall PaletteOverTo(Treeintf::TSprig* AParent, System::TClass AClass);
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TSqlDataSetSprig(Classes::TPersistent* AItem)/* overload */ : Dsndb::TDataSetSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TSqlDataSetSprig(void) { }
	
};


class DELPHICLASS TSQLTableSprig;
class PASCALIMPLEMENTATION TSQLTableSprig : public TSqlDataSetSprig
{
	typedef TSqlDataSetSprig inherited;
	
public:
	virtual bool __fastcall AnyProblems(void);
	virtual System::UnicodeString __fastcall Caption(void);
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TSQLTableSprig(Classes::TPersistent* AItem)/* overload */ : TSqlDataSetSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TSQLTableSprig(void) { }
	
};


class DELPHICLASS TSQLStoredProcSprig;
class PASCALIMPLEMENTATION TSQLStoredProcSprig : public TSqlDataSetSprig
{
	typedef TSqlDataSetSprig inherited;
	
public:
	virtual bool __fastcall AnyProblems(void);
	virtual System::UnicodeString __fastcall Caption(void);
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TSQLStoredProcSprig(Classes::TPersistent* AItem)/* overload */ : TSqlDataSetSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TSQLStoredProcSprig(void) { }
	
};


class DELPHICLASS TSQLQuerySprig;
class PASCALIMPLEMENTATION TSQLQuerySprig : public TSqlDataSetSprig
{
	typedef TSqlDataSetSprig inherited;
	
public:
	virtual bool __fastcall AnyProblems(void);
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TSQLQuerySprig(Classes::TPersistent* AItem)/* overload */ : TSqlDataSetSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TSQLQuerySprig(void) { }
	
};


class DELPHICLASS TSQLMonitorSprig;
class PASCALIMPLEMENTATION TSQLMonitorSprig : public Treeintf::TComponentSprig
{
	typedef Treeintf::TComponentSprig inherited;
	
public:
	virtual System::UnicodeString __fastcall Name(void);
	virtual bool __fastcall AnyProblems(void);
	virtual System::UnicodeString __fastcall Caption(void);
	virtual void __fastcall FigureParent(void);
	virtual bool __fastcall DragDropTo(Treeintf::TSprig* AItem);
	virtual bool __fastcall DragOverTo(Treeintf::TSprig* AItem);
	__classmethod virtual bool __fastcall PaletteOverTo(Treeintf::TSprig* AParent, System::TClass AClass);
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TSQLMonitorSprig(Classes::TPersistent* AItem)/* overload */ : Treeintf::TComponentSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TSQLMonitorSprig(void) { }
	
};


class DELPHICLASS TSQLTableFieldLinkProperty;
class PASCALIMPLEMENTATION TSQLTableFieldLinkProperty : public Fldlinks::TFieldLinkProperty
{
	typedef Fldlinks::TFieldLinkProperty inherited;
	
private:
	Sqlexpr::TSQLTable* FTable;
	
protected:
	virtual void __fastcall GetFieldNamesForIndex(Classes::TStrings* List);
	virtual bool __fastcall GetIndexBased(void);
	virtual Db::TIndexDefs* __fastcall GetIndexDefs(void);
	virtual System::UnicodeString __fastcall GetIndexFieldNames(void);
	virtual System::UnicodeString __fastcall GetIndexName(void);
	virtual System::UnicodeString __fastcall GetMasterFields(void);
	virtual void __fastcall SetIndexFieldNames(const System::UnicodeString Value);
	virtual void __fastcall SetIndexName(const System::UnicodeString Value);
	virtual void __fastcall SetMasterFields(const System::UnicodeString Value);
	
public:
	__property bool IndexBased = {read=GetIndexBased, nodefault};
	__property Db::TIndexDefs* IndexDefs = {read=GetIndexDefs};
	__property System::UnicodeString IndexFieldNames = {read=GetIndexFieldNames, write=SetIndexFieldNames};
	__property System::UnicodeString IndexName = {read=GetIndexName, write=SetIndexName};
	__property System::UnicodeString MasterFields = {read=GetMasterFields, write=SetMasterFields};
	virtual void __fastcall Edit(void);
public:
	/* TFieldLinkProperty.CreateWith */ inline __fastcall virtual TSQLTableFieldLinkProperty(Db::TDataSet* ADataSet) : Fldlinks::TFieldLinkProperty(ADataSet) { }
	
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TSQLTableFieldLinkProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Fldlinks::TFieldLinkProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSQLTableFieldLinkProperty(void) { }
	
};


class DELPHICLASS TCustomSQLDataSetSelectionEditor;
class PASCALIMPLEMENTATION TCustomSQLDataSetSelectionEditor : public Designeditors::TSelectionEditor
{
	typedef Designeditors::TSelectionEditor inherited;
	
public:
	virtual void __fastcall RequiresUnits(Classes::TGetStrProc Proc);
public:
	/* TSelectionEditor.Create */ inline __fastcall virtual TCustomSQLDataSetSelectionEditor(const Designintf::_di_IDesigner ADesigner) : Designeditors::TSelectionEditor(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomSQLDataSetSelectionEditor(void) { }
	
};


class DELPHICLASS TSQLConnectionSelectionEditor;
class PASCALIMPLEMENTATION TSQLConnectionSelectionEditor : public Designeditors::TSelectionEditor
{
	typedef Designeditors::TSelectionEditor inherited;
	
protected:
	void __fastcall FilterProperties(const Designintf::_di_IDesignerSelections ASelection, const Classes::_di_IInterfaceList ASelectionProperties);
	
public:
	virtual void __fastcall RequiresUnits(Classes::TGetStrProc Proc);
public:
	/* TSelectionEditor.Create */ inline __fastcall virtual TSQLConnectionSelectionEditor(const Designintf::_di_IDesigner ADesigner) : Designeditors::TSelectionEditor(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSQLConnectionSelectionEditor(void) { }
	
private:
	void *__ISelectionPropertyFilter;	/* Designintf::ISelectionPropertyFilter */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Designintf::_di_ISelectionPropertyFilter()
	{
		Designintf::_di_ISelectionPropertyFilter intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::ISelectionPropertyFilter*(void) { return (Designintf::ISelectionPropertyFilter*)&__ISelectionPropertyFilter; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::ResourceString _cConnectionSprigPrefix;
#define Sqlreg_cConnectionSprigPrefix System::LoadResourceString(&Sqlreg::_cConnectionSprigPrefix)
extern PACKAGE System::UnicodeString __fastcall MakeStorageNodeId(Toolsapi::_di_IOTAProject AProject, Sqlexpr::TSQLConnection* AComponent)/* overload */;
extern PACKAGE void __fastcall Register(void);

}	/* namespace Sqlreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sqlreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlregHPP
