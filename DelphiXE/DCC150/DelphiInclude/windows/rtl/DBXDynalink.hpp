// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDynalink.pas' rev: 22.00

#ifndef DbxdynalinkHPP
#define DbxdynalinkHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <DBCommonTypes.hpp>	// Pascal unit
#include <ClassRegistry.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdynalink
{
//-- type declarations -------------------------------------------------------
typedef void * TDBXHandle;

typedef void * TPointer;

typedef void * TDBXCommonHandle;

typedef void * TDBXTransactionHandle;

typedef void * TDBXDriverHandle;

typedef void * TDBXConnectionHandle;

typedef void * TDBXCommandHandle;

typedef void * TDBXMetaDataHandle;

typedef void * TDBXRowHandle;

typedef void * TDBXReaderHandle;

typedef void * TDBXWritableRowHandle;

typedef void * DBXCallbackHandle;

class DELPHICLASS TDBXDynalinkPropertyNames;
class PASCALIMPLEMENTATION TDBXDynalinkPropertyNames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	#define TDBXDynalinkPropertyNames_BlobSize L"BlobSize"
	
	#define TDBXDynalinkPropertyNames_ErrorResourceFile L"ErrorResourceFile"
	
	#define TDBXDynalinkPropertyNames_LocaleCode L"LocaleCode"
	
	#define TDBXDynalinkPropertyNames_Compressed L"Compressed"
	
	#define TDBXDynalinkPropertyNames_Encrypted L"Encrypted"
	
public:
	/* TObject.Create */ inline __fastcall TDBXDynalinkPropertyNames(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDynalinkPropertyNames(void) { }
	
};


typedef TMetaClass* TDBXDynalinkDriverLoaderClass;

typedef int TInt32;

typedef Dbcommontypes::CBRType __stdcall (*DBXTraceCallback)(void * Handle, int TraceCategory, System::WideChar * TraceMessage);

typedef int __stdcall (*TDBXCommon_GetErrorMessageLength)(void * Handle, int LastErrorCode, /* out */ int &ErrorLen);

typedef int __stdcall (*TDBXCommon_GetErrorMessage)(void * Handle, int LastErrorCode, System::WideChar * ErrorMessage);

typedef int __stdcall (*TDBXCommon_Close)(void * Handle);

typedef int __stdcall (*TDBXRow_GetString)(void * Handle, int Ordinal, char * Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetWideString)(void * Handle, int Ordinal, System::WideChar * Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetBoolean)(void * Handle, int Ordinal, /* out */ BOOL &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetUInt8)(void * Handle, int Ordinal, /* out */ System::Byte &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetInt8)(void * Handle, int Ordinal, /* out */ System::ShortInt &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetInt16)(void * Handle, int Ordinal, /* out */ short &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetInt32)(void * Handle, int Ordinal, /* out */ int &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetInt64)(void * Handle, int Ordinal, /* out */ __int64 &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetSingle)(void * Handle, int Ordinal, /* out */ float &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetDouble)(void * Handle, int Ordinal, /* out */ double &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetBcd)(void * Handle, int Ordinal, /* out */ Fmtbcd::TBcd &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetTimeStamp)(void * Handle, int Ordinal, /* out */ Sqltimst::TSQLTimeStamp &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetTimeStampOffset)(void * Handle, int Ordinal, /* out */ Sqltimst::TSQLTimeStampOffset &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetTime)(void * Handle, int Ordinal, /* out */ Dbxcommon::TDBXTime &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetDate)(void * Handle, int Ordinal, /* out */ Dbxcommon::TDBXDate &Value, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetBytes)(void * Handle, int Ordinal, __int64 Offset, System::Byte *Value, const int Value_Size, __int64 ValueOffset, __int64 Length, /* out */ __int64 &ReturnLength, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetFixedBytes)(void * Handle, int Ordinal, System::Byte const *Value, const int Value_Size, int ValueOffset, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetByteLength)(void * Handle, int Ordinal, /* out */ __int64 &Length, /* out */ BOOL &IsNull);

typedef int __stdcall (*TDBXRow_GetObjectTypeName)(void * Handle, int Ordinal, System::WideChar * Value, int MaxLength);

typedef int __stdcall (*TDBXWritableRow_SetNull)(void * Handle, int Ordinal);

typedef int __stdcall (*TDBXWritableRow_SetString)(void * Handle, int Ordinal, const char * Value, __int64 Length);

typedef int __stdcall (*TDBXWritableRow_SetWideString)(void * Handle, int Ordinal, const System::WideChar * Value, __int64 Length);

typedef int __stdcall (*TDBXWritableRow_SetBoolean)(void * Handle, int Ordinal, BOOL Value);

typedef int __stdcall (*TDBXWritableRow_SetUInt8)(void * Handle, int Ordinal, System::Byte Value);

typedef int __stdcall (*TDBXWritableRow_SetInt8)(void * Handle, int Ordinal, System::ShortInt Value);

typedef int __stdcall (*TDBXWritableRow_SetInt16)(void * Handle, int Ordinal, short Value);

typedef int __stdcall (*TDBXWritableRow_SetInt32)(void * Handle, int Ordinal, int Value);

typedef int __stdcall (*TDBXWritableRow_SetInt64)(void * Handle, int Ordinal, __int64 Value);

typedef int __stdcall (*TDBXWritableRow_SetSingle)(void * Handle, int Ordinal, float Value);

typedef int __stdcall (*TDBXWritableRow_SetDouble)(void * Handle, int Ordinal, double Value);

typedef int __stdcall (*TDBXWritableRow_SetBcd)(void * Handle, int Ordinal, const Fmtbcd::TBcd Value);

typedef int __stdcall (*TDBXWritableRow_SetTimeStamp)(void * Handle, int Ordinal, Sqltimst::TSQLTimeStamp &Value);

typedef int __stdcall (*TDBXWritableRow_SetTimeStampOffset)(void * Handle, int Ordinal, Sqltimst::TSQLTimeStampOffset &Value);

typedef int __stdcall (*TDBXWritableRow_SetTime)(void * Handle, int Ordinal, Dbxcommon::TDBXTime Value);

typedef int __stdcall (*TDBXWritableRow_SetDate)(void * Handle, int Ordinal, Dbxcommon::TDBXDate Value);

typedef int __stdcall (*TDBXWritableRow_SetBytes)(void * Handle, int Ordinal, __int64 BlobOffset, System::DynamicArray<System::Byte> Value, int LastIndex, __int64 ValueOffset, __int64 Length);

typedef int __stdcall (*TDBXLoader_GetDriver)(int Count, Dbxcommon::TWideStringArray Names, Dbxcommon::TWideStringArray Values, System::WideChar * ErrorMessage, /* out */ void * &pDriver);

typedef int __stdcall (*TDBXDriver_CreateConnection)(void * Handle, /* out */ void * &pConn);

typedef int __stdcall (*TDBXDriver_GetVersion)(void * Handle, System::WideChar * Version, int MaxLength);

typedef int __stdcall (*TDBXConnection_Connect)(void * Handle, int Count, Dbxcommon::TWideStringArray Names, Dbxcommon::TWideStringArray Values);

typedef int __stdcall (*TDBXConnection_Disconnect)(void * Handle);

typedef int __stdcall (*TDBXConnection_SetCallbackEvent)(void * Handle, void * CallbackHandle, DBXTraceCallback CallbackEvent);

typedef int __stdcall (*TDBXConnection_CreateCommand)(void * Handle, const System::WideChar * CommandType, /* out */ void * &pCommand);

typedef int __stdcall (*TDBXConnection_GetMetaData)(void * Handle, /* out */ void * &pMetaData);

typedef int __stdcall (*TDBXConnection_BeginTransaction)(void * Handle, /* out */ void * &TransactionHandle, int IsolationLevel);

typedef int __stdcall (*TDBXConnection_Commit)(void * Handle, void * TransactionHandle);

typedef int __stdcall (*TDBXConnection_Rollback)(void * Handle, void * TransactionHandle);

typedef int __stdcall (*TDBXConnection_GetIsolation)(void * Handle, /* out */ int &IsolationLevel);

typedef int __stdcall (*TDBXConnection_GetVendorProperty)(void * Handle, System::WideChar * Name, System::WideChar * Value, int MaxLength);

typedef int __stdcall (*TDBXCommand_CreateParameterRow)(void * Handle, /* out */ void * &Parameters);

typedef int __stdcall (*TDBXCommand_Prepare)(void * Handle, const System::WideChar * SQL, int Count);

typedef int __stdcall (*TDBXCommand_Execute)(void * Handle, /* out */ void * &Reader);

typedef int __stdcall (*TDBXCommand_ExecuteImmediate)(void * Handle, const System::WideChar * SQL, /* out */ void * &Reader);

typedef int __stdcall (*TDBXCommand_GetNextReader)(void * Handle, /* out */ void * &Reader);

typedef int __stdcall (*TDBXCommand_GetRowsAffected)(void * Handle, /* out */ __int64 &Rows);

typedef int __stdcall (*TDBXCommand_SetMaxBlobSize)(void * Handle, __int64 MaxBlobSize);

typedef int __stdcall (*TDBXCommand_SetRowSetSize)(void * Handle, __int64 RowSetSize);

typedef int __stdcall (*TDBXCommand_GetParameterCount)(void * Handle, /* out */ int &ParameterCount);

typedef int __stdcall (*TDBXCommand_GetParameterType)(void * Handle, int Ordinal, /* out */ int &DBXType, /* out */ int &DBXSubType, /* out */ __int64 &Size, /* out */ __int64 &Precision, /* out */ int &Scale, /* out */ BOOL &Nullable);

typedef int __stdcall (*TDBXParameterRow_SetParameterType)(void * Handle, int Ordinal, const System::WideChar * Name, int ChildPosition, int ParamDirection, int DBXType, int DBXSubType, __int64 Size, __int64 Precision, int Scale);

typedef int __stdcall (*TDBXReader_GetColumnCount)(void * Handle, /* out */ int &ColumnCount);

typedef int __stdcall (*TDBXReader_GetColumnMetadata)(void * Handle, int Ordinal, System::WideChar * Name, /* out */ int &ColumnType, /* out */ int &ColumnSubType, /* out */ int &Length, /* out */ int &Precision, /* out */ int &Scale, /* out */ int &flags);

typedef int __stdcall (*TDBXReader_Next)(void * Handle);

class DELPHICLASS TDBXMethodTable;
class PASCALIMPLEMENTATION TDBXMethodTable : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void __fastcall RaiseError(Dbxcommon::TDBXContext* DBXContext, int DBXResult, void * DBXHandle, System::UnicodeString AdditionalInfo)/* overload */;
	void __fastcall RaiseError(Dbxcommon::TDBXContext* DBXContext, int DBXResult, void * DBXHandle)/* overload */;
	
public:
	TDBXLoader_GetDriver FDBXLoader_GetDriver;
	TDBXCommon_GetErrorMessageLength FDBXBase_GetErrorMessageLength;
	TDBXCommon_GetErrorMessage FDBXBase_GetErrorMessage;
	TDBXCommon_Close FDBXBase_Close;
	TDBXRow_GetString FDBXRow_GetString;
	TDBXRow_GetWideString FDBXRow_GetWideString;
	TDBXRow_GetBoolean FDBXRow_GetBoolean;
	TDBXRow_GetUInt8 FDBXRow_GetUInt8;
	TDBXRow_GetInt8 FDBXRow_GetInt8;
	TDBXRow_GetInt16 FDBXRow_GetInt16;
	TDBXRow_GetInt32 FDBXRow_GetInt32;
	TDBXRow_GetInt64 FDBXRow_GetInt64;
	TDBXRow_GetSingle FDBXRow_GetSingle;
	TDBXRow_GetDouble FDBXRow_GetDouble;
	TDBXRow_GetBcd FDBXRow_GetBcd;
	TDBXRow_GetTimeStamp FDBXRow_GetTimeStamp;
	TDBXRow_GetTimeStampOffset FDBXRow_GetTimeStampOffset;
	TDBXRow_GetTime FDBXRow_GetTime;
	TDBXRow_GetDate FDBXRow_GetDate;
	TDBXRow_GetFixedBytes FDBXRow_GetFixedBytes;
	TDBXRow_GetByteLength FDBXRow_GetByteLength;
	TDBXRow_GetBytes FDBXRow_GetBytes;
	TDBXRow_GetObjectTypeName FDBXRow_GetObjectTypeName;
	TDBXWritableRow_SetNull FDBXWritableRow_SetNull;
	TDBXWritableRow_SetString FDBXWritableRow_SetString;
	TDBXWritableRow_SetWideString FDBXWritableRow_SetWideString;
	TDBXWritableRow_SetBoolean FDBXWritableRow_SetBoolean;
	TDBXWritableRow_SetUInt8 FDBXWritableRow_SetUInt8;
	TDBXWritableRow_SetInt8 FDBXWritableRow_SetInt8;
	TDBXWritableRow_SetInt16 FDBXWritableRow_SetInt16;
	TDBXWritableRow_SetInt32 FDBXWritableRow_SetInt32;
	TDBXWritableRow_SetInt64 FDBXWritableRow_SetInt64;
	TDBXWritableRow_SetSingle FDBXWritableRow_SetSingle;
	TDBXWritableRow_SetDouble FDBXWritableRow_SetDouble;
	TDBXWritableRow_SetBcd FDBXWritableRow_SetBcd;
	TDBXWritableRow_SetTimeStamp FDBXWritableRow_SetTimeStamp;
	TDBXWritableRow_SetTimeStampOffset FDBXWritableRow_SetTimeStampOffset;
	TDBXWritableRow_SetTime FDBXWritableRow_SetTime;
	TDBXWritableRow_SetDate FDBXWritableRow_SetDate;
	TDBXWritableRow_SetBytes FDBXWritableRow_SetBytes;
	TDBXDriver_CreateConnection FDBXDriver_CreateConnection;
	TDBXDriver_GetVersion FDBXDriver_GetVersion;
	TDBXConnection_Connect FDBXConnection_Connect;
	TDBXConnection_Disconnect FDBXConnection_Disconnect;
	TDBXConnection_SetCallbackEvent FDBXConnection_SetCallbackEvent;
	TDBXConnection_CreateCommand FDBXConnection_CreateCommand;
	TDBXConnection_GetMetaData FDBXConnection_GetMetaData;
	TDBXConnection_BeginTransaction FDBXConnection_BeginTransaction;
	TDBXConnection_Commit FDBXConnection_Commit;
	TDBXConnection_Rollback FDBXConnection_Rollback;
	TDBXConnection_GetIsolation FDBXConnection_GetIsolation;
	TDBXConnection_GetVendorProperty FDBXConnection_GetVendorProperty;
	TDBXCommand_CreateParameterRow FDBXCommand_CreateParameterRow;
	TDBXCommand_Prepare FDBXCommand_Prepare;
	TDBXCommand_Execute FDBXCommand_Execute;
	TDBXCommand_ExecuteImmediate FDBXCommand_ExecuteImmediate;
	TDBXCommand_GetNextReader FDBXCommand_GetNextReader;
	TDBXCommand_GetRowsAffected FDBXCommand_GetRowsAffected;
	TDBXCommand_SetMaxBlobSize FDBXCommand_SetMaxBlobSize;
	TDBXCommand_SetRowSetSize FDBXCommand_SetRowSetSize;
	TDBXCommand_GetParameterCount FDBXCommand_GetParameterCount;
	TDBXCommand_GetParameterType FDBXCommand_GetParameterType;
	TDBXParameterRow_SetParameterType FDBXParameterRow_SetParameterType;
	TDBXReader_GetColumnCount FDBXReader_GetColumnCount;
	TDBXReader_GetColumnMetadata FDBXReader_GetColumnMetadata;
	TDBXReader_Next FDBXReader_Next;
	__fastcall TDBXMethodTable(void);
	virtual void * __fastcall LoadMethod(System::UnicodeString MethodName) = 0 ;
	virtual void __fastcall LoadMethods(void) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMethodTable(void) { }
	
};


class DELPHICLASS TDBXDynalinkReader;
class PASCALIMPLEMENTATION TDBXDynalinkReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
private:
	void __fastcall CheckResult(int DBXResult);
	__fastcall TDBXDynalinkReader(Dbxcommon::TDBXContext* DBXContext, void * ReaderHandle, TDBXMethodTable* MethodTable, Dbxcommon::TDBXByteReader* ByteReader);
	
protected:
	void *FReaderHandle;
	TDBXMethodTable* FMethodTable;
	virtual void __fastcall DerivedClose(void);
	virtual bool __fastcall DerivedNext(void);
protected:
	/* TDBXReader.Create */ inline __fastcall TDBXDynalinkReader(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXRow* DbxRow, Dbxcommon::TDBXByteReader* ByteReader) : Dbxcommon::TDBXReader(DBXContext, DbxRow, ByteReader) { }
	
public:
	/* TDBXReader.Destroy */ inline __fastcall virtual ~TDBXDynalinkReader(void) { }
	
};


class DELPHICLASS TDBXDynalinkRow;
class PASCALIMPLEMENTATION TDBXDynalinkRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
private:
	void *FRowHandle;
	TDBXMethodTable* FMethodTable;
	System::DynamicArray<System::Byte> FTempBuffer;
	// System::TArray__1<System::Byte>  FTempBuffer;
	void __fastcall CheckResult(int DBXResult);
	void __fastcall CheckParameterResult(int DBXResult, Dbxcommon::TDBXValue* DbxValue);
	void __fastcall ParameterError(int DBXResult, Dbxcommon::TDBXValue* DbxValue);
	
protected:
	__fastcall TDBXDynalinkRow(Dbxcommon::TDBXContext* DBXContext, TDBXMethodTable* MethodTable, void * RowHandle);
	virtual void __fastcall GetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, char * &AnsiStringVar, BOOL &IsNull);
	virtual void __fastcall GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::WideChar * &WideStringBuilder, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, BOOL &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte &Value, BOOL &IsNull);
	virtual void __fastcall GetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt &Value, BOOL &IsNull);
	virtual void __fastcall GetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short &Value, BOOL &IsNull);
	virtual void __fastcall GetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int &Value, BOOL &IsNull);
	virtual void __fastcall GetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 &Value, BOOL &IsNull);
	virtual void __fastcall GetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float &Value, BOOL &IsNull);
	virtual void __fastcall GetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double &Value, BOOL &IsNull);
	virtual void __fastcall GetBcd(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value, BOOL &IsNull);
	virtual void __fastcall GetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate &Value, BOOL &IsNull);
	virtual void __fastcall GetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value, BOOL &IsNull);
	virtual void __fastcall GetBytes(Dbxcommon::TDBXByteArrayValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length, __int64 &ReturnLength, BOOL &IsNull);
	virtual void __fastcall GetByteLength(Dbxcommon::TDBXByteArrayValue* DbxValue, __int64 &ByteLength, BOOL &IsNull);
	virtual void __fastcall GetStream(Dbxcommon::TDBXStreamValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall SetStream(Dbxcommon::TDBXStreamValue* DbxValue, Dbxcommon::TDBXStreamReader* StreamReader)/* overload */;
	virtual void __fastcall SetNull(Dbxcommon::TDBXValue* DbxValue);
	virtual void __fastcall SetString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, bool Value);
	virtual void __fastcall SetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte Value);
	virtual void __fastcall SetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt Value);
	virtual void __fastcall SetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short Value);
	virtual void __fastcall SetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int Value);
	virtual void __fastcall SetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 Value);
	virtual void __fastcall SetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float Value);
	virtual void __fastcall SetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double Value);
	virtual void __fastcall SetBCD(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value);
	virtual void __fastcall SetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetTimestamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimestampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetDynamicBytes(Dbxcommon::TDBXValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Count);
	virtual void __fastcall SetAnsiMemo(Dbxcommon::TDBXAnsiMemoValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetWideMemo(Dbxcommon::TDBXWideMemoValue* DbxValue, const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetObjectTypeName(int Ordinal);
	virtual void __fastcall SetValueType(Dbxcommon::TDBXValueType* ValueType);
	virtual void __fastcall GetLength(Dbxcommon::TDBXValue* DbxValue, __int64 &ByteLength, BOOL &IsNull);
	
public:
	__fastcall virtual ~TDBXDynalinkRow(void);
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::UnicodeString &Value, BOOL &IsNull){ Dbxcommon::TDBXRow::GetWideString(DbxValue, Value, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXWideStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXAnsiStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	
};


class DELPHICLASS TDBXDynalinkCommand;
class PASCALIMPLEMENTATION TDBXDynalinkCommand : public Dbxcommon::TDBXCommand
{
	typedef Dbxcommon::TDBXCommand inherited;
	
private:
	void *FConnectionHandle;
	void *FCommandHandle;
	TDBXMethodTable* FMethodTable;
	void __fastcall CheckResult(int DBXResult);
	__fastcall TDBXDynalinkCommand(Dbxcommon::TDBXContext* DBXContext, void * ConnectionHandle, TDBXMethodTable* MethodTable);
	
protected:
	virtual void __fastcall SetRowSetSize(const __int64 RowSetSize);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual Dbxcommon::TDBXRow* __fastcall CreateParameterRow(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	
public:
	__fastcall virtual ~TDBXDynalinkCommand(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
protected:
	/* TDBXCommand.Create */ inline __fastcall TDBXDynalinkCommand(Dbxcommon::TDBXContext* DBXContext) : Dbxcommon::TDBXCommand(DBXContext) { }
	
};


class DELPHICLASS TDBXDynalinkByteReader;
class PASCALIMPLEMENTATION TDBXDynalinkByteReader : public Dbxcommon::TDBXByteReader
{
	typedef Dbxcommon::TDBXByteReader inherited;
	
private:
	void *FReaderHandle;
	TDBXMethodTable* FMethodTable;
	__fastcall TDBXDynalinkByteReader(Dbxcommon::TDBXContext* DBXContext, void * ReaderHandle, TDBXMethodTable* MethodTable);
	void __fastcall CheckResult(int DBXResult);
	
public:
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
protected:
	/* TDBXByteReader.Create */ inline __fastcall TDBXDynalinkByteReader(Dbxcommon::TDBXContext* DBXContext) : Dbxcommon::TDBXByteReader(DBXContext) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDynalinkByteReader(void) { }
	
};


class DELPHICLASS TDBXDynalinkTransaction;
class DELPHICLASS TDBXDynalinkConnection;
class PASCALIMPLEMENTATION TDBXDynalinkTransaction : public Dbxcommon::TDBXTransaction
{
	typedef Dbxcommon::TDBXTransaction inherited;
	
private:
	void *FTransactionHandle;
	__fastcall TDBXDynalinkTransaction(TDBXDynalinkConnection* Connection, int IsolationLevel, void * TransactionHandle);
protected:
	/* TDBXTransaction.Create */ inline __fastcall TDBXDynalinkTransaction(Dbxcommon::TDBXConnection* Connection) : Dbxcommon::TDBXTransaction(Connection) { }
	
public:
	/* TDBXTransaction.Destroy */ inline __fastcall virtual ~TDBXDynalinkTransaction(void) { }
	
};


class PASCALIMPLEMENTATION TDBXDynalinkConnection : public Dbxcommon::TDBXConnection
{
	typedef Dbxcommon::TDBXConnection inherited;
	
private:
	DBXTraceCallback FTraceCallback;
	
protected:
	void *FConnectionHandle;
	TDBXMethodTable* FMethodTable;
	void __fastcall CheckResult(int DBXResult);
	virtual Dbxcommon::TDBXTransaction* __fastcall CreateAndBeginTransaction(const int Isolation);
	virtual void __fastcall Commit(const Dbxcommon::TDBXTransaction* InTransaction);
	virtual void __fastcall Rollback(const Dbxcommon::TDBXTransaction* InTransaction);
	Dbcommontypes::CBRType __stdcall DBXCallback(void * Handle, int TraceFlag, System::WideChar * TraceMessage);
	virtual void __fastcall SetTraceInfoEvent(const Dbxcommon::TDBXTraceEvent TraceInfoEvent);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List);
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List);
	virtual void __fastcall DerivedClose(void);
	
public:
	virtual void __fastcall Close(void);
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString Name);
	__fastcall TDBXDynalinkConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder, void * ConnectionHandle, TDBXMethodTable* MethodTable);
public:
	/* TDBXConnection.Destroy */ inline __fastcall virtual ~TDBXDynalinkConnection(void) { }
	
};


typedef TMetaClass* TDBXDynalinkDriverCommonLoaderClass;

class DELPHICLASS TDBXDynalinkDriver;
class PASCALIMPLEMENTATION TDBXDynalinkDriver : public Dbxcommon::TDBXDriver
{
	typedef Dbxcommon::TDBXDriver inherited;
	
private:
	System::UnicodeString FStringVersion;
	Dbxcommon::TDBXCommand* __fastcall CreateDynalinkCommand(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXConnection* Connection, Dbxcommon::TDBXCommand* MorphicCommand);
	
protected:
	void *FDriverHandle;
	TDBXMethodTable* FMethodTable;
	TDBXDynalinkDriverCommonLoaderClass FDriverLoaderClass;
	void __fastcall CheckResult(int DBXResult);
	void __fastcall LoadDriver(Dbxcommon::TDBXContext* DBXContext);
	
protected:
	virtual void __fastcall Close(void);
	
public:
	__fastcall TDBXDynalinkDriver(Dbxcommon::TDBXDriver* Driver, void * DriverHandle, TDBXMethodTable* MethodTable)/* overload */;
	__fastcall TDBXDynalinkDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef, TDBXDynalinkDriverCommonLoaderClass DBXDriverLoader)/* overload */;
	__fastcall TDBXDynalinkDriver(const Dbxcommon::TDBXDriverDef &DBXDriverDef, TDBXDynalinkDriverCommonLoaderClass DBXDriverLoader, Dbxcommon::TDBXProperties* DriverProps)/* overload */;
	__fastcall virtual ~TDBXDynalinkDriver(void);
	virtual System::UnicodeString __fastcall GetDriverVersion(void);
};


class DELPHICLASS TDBXDynalinkDriverCommonLoader;
class PASCALIMPLEMENTATION TDBXDynalinkDriverCommonLoader : public Dbxcommon::TDBXDriverLoader
{
	typedef Dbxcommon::TDBXDriverLoader inherited;
	
private:
	void __fastcall LoadDriverLibraryAndMethodTable(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXProperties* Properties);
	void __fastcall FreeOldLibrary(void);
	
protected:
	unsigned FLibraryHandle;
	unsigned FOldLibraryHandle;
	virtual void __fastcall LoadDriverLibrary(Dbxcommon::TDBXProperties* DriverProperties, Dbxcommon::TDBXContext* DBXContext);
	virtual TDBXMethodTable* __fastcall CreateMethodTable(void) = 0 ;
	virtual TDBXDynalinkDriver* __fastcall CreateDynalinkDriver(void) = 0 ;
	
protected:
	TDBXMethodTable* FMethodTable;
	void *FDriverHandle;
	
public:
	__fastcall virtual TDBXDynalinkDriverCommonLoader(void);
	virtual Dbxcommon::TDBXDriver* __fastcall Load(const Dbxcommon::TDBXDriverDef &DriverDef);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDynalinkDriverCommonLoader(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte MAX_VERSION_STRING_LENGTH = 0x80;
#define SDYNALINK_LOADER_NAME L"TDBXDynalinkDriverLoader"
#define SDBX_ADAPTER_NAME L"dbxadapter.dll"
#define SDBXLoader_GetDriver L"DBXLoader_GetDriver"
#define SDBXBase_GetErrorMessageLength L"DBXBase_GetErrorMessageLength"
#define SDBXBase_GetErrorMessage L"DBXBase_GetErrorMessage"
#define SDBXBase_Close L"DBXBase_Close"
#define SDBXRow_GetString L"DBXRow_GetString"
#define SDBXRow_GetWideString L"DBXRow_GetWideString"
#define SDBXRow_GetUInt8 L"DBXRow_GetUInt8"
#define SDBXRow_GetInt8 L"DBXRow_GetInt8"
#define SDBXRow_GetInt16 L"DBXRow_GetInt16"
#define SDBXRow_GetBoolean L"DBXRow_GetBoolean"
#define SDBXRow_GetInt32 L"DBXRow_GetInt32"
#define SDBXRow_GetInt64 L"DBXRow_GetInt64"
#define SDBXRow_GetSingle L"DBXRow_GetSingle"
#define SDBXRow_GetDouble L"DBXRow_GetDouble"
#define SDBXRow_GetBcd L"DBXRow_GetBcd"
#define SDBXRow_GetTimeStamp L"DBXRow_GetTimeStamp"
#define SDBXRow_GetTimeStampOffset L"DBXRow_GetTimeStampOffset"
#define SDBXRow_GetTime L"DBXRow_GetTime"
#define SDBXRow_GetDate L"DBXRow_GetDate"
#define SDBXRow_GetFixedBytes L"DBXRow_GetFixedBytes"
#define SDBXRow_GetBytes L"DBXRow_GetBytes"
#define SDBXRow_GetByteLength L"DBXRow_GetByteLength"
#define SDBXRow_GetObjectTypeName L"DBXRow_GetObjectTypeName"
#define SDBXWritableRow_SetNull L"DBXWritableRow_SetNull"
#define SDBXWritableRow_SetString L"DBXWritableRow_SetString"
#define SDBXWritableRow_SetWideString L"DBXWritableRow_SetWideString"
#define SDBXWritableRow_SetBoolean L"DBXWritableRow_SetBoolean"
#define SDBXWritableRow_SetUInt8 L"DBXWritableRow_SetUInt8"
#define SDBXWritableRow_SetInt8 L"DBXWritableRow_SetInt8"
#define SDBXWritableRow_SetInt16 L"DBXWritableRow_SetInt16"
#define SDBXWritableRow_SetInt32 L"DBXWritableRow_SetInt32"
#define SDBXWritableRow_SetInt64 L"DBXWritableRow_SetInt64"
#define SDBXWritableRow_SetSingle L"DBXWritableRow_SetSingle"
#define SDBXWritableRow_SetDouble L"DBXWritableRow_SetDouble"
#define SDBXWritableRow_SetBcd L"DBXWritableRow_SetBcd"
#define SDBXWritableRow_SetTimeStamp L"DBXWritableRow_SetTimeStamp"
#define SDBXWritableRow_SetTimeStampOffset L"DBXWritableRow_SetTimeStampOffset"
#define SDBXWritableRow_SetTime L"DBXWritableRow_SetTime"
#define SDBXWritableRow_SetDate L"DBXWritableRow_SetDate"
#define SDBXWritableRow_SetBytes L"DBXWritableRow_SetBytes"
#define SDBXWritableRow_SetBinary L"DBXWritableRow_SetBinary"
#define SDBXDriver_CreateConnection L"DBXDriver_CreateConnection"
#define SDBXDriver_GetVersion L"DBXDriver_GetVersion"
#define SDBXConnection_Connect L"DBXConnection_Connect"
#define SDBXConnection_Disconnect L"DBXConnection_Disconnect"
#define SDBXConnection_SetCallbackEvent L"DBXConnection_SetCallbackEvent"
#define SDBXConnection_CreateCommand L"DBXConnection_CreateCommand"
#define SDBXConnection_GetMetaData L"DBXConnection_GetMetaData"
#define SDBXConnection_BeginTransaction L"DBXConnection_BeginTransaction"
#define SDBXConnection_Commit L"DBXConnection_Commit"
#define SDBXConnection_Rollback L"DBXConnection_Rollback"
#define SDBXConnection_GetIsolation L"DBXConnection_GetIsolation"
#define SDBXConnection_GetVendorProperty L"DBXConnection_GetVendorProperty"
#define SDBXCommand_CreateParameterRow L"DBXCommand_CreateParameterRow"
#define SDBXCommand_Prepare L"DBXCommand_Prepare"
#define SDBXCommand_Execute L"DBXCommand_Execute"
#define SDBXCommand_ExecuteImmediate L"DBXCommand_ExecuteImmediate"
#define SDBXCommand_GetNextReader L"DBXCommand_GetNextReader"
#define SDBXCommand_GetRowsAffected L"DBXCommand_GetRowsAffected"
#define SDBXCommand_SetMaxBlobSize L"DBXCommand_SetMaxBlobSize"
#define SDBXCommand_SetRowSetSize L"DBXCommand_SetRowSetSize"
#define SDBXCommand_GetParameterCount L"DBXCommand_GetParameterCount"
#define SDBXCommand_GetParameterType L"DBXCommand_GetParameterType"
#define SDBXParameterRow_SetParameterType L"DBXParameterRow_SetParameterType"
#define SDBXReader_GetColumnCount L"DBXReader_GetColumnCount"
#define SDBXReader_GetColumnMetaData L"DBXReader_GetColumnMetadata"
#define SDBXReader_Next L"DBXReader_Next"
#define SDBXMetaData_GetMetaData L"DBXMetaData_GetMetaData"

}	/* namespace Dbxdynalink */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdynalink;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdynalinkHPP
