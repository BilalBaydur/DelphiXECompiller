// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXStreamPlatform.pas' rev: 22.00

#ifndef DbxstreamplatformHPP
#define DbxstreamplatformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXStream.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxstreamplatform
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXJSonRow;
class PASCALIMPLEMENTATION TDBXJSonRow : public Dbxcommontable::TDBXStreamerRow
{
	typedef Dbxcommontable::TDBXStreamerRow inherited;
	
private:
	Dbxstream::TDBXJSonStreamReader* FDbxStreamReader;
	Dbxstream::TDBXJSonStreamWriter* FDbxStreamWriter;
	Dbxstream::TDBXRowBuffer* FDbxRowBuffer;
	Dbxcommon::TDBXLookAheadStreamReader* FDBXLookAheadStreamReader;
	int FBcdFormat;
	bool FOwnsRow;
	void __fastcall ProcessStringOverFlow(Dbxcommon::TDBXWideStringValue* DbxValue)/* overload */;
	void __fastcall ProcessStringOverFlow(Dbxcommon::TDBXAnsiStringValue* DbxValue)/* overload */;
	void __fastcall ProcessStringOverFlow(Dbxcommon::TDBXByteArrayValue* DbxValue)/* overload */;
	bool __fastcall CanRead(Dbxcommon::TDBXValue* Value);
	
protected:
	Sysutils::TFormatSettings __fastcall GetUSFormat(void);
	virtual bool __fastcall UseExtendedTypes(void);
	virtual void __fastcall GetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, char * &AnsiStringVar, BOOL &IsNull);
	virtual void __fastcall GetWideChars(Dbxcommon::TDBXWideStringValue* DbxValue, Dbxplatform::TDBXWideChars &WideChars, int &Count, BOOL &IsNull);
	virtual void __fastcall GetAnsiChars(Dbxcommon::TDBXAnsiStringValue* DbxValue, Dbxplatform::TDBXAnsiChars &AnsiChars, int &Count, BOOL &IsNull);
	virtual void __fastcall GetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, BOOL &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte &Value, BOOL &IsNull);
	virtual void __fastcall GetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word &Value, BOOL &IsNull);
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
	virtual void __fastcall GetStream(Dbxcommon::TDBXWideStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	virtual void __fastcall GetStreamBytes(Dbxcommon::TDBXStreamValue* DbxValue, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Length, __int64 ReturnLength, BOOL &IsNull);
	virtual void __fastcall GetStreamLength(Dbxcommon::TDBXStreamValue* DbxValue, __int64 StreamLength, BOOL &IsNull);
	virtual void __fastcall GetDBXReader(Dbxcommon::TDBXReaderValue* DbxValue, Dbxcommon::TDBXReader* &Value, BOOL &IsNull);
	virtual void __fastcall GetJSONValue(Dbxcommon::TDBXJSONValue* DbxValue, Dbxjson::TJSONValue* &Value, BOOL &IsNull);
	virtual void __fastcall SetJSONValue(Dbxcommon::TDBXJSONValue* DbxValue, Dbxjson::TJSONValue* Value);
	virtual void __fastcall GetCallbackValue(Dbxcommon::TDBXCallbackValue* DbxValue, Dbxjson::TDBXCallback* &Value, BOOL &IsNull);
	virtual void __fastcall SetCallbackValue(Dbxcommon::TDBXCallbackValue* DbxValue, Dbxjson::TDBXCallback* Value);
	virtual bool __fastcall IsStoredNull(Dbxcommon::TDBXValue* DbxValue);
	virtual void __fastcall SetNull(Dbxcommon::TDBXValue* DbxValue);
	virtual void __fastcall SetString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetWideChars(Dbxcommon::TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetAnsiChars(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, bool Value);
	virtual void __fastcall SetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte Value);
	virtual void __fastcall SetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt Value);
	virtual void __fastcall SetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word Value);
	virtual void __fastcall SetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short Value);
	virtual void __fastcall SetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int Value);
	virtual void __fastcall SetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 Value);
	virtual void __fastcall SetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double Value);
	virtual void __fastcall SetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float Value);
	virtual void __fastcall SetBCD(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value);
	virtual void __fastcall SetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate Value);
	virtual void __fastcall SetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetTimestamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetTimestampOffset(Dbxcommon::TDBXTimeStampOffsetValue* DbxValue, Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetDynamicBytes(Dbxcommon::TDBXValue* DbxValue, __int64 Offset, const System::DynamicArray<System::Byte> Buffer, __int64 BufferOffset, __int64 Count);
	virtual void __fastcall SetAnsiMemo(Dbxcommon::TDBXAnsiMemoValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall SetWideMemo(Dbxcommon::TDBXWideMemoValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetDBXReader(Dbxcommon::TDBXReaderValue* DbxValue, Dbxcommon::TDBXReader* Value);
	virtual System::UnicodeString __fastcall GetObjectTypeName(int Ordinal);
	virtual void __fastcall SetStream(Dbxcommon::TDBXStreamValue* DbxValue, Dbxcommon::TDBXStreamReader* StreamReader)/* overload */;
	virtual Dbxcommon::TDBXValue* __fastcall CreateCustomValue(const Dbxcommon::TDBXValueType* ValueType);
	virtual void __fastcall SetValueType(Dbxcommon::TDBXValueType* ValueType);
	
public:
	__property Dbxstream::TDBXRowBuffer* RowBuffer = {read=FDbxRowBuffer};
	__property int BcdFormat = {read=FBcdFormat, write=FBcdFormat, nodefault};
	__fastcall TDBXJSonRow(Dbxcommon::TDBXContext* DBXContext, Dbxstream::TDBXJSonStreamReader* DbxStreamReader, Dbxstream::TDBXJSonStreamWriter* DbxStreamWriter, Dbxstream::TDBXRowBuffer* DbxRowBuffer, bool AOwnsRow);
	__fastcall virtual ~TDBXJSonRow(void);
	virtual void __fastcall ClearParameters(void);
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  GetStream(Dbxcommon::TDBXAnsiStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxstreamplatform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxstreamplatform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxstreamplatformHPP
