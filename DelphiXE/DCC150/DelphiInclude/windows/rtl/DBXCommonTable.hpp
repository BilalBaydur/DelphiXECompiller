// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXCommonTable.pas' rev: 22.00

#ifndef DbxcommontableHPP
#define DbxcommontableHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXDelegate.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxcommontable
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXActiveTableReaderItem;
class DELPHICLASS TDBXStreamerRow;
class PASCALIMPLEMENTATION TDBXActiveTableReaderItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDBXActiveTableReaderItem(void);
	void __fastcall ResetEos(void);
	void __fastcall SetParameterEos(const int ParameterOrdinal, const bool Eos);
	bool __fastcall IsParameterEos(const int ParameterOrdinal);
	
protected:
	bool __fastcall IsReaderEos(void);
	void __fastcall SetParameterList(const Dbxcommon::TDBXParameterList* AParameterList);
	void __fastcall SetReader(const Dbxcommon::TDBXReader* AReader);
	virtual void __fastcall SetStreamerRow(const TDBXStreamerRow* StreamerRow);
	virtual TDBXStreamerRow* __fastcall GetStreamerRow(void);
	virtual void __fastcall SetReaderEos(const bool Eos);
	
private:
	void __fastcall InitEos(void);
	
public:
	int FStreamerRowHandle;
	TDBXActiveTableReaderItem* FNext;
	
private:
	TDBXStreamerRow* FStreamerRow;
	Dbxcommon::TDBXParameterList* FParameterList;
	Dbxcommon::TDBXReader* FReader;
	bool FEos;
	Dbxplatform::TDBXBooleans FEosParams;
	bool FOwnsRow;
	bool FIsParameterRow;
	
public:
	__property Dbxcommon::TDBXParameterList* ParameterList = {read=FParameterList, write=SetParameterList};
	__property bool ReaderEos = {read=IsReaderEos, write=SetReaderEos, nodefault};
	__property Dbxcommon::TDBXReader* Reader = {read=FReader, write=SetReader};
	__property TDBXStreamerRow* StreamerRow = {read=GetStreamerRow, write=SetStreamerRow};
	__property bool OwnsRow = {write=FOwnsRow, nodefault};
	__property bool ParameterRow = {read=FIsParameterRow, write=FIsParameterRow, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXActiveTableReaderItem(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXActiveTableReaderList;
class PASCALIMPLEMENTATION TDBXActiveTableReaderList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual ~TDBXActiveTableReaderList(void);
	int __fastcall AllocateRowHandle(void);
	TDBXActiveTableReaderItem* __fastcall AddDBXStreamerRow(const TDBXStreamerRow* Row, const int RowHandle, const bool OwnsRow, const bool IsParameterRow);
	TDBXActiveTableReaderItem* __fastcall FindStreamerRowItem(const int StreamerRowHandle);
	void __fastcall CloseAllActiveTableReaders(void);
	
protected:
	bool __fastcall IsEos(void);
	
private:
	TDBXActiveTableReaderItem* FFirst;
	int FLastRowHandle;
	
public:
	__property bool Eos = {read=IsEos, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXActiveTableReaderList(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXJSONTableReader;
class PASCALIMPLEMENTATION TDBXJSONTableReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
public:
	__fastcall TDBXJSONTableReader(const Dbxcommon::TDBXContext* DbxContext, const Dbxjson::TJSONObject* Table, const bool OwnsJSONObject);
	__fastcall virtual ~TDBXJSONTableReader(void);
	virtual bool __fastcall DerivedNext(void);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXValueType* __fastcall GetValueType(const int Ordinal);
	virtual Dbxcommon::TDBXValue* __fastcall GetValue(const int Ordinal);
	
protected:
	virtual Dbxcommon::TDBXByteReader* __fastcall GetByteReader(void);
	virtual int __fastcall GetColumnCount(void);
	
private:
	void __fastcall CleanRowValues(void);
	void __fastcall CleanValueTypes(void);
	Dbxcommon::TDBXWritableValue* __fastcall CreateWritableValue(const int Ordinal);
	Dbxjson::TJSONObject* FJsonTable;
	int FRowNb;
	Dbxcommon::TDBXValueTypeArray FValueTypes;
	Dbxcommon::TDBXWritableValueArray FRow;
	int FColumnCount;
	bool FOwnsJsonTable;
};


class DELPHICLASS TDBXSQLColumnFlags;
class PASCALIMPLEMENTATION TDBXSQLColumnFlags : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt FlagReadonly = 0x1;
	
	static const System::ShortInt FlagSearchable = 0x2;
	
	static const System::ShortInt FlagCurrency = 0x4;
	
	static const System::ShortInt FlagNullable = 0x8;
	
	static const System::ShortInt FlagSigned = 0x10;
	
	static const System::ShortInt FlagCasesensitive = 0x20;
	
	static const System::ShortInt FlagAutoincrement = 0x40;
	
	static const System::Byte FlagInternalrow = 0x80;
	
public:
	/* TObject.Create */ inline __fastcall TDBXSQLColumnFlags(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSQLColumnFlags(void) { }
	
};


class PASCALIMPLEMENTATION TDBXStreamerRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
public:
	__fastcall TDBXStreamerRow(const Dbxcommon::TDBXContext* AContext);
	void __fastcall RecordDBXReaderSet(const Dbxcommon::TDBXValueType* ValueType);
	
protected:
	virtual void __fastcall ValueNotSet(const Dbxcommon::TDBXWritableValue* Value);
	
private:
	int FRowHandle;
	int FFirstDBXReaderOrdinal;
	int FLastDBXReaderOrdinal;
	bool FNeedsNext;
	
public:
	__property int RowHandle = {read=FRowHandle, write=FRowHandle, nodefault};
	__property int FirstDBXReaderOrdinal = {read=FFirstDBXReaderOrdinal, nodefault};
	__property int LastDBXReaderOrdinal = {read=FLastDBXReaderOrdinal, nodefault};
	__property bool NeedsNext = {read=FNeedsNext, write=FNeedsNext, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXStreamerRow(void) { }
	
};


class DELPHICLASS TDBXNoOpRow;
class PASCALIMPLEMENTATION TDBXNoOpRow : public TDBXStreamerRow
{
	typedef TDBXStreamerRow inherited;
	
public:
	__fastcall TDBXNoOpRow(const Dbxcommon::TDBXContext* AContext);
	virtual Dbxcommon::TDBXValue* __fastcall CreateCustomValue(const Dbxcommon::TDBXValueType* ValueType);
	
protected:
	virtual void __fastcall NotImplemented(void);
	virtual int __fastcall GetGeneration(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXNoOpRow(void) { }
	
};


class DELPHICLASS TDBXTableEntity;
class DELPHICLASS TDBXTable;
class PASCALIMPLEMENTATION TDBXTableEntity : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXTableEntity(const TDBXTable* ATable, const bool AOwnTable);
	__fastcall virtual ~TDBXTableEntity(void);
	
private:
	TDBXTable* FTable;
	bool FOwnTable;
	
public:
	__property TDBXTable* Table = {read=FTable};
};


class DELPHICLASS TDBXTableReader;
class PASCALIMPLEMENTATION TDBXTableReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
public:
	__fastcall TDBXTableReader(const TDBXTable* DbxTable)/* overload */;
	__fastcall TDBXTableReader(const Dbxcommon::TDBXContext* Context, const TDBXTable* DbxTable)/* overload */;
	__fastcall virtual ~TDBXTableReader(void);
	virtual Dbxcommon::TDBXValue* __fastcall GetValue(const int Ordinal);
	virtual Dbxcommon::TDBXValueType* __fastcall GetValueType(const int Ordinal);
	virtual Dbxcommon::TDBXValue* __fastcall GetValueByName(const System::UnicodeString Name);
	virtual bool __fastcall DerivedNext(void);
	virtual bool __fastcall Next(void);
	virtual void __fastcall DerivedClose(void);
	
protected:
	virtual int __fastcall GetColumnCount(void);
	virtual Dbxcommon::TDBXByteReader* __fastcall GetByteReader(void);
	
private:
	TDBXTable* FTable;
	bool FBeforeFirst;
};


class DELPHICLASS TDBXTableRow;
class PASCALIMPLEMENTATION TDBXTableRow : public Dbxcommon::TDBXWritableValueList
{
	typedef Dbxcommon::TDBXWritableValueList inherited;
	
public:
	__fastcall TDBXTableRow(const Dbxcommon::TDBXContext* DbxContext);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall CopyColumns(void) = 0 ;
	
protected:
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void) = 0 ;
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray Columns) = 0 ;
	virtual void __fastcall SetDBXTableName(const System::UnicodeString Name) = 0 ;
	virtual System::UnicodeString __fastcall GetDBXTableName(void) = 0 ;
	virtual TDBXTableRow* __fastcall GetOriginalRow(void) = 0 ;
	virtual int __fastcall ColumnIndex(const System::UnicodeString ColumnName);
	
public:
	__property Dbxcommon::TDBXValueTypeArray Columns = {read=GetColumns, write=SetColumns};
	__property System::UnicodeString DBXTableName = {read=GetDBXTableName, write=SetDBXTableName};
	__property TDBXTableRow* OriginalRow = {read=GetOriginalRow};
public:
	/* TDBXValueList.Destroy */ inline __fastcall virtual ~TDBXTableRow(void) { }
	
};


class PASCALIMPLEMENTATION TDBXTable : public TDBXTableRow
{
	typedef TDBXTableRow inherited;
	
public:
	__fastcall TDBXTable(const Dbxcommon::TDBXContext* DbxContext);
	virtual bool __fastcall InBounds(void) = 0 ;
	virtual bool __fastcall Next(void) = 0 ;
	virtual bool __fastcall First(void) = 0 ;
	virtual Dbxcommon::TDBXValueTypeArray __fastcall CopyColumns(void);
	virtual void __fastcall CopyFrom(const TDBXTable* Source)/* overload */;
	virtual void __fastcall CopyFrom(const Dbxcommon::TDBXReader* Source)/* overload */;
	virtual void __fastcall Insert(void);
	virtual void __fastcall Post(void);
	virtual void __fastcall Close(void);
	virtual void __fastcall Clear(void);
	virtual void __fastcall DeleteRow(void);
	virtual bool __fastcall FindStringKey(const int Ordinal, const System::UnicodeString Value);
	virtual void __fastcall AcceptChanges(void);
	virtual TDBXTable* __fastcall CreateTableView(const System::UnicodeString OrderByColumnName);
	
protected:
	virtual void __fastcall SetDBXTableName(const System::UnicodeString Name);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual TDBXTableRow* __fastcall GetOriginalRow(void);
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray Columns);
	virtual bool __fastcall IsUpdateable(void);
	virtual System::TObject* __fastcall GetStorage(void);
	virtual System::TObject* __fastcall GetCommand(void);
	virtual TDBXTable* __fastcall GetDeletedRows(void);
	virtual TDBXTable* __fastcall GetInsertedRows(void);
	virtual TDBXTable* __fastcall GetUpdatedRows(void);
	virtual int __fastcall GetTableId(void);
	virtual int __fastcall GetTableCount(void);
	
public:
	__property bool Updateable = {read=IsUpdateable, nodefault};
	__property System::TObject* Storage = {read=GetStorage};
	__property System::TObject* Command = {read=GetCommand};
	__property TDBXTable* DeletedRows = {read=GetDeletedRows};
	__property TDBXTable* InsertedRows = {read=GetInsertedRows};
	__property TDBXTable* UpdatedRows = {read=GetUpdatedRows};
	__property int TableId = {read=GetTableId, nodefault};
	__property int TableCount = {read=GetTableCount, nodefault};
public:
	/* TDBXValueList.Destroy */ inline __fastcall virtual ~TDBXTable(void) { }
	
};


class DELPHICLASS TDBXDelegateTable;
class PASCALIMPLEMENTATION TDBXDelegateTable : public TDBXTable
{
	typedef TDBXTable inherited;
	
public:
	__fastcall TDBXDelegateTable(void);
	__fastcall virtual ~TDBXDelegateTable(void);
	virtual TDBXTable* __fastcall ReplaceStorage(const TDBXTable* Table);
	virtual bool __fastcall InBounds(void);
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual void __fastcall Insert(void);
	virtual void __fastcall Post(void);
	virtual void __fastcall CopyFrom(const TDBXTable* Source)/* overload */;
	virtual void __fastcall Close(void);
	virtual void __fastcall Clear(void);
	virtual void __fastcall DeleteRow(void);
	virtual bool __fastcall FindStringKey(const int Ordinal, const System::UnicodeString Value);
	virtual void __fastcall AcceptChanges(void);
	virtual TDBXTable* __fastcall CreateTableView(const System::UnicodeString OrderByColumnName);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	virtual void __fastcall SetTable(const TDBXTable* Table);
	virtual bool __fastcall IsUpdateable(void);
	virtual System::TObject* __fastcall GetStorage(void);
	virtual System::TObject* __fastcall GetCommand(void);
	virtual TDBXTable* __fastcall GetDeletedRows(void);
	virtual TDBXTable* __fastcall GetInsertedRows(void);
	virtual TDBXTable* __fastcall GetUpdatedRows(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray Columns);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	virtual TDBXTableRow* __fastcall GetOriginalRow(void);
	TDBXTable* FTable;
	
public:
	__property TDBXTable* Table = {write=SetTable};
/* Hoisted overloads: */
	
public:
	inline void __fastcall  CopyFrom(const Dbxcommon::TDBXReader* Source){ TDBXTable::CopyFrom(Source); }
	
};


class DELPHICLASS TDBXStringTrimTable;
class PASCALIMPLEMENTATION TDBXStringTrimTable : public TDBXDelegateTable
{
	typedef TDBXDelegateTable inherited;
	
public:
	__fastcall TDBXStringTrimTable(const TDBXTable* Table, const Dbxcommon::TDBXWritableValueArray TrimValues);
	static TDBXTable* __fastcall CreateTrimTableIfNeeded(const TDBXTable* Table);
	__fastcall virtual ~TDBXStringTrimTable(void);
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	
private:
	static bool __fastcall HasCharTypes(const Dbxcommon::TDBXValueTypeArray Columns);
	
public:
	Dbxcommon::TDBXWritableValueArray FTrimValues;
};


class DELPHICLASS TDBXTrimStringValue;
class PASCALIMPLEMENTATION TDBXTrimStringValue : public Dbxdelegate::TDBXDelegateWritableValue
{
	typedef Dbxdelegate::TDBXDelegateWritableValue inherited;
	
public:
	__fastcall TDBXTrimStringValue(const Dbxcommon::TDBXWritableValue* Value);
	virtual System::UnicodeString __fastcall GetWideString(void)/* overload */;
	
protected:
	virtual System::UnicodeString __fastcall GetAsString(void);
public:
	/* TDBXDelegateWritableValue.Destroy */ inline __fastcall virtual ~TDBXTrimStringValue(void) { }
	
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  GetWideString(System::UnicodeString defaultValue){ return Dbxdelegate::TDBXDelegateWritableValue::GetWideString(defaultValue); }
	
};


class DELPHICLASS TDBXReaderTable;
class PASCALIMPLEMENTATION TDBXReaderTable : public TDBXTable
{
	typedef TDBXTable inherited;
	
public:
	__fastcall TDBXReaderTable(const Dbxcommon::TDBXReader* AReader);
	virtual bool __fastcall First(void);
	virtual bool __fastcall InBounds(void);
	virtual bool __fastcall Next(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	virtual void __fastcall Close(void);
	
protected:
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	
private:
	Dbxcommon::TDBXReader* FReader;
	int FNextCount;
	bool FLastNext;
public:
	/* TDBXValueList.Destroy */ inline __fastcall virtual ~TDBXReaderTable(void) { }
	
};


class DELPHICLASS TDBXRowTable;
class PASCALIMPLEMENTATION TDBXRowTable : public TDBXTable
{
	typedef TDBXTable inherited;
	
public:
	__fastcall TDBXRowTable(const Dbxcommon::TDBXContext* DbxContext, const Dbxcommon::TDBXRow* Row);
	__fastcall virtual ~TDBXRowTable(void);
	
protected:
	virtual void __fastcall RowNavigated(void);
	virtual void __fastcall CreateValues(void)/* overload */;
	
private:
	static Dbxcommon::TDBXWritableValueArray __fastcall CreateValues(const Dbxcommon::TDBXContext* Context, const Dbxcommon::TDBXValueTypeArray LocalColumns, const Dbxcommon::TDBXRow* Row)/* overload */;
	
protected:
	Dbxcommon::TDBXRow* FRow;
};


class DELPHICLASS TDBXCustomValueRow;
class PASCALIMPLEMENTATION TDBXCustomValueRow : public TDBXRowTable
{
	typedef TDBXRowTable inherited;
	
public:
	__fastcall TDBXCustomValueRow(const Dbxcommon::TDBXContext* DbxContext, const Dbxcommon::TDBXRow* Row);
	virtual bool __fastcall InBounds(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall First(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	
protected:
	virtual TDBXTableRow* __fastcall GetOriginalRow(void);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray ValueTypes);
	virtual void __fastcall SetDBXTableName(const System::UnicodeString Name);
	virtual System::UnicodeString __fastcall GetDBXTableName(void);
	
private:
	Dbxcommon::TDBXValueTypeArray FValueTypes;
public:
	/* TDBXRowTable.Destroy */ inline __fastcall virtual ~TDBXCustomValueRow(void) { }
	
};


class DELPHICLASS TDBXSingleValueRow;
class PASCALIMPLEMENTATION TDBXSingleValueRow : public TDBXCustomValueRow
{
	typedef TDBXCustomValueRow inherited;
	
public:
	__fastcall TDBXSingleValueRow(void);
	
protected:
	virtual void __fastcall SetColumns(const Dbxcommon::TDBXValueTypeArray ValueTypes);
public:
	/* TDBXRowTable.Destroy */ inline __fastcall virtual ~TDBXSingleValueRow(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxcommontable */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxcommontable;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxcommontableHPP
