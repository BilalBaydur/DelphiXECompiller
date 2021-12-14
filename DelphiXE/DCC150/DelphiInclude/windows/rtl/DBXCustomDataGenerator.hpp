// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXCustomDataGenerator.pas' rev: 22.00

#ifndef DbxcustomdatageneratorHPP
#define DbxcustomdatageneratorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataProvider.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxcustomdatagenerator
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDataGeneratorColumn;
typedef System::DynamicArray<TDBXDataGeneratorColumn*> TDBXDataGeneratorColumnArray;

class DELPHICLASS TDBXCustomDataGenerator;
class PASCALIMPLEMENTATION TDBXCustomDataGenerator : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall AddColumn(const TDBXDataGeneratorColumn* Column);
	__fastcall virtual ~TDBXCustomDataGenerator(void);
	virtual TDBXDataGeneratorColumn* __fastcall GetColumn(const int Ordinal);
	virtual void __fastcall Open(void);
	virtual System::UnicodeString __fastcall CreateInsertStatement(const int Row)/* overload */;
	virtual System::UnicodeString __fastcall CreateInsertStatement(const TDBXDataGeneratorColumnArray InsertColumns, const int Row)/* overload */;
	virtual System::UnicodeString __fastcall CreateParameterizedInsertStatement(void)/* overload */;
	virtual System::UnicodeString __fastcall CreateParameterizedInsertStatement(const TDBXDataGeneratorColumnArray InsertColumns)/* overload */;
	virtual void __fastcall Next(void);
	
protected:
	virtual int __fastcall GetColumnCount(void);
	virtual System::UnicodeString __fastcall GetTableName(void);
	virtual void __fastcall SetTableName(const System::UnicodeString TableName);
	virtual Dbxmetadataprovider::TDBXMetaDataProvider* __fastcall GetMetaDataProvider(void);
	virtual void __fastcall SetMetaDataProvider(const Dbxmetadataprovider::TDBXMetaDataProvider* MetaDataProvider);
	
private:
	System::UnicodeString __fastcall ColumnNameString(const TDBXDataGeneratorColumnArray Columns);
	System::UnicodeString __fastcall ValueString(const TDBXDataGeneratorColumnArray Columns, const int Row);
	System::UnicodeString __fastcall MarkerString(const int Count);
	System::UnicodeString __fastcall CreateInsertStatement(const TDBXDataGeneratorColumnArray InsertColumns, const int Row, const bool Prepare)/* overload */;
	System::UnicodeString FTableName;
	int FRow;
	TDBXDataGeneratorColumnArray FColumns;
	Dbxmetadataprovider::TDBXMetaDataProvider* FMetaDataProvider;
	
public:
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property System::UnicodeString TableName = {read=GetTableName, write=SetTableName};
	__property Dbxmetadataprovider::TDBXMetaDataProvider* MetaDataProvider = {read=GetMetaDataProvider, write=SetMetaDataProvider};
public:
	/* TObject.Create */ inline __fastcall TDBXCustomDataGenerator(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXDataGeneratedReader;
class PASCALIMPLEMENTATION TDBXDataGeneratedReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
public:
	__fastcall TDBXDataGeneratedReader(const __int64 ARowCount, const TDBXDataGeneratorColumnArray AGeneratorColumns);
	__fastcall virtual ~TDBXDataGeneratedReader(void);
	virtual bool __fastcall Reset(void);
	virtual bool __fastcall DerivedNext(void);
	virtual bool __fastcall CompareReader(const Dbxcommon::TDBXReader* Reader);
	virtual void __fastcall DerivedClose(void);
	
protected:
	virtual Dbxcommon::TDBXByteReader* __fastcall GetByteReader(void);
	virtual __int64 __fastcall GetPosition(void);
	
private:
	void __fastcall CreateValues(void);
	void __fastcall GenerateValues(void);
	__int64 FPosition;
	__int64 FRowCount;
	int FLastOrdinalCompared;
	TDBXDataGeneratorColumnArray FGeneratorColumns;
	
public:
	__property __int64 Position = {read=GetPosition};
	__property int LastOrdinalCompared = {read=FLastOrdinalCompared, nodefault};
};


class DELPHICLASS TDBXDataGeneratedRow;
class PASCALIMPLEMENTATION TDBXDataGeneratedRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
public:
	__fastcall TDBXDataGeneratedRow(const Dbxcommon::TDBXContext* Context);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDataGeneratedRow(void) { }
	
};


class DELPHICLASS TDBXDataGeneratorException;
class PASCALIMPLEMENTATION TDBXDataGeneratorColumn : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXDataGeneratorColumn(const Dbxmetadataprovider::TDBXMetaDataColumn* InMetaDataColumn);
	virtual void __fastcall Open(void);
	__fastcall virtual ~TDBXDataGeneratorColumn(void);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row) = 0 ;
	virtual bool __fastcall GetBoolean(const __int64 Row);
	virtual System::Byte __fastcall GetInt8(const __int64 Row);
	virtual short __fastcall GetInt16(const __int64 Row);
	virtual int __fastcall GetInt32(const __int64 Row);
	virtual __int64 __fastcall GetInt64(const __int64 Row);
	virtual double __fastcall GetDouble(const __int64 Row);
	virtual float __fastcall GetSingle(const __int64 Row);
	virtual System::DynamicArray<System::Byte> __fastcall GetBytes(const __int64 Row);
	virtual System::UnicodeString __fastcall GetDecimal(const __int64 Row);
	virtual int __fastcall GetYear(const __int64 Row);
	virtual int __fastcall GetMonth(const __int64 Row);
	virtual int __fastcall GetDay(const __int64 Row);
	virtual int __fastcall GetHour(const __int64 Row);
	virtual int __fastcall GetMinute(const __int64 Row);
	virtual int __fastcall GetSeconds(const __int64 Row);
	virtual int __fastcall GetMilliseconds(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value) = 0 ;
	
protected:
	virtual void __fastcall SetDataGenerator(const TDBXCustomDataGenerator* DataGenerator);
	virtual System::UnicodeString __fastcall GetColumnName(void);
	virtual int __fastcall GetDataType(void);
	virtual Dbxmetadataprovider::TDBXMetaDataColumn* __fastcall GetMetaDataColumn(void);
	
private:
	TDBXDataGeneratorException* __fastcall TypeNotSupported(void);
	
protected:
	Dbxmetadataprovider::TDBXMetaDataColumn* FMetaDataColumn;
	TDBXCustomDataGenerator* FDataGenerator;
	
public:
	__property TDBXCustomDataGenerator* DataGenerator = {write=SetDataGenerator};
	__property System::UnicodeString ColumnName = {read=GetColumnName};
	__property int DataType = {read=GetDataType, nodefault};
	__property Dbxmetadataprovider::TDBXMetaDataColumn* MetaDataColumn = {read=GetMetaDataColumn};
};


class DELPHICLASS TDBXBooleanSequenceGenerator;
class PASCALIMPLEMENTATION TDBXBooleanSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXBooleanSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual bool __fastcall GetBoolean(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual System::Byte __fastcall GetInt8(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXBooleanSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXBlobSequenceGenerator;
class PASCALIMPLEMENTATION TDBXBlobSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXBlobSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual System::DynamicArray<System::Byte> __fastcall GetBytes(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXBlobSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXAnsiStringSequenceGenerator;
class PASCALIMPLEMENTATION TDBXAnsiStringSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXAnsiStringSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXAnsiStringSequenceGenerator(void) { }
	
};


class PASCALIMPLEMENTATION TDBXDataGeneratorException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	__fastcall TDBXDataGeneratorException(const System::UnicodeString Message);
public:
	/* Exception.CreateFmt */ inline __fastcall TDBXDataGeneratorException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDBXDataGeneratorException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDBXDataGeneratorException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDBXDataGeneratorException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDBXDataGeneratorException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDBXDataGeneratorException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDBXDataGeneratorException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDBXDataGeneratorException(void) { }
	
};


class DELPHICLASS TDBXDateSequenceGenerator;
class PASCALIMPLEMENTATION TDBXDateSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXDateSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual int __fastcall GetYear(const __int64 Row);
	virtual int __fastcall GetMonth(const __int64 Row);
	virtual int __fastcall GetDay(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXDateSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXDecimalSequenceGenerator;
class PASCALIMPLEMENTATION TDBXDecimalSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXDecimalSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual System::UnicodeString __fastcall GetDecimal(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXDecimalSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXDoubleSequenceGenerator;
class PASCALIMPLEMENTATION TDBXDoubleSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXDoubleSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual double __fastcall GetDouble(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXDoubleSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXInt16SequenceGenerator;
class PASCALIMPLEMENTATION TDBXInt16SequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXInt16SequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual short __fastcall GetInt16(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXInt16SequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXInt32SequenceGenerator;
class PASCALIMPLEMENTATION TDBXInt32SequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXInt32SequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual int __fastcall GetInt32(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXInt32SequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXInt64SequenceGenerator;
class PASCALIMPLEMENTATION TDBXInt64SequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXInt64SequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual __int64 __fastcall GetInt64(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXInt64SequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXInt8SequenceGenerator;
class PASCALIMPLEMENTATION TDBXInt8SequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXInt8SequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual System::Byte __fastcall GetInt8(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXInt8SequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXTimeSequenceGenerator;
class PASCALIMPLEMENTATION TDBXTimeSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXTimeSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual int __fastcall GetHour(const __int64 Row);
	virtual int __fastcall GetMinute(const __int64 Row);
	virtual int __fastcall GetSeconds(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXTimeSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXTimestampSequenceGenerator;
class PASCALIMPLEMENTATION TDBXTimestampSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXTimestampSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual int __fastcall GetYear(const __int64 Row);
	virtual int __fastcall GetMonth(const __int64 Row);
	virtual int __fastcall GetDay(const __int64 Row);
	virtual int __fastcall GetHour(const __int64 Row);
	virtual int __fastcall GetMinute(const __int64 Row);
	virtual int __fastcall GetSeconds(const __int64 Row);
	virtual int __fastcall GetMilliseconds(const __int64 Row);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXTimestampSequenceGenerator(void) { }
	
};


class DELPHICLASS TDBXWideStringSequenceGenerator;
class PASCALIMPLEMENTATION TDBXWideStringSequenceGenerator : public TDBXDataGeneratorColumn
{
	typedef TDBXDataGeneratorColumn inherited;
	
public:
	__fastcall TDBXWideStringSequenceGenerator(const Dbxmetadataprovider::TDBXMetaDataColumn* MetaData);
	virtual void __fastcall Open(void);
	virtual System::UnicodeString __fastcall GetString(const __int64 Row);
	virtual void __fastcall SetValue(const __int64 Row, const Dbxcommon::TDBXWritableValue* Value);
public:
	/* TDBXDataGeneratorColumn.Destroy */ inline __fastcall virtual ~TDBXWideStringSequenceGenerator(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxcustomdatagenerator */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxcustomdatagenerator;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxcustomdatageneratorHPP
