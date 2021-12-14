// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDBReaders.pas' rev: 22.00

#ifndef DbxdbreadersHPP
#define DbxdbreadersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBClient.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdbreaders
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXParamsRow;
class PASCALIMPLEMENTATION TDBXParamsRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
private:
	Db::TParams* FParams;
	
public:
	__fastcall TDBXParamsRow(Db::TParams* Params);
	virtual Dbxcommon::TDBXValue* __fastcall CreateCustomValue(const Dbxcommon::TDBXValueType* ValueType);
	virtual void __fastcall GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::UnicodeString &Value, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, BOOL &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte &Value, BOOL &IsNull);
	virtual void __fastcall GetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word &Value, BOOL &IsNull);
	virtual void __fastcall GetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short &Value, BOOL &IsNull);
	virtual void __fastcall GetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int &Value, BOOL &IsNull);
	virtual void __fastcall GetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 &Value, BOOL &IsNull);
	virtual void __fastcall GetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float &Value, BOOL &IsNull);
	virtual void __fastcall GetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double &Value, BOOL &IsNull);
	virtual void __fastcall GetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, char * &AnsiStringBuilder, BOOL &IsNull);
	virtual void __fastcall GetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate &Value, BOOL &IsNull);
	virtual void __fastcall GetBytes(Dbxcommon::TDBXByteArrayValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length, __int64 &ReturnLength, BOOL &IsNull);
	virtual void __fastcall GetByteLength(Dbxcommon::TDBXByteArrayValue* DbxValue, __int64 &ByteLength, BOOL &IsNull);
	virtual void __fastcall GetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime &Value, BOOL &IsNull);
	virtual void __fastcall GetBcd(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value, BOOL &IsNull);
	virtual void __fastcall GetStream(Dbxcommon::TDBXStreamValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall SetNull(Dbxcommon::TDBXValue* DbxValue);
	virtual void __fastcall SetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, bool Value);
	virtual void __fastcall SetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte Value);
	virtual void __fastcall SetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt Value);
	virtual void __fastcall SetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word Value);
	virtual void __fastcall SetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short Value);
	virtual void __fastcall SetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int Value);
	virtual void __fastcall SetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 Value);
	virtual void __fastcall SetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float Value);
	virtual void __fastcall SetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double Value);
	virtual void __fastcall SetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetBCD(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value);
	virtual void __fastcall SetTimestamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimestampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetStream(Dbxcommon::TDBXStreamValue* DbxValue, Dbxcommon::TDBXStreamReader* StreamReader)/* overload */;
	virtual void __fastcall ValueSet(Dbxcommon::TDBXWritableValue* Value);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXParamsRow(void) { }
	
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::WideChar * &WideStringBuilder, BOOL &IsNull){ Dbxcommon::TDBXRow::GetWideString(DbxValue, WideStringBuilder, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXWideStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXAnsiStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	
};


class DELPHICLASS TDBXMemoryTable;
class PASCALIMPLEMENTATION TDBXMemoryTable : public Dbxcommontable::TDBXTable
{
	typedef Dbxcommontable::TDBXTable inherited;
	
private:
	int FIndex;
	int FOrderByColumn;
	System::UnicodeString FName;
	Dbxcommon::TDBXValueTypeArray FValueTypes;
	Generics_collections::TList__1<Dbxcommon::TDBXWritableValueArray>* FValueRows;
	Dbxcommon::TDBXWritableValueArray __fastcall CreateWritableValueArray(void);
	HIDESBASE void __fastcall ClearValues(Dbxcommon::TDBXWritableValueArray AValues);
	void __fastcall ClearValueTypes(Dbxcommon::TDBXValueTypeArray AValueTypes);
	
protected:
	virtual int __fastcall GetTableCount(void);
	virtual void __fastcall OrderByColumn(int column);
	
public:
	__fastcall TDBXMemoryTable(void);
	__fastcall virtual ~TDBXMemoryTable(void);
	virtual void __fastcall Insert(void);
	virtual void __fastcall Post(void);
	virtual bool __fastcall InBounds(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall First(void);
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray Columns);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual void __fastcall SetDBXTableName(const System::UnicodeString AName);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual void __fastcall AcceptChanges(void);
	virtual Dbxcommontable::TDBXTable* __fastcall CreateTableView(const System::UnicodeString OrderByColumnName);
	virtual bool __fastcall FindStringKey(const int Ordinal, const System::UnicodeString Value);
};


class DELPHICLASS TDBXDBTable;
class PASCALIMPLEMENTATION TDBXDBTable : public Dbxcommontable::TDBXRowTable
{
	typedef Dbxcommontable::TDBXRowTable inherited;
	
private:
	System::UnicodeString FCollectionName;
	Dbxcommon::TDBXValueTypeArray FValueTypes;
	static int __fastcall ToDataType(Db::TFieldType FieldType);
	static int __fastcall ToDataSubType(Db::TFieldType FieldType);
	static Db::TFieldType __fastcall ToFieldType(Dbxcommon::TDBXValueType* ValueType);
	static int __fastcall ToDBXParameterDirection(Db::TParamType ParameterType);
	static Db::TParamType __fastcall ToParameterType(int ParameterDirection);
	void __fastcall FreeValueTypes(void);
	
protected:
	virtual void __fastcall SetDBXTableName(const System::UnicodeString CollectionName);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
public:
	/* TDBXRowTable.Create */ inline __fastcall TDBXDBTable(const Dbxcommon::TDBXContext* DbxContext, const Dbxcommon::TDBXRow* Row) : Dbxcommontable::TDBXRowTable(DbxContext, Row) { }
	/* TDBXRowTable.Destroy */ inline __fastcall virtual ~TDBXDBTable(void) { }
	
};


class DELPHICLASS TDBXParamsTable;
class PASCALIMPLEMENTATION TDBXParamsTable : public TDBXDBTable
{
	typedef TDBXDBTable inherited;
	
private:
	Db::TParams* FParams;
	bool FAtEnd;
	bool FInstanceOwner;
	static void __fastcall CopyValueTypes(const Dbxcommon::TDBXValueTypeArray ValueTypes, const Db::TParams* Params);
	static void __fastcall CopyValueType(int Ordinal, Dbxcommon::TDBXValueType* ValueType, Db::TParam* Param);
	
protected:
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray Columns);
	virtual System::TObject* __fastcall GetStorage(void);
	
public:
	__fastcall TDBXParamsTable(void)/* overload */;
	__fastcall TDBXParamsTable(Db::TParams* Params, bool InstanceOwner)/* overload */;
	__fastcall virtual ~TDBXParamsTable(void);
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall InBounds(void);
	virtual void __fastcall Close(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
};


class DELPHICLASS TDBXParamsReader;
class PASCALIMPLEMENTATION TDBXParamsReader : public Dbxcommontable::TDBXTableReader
{
	typedef Dbxcommontable::TDBXTableReader inherited;
	
public:
	__fastcall TDBXParamsReader(Db::TParams* Params, bool InstanceOwner);
	static void __fastcall CopyReaderToParams(Dbxcommon::TDBXReader* Reader, Db::TParams* Params);
	static Db::TParams* __fastcall ToParams(Classes::TPersistent* AOwner, Dbxcommon::TDBXReader* Reader, bool AOwnsInstance);
	__fastcall virtual ~TDBXParamsReader(void);
};


class DELPHICLASS TDBXDataSetRow;
class PASCALIMPLEMENTATION TDBXDataSetRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
private:
	Db::TDataSet* FTable;
	bool __fastcall EnsureEditState(void);
	
public:
	__fastcall TDBXDataSetRow(Db::TDataSet* Table);
	virtual void __fastcall GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::WideChar * &WideStringBuilder, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, BOOL &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte &Value, BOOL &IsNull);
	virtual void __fastcall GetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word &Value, BOOL &IsNull);
	virtual void __fastcall GetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short &Value, BOOL &IsNull);
	virtual void __fastcall GetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int &Value, BOOL &IsNull);
	virtual void __fastcall GetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 &Value, BOOL &IsNull);
	virtual void __fastcall GetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float &Value, BOOL &IsNull);
	virtual void __fastcall GetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double &Value, BOOL &IsNull);
	virtual void __fastcall GetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, char * &AnsiStringBuilder, BOOL &IsNull);
	virtual void __fastcall GetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate &Value, BOOL &IsNull);
	virtual void __fastcall GetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value, BOOL &IsNull);
	virtual void __fastcall GetTimeStampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value, BOOL &IsNull);
	virtual void __fastcall GetBcd(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value, BOOL &IsNull);
	virtual void __fastcall GetBytes(Dbxcommon::TDBXByteArrayValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length, __int64 &ReturnLength, BOOL &IsNull);
	virtual void __fastcall GetByteLength(Dbxcommon::TDBXByteArrayValue* DbxValue, __int64 &ByteLength, BOOL &IsNull);
	virtual void __fastcall GetStream(Dbxcommon::TDBXStreamValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall SetNull(Dbxcommon::TDBXValue* DbxValue);
	virtual void __fastcall SetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, bool Value);
	virtual void __fastcall SetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte Value);
	virtual void __fastcall SetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt Value);
	virtual void __fastcall SetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word Value);
	virtual void __fastcall SetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short Value);
	virtual void __fastcall SetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int Value);
	virtual void __fastcall SetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 Value);
	virtual void __fastcall SetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float Value);
	virtual void __fastcall SetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double Value);
	virtual void __fastcall SetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetBCD(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value);
	virtual void __fastcall SetTimestamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimestampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall ValueSet(Dbxcommon::TDBXWritableValue* Value);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDataSetRow(void) { }
	
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::UnicodeString &Value, BOOL &IsNull){ Dbxcommon::TDBXRow::GetWideString(DbxValue, Value, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXWideStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXAnsiStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	
};


class DELPHICLASS TDBXDataSetTable;
class DELPHICLASS TDBXOriginalRow;
class PASCALIMPLEMENTATION TDBXDataSetTable : public TDBXDBTable
{
	typedef TDBXDBTable inherited;
	
private:
	bool FOwnsTable;
	Db::TDataSet* FTable;
	TDBXOriginalRow* FOriginal;
	virtual void __fastcall SkipOriginalRow(void);
	__fastcall TDBXDataSetTable(const System::UnicodeString CollectionName, Db::TDataSet* Table, bool OwnsTable, bool ValuesNeedCreate)/* overload */;
	
protected:
	virtual void __fastcall SetDBXTableName(const System::UnicodeString CollectionName);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual System::TObject* __fastcall GetStorage(void);
	int __fastcall GetDataSize(Db::TFieldDef* FieldDef, Db::TField* Field);
	
public:
	__fastcall TDBXDataSetTable(Db::TDataSet* Dataset, bool InstanceOwner)/* overload */;
	__fastcall virtual ~TDBXDataSetTable(void);
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall InBounds(void);
	virtual void __fastcall Insert(void);
	virtual void __fastcall Post(void);
	virtual void __fastcall DeleteRow(void);
	virtual void __fastcall Close(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	void __fastcall FailIfRowIsNew(void);
	void __fastcall CopyValueTypeProperties(Db::TFieldDef* FieldDef, Dbxcommon::TDBXValueType* ValueType, int Ordinal);
};


class DELPHICLASS TDBXClientDataSetTable;
class PASCALIMPLEMENTATION TDBXClientDataSetTable : public TDBXDataSetTable
{
	typedef TDBXDataSetTable inherited;
	
private:
	Dbclient::TClientDataSet* FClientDataset;
	__fastcall TDBXClientDataSetTable(const System::UnicodeString CollectionName, Dbxcommon::TDBXValueTypeArray TableColumns, Dbclient::TClientDataSet* Table, bool OwnsTable)/* overload */;
	virtual void __fastcall SkipOriginalRow(void);
	
protected:
	virtual Dbxcommontable::TDBXTable* __fastcall GetDeletedRows(void);
	virtual Dbxcommontable::TDBXTable* __fastcall GetInsertedRows(void);
	virtual Dbxcommontable::TDBXTable* __fastcall GetUpdatedRows(void);
	virtual Dbxcommontable::TDBXTableRow* __fastcall GetOriginalRow(void);
	
public:
	__fastcall TDBXClientDataSetTable(void)/* overload */;
	__fastcall TDBXClientDataSetTable(Dbclient::TClientDataSet* ClientDataSet, bool OwnsTable)/* overload */;
	virtual void __fastcall AcceptChanges(void);
	virtual void __fastcall Clear(void);
	virtual Dbxcommontable::TDBXTable* __fastcall CreateTableView(const System::UnicodeString OrderByColumnName);
	virtual bool __fastcall FindStringKey(const int Ordinal, const System::UnicodeString Value);
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray Columns);
public:
	/* TDBXDataSetTable.Destroy */ inline __fastcall virtual ~TDBXClientDataSetTable(void) { }
	
};


class DELPHICLASS TDBXDataSetReader;
class PASCALIMPLEMENTATION TDBXDataSetReader : public Dbxcommontable::TDBXTableReader
{
	typedef Dbxcommontable::TDBXTableReader inherited;
	
public:
	__fastcall TDBXDataSetReader(Db::TDataSet* Params, bool InstanceOwner);
	static void __fastcall CopyReaderToClientDataSet(Dbxcommon::TDBXReader* Reader, Dbclient::TClientDataSet* Dataset);
	static Dbclient::TClientDataSet* __fastcall ToClientDataSet(Classes::TComponent* AOwner, Dbxcommon::TDBXReader* Reader, bool AOwnsInstance);
	__fastcall virtual ~TDBXDataSetReader(void);
};


class PASCALIMPLEMENTATION TDBXOriginalRow : public TDBXDBTable
{
	typedef TDBXDBTable inherited;
	
private:
	bool FAtEnd;
	TDBXClientDataSetTable* FClonedTable;
	TDBXClientDataSetTable* FClientTable;
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	
public:
	__fastcall TDBXOriginalRow(TDBXClientDataSetTable* ClientTable);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall InBounds(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
public:
	/* TDBXRowTable.Destroy */ inline __fastcall virtual ~TDBXOriginalRow(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdbreaders */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdbreaders;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdbreadersHPP
