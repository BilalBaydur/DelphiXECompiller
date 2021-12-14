// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXCommon.pas' rev: 22.00

#ifndef DbxcommonHPP
#define DbxcommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBCommonTypes.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <ClassRegistry.hpp>	// Pascal unit
#include <Contnrs.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <SyncObjs.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <WideStrings.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxcommon
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TX509Certificate;
typedef void __fastcall (__closure *TValidateCertificate)(System::TObject* Owner, TX509Certificate* Certificate, const int ADepth, bool &Ok);

class DELPHICLASS TDBXSubDataTypes;
class PASCALIMPLEMENTATION TDBXSubDataTypes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt MoneySubType = 0x15;
	
	static const System::ShortInt MemoSubType = 0x16;
	
	static const System::ShortInt BinarySubType = 0x17;
	
	static const System::ShortInt WideMemoSubType = 0x20;
	
	static const System::ShortInt HMemoSubType = 0x21;
	
	static const System::ShortInt HBinarySubType = 0x22;
	
	static const System::ShortInt BFileSubType = 0x24;
	
	static const System::ShortInt FixedSubType = 0x1f;
	
	static const System::ShortInt AutoIncSubType = 0x1d;
	
	static const System::ShortInt AdtNestedTableSubType = 0x23;
	
	static const System::ShortInt AdtDateSubType = 0x25;
	
	static const System::ShortInt OracleTimeStampSubType = 0x26;
	
	static const System::ShortInt OracleIntervalSubType = 0x27;
	
	static const System::ShortInt UserSubType = 0x28;
	
public:
	/* TObject.Create */ inline __fastcall TDBXSubDataTypes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSubDataTypes(void) { }
	
};


class DELPHICLASS TDBXDataTypes;
class PASCALIMPLEMENTATION TDBXDataTypes : public TDBXSubDataTypes
{
	typedef TDBXSubDataTypes inherited;
	
public:
	static const System::ShortInt UnknownType = 0x0;
	
	static const System::ShortInt AnsiStringType = 0x1;
	
	static const System::ShortInt DateType = 0x2;
	
	static const System::ShortInt BlobType = 0x3;
	
	static const System::ShortInt BooleanType = 0x4;
	
	static const System::ShortInt Int16Type = 0x5;
	
	static const System::ShortInt Int32Type = 0x6;
	
	static const System::ShortInt DoubleType = 0x7;
	
	static const System::ShortInt BcdType = 0x8;
	
	static const System::ShortInt BytesType = 0x9;
	
	static const System::ShortInt TimeType = 0xa;
	
	static const System::ShortInt DateTimeType = 0xb;
	
	static const System::ShortInt UInt16Type = 0xc;
	
	static const System::ShortInt Uint32Type = 0xd;
	
	static const System::ShortInt VarBytesType = 0xf;
	
	static const System::ShortInt CursorType = 0x11;
	
	static const System::ShortInt Int64Type = 0x12;
	
	static const System::ShortInt Uint64Type = 0x13;
	
	static const System::ShortInt AdtType = 0x14;
	
	static const System::ShortInt ArrayType = 0x15;
	
	static const System::ShortInt RefType = 0x16;
	
	static const System::ShortInt TableType = 0x17;
	
	static const System::ShortInt TimeStampType = 0x18;
	
	static const System::ShortInt CurrencyType = 0x19;
	
	static const System::ShortInt WideStringType = 0x1a;
	
	static const System::ShortInt SingleType = 0x1b;
	
	static const System::ShortInt Int8Type = 0x1c;
	
	static const System::ShortInt Uint8Type = 0x1d;
	
	static const System::ShortInt ObjectType = 0x1e;
	
	static const System::ShortInt CharArrayType = 0x1f;
	
	static const System::ShortInt IntervalType = 0x20;
	
	static const System::ShortInt BinaryBlobType = 0x21;
	
	static const System::ShortInt DBXConnectionType = 0x22;
	
	static const System::ShortInt VariantType = 0x23;
	
	static const System::ShortInt TimeStampOffsetType = 0x24;
	
	static const System::ShortInt JsonValueType = 0x25;
	
	static const System::ShortInt CallbackType = 0x26;
	
	static const System::ShortInt MaxBaseTypes = 0x27;
	
public:
	/* TObject.Create */ inline __fastcall TDBXDataTypes(void) : TDBXSubDataTypes() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDataTypes(void) { }
	
};


typedef int TDBXType;

typedef int TDBXDate;

typedef int TDBXTime;

class DELPHICLASS TDBXErrorCodes;
class PASCALIMPLEMENTATION TDBXErrorCodes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt None = 0x0;
	
	static const System::ShortInt Warning = 0x1;
	
	static const System::ShortInt NoMemory = 0x2;
	
	static const System::ShortInt UnsupportedFieldType = 0x3;
	
	static const System::ShortInt InvalidHandle = 0x4;
	
	static const System::ShortInt NotSupported = 0x5;
	
	static const System::ShortInt InvalidTime = 0x6;
	
	static const System::ShortInt InvalidType = 0x7;
	
	static const System::ShortInt InvalidOrdinal = 0x8;
	
	static const System::ShortInt InvalidParameter = 0x9;
	
	static const System::ShortInt EoF = 0xa;
	
	static const System::ShortInt ParameterNotSet = 0xb;
	
	static const System::ShortInt InvalidUserOrPassword = 0xc;
	
	static const System::ShortInt InvalidPrecision = 0xd;
	
	static const System::ShortInt InvalidLength = 0xe;
	
	static const System::ShortInt InvalidIsolationLevel = 0xf;
	
	static const System::ShortInt InvalidTransactionId = 0x10;
	
	static const System::ShortInt DuplicateTransactionId = 0x11;
	
	static const System::ShortInt DriverRestricted = 0x12;
	
	static const System::ShortInt TransactionActive = 0x13;
	
	static const System::ShortInt MultipleTransactionNotEnabled = 0x14;
	
	static const System::ShortInt ConnectionFailed = 0x15;
	
	static const System::ShortInt DriverInitFailed = 0x16;
	
	static const System::ShortInt OptimisticLockFailed = 0x17;
	
	static const System::ShortInt InvalidReference = 0x18;
	
	static const System::ShortInt NoTable = 0x19;
	
	static const System::ShortInt MissingParameterMarker = 0x1a;
	
	static const System::ShortInt NotImplemented = 0x1b;
	
	static const System::ShortInt DriverIncompatible = 0x1c;
	
	static const System::ShortInt InvalidArgument = 0x1d;
	
	static const System::ShortInt InvalidOperation = 0x1e;
	
	static const System::ShortInt UnrecognizedCommandType = 0x1f;
	
	static const System::ShortInt CallbackError = 0x20;
	
	static const System::ShortInt SchemaNameUnspecified = 0x21;
	
	static const System::ShortInt DatabaseUnspecified = 0x22;
	
	static const System::ShortInt LibraryNameUnspecified = 0x23;
	
	static const System::ShortInt GetDriverFuncUnspecified = 0x24;
	
	static const System::ShortInt VendorLibUnspecified = 0x25;
	
	static const System::ShortInt NoData = 0x64;
	
	static const System::ShortInt MaxCommonErrors = 0x64;
	
	static const System::ShortInt VendorError = 0x65;
	
	static const System::ShortInt ServerClassExists = 0x66;
	
	static const System::ShortInt ServerMethodExists = 0x67;
	
	static const System::ShortInt ServerClassMissing = 0x68;
	
	static const System::ShortInt ServerMethodMissing = 0x69;
	
	static const System::ShortInt ServerMethodFailed = 0x70;
	
	static const System::ShortInt AuthorizationFailed = 0x71;
	
public:
	/* TObject.Create */ inline __fastcall TDBXErrorCodes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXErrorCodes(void) { }
	
};


typedef int TDBXErrorCode;

class DELPHICLASS TDBXIsolations;
class PASCALIMPLEMENTATION TDBXIsolations : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt ReadCommitted = 0x0;
	
	static const System::ShortInt RepeatableRead = 0x1;
	
	static const System::ShortInt DirtyRead = 0x2;
	
	static const System::ShortInt Serializable = 0x3;
	
	static const System::ShortInt SnapShot = 0x4;
	
public:
	/* TObject.Create */ inline __fastcall TDBXIsolations(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXIsolations(void) { }
	
};


typedef int TDBXIsolation;

class DELPHICLASS TDBXParameterDirections;
class PASCALIMPLEMENTATION TDBXParameterDirections : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt Unknown = 0x0;
	
	static const System::ShortInt InParameter = 0x1;
	
	static const System::ShortInt OutParameter = 0x2;
	
	static const System::ShortInt InOutParameter = 0x3;
	
	static const System::ShortInt ReturnParameter = 0x4;
	
public:
	/* TObject.Create */ inline __fastcall TDBXParameterDirections(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXParameterDirections(void) { }
	
};


typedef int TDBXParameterDirection;

class DELPHICLASS TDBXValueTypeFlags;
class PASCALIMPLEMENTATION TDBXValueTypeFlags : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt Nullable = 0x1;
	
	static const System::ShortInt ReadOnly = 0x2;
	
	static const System::ShortInt Searchable = 0x4;
	
	static const System::ShortInt AutoIncrement = 0x8;
	
	static const System::ShortInt ReadOnlyType = 0x20;
	
	static const System::ShortInt Hidden = 0x40;
	
	static const System::Byte ExtendedType = 0x80;
	
	static const System::Word ValueParameter = 0x100;
	
	static const System::Word Literal = 0x200;
	
public:
	/* TObject.Create */ inline __fastcall TDBXValueTypeFlags(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXValueTypeFlags(void) { }
	
};


class DELPHICLASS TDBXTraceFlags;
class PASCALIMPLEMENTATION TDBXTraceFlags : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt None = 0x0;
	
	static const System::ShortInt Prepare = 0x1;
	
	static const System::ShortInt Execute = 0x2;
	
	static const System::ShortInt Error = 0x4;
	
	static const System::ShortInt Command = 0x8;
	
	static const System::ShortInt Connect = 0x10;
	
	static const System::ShortInt Transact = 0x20;
	
	static const System::ShortInt Blob = 0x40;
	
	static const System::Byte Misc = 0x80;
	
	static const System::Word Vendor = 0x100;
	
	static const System::Word Parameter = 0x200;
	
	static const System::Word Reader = 0x400;
	
	static const System::Word DriverLoad = 0x800;
	
	static const System::Word MetaData = 0x1000;
	
	static const System::Word Driver = 0x2000;
	
	static const System::Word Custom = 0x4000;
	
public:
	/* TObject.Create */ inline __fastcall TDBXTraceFlags(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTraceFlags(void) { }
	
};


typedef int TDBXTraceFlag;

class DELPHICLASS TDBXTraceLevels;
class PASCALIMPLEMENTATION TDBXTraceLevels : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt None = 0x0;
	
	static const System::ShortInt Debug = 0x1;
	
	static const System::ShortInt Info = 0x2;
	
	static const System::ShortInt Warn = 0x3;
	
	static const System::ShortInt Error = 0x4;
	
	static const System::ShortInt Fatal = 0x5;
	
	static const System::ShortInt Highest = 0x5;
	
public:
	/* TObject.Create */ inline __fastcall TDBXTraceLevels(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTraceLevels(void) { }
	
};


typedef int TDBXTracelevel;

class DELPHICLASS TDBXPropertyNames;
class PASCALIMPLEMENTATION TDBXPropertyNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXPropertyNames_ConnectionName L"ConnectionName"
	
	#define TDBXPropertyNames_InstalledDrivers L"Installed Drivers"
	
	#define TDBXPropertyNames_GetDriverFunc L"GetDriverFunc"
	
	#define TDBXPropertyNames_VendorLib L"VendorLib"
	
	#define TDBXPropertyNames_ErrorResourceFile L"ErrorResourceFile"
	
	#define TDBXPropertyNames_LibraryName L"LibraryName"
	
	#define TDBXPropertyNames_DriverName L"DriverName"
	
	#define TDBXPropertyNames_HostName L"HostName"
	
	#define TDBXPropertyNames_Port L"Port"
	
	#define TDBXPropertyNames_Database L"Database"
	
	#define TDBXPropertyNames_UserName L"User_Name"
	
	#define TDBXPropertyNames_Password L"Password"
	
	#define TDBXPropertyNames_Role L"Role"
	
	#define TDBXPropertyNames_IsolationLevel L"IsolationLevel"
	
	#define TDBXPropertyNames_MaxBlobSize L"MaxBlobSize"
	
	#define TDBXPropertyNames_RowSetSize L"RowSetSize"
	
	#define TDBXPropertyNames_DelegateConnection L"DelegateConnection"
	
	#define TDBXPropertyNames_DriverUnit L"DriverUnit"
	
	#define TDBXPropertyNames_DriverPackage L"DriverPackage"
	
	#define TDBXPropertyNames_DriverAssembly L"DriverAssembly"
	
	#define TDBXPropertyNames_DriverPackageLoader L"DriverPackageLoader"
	
	#define TDBXPropertyNames_DriverAssemblyLoader L"DriverAssemblyLoader"
	
	#define TDBXPropertyNames_DelegateDriver L"DelegateDriver"
	
	#define TDBXPropertyNames_SchemaOverride L"SchemaOverride"
	
	#define TDBXPropertyNames_MetaDataPackageLoader L"MetaDataPackageLoader"
	
	#define TDBXPropertyNames_MetaDataAssemblyLoader L"MetaDataAssemblyLoader"
	
	#define TDBXPropertyNames_ProductVersion L"ProductVersion"
	
	#define TDBXPropertyNames_ProductName L"ProductName"
	
	#define TDBXPropertyNames_ServerConnection L"ServerConnection"
	
	#define TDBXPropertyNames_SupportsParameterMetadata L"SupportsParameterMetaData"
	
	#define TDBXPropertyNames_ConnectTimeout L"ConnectTimeout"
	
	#define TDBXPropertyNames_BufferKBSize L"BufferKBSize"
	
	#define TDBXPropertyNames_AutoUnloadDriver L"AutoUnloadDriver"
	
	#define TDBXPropertyNames_CommunicationProtocol L"CommunicationProtocol"
	
	#define TDBXPropertyNames_URLPath L"URLPath"
	
	#define TDBXPropertyNames_DSAuthenticationUser L"DSAuthenticationUser"
	
	#define TDBXPropertyNames_DSAuthenticationPassword L"DSAuthenticationPassword"
	
	#define TDBXPropertyNames_DSAuthenticationScheme L"DSAuthenticationScheme"
	
	#define TDBXPropertyNames_CommunicationTimeout L"CommunicationTimeout"
	
	#define TDBXPropertyNames_Filters L"Filters"
	
	#define TDBXPropertyNames_DatasnapContext L"DatasnapContext"
	
public:
	/* TObject.Create */ inline __fastcall TDBXPropertyNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPropertyNames(void) { }
	
};


class DELPHICLASS TDBXCommandTypes;
class PASCALIMPLEMENTATION TDBXCommandTypes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXCommandTypes_DbxSQL L"Dbx.SQL"
	
	#define TDBXCommandTypes_DbxStoredProcedure L"Dbx.StoredProcedure"
	
	#define TDBXCommandTypes_DbxTable L"Dbx.Table"
	
	#define TDBXCommandTypes_DbxMetaData L"Dbx.MetaData"
	
	#define TDBXCommandTypes_DbxCommand L"Dbx.Command"
	
	#define TDBXCommandTypes_DbxPool L"Dbx.Pool"
	
	#define TDBXCommandTypes_DSServerMethod L"DataSnap.ServerMethod"
	
public:
	/* TObject.Create */ inline __fastcall TDBXCommandTypes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCommandTypes(void) { }
	
};


class DELPHICLASS TDBXMetaDataCommands;
class PASCALIMPLEMENTATION TDBXMetaDataCommands : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXMetaDataCommands_GetDatabase L"GetDatabase"
	
	#define TDBXMetaDataCommands_GetDataTypes L"GetDataTypes"
	
	#define TDBXMetaDataCommands_GetTables L"GetTables"
	
	#define TDBXMetaDataCommands_GetColumns L"GetColumns"
	
	#define TDBXMetaDataCommands_GetForeignKeys L"GetForeignKeys"
	
	#define TDBXMetaDataCommands_GetForeignKeyColumns L"GetForeignKeyColumns"
	
	#define TDBXMetaDataCommands_GetIndexes L"GetIndexes"
	
	#define TDBXMetaDataCommands_GetIndexColumns L"GetIndexColumns"
	
	#define TDBXMetaDataCommands_GetPackages L"GetPackages"
	
	#define TDBXMetaDataCommands_GetProcedures L"GetProcedures"
	
	#define TDBXMetaDataCommands_GetProcedureParameters L"GetProcedureParameters"
	
	#define TDBXMetaDataCommands_GetUsers L"GetUsers"
	
	#define TDBXMetaDataCommands_GetViews L"GetViews"
	
	#define TDBXMetaDataCommands_GetSynonyms L"GetSynonyms"
	
	#define TDBXMetaDataCommands_GetCatalogs L"GetCatalogs"
	
	#define TDBXMetaDataCommands_GetSchemas L"GetSchemas"
	
	#define TDBXMetaDataCommands_GetProcedureSources L"GetProcedureSources"
	
	#define TDBXMetaDataCommands_GetPackageProcedures L"GetPackageProcedures"
	
	#define TDBXMetaDataCommands_GetPackageProcedureParameters L"GetPackageProcedureParameters"
	
	#define TDBXMetaDataCommands_GetPackageSources L"GetPackageSources"
	
	#define TDBXMetaDataCommands_GetRoles L"GetRoles"
	
	#define TDBXMetaDataCommands_GetReservedWords L"GetReservedWords"
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataCommands(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataCommands(void) { }
	
};


class DELPHICLASS TDBXMetaDataKeyword;
class PASCALIMPLEMENTATION TDBXMetaDataKeyword : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXMetaDataKeyword_PrimaryKey L"PrimaryKey"
	
	#define TDBXMetaDataKeyword_ForeignKey L"ForeignKey"
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataKeyword(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataKeyword(void) { }
	
};


class DELPHICLASS TDBXMetaDatabaseColumnNames;
class PASCALIMPLEMENTATION TDBXMetaDatabaseColumnNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXMetaDatabaseColumnNames_QuoteChar L"QuoteChar"
	
	#define TDBXMetaDatabaseColumnNames_ProcedureQuoteChar L"ProcedureQuoteChar"
	
	#define TDBXMetaDatabaseColumnNames_MaxCommands L"MaxCommands"
	
	#define TDBXMetaDatabaseColumnNames_SupportsTransactions L"SupportsTransactions"
	
	#define TDBXMetaDatabaseColumnNames_SupportsNestedTransactions L"SupportsNestedTransactions"
	
	#define TDBXMetaDatabaseColumnNames_SupportsRowSetSize L"SupportsRowSetSize"
	
	#define TDBXMetaDatabaseColumnNames_ProductVersion L"ProductVersion"
	
	#define TDBXMetaDatabaseColumnNames_ProductName L"ProductName"
	
	#define TDBXMetaDatabaseColumnNames_QuotePrefix L"QuotePrefix"
	
	#define TDBXMetaDatabaseColumnNames_QuoteSuffix L"QuoteSuffix"
	
	#define TDBXMetaDatabaseColumnNames_SupportsLowerCaseIdentifiers L"SupportsLowerCaseIdentifiers"
	
	#define TDBXMetaDatabaseColumnNames_SupportsUpperCaseIdentifiers L"SupportsUpperCaseIdentifiers"
	
	#define TDBXMetaDatabaseColumnNames_SupportsSPReturnCode L"SupportsSPReturnCode"
	
	#define TDBXMetaDatabaseColumnNames_SupportsParameterMetadata L"SupportsParameterMetadata"
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDatabaseColumnNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDatabaseColumnNames(void) { }
	
};


class DELPHICLASS TDBXMetaDataTableTypes;
class PASCALIMPLEMENTATION TDBXMetaDataTableTypes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXMetaDataTableTypes_Table L"Table"
	
	#define TDBXMetaDataTableTypes_View L"View"
	
	#define TDBXMetaDataTableTypes_SystemTable L"SystemTable"
	
	#define TDBXMetaDataTableTypes_Synonym L"Synonym"
	
	#define TDBXMetaDataTableTypes_SystemView L"SystemView"
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataTableTypes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataTableTypes(void) { }
	
};


class DELPHICLASS TDBXMetaDataProcedureTypes;
class PASCALIMPLEMENTATION TDBXMetaDataProcedureTypes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXMetaDataProcedureTypes_ProcedureType L"Procedure"
	
	#define TDBXMetaDataProcedureTypes_FunctionType L"Function"
	
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataProcedureTypes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataProcedureTypes(void) { }
	
};


typedef System::DynamicArray<System::WideChar> TDBXChars;

typedef System::DynamicArray<System::UnicodeString> TWideStringArray;

class DELPHICLASS TDBXValue;
typedef System::DynamicArray<TDBXValue*> TDBXValueArray;

class DELPHICLASS TDBXWritableValue;
typedef System::DynamicArray<TDBXWritableValue*> TDBXWritableValueArray;

class DELPHICLASS TDBXParameter;
typedef System::DynamicArray<TDBXParameter*> TDBXParameterArray;

class DELPHICLASS TDBXReader;
typedef System::DynamicArray<TDBXReader*> TDBXReaderArray;

class DELPHICLASS TDBXError;
class PASCALIMPLEMENTATION TDBXError : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
private:
	int FErrorCode;
	System::UnicodeString FErrorMessage;
	
public:
	__fastcall TDBXError(int ErrorCode, const System::UnicodeString ErrorMessage)/* overload */;
	__fastcall TDBXError(int ErrorCode, const System::UnicodeString ErrorMessage, const Sysutils::Exception* InnerException)/* overload */;
	static System::UnicodeString __fastcall ErrorCodeToString(int ErrorCode);
	__property int ErrorCode = {read=FErrorCode, nodefault};
	__property System::UnicodeString Message = {read=FErrorMessage};
public:
	/* Exception.CreateFmt */ inline __fastcall TDBXError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDBXError(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDBXError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDBXError(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDBXError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDBXError(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDBXError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDBXError(void) { }
	
};


typedef void __fastcall (__closure *TDBXErrorEvent)(TDBXError* DBXError);

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDBXTraceInfo
{
	
private:
	System::UnicodeString FTraceMessage;
	int FTraceFlag;
	int FTraceLevel;
	System::UnicodeString FCustomCategory;
	
public:
	__property System::UnicodeString Message = {read=FTraceMessage, write=FTraceMessage};
	__property int TraceFlag = {read=FTraceFlag, write=FTraceFlag};
	__property int TraceLevel = {read=FTraceLevel, write=FTraceLevel};
	__property System::UnicodeString CustomCategory = {read=FCustomCategory, write=FCustomCategory};
};
#pragma pack(pop)


typedef Dbcommontypes::CBRType __fastcall (__closure *TDBXTraceEvent)(const TDBXTraceInfo &TraceInfo);

class DELPHICLASS TDBXProperties;
class DELPHICLASS TDBXContext;
class PASCALIMPLEMENTATION TDBXProperties : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
public:
	System::UnicodeString operator[](const System::UnicodeString Name) { return Values[Name]; }
	
private:
	TDBXContext* FDBXContext;
	Classes::TStrings* FProperties;
	System::TObject* FOwner;
	Classes::TComponent* FComponentOwner;
	Classes::TNotifyEvent FOnChange;
	TValidateCertificate FValidateCertificate;
	System::UnicodeString __fastcall GetValue(const System::UnicodeString Name);
	void __fastcall SetValue(const System::UnicodeString Name, const System::UnicodeString Value);
	int __fastcall GetCount(void);
	
protected:
	virtual void __fastcall DoOnChange(System::TObject* Sender);
	
public:
	__fastcall virtual TDBXProperties(TDBXContext* DBXContext)/* overload */;
	__fastcall virtual TDBXProperties(void)/* overload */;
	bool __fastcall GetBoolean(const System::UnicodeString Name);
	int __fastcall GetInteger(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetRequiredValue(const System::UnicodeString Name);
	__fastcall virtual ~TDBXProperties(void);
	TDBXProperties* __fastcall Clone(void);
	void __fastcall SetComponentOwner(Classes::TComponent* AOwner);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	void __fastcall AddProperties(Widestrings::TWideStrings* List)/* overload */;
	void __fastcall AddProperties(Classes::TStrings* List)/* overload */;
	void __fastcall AddUniqueProperties(Classes::TStrings* List)/* overload */;
	void __fastcall MergeProperties(Classes::TStrings* List);
	void __fastcall SetProperties(const System::UnicodeString ConnectionString)/* overload */;
	void __fastcall Add(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall GetLists(TWideStringArray &Names, TWideStringArray &Values);
	void __fastcall Clear(void);
	__property System::UnicodeString Values[const System::UnicodeString Name] = {read=GetValue, write=SetValue/*, default*/};
	__property Classes::TStrings* Properties = {read=FProperties};
	__property int Count = {read=GetCount, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TValidateCertificate OnValidatePeerCertificate = {read=FValidateCertificate, write=FValidateCertificate};
};


typedef TMetaClass* TDBXPropertiesClass;

class DELPHICLASS TDBXConnectionFactory;
class DELPHICLASS TDBXFormatter;
class DELPHICLASS TDBXDelegateItem;
class DELPHICLASS TDBXPropertiesItem;
class DELPHICLASS TDBXDelegateDriver;
class DELPHICLASS TDBXConnection;
class DELPHICLASS TDBXDriver;
class PASCALIMPLEMENTATION TDBXConnectionFactory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXFormatter* FDBXDefaultFormatter;
	__classmethod TDBXConnectionFactory* __fastcall OpenConnectionFactory(const System::UnicodeString DriverFileName, const System::UnicodeString ConnectionFileName);
	TDBXDelegateItem* __fastcall CreateDelegatePath(const System::UnicodeString ConnectionName, TDBXProperties* DBXProperties)/* overload */;
	TDBXDelegateItem* __fastcall CreateDelegatePath(const System::UnicodeString Prefix, int Depth, TDBXDelegateItem* DelegateItem, TDBXProperties* DBXProperties)/* overload */;
	TDBXPropertiesItem* __fastcall HasConnectionPropertiesItem(const System::UnicodeString ConnectionName);
	TDBXPropertiesItem* __fastcall GetConnectionPropertiesItem(const System::UnicodeString ConnectionName);
	TDBXProperties* __fastcall CombineDriverProperties(TDBXProperties* ConProperties);
	static TDBXConnectionFactory* ConnectionFactorySingleton;
	Classes::TStringList* FDrivers;
	Classes::TStringList* FConnectionProperties;
	TDBXDelegateDriver* __fastcall GetDriver(const System::UnicodeString DriverName, TDBXProperties* DriverProperties)/* overload */;
	System::UnicodeString __fastcall getDriverName(TDBXProperties* ConnectionProperties);
	TDBXConnection* __fastcall GetConnection(const TDBXContext* DBXContext, const TDBXProperties* ConnectionProperties)/* overload */;
	TDBXConnection* __fastcall GetConnection(const TDBXContext* DBXContext, const System::UnicodeString ConnectionName, const System::UnicodeString UserName, const System::UnicodeString Password)/* overload */;
	
protected:
	TDBXContext* FDBXContext;
	
protected:
	virtual TDBXTraceEvent __fastcall GetTraceInfoEvent(void);
	virtual void __fastcall SetTraceInfoEvent(const TDBXTraceEvent TraceInfoEvent);
	virtual TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual void __fastcall SetErrorEvent(const TDBXErrorEvent ErrorEvent);
	virtual int __fastcall GetTraceFlags(void);
	virtual void __fastcall SetTraceFlags(const int TraceFlags);
	virtual void __fastcall LoadDrivers(void);
	virtual void __fastcall LoadConnections(void);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	
public:
	__fastcall TDBXConnectionFactory(void);
	__fastcall virtual ~TDBXConnectionFactory(void);
	virtual void __fastcall Open(void);
	virtual void __fastcall Close(void);
	void __fastcall GetConnectionItems(Classes::TStrings* Items);
	void __fastcall GetRegisteredDriverNames(Classes::TStringList* DriverNames);
	void __fastcall GetDriverNames(Classes::TStrings* Items);
	TDBXProperties* __fastcall HasConnectionProperties(const System::UnicodeString ConnectionName);
	TDBXProperties* __fastcall GetConnectionProperties(const System::UnicodeString ConnectionName);
	TDBXProperties* __fastcall GetDriverProperties(const System::UnicodeString DriverName);
	TDBXProperties* __fastcall HasDriverProperties(const System::UnicodeString DriverName);
	TDBXDriver* __fastcall GetDriver(const System::UnicodeString DriverName)/* overload */;
	TDBXDelegateDriver* __fastcall GetConnectionDriver(const System::UnicodeString ConnectionName)/* overload */;
	TDBXConnection* __fastcall GetConnection(const System::UnicodeString ConnectionName, const System::UnicodeString UserName, const System::UnicodeString Password)/* overload */;
	TDBXConnection* __fastcall GetConnection(TDBXProperties* ConnectionProperties)/* overload */;
	static void __fastcall SetConnectionFactory(const TDBXConnectionFactory* ConnectionFactory);
	static TDBXConnectionFactory* __fastcall GetConnectionFactory();
	__property TDBXErrorEvent OnError = {read=GetErrorEvent, write=SetErrorEvent};
	__property TDBXTraceEvent OnTrace = {read=GetTraceInfoEvent, write=SetTraceInfoEvent};
	__property int TraceFlags = {read=GetTraceFlags, write=SetTraceFlags, nodefault};
	__property TDBXFormatter* DBXFormatter = {read=FDBXDefaultFormatter, write=FDBXDefaultFormatter};
};


class DELPHICLASS TDBXIniFileConnectionFactory;
class PASCALIMPLEMENTATION TDBXIniFileConnectionFactory : public TDBXConnectionFactory
{
	typedef TDBXConnectionFactory inherited;
	
private:
	System::UnicodeString FConnectionsFile;
	System::UnicodeString FDriversFile;
	TDBXProperties* __fastcall LoadSectionProperties(Inifiles::TMemIniFile* IniFile, System::UnicodeString Section, bool LoadConnection);
	TDBXProperties* __fastcall LoadDriver(Inifiles::TMemIniFile* DriverIni, const System::UnicodeString DriverName);
	
protected:
	virtual void __fastcall LoadDrivers(void);
	virtual void __fastcall LoadConnections(void);
	
public:
	__fastcall TDBXIniFileConnectionFactory(void);
	__fastcall virtual ~TDBXIniFileConnectionFactory(void);
	void __fastcall GetDriverItems(Classes::TStrings* Items);
	__property System::UnicodeString DriversFile = {read=FDriversFile, write=FDriversFile};
	__property System::UnicodeString ConnectionsFile = {read=FConnectionsFile, write=FConnectionsFile};
};


class DELPHICLASS TDBXMemoryConnectionFactory;
class PASCALIMPLEMENTATION TDBXMemoryConnectionFactory : public TDBXConnectionFactory
{
	typedef TDBXConnectionFactory inherited;
	
public:
	__fastcall TDBXMemoryConnectionFactory(void);
	__fastcall virtual ~TDBXMemoryConnectionFactory(void);
};


class DELPHICLASS TDBXCommand;
typedef TDBXCommand* __fastcall (__closure *TDBXCreateCommandEvent)(TDBXContext* DbxContext, TDBXConnection* Connection, TDBXCommand* MorphicCommand);

typedef TMetaClass* TDBXDriverClass;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TDBXDriverDef
{
	
public:
	System::UnicodeString FDriverName;
	TDBXProperties* FDriverProperties;
	TDBXContext* FDBXContext;
};
#pragma pack(pop)


class DELPHICLASS TDBXCommandFactory;
class DELPHICLASS TDBXDriverLoader;
class DELPHICLASS TDBXConnectionBuilder;
class PASCALIMPLEMENTATION TDBXDriver : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FDriverName;
	int FReferenceCount;
	TDBXProperties* FDriverProperties;
	TDBXCommandFactory* FMetaDataCommandFactory;
	bool FCachedUntilFinalization;
	void __fastcall AddReference(void);
	void __fastcall RemoveReference(void);
	void __fastcall UncacheAtFinalization(void);
	
protected:
	void __fastcall CacheUntilFinalization(void);
	
protected:
	TDBXContext* FDBXContext;
	TDBXDriverLoader* FDriverLoader;
	Classes::TStrings* FCommandFactories;
	virtual TDBXProperties* __fastcall GetDriverProperties(void);
	virtual void __fastcall InitDriverProperties(const TDBXProperties* DriverProperties);
	virtual System::UnicodeString __fastcall GetDriverName(void);
	virtual void __fastcall SetDriverName(const System::UnicodeString DriverName);
	virtual TDBXConnection* __fastcall CreateConnection(TDBXConnectionBuilder* ConnectionBuilder) = 0 ;
	virtual void __fastcall Close(void) = 0 ;
	virtual TDBXCommand* __fastcall CreateMorphCommand(TDBXContext* DbxContext, TDBXConnection* Connection, TDBXCommand* MorphicCommand);
	void __fastcall LoadMetaDataCommandFactory(const System::UnicodeString MetaDataCommandFactoryClassName, const System::UnicodeString MetaDataCommandFactoryPackageName);
	void __fastcall AddCommandFactory(const System::UnicodeString Name, TDBXCreateCommandEvent OnCreateCommand)/* overload */;
	void __fastcall AddCommandFactory(const System::UnicodeString Name, TDBXCommandFactory* CommandFactory)/* overload */;
	
public:
	__fastcall virtual TDBXDriver(const TDBXDriverDef &DriverDef)/* overload */;
	__fastcall TDBXDriver(void)/* overload */;
	virtual void __fastcall GetDriverPropertyNames(Classes::TStrings* List);
	virtual System::TClass __fastcall GetDriverClass(void);
	__fastcall virtual ~TDBXDriver(void);
	virtual System::UnicodeString __fastcall GetDriverVersion(void) = 0 ;
	__property System::UnicodeString DriverName = {read=GetDriverName, write=SetDriverName};
	__property TDBXProperties* DriverProperties = {read=GetDriverProperties};
	__property System::UnicodeString DriverVersion = {read=GetDriverVersion};
};


class DELPHICLASS TDBXStateItem;
class PASCALIMPLEMENTATION TDBXStateItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Close(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXStateItem(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXStateItem(void) { }
	
};


class DELPHICLASS TDBXStateItemList;
class PASCALIMPLEMENTATION TDBXStateItemList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDBXStateItemList(void);
	TDBXStateItem* __fastcall GetStateItem(System::UnicodeString Name);
	void __fastcall AddStateItem(System::UnicodeString Name, TDBXStateItem* Item);
	void __fastcall RemoveAndFreeStateItem(System::UnicodeString Name);
public:
	/* TObject.Create */ inline __fastcall TDBXStateItemList(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXTransaction;
class DELPHICLASS TDBXDatabaseMetaData;
class PASCALIMPLEMENTATION TDBXConnection : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXDriver* FDriverDelegate;
	TDBXTransaction* FTransactionStack;
	TDBXDatabaseMetaData* FDatabaseMetaData;
	bool FOpen;
	System::UnicodeString FProductVersion;
	bool FProductVersionInitialized;
	System::TObject* FMetaDataReader;
	Classes::TList* FCommands;
	bool __fastcall HasTransaction(TDBXTransaction* Transaction);
	void __fastcall CheckTransaction(TDBXTransaction* Transaction);
	void __fastcall FreeTransactions(TDBXTransaction* StartTransaction);
	void __fastcall AddCommand(TDBXCommand* Command);
	void __fastcall RemoveCommand(TDBXCommand* Command);
	
protected:
	int FIsolationLevel;
	
protected:
	TDBXContext* FDBXContext;
	TDBXProperties* FConnectionProperties;
	void __fastcall CloseAllCommands(void);
	void __fastcall RollbackAllTransactions(void);
	virtual TDBXTransaction* __fastcall CreateAndBeginTransaction(const int Isolation) = 0 ;
	virtual void __fastcall Commit(const TDBXTransaction* Transaction) = 0 ;
	virtual void __fastcall Rollback(const TDBXTransaction* Transaction) = 0 ;
	virtual TDBXDatabaseMetaData* __fastcall GetDatabaseMetaData(void);
	virtual TDBXProperties* __fastcall GetConnectionProperties(void);
	virtual void __fastcall SetConnectionProperties(const TDBXProperties* Value);
	virtual TDBXTraceEvent __fastcall GetTraceInfoEvent(void);
	virtual void __fastcall SetTraceInfoEvent(const TDBXTraceEvent TraceInfoEvent);
	virtual int __fastcall GetTraceFlags(void);
	virtual void __fastcall SetTraceFlags(const int TraceFlags);
	virtual TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual void __fastcall SetErrorEvent(const TDBXErrorEvent ErrorEvent);
	virtual TDBXFormatter* __fastcall GetDBXFormatter(void);
	virtual void __fastcall SetDBXFormatter(const TDBXFormatter* DBXFormatter);
	virtual bool __fastcall GetIsOpen(void);
	virtual void __fastcall Open(void);
	virtual TDBXCommand* __fastcall DerivedCreateCommand(void);
	virtual void __fastcall DerivedOpen(void) = 0 ;
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List) = 0 ;
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List) = 0 ;
	virtual void __fastcall DerivedClose(void) = 0 ;
	virtual TDBXCommand* __fastcall CreateMorphCommand(TDBXCommand* MorphicCommand);
	virtual System::UnicodeString __fastcall GetProductVersion(void);
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetConnectionProperty(const System::UnicodeString Name);
	__fastcall TDBXConnection(TDBXConnectionBuilder* ConnectionBuilder);
	
public:
	__fastcall virtual ~TDBXConnection(void);
	virtual void __fastcall Close(void);
	virtual TDBXTransaction* __fastcall BeginTransaction(int Isolation)/* overload */;
	virtual TDBXTransaction* __fastcall BeginTransaction(void)/* overload */;
	virtual void __fastcall CommitFreeAndNil(TDBXTransaction* &Transaction);
	virtual void __fastcall RollbackFreeAndNil(TDBXTransaction* &Transaction);
	virtual void __fastcall RollbackIncompleteFreeAndNil(TDBXTransaction* &Transaction);
	virtual TDBXCommand* __fastcall CreateCommand(void)/* overload */;
	void __fastcall GetCommandTypes(Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetCommandTypes(Classes::TStrings* List)/* overload */;
	void __fastcall GetCommands(const System::UnicodeString CommandType, Widestrings::TWideStrings* List)/* overload */;
	void __fastcall GetCommands(const System::UnicodeString CommandType, Classes::TStrings* List)/* overload */;
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString Name);
	__property TDBXProperties* ConnectionProperties = {read=GetConnectionProperties, write=SetConnectionProperties};
	__property TDBXDatabaseMetaData* DatabaseMetaData = {read=GetDatabaseMetaData};
	__property TDBXTraceEvent OnTrace = {read=GetTraceInfoEvent, write=SetTraceInfoEvent};
	__property int TraceFlags = {read=GetTraceFlags, write=SetTraceFlags, nodefault};
	__property TDBXErrorEvent OnErrorEvent = {read=GetErrorEvent, write=SetErrorEvent};
	__property bool IsOpen = {read=GetIsOpen, nodefault};
	__property TDBXFormatter* DBXFormatter = {read=GetDBXFormatter, write=SetDBXFormatter};
	__property System::UnicodeString ProductVersion = {read=GetProductVersion};
	__property System::UnicodeString ProductName = {read=GetProductName};
	__property System::UnicodeString ConnectionProperty[const System::UnicodeString Name] = {read=GetConnectionProperty};
};


class PASCALIMPLEMENTATION TDBXTransaction : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXTransaction* FNext;
	TDBXConnection* FConnection;
	
protected:
	int FIsolationLevel;
	
protected:
	__fastcall TDBXTransaction(TDBXConnection* Connection);
	
public:
	__fastcall virtual ~TDBXTransaction(void);
	__property TDBXConnection* Connection = {read=FConnection};
};


class PASCALIMPLEMENTATION TDBXDatabaseMetaData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FQuoteChar;
	System::UnicodeString FProcedureQuoteChar;
	bool FSupportsTransactions;
	bool FSupportsNestedTransactions;
	int FMaxCommands;
	bool FSupportsRowSetSize;
	System::UnicodeString FQuotePrefix;
	System::UnicodeString FQuoteSuffix;
	bool FSupportsLowerCaseIdentifiers;
	bool FSupportsUpperCaseIdentifiers;
	bool FSupportsSPReturnCode;
	System::UnicodeString FMetaDataVersion;
	bool FSupportsParameterMetadata;
	void __fastcall Init(TDBXConnection* Connection);
	
protected:
	TDBXContext* FDBXContext;
	__fastcall TDBXDatabaseMetaData(TDBXContext* DBXContext);
	
public:
	__property System::UnicodeString QuoteChar = {read=FQuoteChar};
	__property System::UnicodeString ProcedureQuoteChar = {read=FProcedureQuoteChar};
	__property bool SupportsTransactions = {read=FSupportsTransactions, nodefault};
	__property bool SupportsNestedTransactions = {read=FSupportsNestedTransactions, nodefault};
	__property int MaxCommands = {read=FMaxCommands, nodefault};
	__property bool SupportsRowSetSize = {read=FSupportsRowSetSize, nodefault};
	__property System::UnicodeString QuotePrefix = {read=FQuotePrefix};
	__property System::UnicodeString QuoteSuffix = {read=FQuoteSuffix};
	__property bool SupportsLowerCaseIdentifiers = {read=FSupportsLowerCaseIdentifiers, nodefault};
	__property bool SupportsUpperCaseIdentifiers = {read=FSupportsUpperCaseIdentifiers, nodefault};
	__property System::UnicodeString MetaDataVersion = {read=FMetaDataVersion};
	__property bool SupportsSPReturnCode = {read=FSupportsSPReturnCode, nodefault};
	__property bool SupportsParameterMetadata = {read=FSupportsParameterMetadata, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDatabaseMetaData(void) { }
	
};


class DELPHICLASS TDBXParameterList;
class DELPHICLASS TDBXRow;
class PASCALIMPLEMENTATION TDBXCommand : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCommandType;
	System::UnicodeString FText;
	TDBXReader* FLastReader;
	bool FOpen;
	bool FPrepared;
	int FCommandTimeout;
	TDBXConnection* FConnection;
	bool FConnectionClosed;
	Contnrs::TObjectList* FFreeOnCloseList;
	void __fastcall CommandExecuting(void);
	void __fastcall CommandExecuted(void);
	void __fastcall SetParameters(void);
	virtual void __fastcall CloseReader(void);
	void __fastcall ConnectionClosing(void);
	void __fastcall FreeOnExecuteObjects(void);
	
protected:
	TDBXParameterList* FParameters;
	void __fastcall NotImplemented(void);
	
protected:
	TDBXContext* FDBXContext;
	__fastcall TDBXCommand(TDBXContext* DBXContext);
	virtual void __fastcall SetCommandType(const System::UnicodeString CommandType);
	virtual System::UnicodeString __fastcall GetCommandType(void);
	virtual System::UnicodeString __fastcall GetText(void);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetRowSetSize(const __int64 RowSetSize) = 0 ;
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize) = 0 ;
	virtual __int64 __fastcall GetRowsAffected(void) = 0 ;
	virtual void __fastcall SetCommandTimeout(const int Timeout);
	virtual int __fastcall GetCommandTimeout(void);
	virtual TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual TDBXRow* __fastcall CreateParameterRow(void);
	virtual void __fastcall CreateParameters(TDBXCommand* Command);
	virtual TDBXParameterList* __fastcall GetParameters(void);
	virtual void __fastcall Open(void);
	virtual TDBXReader* __fastcall DerivedGetNextReader(void) = 0 ;
	virtual void __fastcall DerivedOpen(void) = 0 ;
	virtual void __fastcall DerivedClose(void) = 0 ;
	virtual void __fastcall DerivedPrepare(void) = 0 ;
	virtual TDBXReader* __fastcall DerivedExecuteQuery(void) = 0 ;
	virtual void __fastcall DerivedExecuteUpdate(void) = 0 ;
	virtual void __fastcall DerivedClearParameters(void);
	
public:
	__fastcall virtual ~TDBXCommand(void);
	void __fastcall FreeOnExecute(System::TObject* Value);
	virtual void __fastcall Close(void);
	virtual void __fastcall Prepare(void);
	virtual TDBXReader* __fastcall ExecuteQuery(void);
	virtual void __fastcall ExecuteUpdate(void);
	virtual TDBXReader* __fastcall GetNextReader(void);
	virtual TDBXParameter* __fastcall CreateParameter(void);
	__property __int64 RowsAffected = {read=GetRowsAffected};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property __int64 RowSetSize = {write=SetRowSetSize};
	__property __int64 MaxBlobSize = {write=SetMaxBlobSize};
	__property System::UnicodeString CommandType = {read=GetCommandType, write=SetCommandType};
	__property TDBXParameterList* Parameters = {read=GetParameters};
	__property TDBXErrorEvent OnErrorEvent = {read=GetErrorEvent};
	__property bool IsPrepared = {read=FPrepared, nodefault};
	__property int CommandTimeout = {read=GetCommandTimeout, write=SetCommandTimeout, nodefault};
};


class DELPHICLASS TDBXMorphicCommand;
class PASCALIMPLEMENTATION TDBXMorphicCommand : public TDBXCommand
{
	typedef TDBXCommand inherited;
	
private:
	virtual void __fastcall CloseReader(void);
	
protected:
	TDBXConnection* FConnection;
	TDBXCommand* FCommand;
	__int64 FRowSetSize;
	__int64 FMaxBlobSize;
	void __fastcall CopyProperties(TDBXCommand* Command);
	
protected:
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual void __fastcall SetCommandType(const System::UnicodeString Value);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual TDBXRow* __fastcall CreateParameterRow(void);
	virtual TDBXParameterList* __fastcall GetParameters(void);
	virtual void __fastcall CreateParameters(TDBXCommand* Command);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual void __fastcall SetRowSetSize(const __int64 Value);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	virtual TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedPrepare(void);
	
public:
	__fastcall TDBXMorphicCommand(TDBXContext* DBXContext, TDBXConnection* Connection);
	__fastcall virtual ~TDBXMorphicCommand(void);
	virtual void __fastcall Prepare(void);
	virtual TDBXReader* __fastcall ExecuteQuery(void);
	virtual void __fastcall ExecuteUpdate(void);
	virtual TDBXReader* __fastcall GetNextReader(void);
};


class DELPHICLASS TDBXValueList;
class DELPHICLASS TDBXValueType;
class PASCALIMPLEMENTATION TDBXValueList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXWritableValueArray FValues;
	int FValueCount;
	int FLastOrdinal;
	bool FClosed;
	virtual int __fastcall FindOrdinal(const System::UnicodeString Name, const int StartOrdinal, const int EndOrdinal)/* overload */;
	void __fastcall InvalidOrdinal(const int Ordinal);
	void __fastcall InvalidName(const System::UnicodeString Name, const int Ordinal);
	
protected:
	TDBXContext* FDBXContext;
	void __fastcall FailIfClosed(void);
	__property TDBXContext* DBXContext = {read=FDBXContext};
	
protected:
	void __fastcall ClearValues(void);
	virtual void __fastcall SetValues(const TDBXValueArray Values)/* overload */;
	virtual void __fastcall SetValues(const TDBXWritableValueArray Values)/* overload */;
	virtual void __fastcall SetValues(const TDBXWritableValueArray Values, const int Count)/* overload */;
	virtual TDBXValue* __fastcall GetValue(const int Ordinal);
	virtual TDBXValue* __fastcall GetValueByName(const System::UnicodeString Name);
	virtual TDBXValueType* __fastcall GetValueType(const int Ordinal);
	virtual int __fastcall GetColumnCount(void);
	
public:
	__fastcall TDBXValueList(TDBXContext* DBXContext);
	__fastcall virtual ~TDBXValueList(void);
	__property bool Closed = {read=FClosed, nodefault};
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name)/* overload */;
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property TDBXValueType* ValueType[const int Ordinal] = {read=GetValueType};
	__property TDBXWritableValueArray Values = {read=FValues};
};


class DELPHICLASS TDBXWritableValueList;
class PASCALIMPLEMENTATION TDBXWritableValueList : public TDBXValueList
{
	typedef TDBXValueList inherited;
	
public:
	TDBXValue* operator[](const WideString& Name) { return GetValueByName(Name); }
	TDBXWritableValue* operator[](const int Ordinal) { return Value[Ordinal]; }
	
protected:
	virtual TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	
public:
	__fastcall TDBXWritableValueList(TDBXContext* DBXContext);
	__property TDBXWritableValue* Value[const int Ordinal] = {read=GetWritableValue/*, default*/};
public:
	/* TDBXValueList.Destroy */ inline __fastcall virtual ~TDBXWritableValueList(void) { }
	
};


class DELPHICLASS TDBXByteReader;
class PASCALIMPLEMENTATION TDBXReader : public TDBXValueList
{
	typedef TDBXValueList inherited;
	
public:
	TDBXValue* operator[](const WideString& Name) { return GetValueByName(Name); }
	TDBXValue* operator[](const int Ordinal) { return Value[Ordinal]; }
	
private:
	TDBXByteReader* FByteReader;
	TDBXCommand* FCommand;
	void __fastcall CommandCloseReader(void);
	void __fastcall CloseReader(void);
	
protected:
	TDBXRow* FDbxRow;
	TDBXErrorEvent __fastcall GetErrorEvent(void);
	
protected:
	__fastcall TDBXReader(TDBXContext* DBXContext, TDBXRow* DbxRow, TDBXByteReader* ByteReader);
	virtual bool __fastcall DerivedNext(void) = 0 ;
	virtual void __fastcall DerivedClose(void) = 0 ;
	virtual TDBXByteReader* __fastcall GetByteReader(void);
	virtual int __fastcall GetReaderHandle(void);
	virtual bool __fastcall IsUpdateable(void);
	virtual int __fastcall GetRowHandle(void);
	TDBXRow* __fastcall GetRow(void);
	
public:
	__fastcall virtual ~TDBXReader(void);
	void __fastcall Close(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall Reset(void);
	virtual System::UnicodeString __fastcall GetObjectTypeName(int Ordinal);
	__property TDBXByteReader* ByteReader = {read=GetByteReader};
	__property TDBXErrorEvent OnErrorEvent = {read=GetErrorEvent};
	__property int RowHandle = {read=GetRowHandle, nodefault};
	__property bool Updateable = {read=IsUpdateable, nodefault};
	__property TDBXValue* Value[const int Ordinal] = {read=GetValue/*, default*/};
};


class PASCALIMPLEMENTATION TDBXValueType : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FCaption;
	int FOrdinal;
	int FDataType;
	int FSubType;
	__int64 FSize;
	__int64 FPrecision;
	int FScale;
	int FChildPosition;
	int FFlags;
	int FParameterDirection;
	TDBXRow* FDbxRow;
	bool __fastcall IsNullable(void);
	bool __fastcall IsReadOnly(void);
	bool __fastcall IsSearchable(void);
	bool __fastcall IsAutoIncrement(void);
	bool __fastcall IsReadOnlyType(void);
	
protected:
	TDBXContext* FDBXContext;
	
protected:
	virtual void __fastcall SetDbxRow(const TDBXRow* DbxRow);
	virtual void __fastcall SetParameterDirection(const int ParameterDirection);
	virtual void __fastcall SetName(const System::UnicodeString Name);
	virtual void __fastcall SetDisplayName(const System::UnicodeString Caption);
	virtual void __fastcall SetOrdinal(const int Ordinal);
	virtual void __fastcall SetDataType(const int DataType);
	virtual void __fastcall SetSubType(const int SubType);
	virtual void __fastcall SetPrecision(const __int64 Precision);
	virtual void __fastcall SetScale(const int Scale);
	virtual void __fastcall SetChildPosition(const int ChildPosition);
	virtual void __fastcall SetFlags(const int Flags);
	virtual void __fastcall SetNullable(const bool NullableValue);
	virtual void __fastcall SetSize(const __int64 Size);
	virtual void __fastcall SetHidden(const BOOL Hidden);
	virtual void __fastcall SetValueParameter(const bool ValueParameter);
	virtual void __fastcall SetLiteral(const bool Literal);
	virtual int __fastcall GetParameterDirection(void);
	virtual System::UnicodeString __fastcall GetName(void);
	virtual System::UnicodeString __fastcall GetDisplayName(void);
	virtual int __fastcall GetOrdinal(void);
	virtual int __fastcall GetDataType(void);
	virtual int __fastcall GetSubType(void);
	virtual __int64 __fastcall GetPrecision(void);
	virtual int __fastcall GetScale(void);
	virtual int __fastcall GetChildPosition(void);
	virtual int __fastcall GetFlags(void);
	virtual __int64 __fastcall GetSize(void);
	virtual BOOL __fastcall GetHidden(void);
	virtual bool __fastcall GetValueParameter(void);
	virtual bool __fastcall GetLiteral(void);
	
private:
	bool FModified;
	void __fastcall FailIfReadOnlyType(void);
	void __fastcall SetReadOnlyType(void);
	__property TDBXContext* DBXContext = {read=FDBXContext};
	
public:
	__fastcall TDBXValueType(TDBXContext* DBXContext)/* overload */;
	__fastcall TDBXValueType(void)/* overload */;
	__fastcall virtual ~TDBXValueType(void);
	TDBXValueType* __fastcall Clone(void);
	TDBXValueType* __fastcall WritableClone(void);
	static System::UnicodeString __fastcall DataTypeName(int DataType);
	static void __fastcall InvalidTypeAccess(int ExpectedDataType, int DataType);
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString DisplayName = {read=FCaption, write=SetDisplayName};
	__property int DataType = {read=GetDataType, write=SetDataType, nodefault};
	__property int Ordinal = {read=GetOrdinal, write=SetOrdinal, nodefault};
	__property int SubType = {read=GetSubType, write=SetSubType, nodefault};
	__property __int64 Precision = {read=GetPrecision, write=SetPrecision};
	__property int Scale = {read=GetScale, write=SetScale, nodefault};
	__property int ChildPosition = {read=GetChildPosition, write=SetChildPosition, nodefault};
	__property int ValueTypeFlags = {read=GetFlags, write=SetFlags, nodefault};
	__property __int64 Size = {read=GetSize, write=SetSize};
	__property bool Nullable = {read=IsNullable, write=SetNullable, nodefault};
	__property bool ReadOnly = {read=IsReadOnly, nodefault};
	__property bool Searchable = {read=IsSearchable, nodefault};
	__property bool AutoIncrement = {read=IsAutoIncrement, nodefault};
	__property BOOL Hidden = {read=GetHidden, write=SetHidden, nodefault};
	__property int ParameterDirection = {read=GetParameterDirection, write=SetParameterDirection, nodefault};
	__property bool ValueParameter = {read=GetValueParameter, write=SetValueParameter, nodefault};
	__property bool Literal = {read=GetLiteral, write=SetLiteral, nodefault};
};


class PASCALIMPLEMENTATION TDBXParameter : public TDBXValueType
{
	typedef TDBXValueType inherited;
	
private:
	TDBXWritableValue* FValue;
	System::TObject* FConnectionHandler;
	System::UnicodeString FTypeName;
	void __fastcall UpdateParameterType(int SetDataType);
	void __fastcall CopyByteValue(TDBXValue* Source, TDBXWritableValue* Dest);
	void __fastcall AssignValue(TDBXValue* Source);
	virtual void __fastcall AssignType(TDBXParameter* Source);
	
protected:
	virtual TDBXWritableValue* __fastcall GetValue(void);
	virtual void __fastcall SetParameter(void);
	
public:
	__fastcall TDBXParameter(TDBXContext* DbxContext)/* overload */;
	__fastcall TDBXParameter(TDBXContext* DbxContext, TDBXRow* Row)/* overload */;
	__fastcall TDBXParameter(TDBXContext* DbxContext, TDBXRow* Row, TDBXParameter* Source)/* overload */;
	__fastcall virtual ~TDBXParameter(void);
	virtual void __fastcall Assign(TDBXParameter* Source);
	HIDESBASE virtual System::TObject* __fastcall Clone(void);
	__property TDBXWritableValue* Value = {read=GetValue};
	__property System::UnicodeString TypeName = {read=FTypeName, write=FTypeName};
	__property System::TObject* ConnectionHandler = {read=FConnectionHandler, write=FConnectionHandler};
};


typedef System::DynamicArray<TDBXValueType*> TDBXValueTypeArray;

class DELPHICLASS TDBXValueTypeList;
class PASCALIMPLEMENTATION TDBXParameterList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TDBXParameter* operator[](const WideString& Name) { return GetParameterByName(Name); }
	TDBXParameter* operator[](const int Ordinal) { return Parameter[Ordinal]; }
	
private:
	TDBXValueTypeList* FValueTypes;
	TDBXCommand* FCommand;
	TDBXRow* FParameterRow;
	TDBXParameter* __fastcall GetParameterByName(const System::UnicodeString Name);
	void __fastcall InvalidOrdinal(int Ordinal);
	
protected:
	void __fastcall SetPendingOutParameter(const int Ordinal);
	virtual TDBXRow* __fastcall GetRow(void);
	
protected:
	TDBXContext* FDBXContext;
	__fastcall TDBXParameterList(TDBXContext* DBXContext, TDBXCommand* Command)/* overload */;
	virtual TDBXParameter* __fastcall GetParameterByOrdinal(const int Ordinal);
	virtual int __fastcall GetCount(void);
	
public:
	__fastcall TDBXParameterList(TDBXContext* DBXContext, TDBXRow* DBXRow)/* overload */;
	__fastcall virtual ~TDBXParameterList(void);
	virtual void __fastcall SetCount(const int Count);
	virtual void __fastcall AddParameter(TDBXParameter* Parameter);
	virtual void __fastcall SetParameter(const int Ordinal, const TDBXParameter* Parameter);
	virtual void __fastcall InsertParameter(int Ordinal, TDBXParameter* Parameter);
	virtual void __fastcall RemoveParameter(int Ordinal)/* overload */;
	virtual void __fastcall RemoveParameter(TDBXParameter* Parameter)/* overload */;
	virtual void __fastcall ClearParameters(void)/* overload */;
	virtual void __fastcall RemoveParameters(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name);
	__property int Count = {read=GetCount, write=SetCount, nodefault};
	__property TDBXParameter* Parameter[const int Ordinal] = {read=GetParameterByOrdinal/*, default*/};
};


class PASCALIMPLEMENTATION TDBXValue : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXValueType* FValueType;
	int FGeneration;
	BOOL FIsNull;
	virtual void __fastcall InvalidOperation(void);
	static void __fastcall UnsupportedFieldType(TDBXContext* DBXContext, TDBXValueType* ValueType);
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
protected:
	TDBXRow* FDbxRow;
	__fastcall TDBXValue(TDBXValueType* ValueType);
	TDBXContext* __fastcall GetDbxContext(void);
	__property TDBXContext* DbxContext = {read=GetDbxContext};
	virtual TDBXValue* __fastcall GetNonDelegate(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual TDBXDate __fastcall GetAsDate(void);
	virtual TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual System::TDateTime __fastcall GetAsDateTime(void);
	virtual System::Currency __fastcall GetAsCurrency(void);
	virtual System::OleVariant __fastcall GetAsVariant(void);
	virtual Classes::TStream* __fastcall GetAsStream(void);
	virtual TDBXReader* __fastcall GetAsDBXReader(void);
	
public:
	__fastcall virtual ~TDBXValue(void);
	static TDBXWritableValue* __fastcall CreateValue(TDBXContext* DBXContext, TDBXValueType* ValueType, TDBXRow* DbxRow, bool ReadOnlyType)/* overload */;
	static TDBXWritableValue* __fastcall CreateValue(TDBXValueType* ValueType)/* overload */;
	virtual bool __fastcall IsNull(void) = 0 ;
	virtual __int64 __fastcall GetValueSize(void);
	virtual System::AnsiString __fastcall GetAnsiString(void);
	virtual TDBXDate __fastcall GetDate(void);
	virtual bool __fastcall GetBoolean(void)/* overload */;
	virtual TDBXTime __fastcall GetTime(void);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual System::UnicodeString __fastcall GetString(void)/* overload */;
	virtual System::Byte __fastcall GetUInt8(void)/* overload */;
	virtual System::ShortInt __fastcall GetInt8(void)/* overload */;
	virtual System::Word __fastcall GetUInt16(void)/* overload */;
	virtual short __fastcall GetInt16(void)/* overload */;
	virtual int __fastcall GetInt32(void)/* overload */;
	virtual __int64 __fastcall GetInt64(void)/* overload */;
	virtual float __fastcall GetSingle(void);
	virtual double __fastcall GetDouble(void);
	virtual __int64 __fastcall GetBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length)/* overload */;
	virtual Sqltimst::TSQLTimeStamp __fastcall GetTimeStamp(void);
	virtual Sqltimst::TSQLTimeStampOffset __fastcall GetTimeStampOffset(void);
	virtual Fmtbcd::TBcd __fastcall GetBcd(void);
	virtual TDBXReader* __fastcall GetDBXReader(bool AInstanceOwner)/* overload */;
	virtual TDBXReader* __fastcall GetDBXReader(void)/* overload */;
	virtual TDBXConnection* __fastcall GetDBXConnection(void);
	virtual Classes::TStream* __fastcall GetStream(bool AInstanceOwner)/* overload */;
	virtual Classes::TStream* __fastcall GetStream(void)/* overload */;
	virtual Dbxjson::TJSONValue* __fastcall GetJSONValue(void)/* overload */;
	virtual Dbxjson::TJSONValue* __fastcall GetJSONValue(bool AInstanceOwner)/* overload */;
	virtual Dbxjson::TDBXCallback* __fastcall GetCallbackValue(void);
	virtual System::TObject* __fastcall GetObjectValue(void)/* overload */;
	virtual System::TObject* __fastcall GetObjectValue(bool AInstanceOwner)/* overload */;
	virtual System::UnicodeString __fastcall GetWideString(System::UnicodeString defaultValue)/* overload */;
	virtual bool __fastcall GetBoolean(bool defaultValue)/* overload */;
	virtual System::Byte __fastcall GetUInt8(System::Byte defaultValue)/* overload */;
	virtual System::ShortInt __fastcall GetInt8(System::ShortInt defaultValue)/* overload */;
	virtual System::Word __fastcall GetUInt16(System::Word defaultValue)/* overload */;
	virtual short __fastcall GetInt16(short defaultValue)/* overload */;
	virtual int __fastcall GetInt32(int defaultValue)/* overload */;
	virtual __int64 __fastcall GetInt64(__int64 defaultValue)/* overload */;
	virtual bool __fastcall EqualsValue(TDBXValue* Other);
	virtual short __fastcall Compare(TDBXValue* Other);
	__property TDBXValueType* ValueType = {read=FValueType};
	__property System::UnicodeString AsString = {read=GetAsString};
	__property bool AsBoolean = {read=GetAsBoolean, nodefault};
	__property System::Byte AsUInt8 = {read=GetAsUInt8, nodefault};
	__property System::ShortInt AsInt8 = {read=GetAsInt8, nodefault};
	__property System::Word AsUInt16 = {read=GetAsUInt16, nodefault};
	__property short AsInt16 = {read=GetAsInt16, nodefault};
	__property int AsInt32 = {read=GetAsInt32, nodefault};
	__property __int64 AsInt64 = {read=GetAsInt64};
	__property float AsSingle = {read=GetAsSingle};
	__property double AsDouble = {read=GetAsDouble};
	__property Fmtbcd::TBcd AsBcd = {read=GetAsBcd};
	__property TDBXDate AsDate = {read=GetAsDate, nodefault};
	__property TDBXTime AsTime = {read=GetAsTime, nodefault};
	__property Sqltimst::TSQLTimeStamp AsTimeStamp = {read=GetAsTimeStamp};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime};
	__property System::OleVariant AsVariant = {read=GetAsVariant};
	__property Classes::TStream* AsStream = {read=GetAsStream};
	__property TDBXReader* AsDBXReader = {read=GetAsDBXReader};
};


class DELPHICLASS TDBXStreamReader;
class PASCALIMPLEMENTATION TDBXWritableValue : public TDBXValue
{
	typedef TDBXValue inherited;
	
private:
	bool FSetPending;
	virtual void __fastcall UpdateType(void);
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual TDBXStreamReader* __fastcall GetStreamReader(void);
	
protected:
	__fastcall TDBXWritableValue(TDBXValueType* ValueType);
	virtual void __fastcall SetPendingValue(void);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsDate(const TDBXDate Value);
	virtual void __fastcall SetAsTime(const TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetAsDateTime(const System::TDateTime Value);
	virtual void __fastcall SetAsCurrency(const System::Currency Value);
	virtual void __fastcall SetAsCurrencyValue(const System::Currency Value, int Precision, int Decimals);
	virtual void __fastcall SetAsVariant(const System::OleVariant &Value);
	virtual void __fastcall SetAsStream(const Classes::TStream* Value);
	virtual void __fastcall SetAsDBXReader(const TDBXReader* Value);
	
public:
	__fastcall virtual ~TDBXWritableValue(void);
	void __fastcall MarkAsPending(void);
	virtual void __fastcall SetNull(void);
	virtual void __fastcall SetTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetBoolean(const bool Value);
	virtual void __fastcall SetDate(const TDBXDate Value);
	virtual void __fastcall SetTime(const TDBXTime Value);
	virtual void __fastcall SetWideString(const System::UnicodeString Value);
	virtual void __fastcall SetString(const System::UnicodeString Value);
	virtual void __fastcall SetUInt8(const System::Byte Value);
	virtual void __fastcall SetInt8(const System::ShortInt Value);
	virtual void __fastcall SetUInt16(const System::Word Value);
	virtual void __fastcall SetInt16(const short Value);
	virtual void __fastcall SetInt32(const int Value);
	virtual void __fastcall SetInt64(const __int64 Value);
	virtual void __fastcall SetSingle(const float Value);
	virtual void __fastcall SetDouble(const double Value);
	virtual void __fastcall SetStaticBytes(__int64 Offset, System::Byte const *Buffer, const int Buffer_Size, __int64 BufferOffset, __int64 Length);
	virtual void __fastcall SetDynamicBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length);
	virtual void __fastcall SetDBXReader(const TDBXReader* Value, const bool AInstanceOwner)/* overload */;
	virtual void __fastcall SetStream(const Classes::TStream* Stream, const bool AInstanceOwner);
	virtual void __fastcall SetDBXConnection(const TDBXConnection* Value);
	virtual void __fastcall SetJSONValue(const Dbxjson::TJSONValue* Value, const bool AInstanceOwner);
	virtual void __fastcall SetObjectValue(const System::TObject* Value, const bool AInstanceOwner);
	virtual void __fastcall SetCallbackValue(const Dbxjson::TDBXCallback* Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property System::Byte AsUInt8 = {read=GetAsUInt8, write=SetAsUInt8, nodefault};
	__property System::ShortInt AsInt8 = {read=GetAsInt8, write=SetAsInt8, nodefault};
	__property System::Word AsUInt16 = {read=GetAsUInt16, write=SetAsUInt16, nodefault};
	__property short AsInt16 = {read=GetAsInt16, write=SetAsInt16, nodefault};
	__property int AsInt32 = {read=GetAsInt32, write=SetAsInt32, nodefault};
	__property __int64 AsInt64 = {read=GetAsInt64, write=SetAsInt64};
	__property float AsSingle = {read=GetAsSingle, write=SetAsSingle};
	__property double AsDouble = {read=GetAsDouble, write=SetAsDouble};
	__property Fmtbcd::TBcd AsBcd = {read=GetAsBcd, write=SetAsBcd};
	__property TDBXDate AsDate = {read=GetAsDate, write=SetAsDate, nodefault};
	__property TDBXTime AsTime = {read=GetAsTime, write=SetAsTime, nodefault};
	__property Sqltimst::TSQLTimeStamp AsTimeStamp = {read=GetAsTimeStamp, write=SetAsTimeStamp};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime, write=SetAsDateTime};
	__property System::Currency AsCurrency = {read=GetAsCurrency, write=SetAsCurrency};
	__property System::OleVariant AsVariant = {read=GetAsVariant, write=SetAsVariant};
	__property Classes::TStream* AsStream = {read=GetAsStream, write=SetAsStream};
	__property TDBXReader* AsDBXReader = {read=GetAsDBXReader, write=SetAsDBXReader};
};


class DELPHICLASS TDBXNullValue;
class PASCALIMPLEMENTATION TDBXNullValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
protected:
	__fastcall TDBXNullValue(TDBXValueType* ValueType);
	
public:
	__fastcall virtual ~TDBXNullValue(void);
	virtual bool __fastcall IsNull(void);
};


class DELPHICLASS TDBXAnsiStringValue;
class DELPHICLASS TDBXByteStreamReader;
class PASCALIMPLEMENTATION TDBXAnsiStringValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	System::AnsiString FString;
	TDBXByteStreamReader* FOverFlowBytes;
	void __fastcall SetOverflowBytes(const TDBXByteStreamReader* OverFlowBytes);
	virtual TDBXStreamReader* __fastcall GetStreamReader(void);
	virtual void __fastcall UpdateType(void);
	
protected:
	__fastcall TDBXAnsiStringValue(TDBXValueType* ValueType);
	
public:
	__fastcall virtual ~TDBXAnsiStringValue(void);
	virtual bool __fastcall IsNull(void);
	virtual System::AnsiString __fastcall GetAnsiString(void);
	virtual void __fastcall SetAnsiString(const System::AnsiString Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual TDBXDate __fastcall GetAsDate(void);
	virtual TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsDate(const TDBXDate Value);
	virtual void __fastcall SetAsTime(const TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
};


class DELPHICLASS TDBXDateValue;
class PASCALIMPLEMENTATION TDBXDateValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	TDBXDate FDate;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual System::TDateTime __fastcall GetAsDateTime(void);
	virtual void __fastcall SetAsDateTime(const System::TDateTime Value);
	virtual bool __fastcall IsNull(void);
	virtual TDBXDate __fastcall GetDate(void);
	virtual void __fastcall SetDate(const TDBXDate Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual TDBXDate __fastcall GetAsDate(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsDate(const TDBXDate Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXDateValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXDateValue(void) { }
	
};


class DELPHICLASS TDBXCursorValue;
class PASCALIMPLEMENTATION TDBXCursorValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
public:
	virtual bool __fastcall IsNull(void);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXCursorValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXCursorValue(void) { }
	
};


class DELPHICLASS TDBXBooleanValue;
class PASCALIMPLEMENTATION TDBXBooleanValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	BOOL FBoolean;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual bool __fastcall GetBoolean(void)/* overload */;
	virtual void __fastcall SetBoolean(const bool Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual bool __fastcall EqualsValue(TDBXValue* Other);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXBooleanValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXBooleanValue(void) { }
	
/* Hoisted overloads: */
	
public:
	inline bool __fastcall  GetBoolean(bool defaultValue){ return TDBXValue::GetBoolean(defaultValue); }
	
};


class DELPHICLASS TDBXTimeValue;
class PASCALIMPLEMENTATION TDBXTimeValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	TDBXTime FTime;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual TDBXTime __fastcall GetTime(void);
	virtual void __fastcall SetTime(const TDBXTime Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual System::TDateTime __fastcall GetAsDateTime(void);
	virtual void __fastcall SetAsDateTime(const System::TDateTime Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsTime(const TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXTimeValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXTimeValue(void) { }
	
};


class DELPHICLASS TDBXWideStringValue;
class PASCALIMPLEMENTATION TDBXWideStringValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	System::UnicodeString FWideString;
	TDBXByteStreamReader* FOverFlowBytes;
	virtual void __fastcall UpdateType(void);
	void __fastcall SetOverflowBytes(const TDBXByteStreamReader* OverFlowBytes);
	virtual TDBXStreamReader* __fastcall GetStreamReader(void);
	
protected:
	__fastcall TDBXWideStringValue(TDBXValueType* ValueType);
	
public:
	__fastcall virtual ~TDBXWideStringValue(void);
	virtual bool __fastcall IsNull(void);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual TDBXDate __fastcall GetAsDate(void);
	virtual TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsDate(const TDBXDate Value);
	virtual void __fastcall SetAsTime(const TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual bool __fastcall EqualsValue(TDBXValue* Other);
	virtual short __fastcall Compare(TDBXValue* Other);
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  GetWideString(System::UnicodeString defaultValue){ return TDBXValue::GetWideString(defaultValue); }
	
};


class DELPHICLASS TDBXInt8Value;
class PASCALIMPLEMENTATION TDBXInt8Value : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	System::ShortInt FInt8;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual System::ShortInt __fastcall GetInt8(void)/* overload */;
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetInt8(const System::ShortInt Value);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXInt8Value(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXInt8Value(void) { }
	
/* Hoisted overloads: */
	
public:
	inline System::ShortInt __fastcall  GetInt8(System::ShortInt defaultValue){ return TDBXValue::GetInt8(defaultValue); }
	
};


class DELPHICLASS TDBXUInt8Value;
class PASCALIMPLEMENTATION TDBXUInt8Value : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	System::Byte FUInt8;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual System::Byte __fastcall GetUInt8(void)/* overload */;
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetUInt8(const System::Byte Value);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXUInt8Value(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXUInt8Value(void) { }
	
/* Hoisted overloads: */
	
public:
	inline System::Byte __fastcall  GetUInt8(System::Byte defaultValue){ return TDBXValue::GetUInt8(defaultValue); }
	
};


class DELPHICLASS TDBXInt16Value;
class PASCALIMPLEMENTATION TDBXInt16Value : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	short FInt16;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual short __fastcall GetInt16(void)/* overload */;
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetInt16(const short Value);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXInt16Value(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXInt16Value(void) { }
	
/* Hoisted overloads: */
	
public:
	inline short __fastcall  GetInt16(short defaultValue){ return TDBXValue::GetInt16(defaultValue); }
	
};


class DELPHICLASS TDBXUInt16Value;
class PASCALIMPLEMENTATION TDBXUInt16Value : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	System::Word FUInt16;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual System::Word __fastcall GetUInt16(void)/* overload */;
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetUInt16(const System::Word Value);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXUInt16Value(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXUInt16Value(void) { }
	
/* Hoisted overloads: */
	
public:
	inline System::Word __fastcall  GetUInt16(System::Word defaultValue){ return TDBXValue::GetUInt16(defaultValue); }
	
};


class DELPHICLASS TDBXInt32Value;
class PASCALIMPLEMENTATION TDBXInt32Value : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	int FInt32;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual int __fastcall GetInt32(void)/* overload */;
	virtual void __fastcall SetInt32(const int Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual bool __fastcall EqualsValue(TDBXValue* Other);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXInt32Value(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXInt32Value(void) { }
	
/* Hoisted overloads: */
	
public:
	inline int __fastcall  GetInt32(int defaultValue){ return TDBXValue::GetInt32(defaultValue); }
	
};


class DELPHICLASS TDBXInt64Value;
class PASCALIMPLEMENTATION TDBXInt64Value : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	__int64 FInt64;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual __int64 __fastcall GetInt64(void)/* overload */;
	virtual void __fastcall SetInt64(const __int64 Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXInt64Value(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXInt64Value(void) { }
	
/* Hoisted overloads: */
	
public:
	inline __int64 __fastcall  GetInt64(__int64 defaultValue){ return TDBXValue::GetInt64(defaultValue); }
	
};


class DELPHICLASS TDBXDoubleValue;
class PASCALIMPLEMENTATION TDBXDoubleValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	double FDouble;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual double __fastcall GetDouble(void);
	virtual void __fastcall SetDouble(const double Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXDoubleValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXDoubleValue(void) { }
	
};


class DELPHICLASS TDBXSingleValue;
class PASCALIMPLEMENTATION TDBXSingleValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	float FSingle;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual float __fastcall GetSingle(void);
	virtual void __fastcall SetSingle(const float Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXSingleValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXSingleValue(void) { }
	
};


class DELPHICLASS TDBXBcdValue;
class PASCALIMPLEMENTATION TDBXBcdValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	Fmtbcd::TBcd FBcd;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual Fmtbcd::TBcd __fastcall GetBcd(void);
	virtual void __fastcall SetBcd(const Fmtbcd::TBcd &Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual bool __fastcall GetAsBoolean(void);
	virtual System::Byte __fastcall GetAsUInt8(void);
	virtual System::ShortInt __fastcall GetAsInt8(void);
	virtual System::Word __fastcall GetAsUInt16(void);
	virtual short __fastcall GetAsInt16(void);
	virtual int __fastcall GetAsInt32(void);
	virtual __int64 __fastcall GetAsInt64(void);
	virtual float __fastcall GetAsSingle(void);
	virtual double __fastcall GetAsDouble(void);
	virtual Fmtbcd::TBcd __fastcall GetAsBcd(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsBoolean(const bool Value);
	virtual void __fastcall SetAsUInt8(const System::Byte Value);
	virtual void __fastcall SetAsInt8(const System::ShortInt Value);
	virtual void __fastcall SetAsUInt16(const System::Word Value);
	virtual void __fastcall SetAsInt16(const short Value);
	virtual void __fastcall SetAsInt32(const int Value);
	virtual void __fastcall SetAsInt64(const __int64 Value);
	virtual void __fastcall SetAsSingle(const float Value);
	virtual void __fastcall SetAsDouble(const double Value);
	virtual void __fastcall SetAsBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXBcdValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXBcdValue(void) { }
	
};


class DELPHICLASS TDBXByteArrayValue;
class PASCALIMPLEMENTATION TDBXByteArrayValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	int FNullGeneration;
	System::DynamicArray<System::Byte> FBytes;
	// System::TArray__1<System::Byte>  FBytes;
	__int64 FByteLength;
	__int64 FOffset;
	__int64 FBufferOffset;
	TDBXStreamReader* FOverFlowBytes;
	virtual void __fastcall SetRowValue(void)/* overload */;
	void __fastcall SetOverflowBytes(const TDBXStreamReader* OverFlowBytes);
	virtual TDBXStreamReader* __fastcall GetStreamReader(void);
	
protected:
	__fastcall TDBXByteArrayValue(TDBXValueType* ValueType);
	
public:
	__fastcall virtual ~TDBXByteArrayValue(void);
	virtual bool __fastcall IsNull(void);
	virtual __int64 __fastcall GetBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length)/* overload */;
	virtual __int64 __fastcall GetValueSize(void);
	virtual void __fastcall SetStaticBytes(__int64 Offset, System::Byte const *Buffer, const int Buffer_Size, __int64 BufferOffset, __int64 Length);
	virtual void __fastcall SetDynamicBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length);
};


class PASCALIMPLEMENTATION TDBXStreamReader : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Size) = 0 ;
	virtual bool __fastcall Eos(void) = 0 ;
	virtual __int64 __fastcall Size(void) = 0 ;
	virtual void __fastcall Close(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXStreamReader(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXStreamReader(void) { }
	
};


class DELPHICLASS TDBXLookAheadStreamReader;
class PASCALIMPLEMENTATION TDBXLookAheadStreamReader : public TDBXStreamReader
{
	typedef TDBXStreamReader inherited;
	
private:
	Classes::TStream* FStream;
	bool FEOS;
	bool FHasLookAheadByte;
	System::Byte FLookAheadByte;
	bool FInstanceOwner;
	
public:
	__fastcall virtual ~TDBXLookAheadStreamReader(void);
	void __fastcall SetStream(const Classes::TStream* Stream, const bool AInstanceOwner);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual bool __fastcall Eos(void);
	virtual __int64 __fastcall Size(void);
	virtual void __fastcall Close(void);
	Classes::TStream* __fastcall ConvertToMemoryStream(void);
	__property bool InstanceOwner = {read=FInstanceOwner, write=FInstanceOwner, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXLookAheadStreamReader(void) : TDBXStreamReader() { }
	
};


class PASCALIMPLEMENTATION TDBXByteStreamReader : public TDBXStreamReader
{
	typedef TDBXStreamReader inherited;
	
public:
	System::DynamicArray<System::Byte> FBytes;
	// System::TArray__1<System::Byte>  FBytes;
	int FOffset;
	int FCount;
	int FPosition;
	bool FEOS;
	__fastcall TDBXByteStreamReader(System::DynamicArray<System::Byte> Bytes, int Offset, int Count);
	__fastcall virtual ~TDBXByteStreamReader(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual bool __fastcall Eos(void);
	virtual __int64 __fastcall Size(void);
	virtual void __fastcall Close(void);
};


class DELPHICLASS TDBXStreamValue;
class PASCALIMPLEMENTATION TDBXStreamValue : public TDBXByteArrayValue
{
	typedef TDBXByteArrayValue inherited;
	
private:
	TDBXLookAheadStreamReader* FStreamStreamReader;
	TDBXByteStreamReader* FByteStreamReader;
	bool FExtendedType;
	int FLastSize;
	bool FInstanceOwner;
	Classes::TStream* FLastReadStream;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	virtual TDBXStreamReader* __fastcall GetStreamReader(void);
	void __fastcall FreeLastReadStream(void);
	
protected:
	virtual void __fastcall SetAsVariant(const System::OleVariant &Value);
	
public:
	__fastcall TDBXStreamValue(TDBXValueType* ValueType);
	virtual void __fastcall UpdateType(void);
	virtual void __fastcall SetNull(void);
	__fastcall virtual ~TDBXStreamValue(void);
	virtual Classes::TStream* __fastcall GetStream(bool AInstanceOwner)/* overload */;
	virtual Classes::TStream* __fastcall GetStream(void)/* overload */;
	virtual __int64 __fastcall GetValueSize(void);
	virtual void __fastcall SetDynamicBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Count);
	virtual void __fastcall SetStream(const Classes::TStream* Stream, const bool AInstanceOwner);
	virtual void __fastcall SetValue(const TDBXValue* Value);
};


class DELPHICLASS TDBXWideCharsValue;
class PASCALIMPLEMENTATION TDBXWideCharsValue : public TDBXWideStringValue
{
	typedef TDBXWideStringValue inherited;
	
private:
	int FCount;
	Dbxplatform::TDBXWideChars FWideChars;
	System::UnicodeString FRefValue;
	virtual void __fastcall UpdateType(void);
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
protected:
	__property int WideCharsCount = {read=FCount, nodefault};
	__property Dbxplatform::TDBXWideChars WideChars = {read=FWideChars};
	
public:
	__fastcall TDBXWideCharsValue(TDBXValueType* ValueType);
	__fastcall virtual ~TDBXWideCharsValue(void);
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetWideString(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual Classes::TStream* __fastcall GetStream(bool AInstanceOwner)/* overload */;
	virtual __int64 __fastcall GetValueSize(void);
	virtual __int64 __fastcall GetBytes(__int64 Offset, const System::DynamicArray<System::Byte> Value, __int64 BufferOffset, __int64 Length)/* overload */;
	virtual short __fastcall Compare(TDBXValue* Other);
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  GetWideString(System::UnicodeString defaultValue){ return TDBXValue::GetWideString(defaultValue); }
	inline Classes::TStream* __fastcall  GetStream(void){ return TDBXValue::GetStream(); }
	
};


class DELPHICLASS TDBXStringValue;
class PASCALIMPLEMENTATION TDBXStringValue : public TDBXWideStringValue
{
	typedef TDBXWideStringValue inherited;
	
private:
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	__fastcall TDBXStringValue(TDBXValueType* ValueType);
	__fastcall virtual ~TDBXStringValue(void);
	virtual bool __fastcall IsNull(void);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual void __fastcall SetWideString(const System::UnicodeString Value);
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  GetWideString(System::UnicodeString defaultValue){ return TDBXValue::GetWideString(defaultValue); }
	
};


class DELPHICLASS TDBXAnsiCharsValue;
class PASCALIMPLEMENTATION TDBXAnsiCharsValue : public TDBXAnsiStringValue
{
	typedef TDBXAnsiStringValue inherited;
	
private:
	int FCount;
	Dbxplatform::TDBXAnsiChars FAnsiChars;
	System::AnsiString FRefValue;
	virtual void __fastcall UpdateType(void);
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
protected:
	__property int AnsiCharsCount = {read=FCount, nodefault};
	__property Dbxplatform::TDBXAnsiChars AnsiChars = {read=FAnsiChars};
	
public:
	__fastcall TDBXAnsiCharsValue(TDBXValueType* ValueType);
	__fastcall virtual ~TDBXAnsiCharsValue(void);
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall SetAnsiString(const System::AnsiString Value);
	virtual System::AnsiString __fastcall GetAnsiString(void);
	virtual Classes::TStream* __fastcall GetStream(bool AInstanceOwner)/* overload */;
	virtual __int64 __fastcall GetValueSize(void);
	virtual __int64 __fastcall GetBytes(__int64 Offset, const System::DynamicArray<System::Byte> Value, __int64 BufferOffset, __int64 Length)/* overload */;
	virtual void __fastcall SetDynamicBytes(__int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length);
/* Hoisted overloads: */
	
public:
	inline Classes::TStream* __fastcall  GetStream(void){ return TDBXValue::GetStream(); }
	
};


class DELPHICLASS TDBXTimeStampValue;
class PASCALIMPLEMENTATION TDBXTimeStampValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	Sqltimst::TSQLTimeStamp FTimeStamp;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetTimeStamp(void);
	virtual void __fastcall SetTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual TDBXDate __fastcall GetAsDate(void);
	virtual TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
	virtual System::TDateTime __fastcall GetAsDateTime(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsDate(const TDBXDate Value);
	virtual void __fastcall SetAsTime(const TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetAsDateTime(const System::TDateTime Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual short __fastcall Compare(TDBXValue* Other);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXTimeStampValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXTimeStampValue(void) { }
	
};


class DELPHICLASS TDBXTimeStampOffsetValue;
class PASCALIMPLEMENTATION TDBXTimeStampOffsetValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	Sqltimst::TSQLTimeStampOffset FTimeStampOffset;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
public:
	virtual bool __fastcall IsNull(void);
	virtual Sqltimst::TSQLTimeStampOffset __fastcall GetTimeStampOffset(void);
	virtual void __fastcall SetTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXTimeStampOffsetValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
public:
	/* TDBXWritableValue.Destroy */ inline __fastcall virtual ~TDBXTimeStampOffsetValue(void) { }
	
};


class DELPHICLASS TDBXReaderValue;
class PASCALIMPLEMENTATION TDBXReaderValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	TDBXReader* FDBXReader;
	bool FRowReader;
	int FHandle;
	bool FInstanceOwner;
	int FMaxRows;
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
protected:
	virtual int __fastcall GetHandle(void);
	virtual void __fastcall SetHandle(const int Handle);
	
public:
	__fastcall virtual ~TDBXReaderValue(void);
	virtual bool __fastcall IsNull(void);
	virtual TDBXReader* __fastcall GetDBXReader(void)/* overload */;
	virtual TDBXReader* __fastcall GetDBXReader(bool AInstanceOwner)/* overload */;
	virtual void __fastcall SetDBXReader(const TDBXReader* Value, const bool AInstanceOwner)/* overload */;
	virtual int __fastcall GetMaxRows(void);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual void __fastcall SetNull(void);
	__property int Handle = {read=GetHandle, write=SetHandle, nodefault};
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXReaderValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
};


class DELPHICLASS TDBXConnectionValue;
class PASCALIMPLEMENTATION TDBXConnectionValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
private:
	TDBXConnection* FDBXConnection;
	virtual void __fastcall SetRowValue(void)/* overload */;
	
public:
	__fastcall virtual ~TDBXConnectionValue(void);
	virtual bool __fastcall IsNull(void);
	virtual TDBXConnection* __fastcall GetDBXConnection(void);
	virtual void __fastcall SetDBXConnection(const TDBXConnection* Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
protected:
	/* TDBXWritableValue.Create */ inline __fastcall TDBXConnectionValue(TDBXValueType* ValueType) : TDBXWritableValue(ValueType) { }
	
};


class PASCALIMPLEMENTATION TDBXContext : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXErrorEvent FOnError;
	TDBXTraceEvent FOnTrace;
	int FTraceFlags;
	int FTraceLevel;
	TDBXByteReader* FClosedByteReader;
	TDBXFormatter* FDBXFormatter;
	void __fastcall SetOnError(const TDBXErrorEvent Value);
	void __fastcall SetOnTrace(const TDBXTraceEvent Value);
	void __fastcall SetTraceFlags(const int Value);
	void __fastcall SetTraceLevel(const int Value);
	void __fastcall SetDBXFormatter(const TDBXFormatter* DBXFormatter);
	
protected:
	TDBXContext* FOnErrorDBXContext;
	TDBXContext* FOnTraceDBXContext;
	Dbcommontypes::CBRType __fastcall Trace(int TraceLevel, int TraceFlag, System::UnicodeString CustomCategory, System::UnicodeString TraceMessage)/* overload */;
	__fastcall TDBXContext(TDBXContext* DBXContext)/* overload */;
	
public:
	__fastcall TDBXContext(void)/* overload */;
	__fastcall virtual ~TDBXContext(void);
	bool __fastcall IsTracingLevel(int TraceLevel);
	bool __fastcall IsTracing(int TraceFlags);
	bool __fastcall IsTracingCategory(System::UnicodeString Category);
	Dbcommontypes::CBRType __fastcall Trace(int TraceFlag, System::UnicodeString TraceMessage)/* overload */;
	Dbcommontypes::CBRType __fastcall Trace(int TraceLevel, int TraceFlag, System::UnicodeString TraceMessage)/* overload */;
	Dbcommontypes::CBRType __fastcall Trace(int TraceLevel, System::UnicodeString CustomCategory, System::UnicodeString TraceMessage)/* overload */;
	void __fastcall Error(int ErrorCode, System::UnicodeString ErrorMessage)/* overload */;
	void __fastcall Error(int ErrorCode, System::UnicodeString ErrorMessage, Sysutils::Exception* InnerException)/* overload */;
	__property TDBXErrorEvent OnError = {read=FOnError, write=SetOnError};
	__property TDBXTraceEvent OnTrace = {read=FOnTrace, write=SetOnTrace};
	__property int TraceFlags = {read=FTraceFlags, write=SetTraceFlags, nodefault};
	__property int TraceLevel = {read=FTraceLevel, write=SetTraceLevel, nodefault};
	__property TDBXByteReader* ClosedByteReader = {read=FClosedByteReader};
	__property TDBXFormatter* DBXFormatter = {read=FDBXFormatter, write=SetDBXFormatter};
};


class PASCALIMPLEMENTATION TDBXByteReader : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TDBXContext* FDBXContext;
	
protected:
	__fastcall TDBXByteReader(TDBXContext* DBXContext);
	
public:
	virtual void __fastcall GetAnsiString(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetWideString(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetUInt8(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetInt8(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetUInt16(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetInt16(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetInt32(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetInt64(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetSingle(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetDouble(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetBcd(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetTimeStamp(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetTimeStampOffset(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetTime(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetDate(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetByteLength(int Ordinal, __int64 &Length, BOOL &IsNull) = 0 ;
	virtual __int64 __fastcall GetBytes(int Ordinal, __int64 Offset, const System::DynamicArray<System::Byte> Value, __int64 ValueOffset, __int64 Length, BOOL &IsNull) = 0 ;
	virtual void __fastcall GetBoolean(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXByteReader(void) { }
	
};


class DELPHICLASS TDBXReaderByteReader;
class PASCALIMPLEMENTATION TDBXReaderByteReader : public TDBXByteReader
{
	typedef TDBXByteReader inherited;
	
private:
	TDBXReader* FDbxReader;
	
public:
	__fastcall TDBXReaderByteReader(TDBXContext* DBXContext, TDBXReader* DbxReader);
	virtual void __fastcall GetAnsiString(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetWideString(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetUInt8(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt8(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetUInt16(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt16(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt32(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt64(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetSingle(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetDouble(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetBcd(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetTimeStamp(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetTimeStampOffset(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetTime(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetDate(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetByteLength(int Ordinal, __int64 &Length, BOOL &IsNull);
	virtual __int64 __fastcall GetBytes(int Ordinal, __int64 Offset, const System::DynamicArray<System::Byte> Value, __int64 ValueOffset, __int64 Length, BOOL &IsNull);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXReaderByteReader(void) { }
	
};


class PASCALIMPLEMENTATION TDBXValueTypeList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::DynamicArray<TDBXValueType*> _TDBXValueTypeList__1;
	
	
public:
	TDBXValueType* operator[](const int Ordinal) { return Values[Ordinal]; }
	
private:
	_TDBXValueTypeList__1 FValueTypeArray;
	int FLastOrdinal;
	virtual int __fastcall FindOrdinal(const System::UnicodeString Name, int StartOrdinal, int EndOrdinal);
	
private:
	TDBXValueType* __fastcall GetValueType(const int Ordinal);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name);
	void __fastcall SetCount(const int Count);
	int __fastcall GetCount(void);
	void __fastcall Add(TDBXValueType* ValueType);
	void __fastcall Insert(int Ordinal, TDBXValueType* ValueType);
	void __fastcall Remove(TDBXValueType* ValueType)/* overload */;
	void __fastcall Remove(int Ordinal)/* overload */;
	void __fastcall SetValueType(const int Ordinal, TDBXValueType* ValueType);
	void __fastcall Clear(void);
	void __fastcall RemoveAll(void);
	__property int Count = {read=GetCount, nodefault};
	__property TDBXValueType* Values[const int Ordinal] = {read=GetValueType/*, default*/};
	
public:
	__fastcall virtual ~TDBXValueTypeList(void);
public:
	/* TObject.Create */ inline __fastcall TDBXValueTypeList(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXDriverHelp;
class PASCALIMPLEMENTATION TDBXDriverHelp : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static TDBXParameter* __fastcall CreateTDBXParameter(TDBXContext* DBXContext);
	static TDBXValueType* __fastcall CreateTDBXValueType(TDBXContext* DBXContext)/* overload */;
	static TDBXValueType* __fastcall CreateTDBXValueType(TDBXContext* DBXContext, TDBXRow* DBXRow)/* overload */;
	static TDBXProperties* __fastcall CreateTDBXProperties(TDBXContext* DBXContext);
	static TDBXContext* __fastcall CreateTDBXContext();
	static TDBXStreamReader* __fastcall GetStreamReader(TDBXValue* Value)/* overload */;
	__classmethod void __fastcall UpdateParameterType(TDBXParameter* Parameter);
	static bool __fastcall IsReadOnlyValueType(TDBXValueType* ValueType);
	__classmethod void __fastcall SetPendingValue(TDBXWritableValue* Value);
	static TDBXValue* __fastcall GetNonDelegate(TDBXValue* Value);
	static void __fastcall SetOverflowBytes(TDBXByteArrayValue* Value, TDBXByteStreamReader* streamReader)/* overload */;
	static void __fastcall SetOverflowBytes(TDBXWideStringValue* Value, TDBXByteStreamReader* streamReader)/* overload */;
	static void __fastcall SetOverflowBytes(TDBXAnsiStringValue* Value, TDBXByteStreamReader* streamReader)/* overload */;
	static bool __fastcall HasOverflowBytes(TDBXWritableValue* Value);
	static void __fastcall CopyRowValue(TDBXValue* Value, TDBXRow* DBXRow);
	static TDBXConnection* __fastcall GetConnection(TDBXConnectionFactory* ConnectionFactory, TDBXContext* DBXContext, System::UnicodeString ConnectionName);
	static void __fastcall SetMetaDataReader(TDBXConnection* Connection, System::TObject* MetaDataReader);
	static System::TObject* __fastcall GetMetaDataReader(TDBXConnection* Connection);
public:
	/* TObject.Create */ inline __fastcall TDBXDriverHelp(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDriverHelp(void) { }
	
};


class PASCALIMPLEMENTATION TDBXDriverLoader : public Classregistry::TClassRegistryObject
{
	typedef Classregistry::TClassRegistryObject inherited;
	
protected:
	System::UnicodeString FLoaderName;
	
public:
	virtual TDBXDriver* __fastcall Load(const TDBXDriverDef &DriverDef) = 0 ;
public:
	/* TClassRegistryObject.Create */ inline __fastcall virtual TDBXDriverLoader(void) : Classregistry::TClassRegistryObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDriverLoader(void) { }
	
};


typedef TMetaClass* TDBXDriverLoaderClass;

class DELPHICLASS TDBXDriverRegistry;
class PASCALIMPLEMENTATION TDBXDriverRegistry : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static TDBXDriverRegistry* DBXDriverRegistry;
	Classes::TStringList* FDriverLoaders;
	Classes::TStringList* FDriverClasses;
	int FCounter;
	int __fastcall FindDriver(Classes::TList* List, const System::UnicodeString DriverName);
	void __fastcall FreeAllDrivers(TDBXDriverLoader* Loader);
	void __fastcall FreeAllLoaders(void);
	void __fastcall InternalRegisterLoader(const System::UnicodeString LoaderClassName, TDBXDriverLoader* Loader);
	void __fastcall LoadMetaDataCommandFactory(TDBXDriver* Driver);
	TDBXDriver* __fastcall LoadDriver(const TDBXDriverDef &DriverDef, Classes::TList* List);
	Classes::TThreadList* FDrivers;
	TDBXDriver* __fastcall GetDriver(const TDBXDriverDef &DriverDef);
	void __fastcall DriverLoadError(const TDBXDriverDef &DriverDef, System::UnicodeString PackageName);
	void __fastcall FreeDriver(TDBXDriver* Driver);
	void __fastcall CloseAllDrivers(void);
	void __fastcall GetRegisteredDriverNames(Classes::TStringList* DriverNameList);
	void __fastcall GetRegisteredDriverLoaderNames(Classes::TStringList* DriverLoaderNameList);
	void __fastcall GetRegisteredDriverClassNames(Classes::TStringList* DriverClassNameList);
	
public:
	__fastcall TDBXDriverRegistry(void);
	__fastcall virtual ~TDBXDriverRegistry(void);
	static void __fastcall RegisterDriverClass(System::UnicodeString DriverName, TDBXDriverClass DriverClass);
	static void __fastcall UnregisterDriverClass(System::UnicodeString DriverName);
	static void __fastcall RegisterDriver(System::UnicodeString DriverName, TDBXDriver* Driver);
};


class PASCALIMPLEMENTATION TDBXDelegateDriver : public TDBXDriver
{
	typedef TDBXDriver inherited;
	
private:
	TDBXDriver* FDriver;
	
protected:
	virtual TDBXProperties* __fastcall GetDriverProperties(void);
	virtual void __fastcall InitDriverProperties(const TDBXProperties* DriverProperties);
	virtual System::UnicodeString __fastcall GetDriverName(void);
	virtual void __fastcall SetDriverName(const System::UnicodeString DriverName);
	virtual TDBXConnection* __fastcall CreateConnection(TDBXConnectionBuilder* ConnectionBuilder);
	virtual void __fastcall Close(void);
	virtual TDBXCommand* __fastcall CreateMorphCommand(TDBXContext* DbxContext, TDBXConnection* Connection, TDBXCommand* MorphicCommand);
	
public:
	__fastcall TDBXDelegateDriver(TDBXDriver* Driver);
	__fastcall virtual ~TDBXDelegateDriver(void);
	virtual System::TClass __fastcall GetDriverClass(void);
	virtual System::UnicodeString __fastcall GetDriverVersion(void);
};


class PASCALIMPLEMENTATION TDBXDelegateItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall FreeProperties(void);
	
public:
	System::UnicodeString FName;
	TDBXProperties* FProperties;
	TDBXDelegateItem* FNext;
	__fastcall virtual ~TDBXDelegateItem(void);
public:
	/* TObject.Create */ inline __fastcall TDBXDelegateItem(void) : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TDBXPropertiesItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TDBXProperties* FProperties;
	TDBXDelegateItem* FDeletgatePath;
	__fastcall TDBXPropertiesItem(TDBXProperties* Properties);
	__fastcall virtual ~TDBXPropertiesItem(void);
};


class PASCALIMPLEMENTATION TDBXConnectionBuilder : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDBXProperties* FInputConnectionProperties;
	System::UnicodeString FInputConnectionName;
	System::UnicodeString FInputUserName;
	System::UnicodeString FInputPassword;
	TDBXConnectionFactory* FConnectionFactory;
	TDBXDelegateItem* FDelegatePath;
	TDBXContext* FDBXContext;
	TDBXDelegateDriver* FDelegateDriver;
	TDBXProperties* __fastcall GetConnectionProperties(void);
	System::UnicodeString __fastcall GetDelegationSignature(void);
	void __fastcall Assign(TDBXConnectionBuilder* Source);
	TDBXConnection* __fastcall CreateConnection(void);
	
protected:
	__fastcall TDBXConnectionBuilder(void)/* overload */;
	__fastcall TDBXConnectionBuilder(TDBXConnectionBuilder* Source)/* overload */;
	
public:
	__fastcall virtual ~TDBXConnectionBuilder(void);
	TDBXConnection* __fastcall CreateDelegateeConnection(void);
	__property TDBXProperties* ConnectionProperties = {read=GetConnectionProperties};
	__property System::UnicodeString DelegationSignature = {read=GetDelegationSignature};
	__property TDBXProperties* InputConnectionProperties = {read=FInputConnectionProperties};
	__property System::UnicodeString InputConnectionName = {read=FInputConnectionName};
	__property System::UnicodeString InputUserName = {read=FInputUserName};
	__property System::UnicodeString InputPassword = {read=FInputPassword};
	__property TDBXContext* DbxContext = {read=FDBXContext};
};


class DELPHICLASS TDBXJSONValue;
class DELPHICLASS TDBXCallbackValue;
class DELPHICLASS TDBXAnsiMemoValue;
class DELPHICLASS TDBXWideMemoValue;
class PASCALIMPLEMENTATION TDBXRow : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TDBXContext* FDBXContext;
	__property TDBXContext* DBXContext = {read=FDBXContext};
	
protected:
	int FGeneration;
	virtual void __fastcall NotImplemented(void);
	virtual void __fastcall GetAnsiString(TDBXAnsiStringValue* DbxValue, char * &AnsiStringBuilder, BOOL &IsNull);
	virtual void __fastcall GetWideString(TDBXWideStringValue* DbxValue, System::WideChar * &WideStringBuilder, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetWideString(TDBXWideStringValue* DbxValue, System::UnicodeString &Value, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetBoolean(TDBXBooleanValue* DbxValue, BOOL &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt8(TDBXUInt8Value* DbxValue, System::Byte &Value, BOOL &IsNull);
	virtual void __fastcall GetInt8(TDBXInt8Value* DbxValue, System::ShortInt &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt16(TDBXUInt16Value* DbxValue, System::Word &Value, BOOL &IsNull);
	virtual void __fastcall GetInt16(TDBXInt16Value* DbxValue, short &Value, BOOL &IsNull);
	virtual void __fastcall GetInt32(TDBXInt32Value* DbxValue, int &Value, BOOL &IsNull);
	virtual void __fastcall GetInt64(TDBXInt64Value* DbxValue, __int64 &Value, BOOL &IsNull);
	virtual void __fastcall GetSingle(TDBXSingleValue* DbxValue, float &Value, BOOL &IsNull);
	virtual void __fastcall GetDouble(TDBXDoubleValue* DbxValue, double &Value, BOOL &IsNull);
	virtual void __fastcall GetBcd(TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value, BOOL &IsNull);
	virtual void __fastcall GetDate(TDBXDateValue* DbxValue, TDBXDate &Value, BOOL &IsNull);
	virtual void __fastcall GetTime(TDBXTimeValue* DbxValue, TDBXTime &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStamp(TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStampOffset(TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value, BOOL &IsNull);
	virtual void __fastcall GetBytes(TDBXByteArrayValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length, __int64 &ReturnLength, BOOL &IsNull);
	virtual void __fastcall GetByteLength(TDBXByteArrayValue* DbxValue, __int64 &ByteLength, BOOL &IsNull);
	virtual void __fastcall GetDBXReader(TDBXReaderValue* DbxValue, TDBXReader* &Value, BOOL &IsNull);
	virtual void __fastcall GetDBXConnection(TDBXConnectionValue* DbxValue, TDBXConnection* &Value, BOOL &IsNull);
	virtual void __fastcall GetJSONValue(TDBXJSONValue* DbxValue, Dbxjson::TJSONValue* &Value, BOOL &IsNull);
	virtual void __fastcall SetJSONValue(TDBXJSONValue* DbxValue, Dbxjson::TJSONValue* Value);
	virtual void __fastcall GetCallbackValue(TDBXCallbackValue* DbxValue, Dbxjson::TDBXCallback* &Value, BOOL &IsNull);
	virtual void __fastcall SetCallbackValue(TDBXCallbackValue* DbxValue, Dbxjson::TDBXCallback* Value);
	virtual bool __fastcall IsStoredNull(TDBXValue* DbxValue);
	virtual void __fastcall SetNull(TDBXValue* DbxValue);
	virtual void __fastcall SetString(TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetWideString(TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetAnsiString(TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetBoolean(TDBXBooleanValue* DbxValue, bool Value);
	virtual void __fastcall SetUInt8(TDBXUInt8Value* DbxValue, System::Byte Value);
	virtual void __fastcall SetInt8(TDBXInt8Value* DbxValue, System::ShortInt Value);
	virtual void __fastcall SetUInt16(TDBXUInt16Value* DbxValue, System::Word Value);
	virtual void __fastcall SetInt16(TDBXInt16Value* DbxValue, short Value);
	virtual void __fastcall SetInt32(TDBXInt32Value* DbxValue, int Value);
	virtual void __fastcall SetInt64(TDBXInt64Value* DbxValue, __int64 Value);
	virtual void __fastcall SetSingle(TDBXSingleValue* DbxValue, float Value);
	virtual void __fastcall SetDouble(TDBXDoubleValue* DbxValue, double Value);
	virtual void __fastcall SetBCD(TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value);
	virtual void __fastcall SetDate(TDBXDateValue* DbxValue, TDBXDate Value);
	virtual void __fastcall SetTime(TDBXTimeValue* DbxValue, TDBXTime Value);
	virtual void __fastcall SetTimestamp(TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimestampOffset(TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetDynamicBytes(TDBXValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length);
	virtual System::UnicodeString __fastcall GetObjectTypeName(int Ordinal);
	virtual void __fastcall SetValueType(TDBXValueType* ValueType);
	virtual int __fastcall GetGeneration(void);
	__property int Generation = {read=GetGeneration, nodefault};
	virtual bool __fastcall UseExtendedTypes(void);
	virtual void __fastcall GetWideChars(TDBXWideStringValue* DbxValue, Dbxplatform::TDBXWideChars &WideChars, int &Count, BOOL &IsNull);
	virtual void __fastcall GetAnsiChars(TDBXAnsiStringValue* DbxValue, Dbxplatform::TDBXAnsiChars &AnsiChars, int &Count, BOOL &IsNull);
	virtual void __fastcall GetStream(TDBXStreamValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetStream(TDBXWideStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetStream(TDBXAnsiStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetStreamBytes(TDBXStreamValue* DbxValue, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length, __int64 ReturnLength, BOOL &IsNull);
	virtual void __fastcall GetStreamLength(TDBXStreamValue* DbxValue, __int64 StreamLength, BOOL &IsNull);
	virtual void __fastcall SetWideChars(TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetAnsiChars(TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetAnsiMemo(TDBXAnsiMemoValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetWideMemo(TDBXWideMemoValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetStream(TDBXStreamValue* DbxValue, TDBXStreamReader* StreamReader)/* overload */;
	virtual void __fastcall SetDBXReader(TDBXReaderValue* DbxValue, TDBXReader* Value);
	virtual void __fastcall SetDBXConnection(TDBXConnectionValue* DbxValue, TDBXConnection* Value);
	virtual void __fastcall GetLength(TDBXValue* DbxValue, __int64 &ByteLength, BOOL &IsNull);
	virtual TDBXValue* __fastcall CreateCustomValue(const TDBXValueType* ValueType);
	virtual void __fastcall ValueSet(TDBXWritableValue* Value);
	virtual void __fastcall ValueNotSet(const TDBXWritableValue* Value);
	__fastcall TDBXRow(TDBXContext* DBXContext);
	
public:
	virtual void __fastcall ClearParameters(void);
	void __fastcall NewRowGeneration(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXRow(void) { }
	
};


class PASCALIMPLEMENTATION TDBXCommandFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual TDBXCommand* __fastcall CreateCommand(TDBXContext* DbxContext, TDBXConnection* Connection, TDBXCommand* MorphicCommand) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXCommandFactory(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCommandFactory(void) { }
	
};


class PASCALIMPLEMENTATION TDBXFormatter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::UnicodeString __fastcall DateToString(TDBXDateValue* DBXDateValue) = 0 ;
	virtual void __fastcall StringToDate(System::UnicodeString StringValue, TDBXDateValue* DBXDateValue) = 0 ;
	virtual System::UnicodeString __fastcall TimeToString(TDBXTimeValue* DBXTimeValue) = 0 ;
	virtual void __fastcall StringToTime(System::UnicodeString StringValue, TDBXTimeValue* DBXTimeValue) = 0 ;
	virtual System::UnicodeString __fastcall TimestampToString(TDBXTimeStampValue* DBXTimestampValue) = 0 ;
	virtual void __fastcall StringToTimestamp(System::UnicodeString StringValue, TDBXTimeStampValue* DBXTimestampValue) = 0 ;
	virtual System::UnicodeString __fastcall TimestampOffsetToString(TDBXTimeStampOffsetValue* DBXTimestampOffsetValue) = 0 ;
	virtual void __fastcall StringToTimestampOffset(System::UnicodeString StringValue, TDBXTimeStampOffsetValue* DBXTimestampOffsetValue) = 0 ;
	virtual System::UnicodeString __fastcall BcdToString(TDBXBcdValue* DBXBcdValue) = 0 ;
	virtual void __fastcall StringToBcd(System::UnicodeString StringValue, TDBXBcdValue* DBXBcdValue) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXFormatter(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXFormatter(void) { }
	
};


class DELPHICLASS TDBXStream;
class PASCALIMPLEMENTATION TDBXStream : public Classes::TStream
{
	typedef Classes::TStream inherited;
	
public:
	virtual int __fastcall ReadBytes(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count) = 0 ;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	virtual __int64 __fastcall Seek(const __int64 Offset, Classes::TSeekOrigin Origin)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TDBXStream(void) : Classes::TStream() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXStream(void) { }
	
};


class DELPHICLASS TDBXStreamReaderStream;
class PASCALIMPLEMENTATION TDBXStreamReaderStream : public TDBXStream
{
	typedef TDBXStream inherited;
	
private:
	System::DynamicArray<System::Byte> FBuffer;
	// System::TArray__1<System::Byte>  FBuffer;
	int FOffset;
	TDBXStreamReader* FReader;
	
protected:
	virtual __int64 __fastcall GetSize(void);
	
public:
	virtual int __fastcall Read(void *Buffer, int Count);
	virtual int __fastcall Write(const void *Buffer, int Count);
	virtual int __fastcall ReadBytes(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count);
	__fastcall TDBXStreamReaderStream(TDBXStreamReader* Reader, __int64 Size);
	__fastcall virtual ~TDBXStreamReaderStream(void);
};


class DELPHICLASS TDBXBytesStream;
class PASCALIMPLEMENTATION TDBXBytesStream : public TDBXStream
{
	typedef TDBXStream inherited;
	
private:
	System::DynamicArray<System::Byte> FBuffer;
	// System::TArray__1<System::Byte>  FBuffer;
	int FOffset;
	int FSize;
	
protected:
	virtual __int64 __fastcall GetSize(void);
	
public:
	virtual int __fastcall Read(void *Buffer, int Count);
	virtual int __fastcall Write(const void *Buffer, int Count);
	virtual int __fastcall ReadBytes(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count);
	__fastcall TDBXBytesStream(System::DynamicArray<System::Byte> Bytes, __int64 Size);
	__fastcall virtual ~TDBXBytesStream(void);
};


class PASCALIMPLEMENTATION TDBXAnsiMemoValue : public TDBXByteArrayValue
{
	typedef TDBXByteArrayValue inherited;
	
private:
	void __fastcall GetFBytes(void);
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
protected:
	__fastcall TDBXAnsiMemoValue(TDBXValueType* ValueType);
	
public:
	__fastcall virtual ~TDBXAnsiMemoValue(void);
	virtual bool __fastcall IsNull(void);
	virtual System::AnsiString __fastcall GetAnsiString(void);
	virtual void __fastcall SetAnsiString(const System::AnsiString Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
};


class PASCALIMPLEMENTATION TDBXWideMemoValue : public TDBXByteArrayValue
{
	typedef TDBXByteArrayValue inherited;
	
private:
	void __fastcall GetFBytes(void);
	virtual void __fastcall CopyRowValue(TDBXRow* Row)/* overload */;
	
protected:
	__fastcall TDBXWideMemoValue(TDBXValueType* ValueType);
	
public:
	__fastcall virtual ~TDBXWideMemoValue(void);
	virtual bool __fastcall IsNull(void);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual void __fastcall SetWideString(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetAsString(void);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetValue(const TDBXValue* Value);
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  GetWideString(System::UnicodeString defaultValue){ return TDBXValue::GetWideString(defaultValue); }
	
};


class PASCALIMPLEMENTATION TDBXJSONValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
public:
	__fastcall TDBXJSONValue(const TDBXValueType* ValueType);
	__fastcall virtual ~TDBXJSONValue(void);
	virtual void __fastcall SetRowValue(void)/* overload */;
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Offset);
	virtual Dbxjson::TJSONValue* __fastcall CreateJSONValue(const System::DynamicArray<System::Byte> Data, const int Off, const int Count);
	virtual bool __fastcall IsNull(void);
	virtual Dbxjson::TJSONValue* __fastcall GetJSONValue(void)/* overload */;
	virtual Dbxjson::TJSONValue* __fastcall GetJSONValue(bool AInstanceOwner)/* overload */;
	virtual System::TObject* __fastcall GetObjectValue(void)/* overload */;
	virtual System::TObject* __fastcall GetObjectValue(bool AInstanceOwner)/* overload */;
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	virtual void __fastcall SetJSONValue(const Dbxjson::TJSONValue* Value, const bool AInstanceOwner);
	virtual void __fastcall SetObjectValue(const System::TObject* Value, const bool AInstanceOwner);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	virtual void __fastcall SetNull(void);
	
private:
	Dbxjson::TJSONValue* FJsonValue;
	bool FInstanceOwner;
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  GetWideString(System::UnicodeString defaultValue){ return TDBXValue::GetWideString(defaultValue); }
	
};


class PASCALIMPLEMENTATION TDBXCallbackValue : public TDBXWritableValue
{
	typedef TDBXWritableValue inherited;
	
public:
	__fastcall TDBXCallbackValue(const TDBXValueType* ValueType);
	__fastcall virtual ~TDBXCallbackValue(void);
	virtual bool __fastcall IsNull(void);
	
protected:
	virtual void __fastcall SetRowValue(void)/* overload */;
	
public:
	virtual void __fastcall SetCallbackValue(const Dbxjson::TDBXCallback* Value);
	virtual Dbxjson::TDBXCallback* __fastcall GetCallbackValue(void);
	virtual void __fastcall SetOrdinal(const int Ordinal);
	virtual void __fastcall SetConnectionHandler(const System::TObject* ConnectionHandler);
	virtual void __fastcall SetObjectValue(const System::TObject* Value, const bool AInstanceOwner);
	virtual Dbxjson::TDBXCallback* __fastcall CreateCallbackDelegate(int ordinal);
	virtual void __fastcall SetValue(const TDBXValue* Value);
	
private:
	Dbxjson::TDBXCallback* FDbxCallback;
	
public:
	__property int Ordinal = {write=SetOrdinal, nodefault};
	__property System::TObject* ConnectionHandler = {write=SetConnectionHandler};
};


class DELPHICLASS TDBXCommunicationLayer;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDBXCommunicationLayer : public Dbxplatform::TFactoryObject
{
	typedef Dbxplatform::TFactoryObject inherited;
	
private:
	bool FTerminated;
	int FConnectTimeout;
	int FCommunicationTimeout;
	
protected:
	virtual void __fastcall SetConnectTimeout(int duration);
	virtual int __fastcall GetConnectTimeout(void);
	
public:
	virtual void __fastcall Open(const TDBXProperties* DbxProperties) = 0 ;
	virtual void __fastcall Close(void) = 0 ;
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count) = 0 ;
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count) = 0 ;
	virtual System::UnicodeString __fastcall Info(void) = 0 ;
	virtual void __fastcall Terminate(void);
	__property bool Terminated = {read=FTerminated, nodefault};
	__property int ConnectTimeout = {read=GetConnectTimeout, write=SetConnectTimeout, nodefault};
	__property int CommunicationTimeout = {read=FCommunicationTimeout, write=FCommunicationTimeout, nodefault};
public:
	/* TFactoryObject.Create */ inline __fastcall virtual TDBXCommunicationLayer(void) : Dbxplatform::TFactoryObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCommunicationLayer(void) { }
	
};


__interface TDBXScheduleEvent;
typedef System::DelphiInterface<TDBXScheduleEvent> _di_TDBXScheduleEvent;
__interface TDBXScheduleEvent  : public System::IInterface 
{
	
public:
	virtual void __fastcall Invoke(void) = 0 ;
};

class DELPHICLASS TDBXScheduler;
class PASCALIMPLEMENTATION TDBXScheduler : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	class DELPHICLASS TDBXSchedulerRec;
	class PASCALIMPLEMENTATION TDBXSchedulerRec : public System::TObject
	{
		typedef System::TObject inherited;
		
private:
		_di_TDBXScheduleEvent FEvent;
		System::TDateTime FTime;
		int FID;
public:
		/* TObject.Create */ inline __fastcall TDBXSchedulerRec(void) : System::TObject() { }
		/* TObject.Destroy */ inline __fastcall virtual ~TDBXSchedulerRec(void) { }
		
	};
	
	
	class DELPHICLASS TDBXSchedulerThread;
	class PASCALIMPLEMENTATION TDBXSchedulerThread : public Classes::TThread
	{
		typedef Classes::TThread inherited;
		
private:
		System::TObject* FEventSemaphore;
		System::TDateTime FLastFailure;
		
protected:
		void __fastcall SetCurrentThreadName(const System::UnicodeString Name);
		virtual void __fastcall Execute(void);
		
public:
		__fastcall TDBXSchedulerThread(System::TObject* EventSem);
public:
		/* TThread.Destroy */ inline __fastcall virtual ~TDBXSchedulerThread(void) { }
		
	};
	
	
	
private:
	Generics_collections::TList__1<TDBXSchedulerRec*>* FEvents;
	TDBXSchedulerThread* FThread;
	Syncobjs::TCriticalSection* FSync;
	System::TObject* FEventSemaphore;
	
private:
	static TDBXScheduler* FInstance;
	
protected:
	void __fastcall StartSchedulerThread(void);
	void __fastcall StopSchedulerThread(void);
	System::TDateTime __fastcall PeekTime(void);
	_di_TDBXScheduleEvent __fastcall PeekEvent(void);
	void __fastcall Pop(void);
	int __fastcall EventCount(void);
	
public:
	__fastcall virtual TDBXScheduler(void);
	__fastcall virtual ~TDBXScheduler(void);
	void __fastcall AddEvent(int id, _di_TDBXScheduleEvent proc, int delta);
	bool __fastcall CancelEvent(int id);
	void __fastcall CloseScheduler(void);
	/* static */ __property TDBXScheduler* Instance = {read=FInstance};
};


class DELPHICLASS TPrincipal;
class PASCALIMPLEMENTATION TPrincipal : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::UnicodeString __fastcall GetName(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TPrincipal(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPrincipal(void) { }
	
};


class DELPHICLASS TX500Principal;
class PASCALIMPLEMENTATION TX500Principal : public TPrincipal
{
	typedef TPrincipal inherited;
	
public:
	virtual int __fastcall GetEncoded(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TX500Principal(void) : TPrincipal() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TX500Principal(void) { }
	
};


class DELPHICLASS ECertificateExpiredException;
class PASCALIMPLEMENTATION ECertificateExpiredException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECertificateExpiredException(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECertificateExpiredException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall ECertificateExpiredException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall ECertificateExpiredException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall ECertificateExpiredException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECertificateExpiredException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECertificateExpiredException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECertificateExpiredException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECertificateExpiredException(void) { }
	
};


class DELPHICLASS ECertificateNotYetValidException;
class PASCALIMPLEMENTATION ECertificateNotYetValidException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECertificateNotYetValidException(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECertificateNotYetValidException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall ECertificateNotYetValidException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall ECertificateNotYetValidException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall ECertificateNotYetValidException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECertificateNotYetValidException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECertificateNotYetValidException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECertificateNotYetValidException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECertificateNotYetValidException(void) { }
	
};


class DELPHICLASS ECertificateParsingException;
class PASCALIMPLEMENTATION ECertificateParsingException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECertificateParsingException(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECertificateParsingException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall ECertificateParsingException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall ECertificateParsingException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall ECertificateParsingException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECertificateParsingException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECertificateParsingException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECertificateParsingException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECertificateParsingException(void) { }
	
};


class DELPHICLASS TKey;
class PASCALIMPLEMENTATION TKey : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::UnicodeString __fastcall GetAlgorithm(void) = 0 ;
	virtual System::UnicodeString __fastcall GetFormat(void) = 0 ;
	virtual System::DynamicArray<System::Byte> __fastcall GetEncoded(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TKey(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TKey(void) { }
	
};


class DELPHICLASS TPublicKey;
class PASCALIMPLEMENTATION TPublicKey : public TKey
{
	typedef TKey inherited;
	
public:
	/* TObject.Create */ inline __fastcall TPublicKey(void) : TKey() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPublicKey(void) { }
	
};


class DELPHICLASS TCertificate;
class PASCALIMPLEMENTATION TCertificate : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual System::DynamicArray<System::Byte> __fastcall GetEncoded(void) = 0 /* overload */;
	virtual TPublicKey* __fastcall GetPublicKey(void) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetType(void) = 0 /* overload */;
	virtual bool __fastcall Verify(TPublicKey* key) = 0 /* overload */;
public:
	/* TObject.Create */ inline __fastcall TCertificate(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCertificate(void) { }
	
};


class PASCALIMPLEMENTATION TX509Certificate : public TCertificate
{
	typedef TCertificate inherited;
	
public:
	virtual System::UnicodeString __fastcall GetType(void)/* overload */;
	virtual void __fastcall CheckValidity(void) = 0 /* overload */;
	virtual void __fastcall CheckValidity(System::TDateTime ADate) = 0 /* overload */;
	virtual int __fastcall GetBasicConstraints(void) = 0 ;
	virtual TX500Principal* __fastcall GetIssuerX500Principal(void) = 0 ;
	virtual System::TDateTime __fastcall GetNotAfter(void) = 0 ;
	virtual System::TDateTime __fastcall GetNotBefore(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSerialNumber(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSigAlgName(void) = 0 ;
	virtual System::UnicodeString __fastcall GetSignature(void) = 0 ;
	virtual TX500Principal* __fastcall GetSubjectX500Principal(void) = 0 ;
	virtual int __fastcall GetVersion(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TX509Certificate(void) : TCertificate() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TX509Certificate(void) { }
	
};


class DELPHICLASS TRequestCommandHandler;
class PASCALIMPLEMENTATION TRequestCommandHandler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall AddCommandError(System::UnicodeString ErrorMessage) = 0 ;
	virtual void __fastcall AddCommand(TDBXCommand* Command, TDBXConnection* DBXConnection) = 0 ;
	virtual void __fastcall ClearCommands(void) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TRequestCommandHandler(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TRequestCommandHandler(void) { }
	
};


class DELPHICLASS TResultCommandHandler;
class PASCALIMPLEMENTATION TResultCommandHandler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual int __fastcall GetCommandCount(void) = 0 ;
	virtual int __fastcall GetParameterCount(int Index) = 0 ;
	virtual TDBXCommand* __fastcall GetCommand(int Index) = 0 ;
	virtual TDBXParameter* __fastcall GetCommandParameter(int CommandIndex, int ParameterIndex) = 0 /* overload */;
	virtual TDBXParameter* __fastcall GetCommandParameter(TDBXCommand* Command, int Index) = 0 /* overload */;
public:
	/* TObject.Create */ inline __fastcall TResultCommandHandler(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TResultCommandHandler(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define DBXVersion25 L"2.5"
#define DBXVersion30 L"3.0"
#define DBXVersion40 L"4.0"
static const System::ShortInt DBXDefaultRowSetSize = 0x14;
#define TDBXRegistryKey L"\\Software\\Embarcadero\\BDS\\8.0\\dbExpress"
#define TDBXRegistryDriverValue L"Driver Registry File"
#define TDBXRegistryConnectionValue L"Connection Registry File"
#define TDBXDriverFile L"dbxdrivers.ini"
#define TDBXConnectionFile L"dbxconnections.ini"

}	/* namespace Dbxcommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxcommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxcommonHPP
