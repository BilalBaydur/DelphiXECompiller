// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMemoryRow.pas' rev: 22.00

#ifndef DbxmemoryrowHPP
#define DbxmemoryrowHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmemoryrow
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMemoryRow;
class PASCALIMPLEMENTATION TDBXMemoryRow : public Dbxcommon::TDBXRow
{
	typedef Dbxcommon::TDBXRow inherited;
	
private:
	Dbxcommon::TDBXWritableValueArray FValueRow;
	void __fastcall ClearValues(Dbxcommon::TDBXWritableValueArray AValues);
	
protected:
	virtual void __fastcall SetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, const System::AnsiString Value);
	virtual void __fastcall GetAnsiString(Dbxcommon::TDBXAnsiStringValue* DbxValue, char * &AnsiStringBuilder, BOOL &IsNull);
	virtual void __fastcall GetJSONValue(Dbxcommon::TDBXJSONValue* DbxValue, Dbxjson::TJSONValue* &Value, BOOL &IsNull);
	virtual void __fastcall SetJSONValue(Dbxcommon::TDBXJSONValue* DbxValue, Dbxjson::TJSONValue* Value);
	virtual void __fastcall SetTimestamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall GetTimeStamp(Dbxcommon::TDBXTimeStampValue* DbxValue, Sqltimst::TSQLTimeStamp &Value, BOOL &IsNull);
	virtual void __fastcall GetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime &Value, BOOL &IsNull);
	virtual void __fastcall SetTime(Dbxcommon::TDBXTimeValue* DbxValue, Dbxcommon::TDBXTime Value);
	virtual void __fastcall SetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate Value);
	virtual void __fastcall GetDate(Dbxcommon::TDBXDateValue* DbxValue, Dbxcommon::TDBXDate &Value, BOOL &IsNull);
	virtual void __fastcall GetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, BOOL &Value, BOOL &IsNull);
	virtual void __fastcall SetBoolean(Dbxcommon::TDBXBooleanValue* DbxValue, bool Value);
	virtual void __fastcall GetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short &Value, BOOL &IsNull);
	virtual void __fastcall SetInt16(Dbxcommon::TDBXInt16Value* DbxValue, short Value);
	virtual void __fastcall GetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int &Value, BOOL &IsNull);
	virtual void __fastcall SetInt32(Dbxcommon::TDBXInt32Value* DbxValue, int Value);
	virtual void __fastcall GetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 &Value, BOOL &IsNull);
	virtual void __fastcall SetInt64(Dbxcommon::TDBXInt64Value* DbxValue, __int64 Value);
	virtual void __fastcall GetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt &Value, BOOL &IsNull);
	virtual void __fastcall SetInt8(Dbxcommon::TDBXInt8Value* DbxValue, System::ShortInt Value);
	virtual void __fastcall SetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte Value);
	virtual void __fastcall GetUInt8(Dbxcommon::TDBXUInt8Value* DbxValue, System::Byte &Value, BOOL &IsNull);
	virtual void __fastcall GetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word &Value, BOOL &IsNull);
	virtual void __fastcall SetUInt16(Dbxcommon::TDBXUInt16Value* DbxValue, System::Word Value);
	virtual void __fastcall GetBcd(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value, BOOL &IsNull);
	virtual void __fastcall SetBCD(Dbxcommon::TDBXBcdValue* DbxValue, Fmtbcd::TBcd &Value);
	virtual void __fastcall GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::WideChar * &WideStringBuilder, BOOL &IsNull)/* overload */;
	virtual void __fastcall SetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, const System::UnicodeString Value);
	virtual void __fastcall SetValueType(Dbxcommon::TDBXValueType* ValueType);
	virtual void __fastcall GetDBXReader(Dbxcommon::TDBXReaderValue* DbxValue, Dbxcommon::TDBXReader* &Value, BOOL &IsNull);
	virtual void __fastcall SetDBXReader(Dbxcommon::TDBXReaderValue* DbxValue, Dbxcommon::TDBXReader* Value);
	virtual void __fastcall GetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float &Value, BOOL &IsNull);
	virtual void __fastcall SetSingle(Dbxcommon::TDBXSingleValue* DbxValue, float Value);
	virtual void __fastcall GetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double &Value, BOOL &IsNull);
	virtual void __fastcall SetDouble(Dbxcommon::TDBXDoubleValue* DbxValue, double Value);
	virtual void __fastcall SetStream(Dbxcommon::TDBXStreamValue* DbxValue, Dbxcommon::TDBXStreamReader* StreamReader)/* overload */;
	virtual void __fastcall GetStream(Dbxcommon::TDBXStreamValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull)/* overload */;
	
public:
	__fastcall TDBXMemoryRow(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXValueTypeArray Values);
	__fastcall virtual ~TDBXMemoryRow(void);
/* Hoisted overloads: */
	
protected:
	inline void __fastcall  GetWideString(Dbxcommon::TDBXWideStringValue* DbxValue, System::UnicodeString &Value, BOOL &IsNull){ Dbxcommon::TDBXRow::GetWideString(DbxValue, Value, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXWideStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	inline void __fastcall  GetStream(Dbxcommon::TDBXAnsiStringValue* DbxValue, Classes::TStream* &Stream, BOOL &IsNull){ Dbxcommon::TDBXRow::GetStream(DbxValue, Stream, IsNull); }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmemoryrow */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmemoryrow;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmemoryrowHPP
