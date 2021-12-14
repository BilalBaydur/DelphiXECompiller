// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SimpleDS.pas' rev: 22.00

#ifndef SimpledsHPP
#define SimpledsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBClient.hpp>	// Pascal unit
#include <Provider.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Simpleds
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TInternalSQLDataSet;
class PASCALIMPLEMENTATION TInternalSQLDataSet : public Sqlexpr::TCustomSQLDataSet
{
	typedef Sqlexpr::TCustomSQLDataSet inherited;
	
__published:
	__property CommandText;
	__property CommandType = {default=1};
	__property DataSource;
	__property GetMetadata = {default=0};
	__property MaxBlobSize = {default=0};
	__property ParamCheck = {default=1};
	__property Params;
	__property SortFieldNames;
public:
	/* TCustomSQLDataSet.Create */ inline __fastcall virtual TInternalSQLDataSet(Classes::TComponent* AOwner)/* overload */ : Sqlexpr::TCustomSQLDataSet(AOwner) { }
	/* TCustomSQLDataSet.Destroy */ inline __fastcall virtual ~TInternalSQLDataSet(void) { }
	
};


class DELPHICLASS TSimpleDataSet;
class PASCALIMPLEMENTATION TSimpleDataSet : public Dbclient::TCustomClientDataSet
{
	typedef Dbclient::TCustomClientDataSet inherited;
	
private:
	Sqlexpr::TSQLConnection* FConnection;
	Sqlexpr::TSQLConnection* FInternalConnection;
	TInternalSQLDataSet* FDataSet;
	Provider::TDataSetProvider* FProvider;
	
protected:
	virtual void __fastcall AllocConnection(void);
	virtual void __fastcall AllocDataSet(void);
	virtual void __fastcall AllocProvider(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall OpenCursor(bool InfoQuery);
	virtual void __fastcall SetConnection(Sqlexpr::TSQLConnection* Value);
	virtual System::UnicodeString __fastcall PSGetCommandText(void);
	
public:
	__fastcall virtual TSimpleDataSet(Classes::TComponent* AOwner);
	__fastcall virtual ~TSimpleDataSet(void);
	HIDESBASE void __fastcall FetchParams(void);
	
__published:
	__property Active = {default=0};
	__property Aggregates;
	__property AggregatesActive = {default=0};
	__property AutoCalcFields = {default=1};
	__property Sqlexpr::TSQLConnection* Connection = {read=FConnection, write=SetConnection};
	__property TInternalSQLDataSet* DataSet = {read=FDataSet};
	__property Constraints;
	__property DisableStringTrim = {default=0};
	__property FileName;
	__property Filter;
	__property Filtered = {default=0};
	__property FilterOptions = {default=0};
	__property FieldDefs;
	__property IndexDefs;
	__property IndexFieldNames;
	__property IndexName;
	__property FetchOnDemand = {default=1};
	__property MasterFields;
	__property MasterSource;
	__property ObjectView = {default=1};
	__property PacketRecords = {default=-1};
	__property Params;
	__property ReadOnly = {default=0};
	__property StoreDefs = {default=0};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeInsert;
	__property AfterInsert;
	__property BeforeEdit;
	__property AfterEdit;
	__property BeforePost;
	__property AfterPost;
	__property BeforeCancel;
	__property AfterCancel;
	__property BeforeDelete;
	__property AfterDelete;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property OnDeleteError;
	__property OnEditError;
	__property OnFilterRecord;
	__property OnNewRecord;
	__property OnPostError;
	__property OnReconcileError;
	__property BeforeApplyUpdates;
	__property AfterApplyUpdates;
	__property BeforeGetRecords;
	__property AfterGetRecords;
	__property BeforeRowRequest;
	__property AfterRowRequest;
	__property BeforeExecute;
	__property AfterExecute;
	__property BeforeGetParams;
	__property AfterGetParams;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Simpleds */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Simpleds;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SimpledsHPP
