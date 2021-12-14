// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlExpr.pas' rev: 22.00

#ifndef SqlexprHPP
#define SqlexprHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBCommon.hpp>	// Pascal unit
#include <DBCommonTypes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBPlatform.hpp>	// Pascal unit
#include <WideStrings.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlexpr
{
//-- type declarations -------------------------------------------------------
typedef Classes::TList TFieldList;

typedef void * TLocale;

typedef int SQLResult;

typedef int TLocaleCode;

#pragma option push -b-
enum TSQLExceptionType { exceptConnection, exceptCommand, exceptCursor, exceptMetaData, exceptUseLast };
#pragma option pop

#pragma option push -b-
enum TTransIsolationLevel { xilREADCOMMITTED, xilREPEATABLEREAD, xilDIRTYREAD, xilCUSTOM };
#pragma option pop

#pragma pack(push,1)
struct DECLSPEC_DRECORD TTransactionDesc
{
	
public:
	unsigned TransactionID;
	unsigned GlobalID;
	TTransIsolationLevel IsolationLevel;
	unsigned CustomIsolation;
};
#pragma pack(pop)


class DELPHICLASS SPParamDesc;
class PASCALIMPLEMENTATION SPParamDesc : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Word iParamNum;
	System::UnicodeString szName;
	Db::TParamType iArgType;
	Db::TFieldType iDataType;
	short iUnits1;
	short iUnits2;
	unsigned iLen;
public:
	/* TObject.Create */ inline __fastcall SPParamDesc(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~SPParamDesc(void) { }
	
};


class DELPHICLASS TSQLBlobStream;
class DELPHICLASS TCustomSQLDataSet;
class PASCALIMPLEMENTATION TSQLBlobStream : public Classes::TMemoryStream
{
	typedef Classes::TMemoryStream inherited;
	
private:
	TCustomSQLDataSet* FDataSet;
	Db::TBlobField* FField;
	int FFieldNo;
	bool FHasData;
	
protected:
	void __fastcall ReadBlobSize(void);
	
public:
	__fastcall TSQLBlobStream(Db::TBlobField* Field, Db::TBlobStreamMode Mode);
	__fastcall virtual ~TSQLBlobStream(void);
	void __fastcall ReadBlobData(void);
	virtual int __fastcall Read(void *Buffer, int Count);
};


#pragma option push -b-
enum TConnectionUserType { eUserMonitor, eUserDataSet };
#pragma option pop

typedef void __fastcall (__closure *TTraceEvent)(System::TObject* Sender, const Dbxcommon::TDBXTraceInfo &TraceInfo, bool &LogTrace);

typedef void __fastcall (__closure *TTraceLogEvent)(System::TObject* Sender, const Dbxcommon::TDBXTraceInfo &TraceInfo);

class DELPHICLASS TSQLMonitor;
class DELPHICLASS TSQLConnection;
class PASCALIMPLEMENTATION TSQLMonitor : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	bool FActive;
	bool FAutoSave;
	System::UnicodeString FFileName;
	bool FKeepConnection;
	int FMaxTraceCount;
	TTraceEvent FOnTrace;
	TTraceLogEvent FOnLogTrace;
	TSQLConnection* FSQLConnection;
	bool FStreamedActive;
	int FTraceFlags;
	Classes::TStrings* FTraceList;
	void __fastcall CheckInactive(void);
	int __fastcall GetTraceCount(void);
	
protected:
	Dbcommontypes::CBRType __fastcall InvokeCallBack(const Dbxcommon::TDBXTraceInfo &TraceInfo);
	void __fastcall SetActive(bool Value);
	void __fastcall SetSQLConnection(TSQLConnection* Value);
	void __fastcall SetStreamedActive(void);
	void __fastcall SetTraceList(Classes::TStrings* Value);
	void __fastcall SetFileName(const System::UnicodeString Value);
	void __fastcall SwitchConnection(const TSQLConnection* Value);
	virtual void __fastcall Trace(const Dbxcommon::TDBXTraceInfo &TraceInfo, bool LogTrace);
	void __fastcall UpdateTraceCallBack(void);
	
public:
	__fastcall virtual TSQLMonitor(Classes::TComponent* AOwner);
	__fastcall virtual ~TSQLMonitor(void);
	void __fastcall LoadFromFile(System::UnicodeString AFileName);
	void __fastcall SaveToFile(System::UnicodeString AFileName);
	__property int MaxTraceCount = {read=FMaxTraceCount, write=FMaxTraceCount, nodefault};
	__property int TraceCount = {read=GetTraceCount, nodefault};
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property bool AutoSave = {read=FAutoSave, write=FAutoSave, default=0};
	__property System::UnicodeString FileName = {read=FFileName, write=SetFileName};
	__property TTraceLogEvent OnLogTrace = {read=FOnLogTrace, write=FOnLogTrace};
	__property TTraceEvent OnTrace = {read=FOnTrace, write=FOnTrace};
	__property Classes::TStrings* TraceList = {read=FTraceList, write=SetTraceList, stored=false};
	__property TSQLConnection* SQLConnection = {read=FSQLConnection, write=SetSQLConnection};
};


#pragma option push -b-
enum EConnectFlag { eConnect, eReconnect, eDisconnect };
#pragma option pop

#pragma option push -b-
enum TSchemaType { stNoSchema, stTables, stSysTables, stProcedures, stColumns, stProcedureParams, stIndexes, stPackages, stUserNames };
#pragma option pop

#pragma option push -b-
enum TConnectionState { csStateClosed, csStateOpen, csStateConnecting, csStateExecuting, csStateFetching, csStateDisconnecting };
#pragma option pop

#pragma option push -b-
enum TTableScope { tsSynonym, tsSysTable, tsTable, tsView };
#pragma option pop

typedef System::Set<TTableScope, TTableScope::tsSynonym, TTableScope::tsView>  TTableScopes;

typedef void __fastcall (__closure *TSQLConnectionLoginEvent)(TSQLConnection* Database, Classes::TStrings* LoginParams);

class DELPHICLASS TTransactionItem;
class PASCALIMPLEMENTATION TTransactionItem [[deprecated]] : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Dbxcommon::TDBXTransaction* FTransaction [[deprecated]];
	TTransactionDesc FTransactionDesc [[deprecated]];
	TTransactionItem* FNext [[deprecated]];
public:
	/* TObject.Create */ inline __fastcall TTransactionItem(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTransactionItem(void) { }
	
};


class DELPHICLASS TConnectionData;
class PASCALIMPLEMENTATION TConnectionData : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TSQLConnection* FConnection;
	TConnectionData* FParentData;
	Dbxcommon::TDBXProperties* FProperties;
	Dbxcommon::TDBXProperties* FOriginalProperties;
	System::UnicodeString FConnectionName;
	System::UnicodeString FDriverName;
	TConnectionData* FDelegateConnection;
	bool FChanging;
	bool FHasIsModified;
	bool FIsModified;
	void __fastcall DoChange(System::TObject* Sender);
	bool __fastcall IsMyProperty(const System::UnicodeString PropertyName);
	System::UnicodeString __fastcall GetPrefix(void);
	System::UnicodeString __fastcall GetConectionName(void);
	Dbxcommon::TDBXProperties* __fastcall GetProperties(void);
	void __fastcall SetConnectionName(const System::UnicodeString Value);
	void __fastcall SetProperties(const Dbxcommon::TDBXProperties* Value);
	void __fastcall SetDelegateConnection(const TConnectionData* Value);
	bool __fastcall GetIsModified(void);
	Dbxcommon::TDBXProperties* __fastcall GetOriginalProperties(void);
	System::UnicodeString __fastcall GetDriverName(void);
	void __fastcall SetDriverName(const System::UnicodeString Value);
	
protected:
	void __fastcall GetFullParams(Classes::TStrings* Params);
	
public:
	__fastcall TConnectionData(TSQLConnection* AConnection)/* overload */;
	__fastcall TConnectionData(TConnectionData* AParentData)/* overload */;
	void __fastcall UpdateProperties(Classes::TStrings* NewProperties);
	void __fastcall AddProperties(Classes::TStrings* NewProperties);
	bool __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	void __fastcall ReloadProperties(void);
	void __fastcall RefreshProperties(void);
	__fastcall virtual ~TConnectionData(void);
	
__published:
	__property System::UnicodeString ConnectionName = {read=GetConectionName, write=SetConnectionName};
	__property System::UnicodeString DriverName = {read=GetDriverName, write=SetDriverName};
	__property Dbxcommon::TDBXProperties* Properties = {read=GetProperties, write=SetProperties};
	__property TConnectionData* DelegateConnection = {read=FDelegateConnection, write=SetDelegateConnection};
	__property bool IsModified = {read=GetIsModified, nodefault};
};


class PASCALIMPLEMENTATION TSQLConnection : public Db::TCustomConnection
{
	typedef Db::TCustomConnection inherited;
	
private:
	Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(const TTransactionDesc &TransDesc, int Isolation)/* overload */;
	
private:
	unsigned FSelectStatements;
	unsigned FActiveStatements;
	bool FAutoClone;
	TSQLConnection* FCloneParent;
	TConnectionState FConnectionState;
	System::UnicodeString FConnectionName;
	System::UnicodeString FConnectionRegistryFile;
	System::UnicodeString FDriverName;
	System::UnicodeString FGetDriverFunc;
	int FTransactionCount;
	bool FIsCloned;
	Dbxcommon::TDBXConnection* FDBXConnection;
	bool FKeepConnection;
	System::UnicodeString FLibraryName;
	bool FLoadParamsOnConnect;
	Classes::TList* FMonitorUsers;
	TSQLConnectionLoginEvent FOnLogin;
	Classes::TStrings* FParams;
	bool FParamsLoaded;
	unsigned FMaxStmtsPerConn;
	System::UnicodeString FQuoteChar;
	System::UnicodeString FProcedureQuoteChar;
	System::UnicodeString FDefaultSchemaName;
	int FRefCount;
	unsigned FSQLDllHandle;
	bool FSQLHourGlass;
	BOOL FSupportsNestedTrans;
	TTableScopes FTableScope;
	Dbxcommon::TDBXTraceEvent FTraceCallbackEvent;
	BOOL FTransactionsSupported;
	System::UnicodeString FVendorLib;
	System::UnicodeString FLoginUsername;
	TTransactionItem* FTransactionStack;
	System::UnicodeString FDefaultSchema;
	TConnectionData* FConnectionData;
	System::UnicodeString FUniqueID;
	Dbxcommon::TValidateCertificate FValidateCertificate;
	void __fastcall CheckActive(void);
	void __fastcall CheckInactive(void);
	void __fastcall CheckLoginParams(void);
	void __fastcall ClearConnectionUsers(void);
	void __fastcall ClearMonitors(void);
	void __fastcall FreeSchemaTable(TCustomSQLDataSet* DataSet);
	TSQLConnection* __fastcall GetConnectionForStatement(void);
	System::UnicodeString __fastcall GetConnectionName(void);
	int __fastcall GetLocaleCode(void);
	bool __fastcall GetInTransaction(void);
	System::UnicodeString __fastcall GetLibraryName(void);
	void __fastcall GetLoginParams(Classes::TStrings* LoginParams);
	System::UnicodeString __fastcall GetQuoteChar(void);
	System::UnicodeString __fastcall GetVendorLib(void);
	Dbxcommon::TDBXDatabaseMetaData* __fastcall GetMetaData(void);
	void __fastcall Login(Classes::TStrings* ConnectionProps);
	TCustomSQLDataSet* __fastcall OpenSchemaTable(TSchemaType eKind, System::UnicodeString SInfo, System::UnicodeString SQualifier = L"", System::UnicodeString SPackage = L"")/* overload */;
	TCustomSQLDataSet* __fastcall OpenSchemaTable(TSchemaType eKind, System::UnicodeString SInfo, System::UnicodeString SQualifier = L"", System::UnicodeString SPackage = L"", System::UnicodeString SSchemaName = L"")/* overload */;
	void __fastcall RegisterTraceMonitor(System::TObject* Client);
	void __fastcall RegisterTraceCallback(bool Value);
	void __fastcall SetConnectionName(System::UnicodeString Value);
	void __fastcall SetDriverName(System::UnicodeString Value);
	void __fastcall SetKeepConnection(bool Value);
	void __fastcall SetParams(Classes::TStrings* Value);
	void __fastcall SetCursor(int CursorType);
	void __fastcall SetLocaleCode(int Value);
	void __fastcall DoParamsChange(System::TObject* Sender);
	void __fastcall UnregisterTraceMonitor(System::TObject* Client);
	void __fastcall EndFreeAndNilTransaction(Dbxcommon::TDBXTransaction* &Transaction, bool Commit)/* overload */;
	void __fastcall EndAndFreeTransaction(bool Commit)/* overload */;
	void __fastcall EndAndFreeTransaction(const TTransactionDesc &TransDesc, bool Commit)/* overload */;
	void __fastcall ReadUniqueId(Classes::TReader* Reader);
	void __fastcall WriteUniqueId(Classes::TWriter* Writer);
	__property System::UnicodeString DefaultSchema = {read=FDefaultSchema};
	
protected:
	void __fastcall CheckConnection(EConnectFlag eFlag);
	virtual void __fastcall CheckDisconnect(void);
	virtual void __fastcall ConnectionOptions(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual void __fastcall DoConnect(void);
	virtual void __fastcall DoDisconnect(void);
	virtual bool __fastcall GetConnected(void);
	HIDESBASE TCustomSQLDataSet* __fastcall GetDataSet(int Index);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall OpenSchema(TSchemaType eKind, System::UnicodeString sInfo, Classes::TStrings* List)/* overload */;
	void __fastcall OpenSchema(TSchemaType eKind, System::UnicodeString sInfo, System::UnicodeString SSchemaName, Classes::TStrings* List)/* overload */;
	virtual void __fastcall RegisterClient(System::TObject* Client, Db::TConnectChangeEvent Event = 0x0);
	void __fastcall SQLError(Dbxcommon::TDBXError* Error);
	virtual void __fastcall UnRegisterClient(System::TObject* Client);
	__property System::UnicodeString ConnectionRegistryFile = {read=FConnectionRegistryFile};
	__property System::UnicodeString QuoteChar = {read=FQuoteChar};
	__property unsigned SQLDllHandle = {read=FSQLDllHandle, write=FSQLDllHandle, nodefault};
	
public:
	__fastcall virtual TSQLConnection(Classes::TComponent* AOwner);
	__fastcall virtual ~TSQLConnection(void);
	void __fastcall AddConnectNotification(System::TObject* Listener, Db::TConnectChangeEvent Event);
	void __fastcall RemoveConnectNotification(System::TObject* Listener);
	TSQLConnection* __fastcall CloneConnection(void);
	void __fastcall CloseDataSets(void);
	void __fastcall Commit [[deprecated]](const TTransactionDesc &TransDesc);
	void __fastcall CommitFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	int __fastcall Execute(const System::UnicodeString SQL, Db::TParams* Params, void * ResultSet = (void *)(0x0));
	int __fastcall ExecuteDirect(const System::UnicodeString SQL);
	void __fastcall GetFieldNames(const System::UnicodeString TableName, Classes::TStrings* List)/* overload */;
	void __fastcall GetFieldNames(const System::UnicodeString TableName, System::UnicodeString SchemaName, Classes::TStrings* List)/* overload */;
	void __fastcall GetFieldNames [[deprecated]](const System::WideString TableName, System::WideString SchemaName, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetFieldNames [[deprecated]](const System::WideString TableName, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetIndexNames(const System::UnicodeString TableName, Classes::TStrings* List)/* overload */;
	void __fastcall GetIndexNames(const System::UnicodeString TableName, const System::UnicodeString SchemaName, Classes::TStrings* List)/* overload */;
	void __fastcall GetIndexNames [[deprecated]](const System::UnicodeString TableName, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetIndexNames [[deprecated]](const System::UnicodeString TableName, const System::UnicodeString SchemaName, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetProcedureNames(Classes::TStrings* List)/* overload */;
	void __fastcall GetProcedureNames(const System::UnicodeString PackageName, Classes::TStrings* List)/* overload */;
	void __fastcall GetProcedureNames(const System::UnicodeString PackageName, const System::UnicodeString SchemaName, Classes::TStrings* List)/* overload */;
	void __fastcall GetProcedureNames [[deprecated]](Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetProcedureNames [[deprecated]](const System::UnicodeString PackageName, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetProcedureNames [[deprecated]](const System::UnicodeString PackageName, const System::UnicodeString SchemaName, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetPackageNames(Classes::TStrings* List)/* overload */;
	void __fastcall GetSchemaNames(Classes::TStrings* List)/* overload */;
	void __fastcall GetCommandTypes(Classes::TStrings* List);
	void __fastcall GetPackageNames [[deprecated]](Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetSchemaNames [[deprecated]](Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetServerMethodNames(Classes::TStrings* List);
	System::UnicodeString __fastcall GetDefaultSchemaName(void);
	void __fastcall GetProcedureParams(System::UnicodeString ProcedureName, Classes::TList* List)/* overload */;
	void __fastcall GetProcedureParams(System::UnicodeString ProcedureName, System::UnicodeString PackageName, Classes::TList* List)/* overload */;
	void __fastcall GetProcedureParams(System::UnicodeString ProcedureName, System::UnicodeString PackageName, System::UnicodeString SchemaName, Classes::TList* List)/* overload */;
	void __fastcall GetTableNames(Classes::TStrings* List, bool SystemTables = false)/* overload */;
	void __fastcall GetTableNames(Classes::TStrings* List, System::UnicodeString SchemaName, bool SystemTables = false)/* overload */;
	void __fastcall GetTableNames(Widestrings::TWideStrings* List, System::WideString SchemaName, bool SystemTables = false)/* overload */;
	void __fastcall GetTableNames(Widestrings::TWideStrings* List, bool SystemTables = false)/* overload */;
	void __fastcall LoadParamsFromIniFile(System::UnicodeString FFileName = L"");
	void __fastcall Rollback [[deprecated]](const TTransactionDesc &TransDesc);
	void __fastcall RollbackFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	void __fastcall RollbackIncompleteFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	bool __fastcall HasTransaction(Dbxcommon::TDBXTransaction* Transaction);
	void __fastcall SetTraceEvent(Dbxcommon::TDBXTraceEvent Event);
	Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(void)/* overload */;
	Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(int Isolation)/* overload */;
	void __fastcall StartTransaction [[deprecated]](const TTransactionDesc &TransDesc);
	System::UnicodeString __fastcall GetLoginUsername(void);
	__property unsigned ActiveStatements = {read=FActiveStatements, nodefault};
	__property bool AutoClone = {read=FAutoClone, write=FAutoClone, default=1};
	__property TConnectionState ConnectionState = {read=FConnectionState, write=FConnectionState, nodefault};
	__property TCustomSQLDataSet* DataSets[int Index] = {read=GetDataSet};
	__property bool InTransaction = {read=GetInTransaction, nodefault};
	__property int LocaleCode = {read=GetLocaleCode, write=SetLocaleCode, default=0};
	__property unsigned MaxStmtsPerConn = {read=FMaxStmtsPerConn, nodefault};
	__property Dbxcommon::TDBXDatabaseMetaData* MetaData = {read=GetMetaData};
	__property BOOL MultipleTransactionsSupported = {read=FSupportsNestedTrans, nodefault};
	__property bool ParamsLoaded = {read=FParamsLoaded, write=FParamsLoaded, nodefault};
	__property Dbxcommon::TDBXConnection* DBXConnection = {read=FDBXConnection};
	__property bool SQLHourGlass = {read=FSQLHourGlass, write=FSQLHourGlass, default=1};
	__property Dbxcommon::TDBXTraceEvent TraceCallbackEvent = {read=FTraceCallbackEvent};
	__property BOOL TransactionsSupported = {read=FTransactionsSupported, nodefault};
	__property TConnectionData* ConnectionData = {read=FConnectionData};
	__property System::UnicodeString UniqueID = {read=FUniqueID, write=FUniqueID};
	
__published:
	__property System::UnicodeString ConnectionName = {read=GetConnectionName, write=SetConnectionName};
	__property System::UnicodeString DriverName = {read=FDriverName, write=SetDriverName};
	__property System::UnicodeString GetDriverFunc = {read=FGetDriverFunc, write=FGetDriverFunc};
	__property bool KeepConnection = {read=FKeepConnection, write=SetKeepConnection, default=1};
	__property System::UnicodeString LibraryName = {read=GetLibraryName, write=FLibraryName};
	__property bool LoadParamsOnConnect = {read=FLoadParamsOnConnect, write=FLoadParamsOnConnect, default=0};
	__property LoginPrompt = {default=1};
	__property Classes::TStrings* Params = {read=FParams, write=SetParams};
	__property TTableScopes TableScope = {read=FTableScope, write=FTableScope, default=12};
	__property System::UnicodeString VendorLib = {read=GetVendorLib, write=FVendorLib};
	__property Dbxcommon::TValidateCertificate ValidatePeerCertificate = {read=FValidateCertificate, write=FValidateCertificate};
	__property AfterConnect;
	__property AfterDisconnect;
	__property BeforeConnect;
	__property BeforeDisconnect;
	__property TSQLConnectionLoginEvent OnLogin = {read=FOnLogin, write=FOnLogin};
	__property Connected = {default=0};
};


class DELPHICLASS TSQLDataLink;
class PASCALIMPLEMENTATION TSQLDataLink : public Db::TDetailDataLink
{
	typedef Db::TDetailDataLink inherited;
	
private:
	TCustomSQLDataSet* FSQLDataSet;
	
protected:
	virtual void __fastcall ActiveChanged(void);
	virtual void __fastcall CheckBrowseMode(void);
	virtual Db::TDataSet* __fastcall GetDetailDataSet(void);
	virtual void __fastcall RecordChanged(Db::TField* Field);
	
public:
	__fastcall TSQLDataLink(TCustomSQLDataSet* ADataSet);
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TSQLDataLink(void) { }
	
};


class DELPHICLASS TFLDDesc;
class PASCALIMPLEMENTATION TFLDDesc : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Word FFldNum;
	System::UnicodeString FName;
	System::Word FFldType;
	System::Word FSubType;
	short FUnits1;
	short FUnits2;
	System::Word FOffset;
	unsigned FLen;
	System::Word FNullOffset;
	Dbcommontypes::FLDVchk FFLDVchk;
	Dbcommontypes::FLDRights FFLDRights;
	System::WordBool FCalcField;
	__property System::Word iFldNum = {read=FFldNum, write=FFldNum, nodefault};
	__property System::UnicodeString szName = {read=FName, write=FName};
	__property System::Word iFldType = {read=FFldType, write=FFldType, nodefault};
	__property System::Word iSubType = {read=FSubType, write=FSubType, nodefault};
	__property short iUnits1 = {read=FUnits1, write=FUnits1, nodefault};
	__property short iUnits2 = {read=FUnits2, write=FUnits2, nodefault};
	__property System::Word iOffset = {read=FOffset, write=FOffset, nodefault};
	__property unsigned iLen = {read=FLen, write=FLen, nodefault};
	__property System::Word iNullOffset = {read=FNullOffset, write=FNullOffset, nodefault};
	__property Dbcommontypes::FLDVchk efldvVchk = {read=FFLDVchk, write=FFLDVchk, nodefault};
	__property Dbcommontypes::FLDRights efldrRights = {read=FFLDRights, write=FFLDRights, nodefault};
	__property System::WordBool bCalcField = {read=FCalcField, write=FCalcField, nodefault};
public:
	/* TObject.Create */ inline __fastcall TFLDDesc(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFLDDesc(void) { }
	
};


struct DECLSPEC_DRECORD TSQLSchemaInfo
{
	
public:
	TSchemaType FType;
	System::UnicodeString ObjectName;
	System::UnicodeString Pattern;
	System::UnicodeString PackageName;
};


typedef System::DynamicArray<TFLDDesc*> TFieldDescList;

typedef void __fastcall (__closure *TParseSqlEvent)(Classes::TStrings* &FieldNames, System::UnicodeString SQL, System::UnicodeString &TableName);

typedef void __fastcall (__closure *TParseInsertSqlEvent)(Classes::TStrings* &FieldNames, System::UnicodeString SQL, bool &BindAllFields, System::UnicodeString &TableName);

class PASCALIMPLEMENTATION TCustomSQLDataSet : public Db::TWideDataSet
{
	typedef Db::TWideDataSet inherited;
	
private:
	System::DynamicArray<System::Byte> FFieldBuffer;
	// System::TArray__1<System::Byte>  FFieldBuffer;
	bool FRefreshing;
	
private:
	System::DynamicArray<System::Byte> FBlobBuffer;
	// System::TArray__1<System::Byte>  FBlobBuffer;
	System::DynamicArray<System::Byte> FCalcFieldsBuffer;
	// System::TArray__1<System::Byte>  FCalcFieldsBuffer;
	bool FCheckRowsAffected;
	TSQLConnection* FClonedConnection;
	System::UnicodeString FCommandText;
	Db::TPSCommandType FCommandType;
	System::UnicodeString FDbxCommandType;
	__int64 FCurrentBlobSize;
	Db::TDataLink* FDataLink;
	System::UnicodeString FDesignerData;
	bool FGetNextRecordSet;
	bool FProvidedDBXReader;
	bool FOwnsProvidedDBXReader;
	Db::TIndexDefs* FIndexDefs;
	bool FIndexDefsLoaded;
	int FMaxBlobSize;
	unsigned FMaxColSize;
	System::UnicodeString FNativeCommand;
	bool FGetMetadata;
	bool FNumericMapping;
	bool FParamCheck;
	int FParamCount;
	Db::TParams* FParams;
	bool FPrepared;
	Classes::TList* FProcParams;
	int FRecords;
	int FRowsAffected;
	TSQLSchemaInfo FSchemaInfo;
	TParseSqlEvent FParseSelectSql;
	TParseSqlEvent FParseUpdateSql;
	TParseSqlEvent FParseDeleteSql;
	TParseInsertSqlEvent FParseInsertSql;
	System::UnicodeString FSortFieldNames;
	Dbxcommon::TDBXCommand* FDBXCommand;
	TSQLConnection* FSQLConnection;
	Dbxcommon::TDBXReader* FDBXReader;
	bool FStatementOpen;
	short FTransactionLevel [[deprecated]];
	System::UnicodeString FSchemaName;
	bool __fastcall CheckFieldNames(const System::UnicodeString FieldNames);
	void __fastcall CheckConnection(EConnectFlag eFlag);
	virtual System::UnicodeString __fastcall CheckDetail(const System::UnicodeString SQL);
	void __fastcall CheckStatement(bool ForSchema = false);
	bool __fastcall GetCalculatedField(Db::TField* Field, void * &Buffer);
	TCustomSQLDataSet* __fastcall GetDataSetFromSQL(System::UnicodeString TableName);
	Classes::TList* __fastcall GetProcParams(void);
	TSQLConnection* __fastcall GetInternalConnection(void);
	virtual int __fastcall GetObjectProcParamCount(void);
	virtual int __fastcall GetParamCount(void);
	virtual System::UnicodeString __fastcall GetQueryFromType(void);
	int __fastcall GetRowsAffected(void);
	System::UnicodeString __fastcall AddMetadataQuotes(System::UnicodeString Identifier, bool StoredProc);
	System::UnicodeString __fastcall QuoteIdentifier(System::UnicodeString Identifier, bool StoredProc);
	void __fastcall InitBuffers(void);
	void __fastcall LoadFieldDef(System::Word FieldID, TFLDDesc* &FldDesc)/* overload */;
	void __fastcall ReadDesignerData(Classes::TReader* Reader);
	void __fastcall RefreshParams(void);
	virtual void __fastcall SetConnection(const TSQLConnection* Value);
	void __fastcall SetCurrentBlobSize(__int64 Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	void __fastcall SetParameters(const Db::TParams* Value);
	void __fastcall SetParamsFromProcedure(void);
	void __fastcall SetParamsFromServerMethod(void);
	void __fastcall SetParamsFromSQL(Db::TDataSet* DataSet, bool bFromFields);
	void __fastcall SetPrepared(bool Value);
	virtual void __fastcall SetCommandType(const Db::TSQLCommandType Value);
	virtual void __fastcall SetDbxCommandType(const System::UnicodeString Value);
	void __fastcall WriteDesignerData(Classes::TWriter* Writer);
	void __fastcall SetSchemaName(const System::UnicodeString Value);
	void __fastcall SetSchemaOption(System::UnicodeString &ACatalogName, System::UnicodeString &ASchemaName);
	void __fastcall ParseIdentifier(System::UnicodeString Identifier, System::UnicodeString &Catalog, System::UnicodeString &Schema, System::UnicodeString &Name);
	void __fastcall GetParamsOutputParam(Db::TParam* Param, Dbxcommon::TDBXValue* Value);
	void __fastcall GetDataSetOutputParam(Db::TParam* Param, Dbxcommon::TDBXValue* Value);
	
protected:
	virtual void __fastcall PSEndTransaction(bool Commit);
	virtual void __fastcall PSExecute(void);
	virtual int __fastcall PSExecuteStatement(const System::WideString ASQL, Db::TParams* AParams, void * ResultSet = (void *)(0x0))/* overload */;
	virtual void __fastcall PSGetAttributes(Classes::TList* List);
	virtual Db::TIndexDef* __fastcall PSGetDefaultOrder(void);
	virtual System::WideString __fastcall PSGetKeyFieldsW(void);
	virtual System::WideString __fastcall PSGetQuoteCharW(void);
	virtual System::WideString __fastcall PSGetTableNameW(void);
	virtual Db::TIndexDefs* __fastcall PSGetIndexDefs(Db::TIndexOptions IndexTypes);
	virtual Db::TParams* __fastcall PSGetParams(void);
	virtual Db::EUpdateError* __fastcall PSGetUpdateException(Sysutils::Exception* E, Db::EUpdateError* Prev);
	virtual bool __fastcall PSInTransaction(void);
	virtual bool __fastcall PSIsSQLBased(void);
	virtual bool __fastcall PSIsSQLSupported(void);
	virtual void __fastcall PSReset(void);
	virtual void __fastcall PSSetCommandText(const System::WideString ACommandText)/* overload */;
	virtual void __fastcall PSSetParams(Db::TParams* AParams);
	virtual void __fastcall PSStartTransaction(void);
	virtual bool __fastcall PSUpdateRecord(Db::TUpdateKind UpdateKind, Db::TDataSet* Delta);
	virtual System::UnicodeString __fastcall PSGetCommandText(void);
	virtual Db::TPSCommandType __fastcall PSGetCommandType(void);
	virtual void __fastcall InternalClose(void);
	virtual void __fastcall InternalHandleException(void);
	virtual void __fastcall InternalInitFieldDefs(void);
	virtual void __fastcall InternalOpen(void);
	virtual bool __fastcall IsCursorOpen(void);
	void __fastcall AddFieldDesc(TFieldDescList FieldDescs, int DescNo, int &FieldID, Classes::TBits* RequiredFields, Db::TFieldDefs* FieldDefs);
	void __fastcall AddIndexDefs(TCustomSQLDataSet* SourceDS, System::UnicodeString IndexName = L"");
	void __fastcall CheckPrepareError(void);
	void __fastcall ClearIndexDefs(void);
	virtual void __fastcall CloseCursor(void);
	void __fastcall CloseStatement(void);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual int __fastcall ExecSQL(bool ExecDirect = false);
	void __fastcall ExecuteStatement(void);
	void __fastcall FreeReader(void);
	void __fastcall FreeBuffers(void);
	void __fastcall InternalFreeCommand(void);
	void __fastcall FreeCommand(void);
	virtual bool __fastcall GetCanModify(void);
	virtual Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall GetObjectTypeNames(Db::TFields* Fields);
	void __fastcall GetOutputParams(Classes::TList* AProcParams = (Classes::TList*)(0x0));
	virtual Db::TGetResult __fastcall GetRecord(System::PByte Buffer, Db::TGetMode GetMode, bool DoCheck);
	System::UnicodeString __fastcall GetSortFieldNames(void);
	virtual void __fastcall InitRecord(System::PByte Buffer);
	virtual void __fastcall InternalRefresh(void);
	virtual void __fastcall Loaded(void);
	bool __fastcall LocateRecord(const System::UnicodeString KeyFields, const System::Variant &KeyValues, Db::TLocateOptions Options, bool SyncCursor);
	virtual void __fastcall OpenCursor(bool InfoQuery);
	virtual void __fastcall OpenSchema(void);
	void __fastcall PropertyChanged(void);
	virtual void __fastcall SetBufListSize(int Value);
	virtual void __fastcall SetCommandText(const System::UnicodeString Value);
	virtual void __fastcall SetFieldData(Db::TField* Field, void * Buffer)/* overload */;
	void __fastcall SetParamsFromCursor(void);
	void __fastcall SetSortFieldNames(System::UnicodeString Value);
	virtual void __fastcall UpdateIndexDefs(void);
	__property System::DynamicArray<System::Byte> BlobBuffer = {read=FBlobBuffer, write=FBlobBuffer};
	// __property System::TArray__1<System::Byte>  BlobBuffer = ...;
	__property __int64 CurrentBlobSize = {read=FCurrentBlobSize, write=SetCurrentBlobSize};
	__property Db::TDataLink* DataLink = {read=FDataLink};
	__property TSQLConnection* InternalConnection = {read=GetInternalConnection};
	__property System::UnicodeString NativeCommand = {read=FNativeCommand, write=FNativeCommand};
	__property Classes::TList* ProcParams = {read=GetProcParams, write=FProcParams};
	__property int RowsAffected = {read=GetRowsAffected, nodefault};
	void __fastcall SetMaxBlobSize(int MaxSize);
	void __fastcall SetFCommandText(const System::UnicodeString Value);
	__property int ParamCount = {read=GetParamCount, nodefault};
	__property TSQLSchemaInfo SchemaInfo = {read=FSchemaInfo, write=FSchemaInfo};
	__property Db::TSQLCommandType CommandType = {read=FCommandType, write=SetCommandType, default=1};
	__property System::UnicodeString DbxCommandType = {read=FDbxCommandType, write=SetDbxCommandType};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property int MaxBlobSize = {read=FMaxBlobSize, write=SetMaxBlobSize, default=0};
	virtual int __fastcall GetRecordCount(void);
	__property Db::TParams* Params = {read=FParams, write=SetParameters};
	__property bool ParamCheck = {read=FParamCheck, write=FParamCheck, default=1};
	__property System::UnicodeString SortFieldNames = {read=GetSortFieldNames, write=SetSortFieldNames};
	
public:
	__fastcall virtual TCustomSQLDataSet(Classes::TComponent* AOwner)/* overload */;
	__fastcall TCustomSQLDataSet(Classes::TComponent* AOwner, Dbxcommon::TDBXReader* DBXReader, bool AOwnsInstance)/* overload */;
	__fastcall virtual ~TCustomSQLDataSet(void);
	__property System::UnicodeString CommandText = {read=FCommandText, write=SetCommandText};
	virtual Classes::TStream* __fastcall CreateBlobStream(Db::TField* Field, Db::TBlobStreamMode Mode);
	virtual int __fastcall GetBlobFieldData(int FieldNo, System::DynamicArray<System::Byte> &Buffer);
	void __fastcall GetCommandNames(Classes::TStrings* List);
	virtual void __fastcall GetDetailLinkFields(Classes::TList* MasterFields, Classes::TList* DetailFields);
	virtual bool __fastcall GetFieldData(int FieldNo, void * Buffer)/* overload */;
	virtual bool __fastcall GetFieldData(Db::TField* Field, void * Buffer)/* overload */;
	int __fastcall GetKeyFieldNames(Classes::TStrings* List)/* overload */;
	int __fastcall GetKeyFieldNames(Widestrings::TWideStrings* List)/* overload */;
	virtual System::UnicodeString __fastcall GetQuoteChar(void);
	Db::TParam* __fastcall ParamByName(const System::UnicodeString Value);
	virtual void __fastcall PrepareStatement(void);
	__property Db::TIndexDefs* IndexDefs = {read=FIndexDefs, write=FIndexDefs};
	virtual bool __fastcall IsSequenced(void);
	virtual bool __fastcall Locate(const System::UnicodeString KeyFields, const System::Variant &KeyValues, Db::TLocateOptions Options);
	virtual System::Variant __fastcall Lookup(const System::UnicodeString KeyFields, const System::Variant &KeyValues, const System::UnicodeString ResultFields);
	void __fastcall SetSchemaInfo(TSchemaType SchemaType, System::UnicodeString SchemaObjectName, System::UnicodeString SchemaPattern, System::UnicodeString PackageName = L"");
	__property bool Prepared = {read=FPrepared, write=SetPrepared, default=0};
	__property System::UnicodeString DesignerData = {read=FDesignerData, write=FDesignerData};
	__property int RecordCount = {read=GetRecordCount, nodefault};
	__property TSQLConnection* SQLConnection = {read=FSQLConnection, write=SetConnection};
	__property short TransactionLevel = {read=FTransactionLevel, write=FTransactionLevel, default=0};
	
__published:
	__property TParseSqlEvent ParseSelectSql = {read=FParseSelectSql, write=FParseSelectSql};
	__property TParseSqlEvent ParseDeleteSql = {read=FParseDeleteSql, write=FParseDeleteSql};
	__property TParseSqlEvent ParseUpdateSql = {read=FParseUpdateSql, write=FParseUpdateSql};
	__property TParseInsertSqlEvent ParseInsertSql = {read=FParseInsertSql, write=FParseInsertSql};
	__property System::UnicodeString SchemaName = {read=FSchemaName, write=SetSchemaName};
	__property bool GetMetadata = {read=FGetMetadata, write=FGetMetadata, default=1};
	__property bool NumericMapping = {read=FNumericMapping, write=FNumericMapping, default=0};
	__property ObjectView = {default=0};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property Active = {default=0};
/* Hoisted overloads: */
	
protected:
	inline int __fastcall  PSExecuteStatement(const System::UnicodeString ASQL, Db::TParams* AParams, void * ResultSet = (void *)(0x0)){ return Db::TWideDataSet::PSExecuteStatement(ASQL, AParams, ResultSet); }
	inline void __fastcall  PSSetCommandText(const System::UnicodeString CommandText){ Db::TWideDataSet::PSSetCommandText(CommandText); }
	inline void __fastcall  SetFieldData(Db::TField* Field, void * Buffer, bool NativeFormat){ Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
	
public:
	inline bool __fastcall  GetFieldData(Db::TField* Field, void * Buffer, bool NativeFormat){ return Db::TDataSet::GetFieldData(Field, Buffer, NativeFormat); }
	
};


class DELPHICLASS TSQLDataSet;
class PASCALIMPLEMENTATION TSQLDataSet : public TCustomSQLDataSet
{
	typedef TCustomSQLDataSet inherited;
	
public:
	__fastcall virtual TSQLDataSet(Classes::TComponent* AOwner)/* overload */;
	virtual int __fastcall ExecSQL(bool ExecDirect = false);
	
__published:
	__property CommandText;
	__property CommandType = {default=1};
	__property DbxCommandType;
	__property DataSource;
	__property MaxBlobSize = {default=0};
	__property ParamCheck = {default=1};
	__property Params;
	__property SortFieldNames;
	__property SQLConnection;
public:
	/* TCustomSQLDataSet.Destroy */ inline __fastcall virtual ~TSQLDataSet(void) { }
	
};


class DELPHICLASS TSQLQuery;
class PASCALIMPLEMENTATION TSQLQuery : public TCustomSQLDataSet
{
	typedef TCustomSQLDataSet inherited;
	
private:
	Classes::TStrings* FSQL;
	System::UnicodeString FText;
	void __fastcall QueryChanged(System::TObject* Sender);
	void __fastcall SetSQL(Classes::TStrings* Value);
	
public:
	__fastcall virtual TSQLQuery(Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TSQLQuery(void);
	virtual int __fastcall ExecSQL(bool ExecDirect = false);
	virtual void __fastcall PrepareStatement(void);
	__property RowsAffected;
	__property System::UnicodeString Text = {read=FText};
	
__published:
	__property DataSource;
	__property GetMetadata = {default=0};
	__property MaxBlobSize = {default=0};
	__property ParamCheck = {default=1};
	__property Params;
	__property Classes::TStrings* SQL = {read=FSQL, write=SetSQL};
	__property SQLConnection;
};


class DELPHICLASS TSQLStoredProc;
class PASCALIMPLEMENTATION TSQLStoredProc : public TCustomSQLDataSet
{
	typedef TCustomSQLDataSet inherited;
	
private:
	System::UnicodeString FStoredProcName;
	System::UnicodeString FPackageName;
	void __fastcall SetStoredProcName(System::UnicodeString Value);
	void __fastcall SetPackageName(System::UnicodeString Value);
	
public:
	__fastcall virtual TSQLStoredProc(Classes::TComponent* AOwner)/* overload */;
	virtual int __fastcall ExecProc(void);
	TCustomSQLDataSet* __fastcall NextRecordSet(void);
	virtual void __fastcall PrepareStatement(void);
	
__published:
	__property MaxBlobSize = {default=0};
	__property ParamCheck = {default=1};
	__property Params;
	__property System::UnicodeString PackageName = {read=FPackageName, write=SetPackageName};
	__property SQLConnection;
	__property System::UnicodeString StoredProcName = {read=FStoredProcName, write=SetStoredProcName};
public:
	/* TCustomSQLDataSet.Destroy */ inline __fastcall virtual ~TSQLStoredProc(void) { }
	
};


class DELPHICLASS TSQLTable;
class PASCALIMPLEMENTATION TSQLTable : public TCustomSQLDataSet
{
	typedef TCustomSQLDataSet inherited;
	
private:
	bool FIsDetail;
	Classes::TList* FIndexFields;
	System::UnicodeString FIndexFieldNames;
	System::UnicodeString FIndexName;
	Db::TMasterDataLink* FMasterLink;
	System::UnicodeString FTableName;
	int FIndexFieldCount;
	void __fastcall AddParamsToQuery(void);
	System::UnicodeString __fastcall GetMasterFields(void);
	Db::TField* __fastcall GetIndexField(int Index);
	int __fastcall GetIndexFieldCount(void);
	int __fastcall RefreshIndexFields(void);
	void __fastcall SetIndexFieldNames(System::UnicodeString Value);
	void __fastcall SetIndexName(System::UnicodeString Value);
	void __fastcall SetMasterFields(System::UnicodeString Value);
	void __fastcall SetTableName(System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetQueryFromType(void);
	HIDESBASE void __fastcall SetDataSource(Db::TDataSource* Value);
	
protected:
	virtual void __fastcall OpenCursor(bool InfoQuery);
	void __fastcall SetIndexField(int Index, Db::TField* Value);
	__property Db::TMasterDataLink* MasterLink = {read=FMasterLink};
	
public:
	__fastcall virtual TSQLTable(Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TSQLTable(void);
	void __fastcall DeleteRecords(void);
	void __fastcall GetIndexNames(Classes::TStrings* List);
	virtual void __fastcall PrepareStatement(void);
	__property Db::TField* IndexFields[int Index] = {read=GetIndexField, write=SetIndexField};
	__property int IndexFieldCount = {read=GetIndexFieldCount, nodefault};
	
__published:
	__property Active = {default=0};
	__property System::UnicodeString IndexFieldNames = {read=FIndexFieldNames, write=SetIndexFieldNames};
	__property System::UnicodeString IndexName = {read=FIndexName, write=SetIndexName};
	__property System::UnicodeString MasterFields = {read=GetMasterFields, write=SetMasterFields};
	__property Db::TDataSource* MasterSource = {read=GetDataSource, write=SetDataSource};
	__property MaxBlobSize = {default=0};
	__property SQLConnection;
	__property System::UnicodeString TableName = {read=FTableName, write=SetTableName};
};


class DELPHICLASS TSqlServerMethod;
class PASCALIMPLEMENTATION TSqlServerMethod : public TCustomSQLDataSet
{
	typedef TCustomSQLDataSet inherited;
	
private:
	System::UnicodeString FServerMethodName;
	void __fastcall SetServerMethodName(System::UnicodeString Value);
	virtual System::UnicodeString __fastcall CheckDetail(const System::UnicodeString SQL);
	
public:
	__fastcall virtual TSqlServerMethod(Classes::TComponent* AOwner)/* overload */;
	void __fastcall ExecuteMethod(void);
	
__published:
	__property Params;
	__property SQLConnection;
	__property System::UnicodeString ServerMethodName = {read=FServerMethodName, write=SetServerMethodName};
public:
	/* TCustomSQLDataSet.Destroy */ inline __fastcall virtual ~TSqlServerMethod(void) { }
	
};


typedef int __stdcall (*TGetDriverFunc)(System::WideChar * SVendorLib, System::WideChar * SResourceFile, /* out */ void *Obj);

//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt eSQLTable = 0x1;
static const System::ShortInt eSQLView = 0x2;
static const System::ShortInt eSQLSystemTable = 0x4;
static const System::ShortInt eSQLSynonym = 0x8;
static const System::ShortInt eSQLTempTable = 0x10;
static const System::ShortInt eSQLLocal = 0x20;
static const System::ShortInt eSQLProcedure = 0x1;
static const System::ShortInt eSQLFunction = 0x2;
static const System::ShortInt eSQLPackage = 0x4;
static const System::ShortInt eSQLSysProcedure = 0x8;
static const System::ShortInt eSQLRowId = 0x1;
static const System::ShortInt eSQLRowVersion = 0x2;
static const System::ShortInt eSQLAutoIncr = 0x4;
static const System::ShortInt eSQLDefault = 0x8;
static const System::ShortInt eSQLNonUnique = 0x1;
static const System::ShortInt eSQLUnique = 0x2;
static const System::ShortInt eSQLPrimaryKey = 0x4;
#define SSelect L"select"
#define SSelectStar L" select * "
#define SSelectStarFrom L" select * from "
#define SSelectSpaces L" select "
#define SWhere L" where "
#define SAnd L" and "
#define SOrderBy L" order by "
static const System::WideChar SParam = (System::WideChar)(0x3f);
static const System::ShortInt DefaultCursor = 0x0;
static const System::ShortInt HourGlassCursor = -11;
static const System::ShortInt DefaultMaxBlobSize = -1;
static const System::ShortInt DefaultRowsetSize = 0x14;
static const System::Word TErrorMessageSize = 0x800;
extern PACKAGE Dbcommon::TFieldMap FldTypeMap;
extern PACKAGE System::StaticArray<System::Word, 52> FldSubTypeMap;
extern PACKAGE System::StaticArray<Db::TFieldType, 39> DataTypeMap;
static const System::ShortInt SUB_TYPE_MEMO = 0x16;
extern PACKAGE System::StaticArray<Db::TFieldType, 15> BlobTypeMap;
extern PACKAGE System::UnicodeString __fastcall GetDriverRegistryFile(bool DesignMode = false);
extern PACKAGE System::UnicodeString __fastcall GetConnectionRegistryFile(bool DesignMode = false);
extern PACKAGE void __fastcall GetDriverNames(Classes::TStrings* List, bool DesignMode = true);
extern PACKAGE void __fastcall GetDelegateDriverNames(Classes::TStrings* List, bool DesignMode = true);
extern PACKAGE void __fastcall GetConnectionNames(Classes::TStrings* List, System::UnicodeString Driver = L"", bool DesignMode = true);
extern PACKAGE void __fastcall FreeProcParams(Classes::TList* &ProcParams);
extern PACKAGE void __fastcall LoadParamListItems(Db::TParams* Params, Classes::TList* ProcParams);

}	/* namespace Sqlexpr */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sqlexpr;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlexprHPP
