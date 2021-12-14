// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXJSONCommon.pas' rev: 22.00

#ifndef DbxjsoncommonHPP
#define DbxjsoncommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxjsoncommon
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXJSONTools;
class PASCALIMPLEMENTATION TDBXJSONTools : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static Dbxjson::TJSONArray* __fastcall ValueTypeToJSON(const Dbxcommon::TDBXValueType* DataType);
	static Dbxcommon::TDBXValueType* __fastcall JSONToValueType(const Dbxjson::TJSONArray* JsonArray);
	static Dbxjson::TJSONObject* __fastcall TableToJSON(const Dbxcommon::TDBXReader* Value, const int RowCount, const bool IsLocalConnection);
	static Dbxjson::TJSONValue* __fastcall DBXToJSON(const Dbxcommon::TDBXValue* Value, const int DataType, const bool IsLocalConnection);
	static void __fastcall JSONToDBX(const Dbxjson::TJSONValue* Data, const Dbxcommon::TDBXWritableValue* Value, const int DataType, const bool IsLocalConnection, const bool OwnsJSONValue = false);
	static Dbxjson::TJSONArray* __fastcall StreamToJSON(const Classes::TStream* Stream, const int Offset, const int ByteCount);
	static Classes::TStream* __fastcall JSONToStream(const Dbxjson::TJSONArray* Data);
public:
	/* TObject.Create */ inline __fastcall TDBXJSONTools(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXJSONTools(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxjsoncommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxjsoncommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxjsoncommonHPP
