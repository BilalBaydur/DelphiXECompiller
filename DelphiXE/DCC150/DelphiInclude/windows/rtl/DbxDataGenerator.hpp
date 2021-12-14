// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxDataGenerator.pas' rev: 22.00

#ifndef DbxdatageneratorHPP
#define DbxdatageneratorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCustomDataGenerator.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXMetaDataProvider.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdatagenerator
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDbxDataGenerator;
class PASCALIMPLEMENTATION TDbxDataGenerator : public Dbxcustomdatagenerator::TDBXCustomDataGenerator
{
	typedef Dbxcustomdatagenerator::TDBXCustomDataGenerator inherited;
	
private:
	Db::TParam* FParam;
	bool __fastcall GetIsFractionsSupported(void);
	void __fastcall SetParameter(int Ordinal, int Row, Db::TParam* Param);
	void __fastcall ValidateParam(int Ordinal, int Row, Db::TParam* Param);
	
public:
	__fastcall TDbxDataGenerator(void);
	__fastcall virtual ~TDbxDataGenerator(void);
	static void __fastcall ValidateAnsiString(System::UnicodeString Value1, System::UnicodeString Value2);
	static void __fastcall ValidateWideString(System::UnicodeString Value1, System::UnicodeString Value2);
	static void __fastcall ValidateBoolean(bool Value1, bool Value2);
	static void __fastcall ValidateInt64(__int64 Value1, __int64 Value2);
	static void __fastcall ValidateSingle(float Value1, float Value2);
	static void __fastcall ValidateDouble(double Value1, double Value2);
	static void __fastcall ValidateBcd(const Fmtbcd::TBcd &Value1, const Fmtbcd::TBcd &Value2);
	static void __fastcall ValidateDate(Dbxcommon::TDBXDate Value1, Dbxcommon::TDBXDate Value2);
	static void __fastcall ValidateTime(Dbxcommon::TDBXTime Value1, Dbxcommon::TDBXTime Value2);
	static void __fastcall ValidateTimestamp(const Sqltimst::TSQLTimeStamp &Value1, const Sqltimst::TSQLTimeStamp &Value2);
	static void __fastcall ValidateTimestampOffset(const Sqltimst::TSQLTimeStampOffset &Value1, const Sqltimst::TSQLTimeStampOffset &Value2);
	static void __fastcall ValidateDateTime(System::TDateTime Value1, System::TDateTime Value2);
	static void __fastcall ValidateBytes(System::DynamicArray<System::Byte> Value1, System::DynamicArray<System::Byte> Value2);
	static bool __fastcall BytesEquals(const System::DynamicArray<System::Byte> Value1, const System::DynamicArray<System::Byte> Value2, int Count);
	__classmethod void __fastcall ReadBytesFromStream(Dbxcommon::TDBXValue* Value, System::DynamicArray<System::Byte> &Buffer);
	bool __fastcall ValidateRow(const Dbxcommon::TDBXReader* Reader, int Row)/* overload */;
	bool __fastcall ValidateRow(const Db::TDataSet* DataSet, int Row)/* overload */;
	void __fastcall ValidateParameters(const Dbxcommon::TDBXCommand* Command, int Row);
	void __fastcall ValidateParams(const Db::TParams* Params);
	void __fastcall AddParameters(const Dbxcommon::TDBXCommand* Command)/* overload */;
	void __fastcall AddParameters(const Sqlexpr::TSQLQuery* SQLQuery)/* overload */;
	void __fastcall SetInsertParameters(const Dbxcommon::TDBXCommand* Command, int Row)/* overload */;
	void __fastcall SetInsertParameters(const Sqlexpr::TSQLQuery* SQLQuery, int Row)/* overload */;
	void __fastcall PopulateParams(Db::TParams* Params);
	void __fastcall PopulateDataset(Db::TDataSet* DataSet, int RowCount);
	__property bool IsFractionsSupported = {read=GetIsFractionsSupported, nodefault};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdatagenerator */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdatagenerator;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdatageneratorHPP
