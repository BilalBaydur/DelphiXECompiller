// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXPlatform.pas' rev: 22.00

#ifndef DbxplatformHPP
#define DbxplatformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <SqlTimSt.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Contnrs.hpp>	// Pascal unit
#include <SyncObjs.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxplatform
{
//-- type declarations -------------------------------------------------------
typedef int TInt32;

typedef System::DynamicArray<System::WideChar> TDBXWideChars;

typedef System::DynamicArray<char> TDBXAnsiChars;

typedef System::DynamicArray<int> TDBXInt32s;

typedef System::DynamicArray<System::WideChar> TDBXDynamicCharArray;

typedef System::DynamicArray<bool> TDBXBooleans;

typedef System::DynamicArray<System::UnicodeString> TDBXStringArray;

typedef System::DynamicArray<System::TObject*> TDBXObjectArray;

typedef Classes::TStringList TDBXStringList;

typedef System::PByte TDBXByteArray;

typedef System::WideChar * TDBXWideString;

typedef char * TDBXAnsiString;

typedef System::WideChar * TDBXString;

typedef System::WideChar * TDBXWideStringVar;

typedef char * TDBXAnsiStringVar;

typedef System::WideChar * TDBXStringVar;

typedef System::WideChar * TDBXWideStringBuilder;

typedef char * TDBXAnsiStringBuilder;

typedef System::WideChar * TDBXStringBuilder;

class DELPHICLASS TDSInvocationMetadata;
class PASCALIMPLEMENTATION TDSInvocationMetadata : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FResponseCode;
	System::UnicodeString FResponseMessage;
	System::UnicodeString FResponseContent;
	System::UnicodeString FResponseContentType;
	bool FCloseSession;
	
public:
	__property int ResponseCode = {read=FResponseCode, write=FResponseCode, nodefault};
	__property System::UnicodeString ResponseMessage = {read=FResponseMessage, write=FResponseMessage};
	__property System::UnicodeString ResponseContent = {read=FResponseContent, write=FResponseContent};
	__property System::UnicodeString ResponseContentType = {read=FResponseContentType, write=FResponseContentType};
	__property bool CloseSession = {read=FCloseSession, write=FCloseSession, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDSInvocationMetadata(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSInvocationMetadata(void) { }
	
};


class DELPHICLASS TDBXInt32Object;
class PASCALIMPLEMENTATION TDBXInt32Object : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXInt32Object(const int Value);
	__fastcall virtual ~TDBXInt32Object(void);
	int __fastcall IntValue(void);
	
private:
	int FValue;
};


class DELPHICLASS TDBXTokenizer;
class PASCALIMPLEMENTATION TDBXTokenizer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FOriginal;
	System::UnicodeString FDelimiters;
	int FNextPos;
	
public:
	__fastcall TDBXTokenizer(const System::UnicodeString Original, const System::UnicodeString Delimiters);
	bool __fastcall HasMoreTokens(void);
	System::UnicodeString __fastcall NextToken(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTokenizer(void) { }
	
};


class DELPHICLASS TBaseTransportFilterCollection;
class PASCALIMPLEMENTATION TBaseTransportFilterCollection : public Classes::TCollection
{
	typedef Classes::TCollection inherited;
	
private:
	Classes::TNotifyEvent FEvent;
	
protected:
	void __fastcall NotifyChange(void);
	
public:
	__fastcall virtual ~TBaseTransportFilterCollection(void);
	HIDESBASE Classes::TCollectionItem* __fastcall GetItem(int Index);
	__property Classes::TNotifyEvent OnChange = {read=FEvent, write=FEvent};
public:
	/* TCollection.Create */ inline __fastcall TBaseTransportFilterCollection(Classes::TCollectionItemClass ItemClass) : Classes::TCollection(ItemClass) { }
	
};


class DELPHICLASS TFactoryObject;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TFactoryObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual TFactoryObject(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFactoryObject(void) { }
	
};


typedef TMetaClass* TObjectClass;

class DELPHICLASS TBaseTransportFactoryTools;
class PASCALIMPLEMENTATION TBaseTransportFactoryTools : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod System::UnicodeString __fastcall InvokeStringFunction(TObjectClass objClass, System::UnicodeString methodName);
public:
	/* TObject.Create */ inline __fastcall TBaseTransportFactoryTools(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseTransportFactoryTools(void) { }
	
};


typedef TFactoryObject TBaseTransportFilter;

class DELPHICLASS TBaseTransportFilterItem;
class PASCALIMPLEMENTATION TBaseTransportFilterItem : public Classes::TCollectionItem
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Classes::TNotifyEvent FEvent;
	
protected:
	void __fastcall NotifyChange(void);
	
public:
	__fastcall virtual TBaseTransportFilterItem(Classes::TCollection* Collection);
	void __fastcall OnChangeNotify(TBaseTransportFilterCollection* filter);
	__property Classes::TNotifyEvent OnChange = {read=FEvent, write=FEvent};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TBaseTransportFilterItem(void) { }
	
};


class DELPHICLASS TBaseFilterProperties;
class PASCALIMPLEMENTATION TBaseFilterProperties : public Classes::TStringList
{
	typedef Classes::TStringList inherited;
	
public:
	HIDESBASE System::UnicodeString __fastcall GetName(int Index);
	HIDESBASE System::UnicodeString __fastcall GetValue(int Index);
	HIDESBASE void __fastcall Add(const System::UnicodeString Name, const System::UnicodeString Value);
public:
	/* TStringList.Create */ inline __fastcall TBaseFilterProperties(void)/* overload */ : Classes::TStringList() { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TBaseFilterProperties(void) { }
	
};


typedef TMetaClass* TTransportFilterClass;

typedef TDBXObjectArray TDBXFreeArray;

class DELPHICLASS TDBXStringBuffer;
class PASCALIMPLEMENTATION TDBXStringBuffer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FBuffer;
	int FCount;
	System::WideChar __fastcall CharAt(const int Idx);
	
public:
	__fastcall TDBXStringBuffer(void)/* overload */;
	__fastcall TDBXStringBuffer(int InitialSize)/* overload */;
	__fastcall TDBXStringBuffer(const System::UnicodeString Value)/* overload */;
	void __fastcall Append(const System::UnicodeString Value)/* overload */;
	void __fastcall Append(const int Value)/* overload */;
	void __fastcall Append(const TDBXStringBuffer* Value)/* overload */;
	__property int Length = {read=FCount, write=FCount, nodefault};
	void __fastcall Replace(const System::UnicodeString Original, const System::UnicodeString Replacement, const int StartIndex, const int Count);
	virtual System::UnicodeString __fastcall ToString(void);
	System::UnicodeString __fastcall Substring(const int Ordinal);
	__property System::WideChar Chars[const int Index] = {read=CharAt};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXStringBuffer(void) { }
	
};


class DELPHICLASS TDBXArrayList;
class PASCALIMPLEMENTATION TDBXArrayList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::TObject* operator[](int Index) { return Values[Index]; }
	
private:
	Contnrs::TObjectList* FList;
	System::TObject* __fastcall GetValue(int Index);
	void __fastcall SetValue(int Index, System::TObject* Value);
	int __fastcall GetCount(void);
	
public:
	__fastcall TDBXArrayList(void);
	__fastcall virtual ~TDBXArrayList(void);
	void __fastcall Clear(void);
	void __fastcall Add(System::TObject* Element);
	void __fastcall RemoveAt(int Index);
	void __fastcall Remove(int Index)/* overload */;
	void __fastcall Remove(System::TObject* Element)/* overload */;
	__property int Count = {read=GetCount, nodefault};
	__property System::TObject* Values[int Index] = {read=GetValue, write=SetValue/*, default*/};
};


class DELPHICLASS TDBXStringStore;
class PASCALIMPLEMENTATION TDBXStringStore : public Classes::TStringList
{
	typedef Classes::TStringList inherited;
	
public:
	System::UnicodeString operator[](const System::UnicodeString Name) { return Strings[Name]; }
	
private:
	System::UnicodeString __fastcall GetString(const System::UnicodeString Name);
	void __fastcall SetString(const System::UnicodeString Name, const System::UnicodeString Value);
	
public:
	bool __fastcall Contains(const System::UnicodeString Name);
	__property System::UnicodeString Strings[const System::UnicodeString Name] = {read=GetString, write=SetString/*, default*/};
public:
	/* TStringList.Create */ inline __fastcall TDBXStringStore(void)/* overload */ : Classes::TStringList() { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TDBXStringStore(void) { }
	
};


typedef Classes::TStringsEnumerator TDBXKeyEnumerator;

class DELPHICLASS TDBXObjectStore;
class PASCALIMPLEMENTATION TDBXObjectStore : public Classes::TStringList
{
	typedef Classes::TStringList inherited;
	
public:
	System::TObject* operator[](const System::UnicodeString Name) { return Objects[Name]; }
	
private:
	System::TObject* __fastcall GetObjectFromName(const System::UnicodeString Name);
	void __fastcall SetObjectByName(const System::UnicodeString Name, const System::TObject* Value);
	
public:
	__fastcall virtual ~TDBXObjectStore(void);
	bool __fastcall ContainsKey(const System::UnicodeString Name);
	__property System::TObject* Objects[const System::UnicodeString Name] = {read=GetObjectFromName, write=SetObjectByName/*, default*/};
	Classes::TStringsEnumerator* __fastcall Keys(void);
public:
	/* TStringList.Create */ inline __fastcall TDBXObjectStore(void)/* overload */ : Classes::TStringList() { }
	
};


class DELPHICLASS TDBXPlatform;
class PASCALIMPLEMENTATION TDBXPlatform : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static System::DynamicArray<System::Byte> __fastcall AnsiStrToBytes(const System::AnsiString Value);
	static System::DynamicArray<System::Byte> __fastcall WideStrToBytes(const System::UnicodeString Value);
	static System::UnicodeString __fastcall BytesToWideStr(const System::DynamicArray<System::Byte> Value);
	static System::AnsiString __fastcall BytesToAnsiStr(const System::DynamicArray<System::Byte> Value);
	static int __fastcall GetStringBuilderLength(const char * Value);
	static char * __fastcall CreateStringBuilder(int Length);
	static System::AnsiString __fastcall ToAnsiString(const char * Value);
	static void __fastcall CopyStringBuilder(const char * Value, System::AnsiString &Dest);
	static void __fastcall FreeAndNilStringBuilder(char * &Value);
	static void __fastcall ResizeStringBuilder(char * &Value, int Size);
	static void __fastcall CopyStringToBuilder(const System::AnsiString Source, int AnsiStringBuilderSize, char * &Value);
	static int __fastcall GetWideStringBuilderLength(const System::WideChar * Value);
	static System::WideChar * __fastcall CreateWideStringBuilder(int Length);
	static System::UnicodeString __fastcall ToWideString(const System::WideChar * Value);
	static void __fastcall CopyWideStringBuilder(const System::WideChar * Value, System::UnicodeString &Dest);
	static void __fastcall ResizeWideStringBuilder(System::WideChar * &Value, int Size);
	static void __fastcall FreeAndNilWideStringBuilder(System::WideChar * &Value);
	static void __fastcall CopyWideStringToBuilder(const System::UnicodeString Source, int WideStringBuilderSize, System::WideChar * &Value);
	static void __fastcall CopyInt32Array(const TDBXInt32s Source, int SourceOffset, const TDBXInt32s Dest, int DestOffset, int Count);
	static void __fastcall CopyCharArray(const TDBXWideChars Source, int SourceOffset, const TDBXWideChars Dest, int DestOffset, int Count);
	static void __fastcall CopyByteArray(const System::DynamicArray<System::Byte> Source, int SourceOffset, const System::DynamicArray<System::Byte> Dest, int DestOffset, int Count);
	static System::UnicodeString __fastcall CreateWideString(const TDBXWideChars Source, int Count);
	static System::AnsiString __fastcall CreateAnsiString(const TDBXAnsiChars Source, int Count);
	__classmethod void __fastcall WriteAsciiBytes(const System::UnicodeString Message, System::DynamicArray<System::Byte> ByteBuffer, int Offset, int Count);
	__classmethod double __fastcall Int64BitsToDouble(const __int64 value);
	__classmethod __int64 __fastcall DoubleToInt64Bits(const double value);
	static float __fastcall Int32BitsToSingle(const int value);
	static int __fastcall SingleToInt32Bits(const float Value);
	static void __fastcall CopyBytesToAnsiChars(const System::DynamicArray<System::Byte> Source, int SourceOffset, const TDBXAnsiChars Dest, int DestOffset, int Count);
	static void __fastcall CopyInt32(const int Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopyInt16(const short Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopyUInt16(const System::Word Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopyInt64(const __int64 Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopyInt8(const System::ShortInt Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopyUInt8(const System::Byte Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopySqlTimeStamp(const Sqltimst::TSQLTimeStamp &Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopySqlTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	static void __fastcall CopyBcd(const Fmtbcd::TBcd &Value, const System::DynamicArray<System::Byte> Dest, const int DestOffset);
	__classmethod void __fastcall Sleep(const __int64 Duration);
	static System::UnicodeString __fastcall GetClassName(System::TObject* ObjectValue);
	static Sysutils::Exception* __fastcall GetNestedException(Sysutils::Exception* Ex);
	__classmethod System::UnicodeString __fastcall GetPublicKeyToken();
	static System::UnicodeString __fastcall JsonFloat(double Value);
	static double __fastcall JsonToFloat(System::UnicodeString DotValue);
	static int __fastcall JsonToInt(System::UnicodeString Value);
	static bool __fastcall IsBoolean(const System::UnicodeString value);
	__classmethod System::UnicodeString __fastcall StringOf(System::DynamicArray<System::Byte> data, const int size);
	
private:
	static void __fastcall UnexpectedStringOverflow(const System::UnicodeString Source, int WideStringBuilderSize)/* overload */;
	static void __fastcall UnexpectedStringOverflow(const System::AnsiString Source, int AnsiStringBuilderSize)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TDBXPlatform(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXPlatform(void) { }
	
};


class DELPHICLASS TDBXSemaphore;
class PASCALIMPLEMENTATION TDBXSemaphore : public Syncobjs::TSemaphore
{
	typedef Syncobjs::TSemaphore inherited;
	
private:
	int FCount;
	
public:
	__fastcall TDBXSemaphore(int Count);
	HIDESBASE bool __fastcall Acquire(__int64 Timeout);
public:
	/* THandleObject.Destroy */ inline __fastcall virtual ~TDBXSemaphore(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define NullString L""
extern PACKAGE TDSInvocationMetadata* __fastcall GetInvocationMetadata(bool CreateIfNil = true);
extern PACKAGE void __fastcall SetInvocationMetadata(TDSInvocationMetadata* MetaData);
extern PACKAGE void __fastcall ClearInvocationMetadata(void);
extern PACKAGE int __fastcall Incr(int &Arg);
extern PACKAGE int __fastcall Decr(int &Arg);
extern PACKAGE int __fastcall IncrAfter(int &Arg);
extern PACKAGE int __fastcall DecrAfter(int &Arg);
extern PACKAGE System::UnicodeString __fastcall C_Conditional(const bool Condition, const System::UnicodeString TruePart, const System::UnicodeString FalsePart);
extern PACKAGE int __fastcall CompareTimeStamp(const Sqltimst::TSQLTimeStamp &ATimeStamp, const Sqltimst::TSQLTimeStamp &BTimeStamp);
extern PACKAGE int __fastcall CompareTimeStampOffset(const Sqltimst::TSQLTimeStampOffset &ATimeStamp, const Sqltimst::TSQLTimeStampOffset &BTimeStamp);
extern PACKAGE bool __fastcall ObjectEquals(const System::TObject* Obj1, const System::TObject* Obj2);
extern PACKAGE void __fastcall FreeObjectArray(TDBXObjectArray &ArrayObject);
extern PACKAGE int __fastcall StringIndexOf(const System::UnicodeString Str, const System::WideChar Ch)/* overload */;
extern PACKAGE int __fastcall StringIndexOf(const System::UnicodeString Str, const System::UnicodeString Part)/* overload */;
extern PACKAGE int __fastcall StringIndexOf(const System::UnicodeString Str, const System::UnicodeString Part, int FromIndex)/* overload */;
extern PACKAGE int __fastcall StringLastIndexOf(const System::UnicodeString Str, const System::UnicodeString Part);
extern PACKAGE bool __fastcall StringStartsWith(const System::UnicodeString Str, const System::UnicodeString Part);
extern PACKAGE bool __fastcall StringEndsWith(const System::UnicodeString Str, const System::UnicodeString Part);
extern PACKAGE bool __fastcall StringIsNil(const System::UnicodeString Str);
extern PACKAGE bool __fastcall IsIdentifierStart(const System::WideChar Ch);
extern PACKAGE bool __fastcall IsIdentifierPart(const System::WideChar Ch);
extern PACKAGE System::UnicodeString __fastcall SubString(TDBXStringBuffer* Buffer, int Index);
extern PACKAGE System::UnicodeString __fastcall FormatMessage(const System::UnicodeString FormatString, const TDBXStringArray Parameters);

}	/* namespace Dbxplatform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxplatform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxplatformHPP
