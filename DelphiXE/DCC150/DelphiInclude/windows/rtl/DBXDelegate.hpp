// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDelegate.pas' rev: 22.00

#ifndef DbxdelegateHPP
#define DbxdelegateHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdelegate
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDelegateConnection;
class PASCALIMPLEMENTATION TDBXDelegateConnection : public Dbxcommon::TDBXConnection
{
	typedef Dbxcommon::TDBXConnection inherited;
	
protected:
	Dbxcommon::TDBXConnection* FConnection;
	
protected:
	virtual Dbxcommon::TDBXTransaction* __fastcall CreateAndBeginTransaction(const int Isolation);
	virtual void __fastcall Commit(const Dbxcommon::TDBXTransaction* Transaction);
	virtual void __fastcall Rollback(const Dbxcommon::TDBXTransaction* Transaction);
	virtual Dbxcommon::TDBXDatabaseMetaData* __fastcall GetDatabaseMetaData(void);
	virtual Dbxcommon::TDBXProperties* __fastcall GetConnectionProperties(void);
	virtual void __fastcall SetConnectionProperties(const Dbxcommon::TDBXProperties* Value);
	virtual Dbxcommon::TDBXTraceEvent __fastcall GetTraceInfoEvent(void);
	virtual void __fastcall SetTraceInfoEvent(const Dbxcommon::TDBXTraceEvent TraceInfoEvent);
	virtual int __fastcall GetTraceFlags(void);
	virtual void __fastcall SetTraceFlags(const int TraceFlags);
	virtual Dbxcommon::TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual void __fastcall SetErrorEvent(const Dbxcommon::TDBXErrorEvent ErrorEvent);
	virtual Dbxcommon::TDBXFormatter* __fastcall GetDBXFormatter(void);
	virtual void __fastcall SetDBXFormatter(const Dbxcommon::TDBXFormatter* DBXFormatter);
	virtual bool __fastcall GetIsOpen(void);
	virtual void __fastcall Open(void);
	virtual Dbxcommon::TDBXCommand* __fastcall DerivedCreateCommand(void)/* overload */;
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List);
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateMorphCommand(Dbxcommon::TDBXCommand* MorphicCommand);
	virtual System::UnicodeString __fastcall GetProductVersion(void);
	virtual System::UnicodeString __fastcall GetProductName(void);
	virtual System::UnicodeString __fastcall GetConnectionProperty(const System::UnicodeString Name);
	
public:
	__fastcall TDBXDelegateConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder, Dbxcommon::TDBXConnection* Connection);
	__fastcall virtual ~TDBXDelegateConnection(void);
	virtual void __fastcall Close(void);
	virtual Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(int Isolation)/* overload */;
	virtual Dbxcommon::TDBXTransaction* __fastcall BeginTransaction(void)/* overload */;
	virtual void __fastcall CommitFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	virtual void __fastcall RollbackFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	virtual void __fastcall RollbackIncompleteFreeAndNil(Dbxcommon::TDBXTransaction* &Transaction);
	virtual Dbxcommon::TDBXCommand* __fastcall CreateCommand(void)/* overload */;
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString Name);
};


class DELPHICLASS TDBXDelegateCommand;
class PASCALIMPLEMENTATION TDBXDelegateCommand : public Dbxcommon::TDBXCommand
{
	typedef Dbxcommon::TDBXCommand inherited;
	
protected:
	Dbxcommon::TDBXCommand* FCommand;
	
protected:
	virtual void __fastcall SetCommandType(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetCommandType(void);
	virtual System::UnicodeString __fastcall GetText(void);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetRowSetSize(const __int64 Value);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual void __fastcall SetCommandTimeout(const int Timeout);
	virtual int __fastcall GetCommandTimeout(void);
	virtual Dbxcommon::TDBXErrorEvent __fastcall GetErrorEvent(void);
	virtual Dbxcommon::TDBXRow* __fastcall CreateParameterRow(void);
	virtual void __fastcall CreateParameters(Dbxcommon::TDBXCommand* Command);
	virtual Dbxcommon::TDBXParameterList* __fastcall GetParameters(void);
	virtual void __fastcall Open(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedClearParameters(void);
	
public:
	__fastcall TDBXDelegateCommand(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXCommand* Command);
	__fastcall virtual ~TDBXDelegateCommand(void);
	virtual void __fastcall Prepare(void);
	virtual Dbxcommon::TDBXReader* __fastcall ExecuteQuery(void);
	virtual void __fastcall ExecuteUpdate(void);
	virtual Dbxcommon::TDBXReader* __fastcall GetNextReader(void);
	virtual Dbxcommon::TDBXParameter* __fastcall CreateParameter(void);
};


class DELPHICLASS TDBXDelegateParameterList;
class PASCALIMPLEMENTATION TDBXDelegateParameterList : public Dbxcommon::TDBXParameterList
{
	typedef Dbxcommon::TDBXParameterList inherited;
	
protected:
	Dbxcommon::TDBXParameterList* FParameterList;
	
protected:
	virtual Dbxcommon::TDBXParameter* __fastcall GetParameterByOrdinal(const int Ordinal);
	virtual int __fastcall GetCount(void);
	__fastcall TDBXDelegateParameterList(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXCommand* Command, Dbxcommon::TDBXParameterList* Parameters);
	
public:
	__fastcall virtual ~TDBXDelegateParameterList(void);
	virtual void __fastcall SetCount(const int Count);
	virtual void __fastcall AddParameter(Dbxcommon::TDBXParameter* Parameter);
	virtual void __fastcall SetParameter(const int Ordinal, const Dbxcommon::TDBXParameter* Parameter);
	virtual void __fastcall InsertParameter(int Ordinal, Dbxcommon::TDBXParameter* Parameter);
	virtual void __fastcall RemoveParameter(int Ordinal)/* overload */;
	virtual void __fastcall RemoveParameter(Dbxcommon::TDBXParameter* Parameter)/* overload */;
	virtual void __fastcall ClearParameters(void)/* overload */;
	virtual void __fastcall RemoveParameters(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name);
};


class DELPHICLASS TDBXDelegateParameter;
class PASCALIMPLEMENTATION TDBXDelegateParameter : public Dbxcommon::TDBXParameter
{
	typedef Dbxcommon::TDBXParameter inherited;
	
protected:
	Dbxcommon::TDBXParameter* FParameter;
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetValue(void);
	virtual void __fastcall SetParameter(void);
	virtual void __fastcall SetDbxRow(const Dbxcommon::TDBXRow* DbxRow);
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
	
public:
	__fastcall TDBXDelegateParameter(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXParameter* Parameter);
	__fastcall virtual ~TDBXDelegateParameter(void);
	virtual void __fastcall Assign(Dbxcommon::TDBXParameter* Source);
	virtual System::TObject* __fastcall Clone(void);
};


class DELPHICLASS TDBXDelegateWritableValue;
class PASCALIMPLEMENTATION TDBXDelegateWritableValue : public Dbxcommon::TDBXWritableValue
{
	typedef Dbxcommon::TDBXWritableValue inherited;
	
protected:
	Dbxcommon::TDBXValue* FValue;
	Dbxcommon::TDBXWritableValue* FWritableValue;
	
protected:
	__fastcall TDBXDelegateWritableValue(Dbxcommon::TDBXValueType* ValueType, Dbxcommon::TDBXWritableValue* Value)/* overload */;
	virtual Dbxcommon::TDBXValue* __fastcall GetNonDelegate(void);
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
	virtual Dbxcommon::TDBXDate __fastcall GetAsDate(void);
	virtual Dbxcommon::TDBXTime __fastcall GetAsTime(void);
	virtual Sqltimst::TSQLTimeStamp __fastcall GetAsTimeStamp(void);
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
	virtual void __fastcall SetAsDate(const Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetAsTime(const Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetAsTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	
public:
	virtual bool __fastcall IsNull(void);
	virtual __int64 __fastcall GetValueSize(void);
	virtual System::AnsiString __fastcall GetAnsiString(void);
	virtual Dbxcommon::TDBXDate __fastcall GetDate(void);
	virtual bool __fastcall GetBoolean(void)/* overload */;
	virtual Dbxcommon::TDBXTime __fastcall GetTime(void);
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
	virtual Dbxcommon::TDBXReader* __fastcall GetDBXReader(bool AInstanceOwner)/* overload */;
	virtual Dbxcommon::TDBXConnection* __fastcall GetDBXConnection(void);
	virtual Classes::TStream* __fastcall GetStream(bool AInstanceOwner)/* overload */;
	virtual System::UnicodeString __fastcall GetWideString(System::UnicodeString defaultValue)/* overload */;
	virtual bool __fastcall GetBoolean(bool defaultValue)/* overload */;
	virtual System::Byte __fastcall GetUInt8(System::Byte defaultValue)/* overload */;
	virtual System::ShortInt __fastcall GetInt8(System::ShortInt defaultValue)/* overload */;
	virtual System::Word __fastcall GetUInt16(System::Word defaultValue)/* overload */;
	virtual short __fastcall GetInt16(short defaultValue)/* overload */;
	virtual int __fastcall GetInt32(int defaultValue)/* overload */;
	virtual __int64 __fastcall GetInt64(__int64 defaultValue)/* overload */;
	virtual bool __fastcall EqualsValue(Dbxcommon::TDBXValue* Other);
	virtual void __fastcall SetNull(void);
	virtual void __fastcall SetTimeStamp(const Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetBcd(const Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetBoolean(const bool Value);
	virtual void __fastcall SetDate(const Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetTime(const Dbxcommon::TDBXTime Value);
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
	virtual void __fastcall SetDBXReader(const Dbxcommon::TDBXReader* Value, const bool AInstanceOwner)/* overload */;
	virtual void __fastcall SetStream(const Classes::TStream* Stream, const bool AInstanceOwner);
	virtual void __fastcall SetDBXConnection(const Dbxcommon::TDBXConnection* Value);
	virtual void __fastcall SetValue(const Dbxcommon::TDBXValue* Value);
	__fastcall virtual ~TDBXDelegateWritableValue(void);
/* Hoisted overloads: */
	
public:
	inline Dbxcommon::TDBXReader* __fastcall  GetDBXReader(void){ return Dbxcommon::TDBXValue::GetDBXReader(); }
	inline Classes::TStream* __fastcall  GetStream(void){ return Dbxcommon::TDBXValue::GetStream(); }
	
};


class DELPHICLASS TDBXDelegateReader;
class PASCALIMPLEMENTATION TDBXDelegateReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
private:
	Dbxcommon::TDBXReader* FReader;
	
protected:
	virtual bool __fastcall DerivedNext(void);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXByteReader* __fastcall GetByteReader(void);
	virtual int __fastcall GetReaderHandle(void);
	virtual bool __fastcall IsUpdateable(void);
	virtual int __fastcall GetRowHandle(void);
	virtual Dbxcommon::TDBXValue* __fastcall GetValue(const int Ordinal);
	virtual Dbxcommon::TDBXValue* __fastcall GetValueByName(const System::UnicodeString Name);
	virtual Dbxcommon::TDBXValueType* __fastcall GetValueType(const int Ordinal);
	virtual int __fastcall GetColumnCount(void);
	
public:
	__fastcall TDBXDelegateReader(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXReader* Reader);
	__fastcall virtual ~TDBXDelegateReader(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall Reset(void);
	virtual System::UnicodeString __fastcall GetObjectTypeName(int Ordinal);
	virtual int __fastcall GetOrdinal(const System::UnicodeString Name)/* overload */;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdelegate */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdelegate;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdelegateHPP
