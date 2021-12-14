// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXJSON.pas' rev: 22.00

#ifndef DbxjsonHPP
#define DbxjsonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxjson
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXCallback;
class DELPHICLASS TJSONValue;
class PASCALIMPLEMENTATION TDBXCallback : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual TJSONValue* __fastcall Execute(const TJSONValue* Arg) = 0 /* overload */;
	virtual System::TObject* __fastcall Execute(System::TObject* Arg) = 0 /* overload */;
	virtual int __fastcall AddRef(void);
	virtual int __fastcall Release(void);
	
protected:
	virtual void __fastcall SetConnectionHandler(const System::TObject* ConnectionHandler);
	virtual void __fastcall SetDsServer(const System::TObject* DsServer);
	virtual void __fastcall SetOrdinal(const int Ordinal);
	virtual bool __fastcall IsConnectionLost(void);
	
private:
	int FFRefCount;
	
public:
	__property System::TObject* ConnectionHandler = {write=SetConnectionHandler};
	__property System::TObject* DsServer = {write=SetDsServer};
	__property int Ordinal = {write=SetOrdinal, nodefault};
	__property bool ConnectionLost = {read=IsConnectionLost, nodefault};
	static const System::ShortInt ArgJson = 0x1;
	
	static const System::ShortInt ArgObject = 0x2;
	
public:
	/* TObject.Create */ inline __fastcall TDBXCallback(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCallback(void) { }
	
};


class DELPHICLASS TDBXCallbackDelegate;
class PASCALIMPLEMENTATION TDBXCallbackDelegate : public TDBXCallback
{
	typedef TDBXCallback inherited;
	
public:
	__fastcall virtual ~TDBXCallbackDelegate(void);
	virtual TJSONValue* __fastcall Execute(const TJSONValue* Arg)/* overload */;
	virtual System::TObject* __fastcall Execute(System::TObject* Arg)/* overload */;
	
protected:
	virtual void __fastcall SetDelegate(const TDBXCallback* Callback);
	virtual TDBXCallback* __fastcall GetDelegate(void);
	virtual void __fastcall SetConnectionHandler(const System::TObject* ConnectionHandler);
	virtual void __fastcall SetOrdinal(const int Ordinal);
	virtual void __fastcall SetDsServer(const System::TObject* DsServer);
	virtual bool __fastcall IsConnectionLost(void);
	
private:
	TDBXCallback* FDelegate;
	System::TObject* FConnectionHandler;
	System::TObject* FDsServer;
	int FOrdinal;
	
public:
	__property TDBXCallback* Delegate = {read=GetDelegate, write=SetDelegate};
public:
	/* TObject.Create */ inline __fastcall TDBXCallbackDelegate(void) : TDBXCallback() { }
	
};


class DELPHICLASS TDBXNamedCallback;
class PASCALIMPLEMENTATION TDBXNamedCallback : public TDBXCallback
{
	typedef TDBXCallback inherited;
	
public:
	__fastcall TDBXNamedCallback(const System::UnicodeString Name);
	
protected:
	virtual System::UnicodeString __fastcall GetName(void);
	System::UnicodeString FName;
	
public:
	__property System::UnicodeString Name = {read=GetName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXNamedCallback(void) { }
	
};


class DELPHICLASS TJSONAncestor;
class PASCALIMPLEMENTATION TJSONAncestor : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TJSONAncestor(void);
	virtual System::UnicodeString __fastcall Value(void);
	virtual int __fastcall EstimatedByteSize(void) = 0 ;
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Offset) = 0 ;
	virtual TJSONAncestor* __fastcall Clone(void) = 0 ;
	virtual bool __fastcall GetOwned(void);
	
protected:
	virtual bool __fastcall IsNull(void);
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendent) = 0 ;
	virtual void __fastcall SetOwned(const bool Own);
	
private:
	bool FOwned;
	
public:
	__property bool Null = {read=IsNull, nodefault};
	__property bool Owned = {write=SetOwned, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONAncestor(void) { }
	
};


class DELPHICLASS TJSONByteReader;
class PASCALIMPLEMENTATION TJSONByteReader : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TJSONByteReader(const System::DynamicArray<System::Byte> Data, const int Offset, const int Range)/* overload */;
	__fastcall TJSONByteReader(const System::DynamicArray<System::Byte> Data, const int Offset, const int Range, const bool IsUTF8)/* overload */;
	virtual System::Byte __fastcall ConsumeByte(void);
	virtual System::Byte __fastcall PeekByte(void);
	virtual bool __fastcall Empty(void);
	virtual bool __fastcall HasMore(const int Size);
	
protected:
	virtual int __fastcall GetOffset(void);
	
private:
	void __fastcall ConsumeBOM(void);
	void __fastcall MoveOffset(void);
	System::DynamicArray<System::Byte> FData;
	// System::TArray__1<System::Byte>  FData;
	int FOffset;
	int FRange;
	bool FIsUTF8;
	System::DynamicArray<System::Byte> FUtf8data;
	// System::TArray__1<System::Byte>  FUtf8data;
	int FUtf8offset;
	int FUtf8length;
	
public:
	__property int Offset = {read=GetOffset, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONByteReader(void) { }
	
};


class DELPHICLASS TJSONException;
class PASCALIMPLEMENTATION TJSONException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	__fastcall TJSONException(const System::UnicodeString ErrorMessage);
	
private:
	static const __int64 FSerialVersionUID = 0x1b450a0d4d4c5367LL;
	
public:
	/* Exception.CreateFmt */ inline __fastcall TJSONException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TJSONException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TJSONException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TJSONException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TJSONException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TJSONException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TJSONException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TJSONException(void) { }
	
};


class DELPHICLASS TJSONPair;
class DELPHICLASS TJSONString;
class PASCALIMPLEMENTATION TJSONPair/* [[sealed]] */ : public TJSONAncestor
{
	typedef TJSONAncestor inherited;
	
public:
	__fastcall TJSONPair(void)/* overload */;
	__fastcall TJSONPair(const TJSONString* Str, const TJSONValue* Value)/* overload */;
	__fastcall TJSONPair(const System::UnicodeString Str, const TJSONValue* Value)/* overload */;
	__fastcall TJSONPair(const System::UnicodeString Str, const System::UnicodeString Value)/* overload */;
	__fastcall virtual ~TJSONPair(void);
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Offset);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
	void __fastcall SetJsonString(const TJSONString* Descendant);
	void __fastcall SetJsonValue(const TJSONValue* Val);
	TJSONString* __fastcall GetJsonString(void);
	TJSONValue* __fastcall GetJsonValue(void);
	
private:
	TJSONString* FJsonString;
	TJSONValue* FJsonValue;
	
public:
	__property TJSONString* JsonString = {read=GetJsonString, write=SetJsonString};
	__property TJSONValue* JsonValue = {read=GetJsonValue, write=SetJsonValue};
};


class PASCALIMPLEMENTATION TJSONValue : public TJSONAncestor
{
	typedef TJSONAncestor inherited;
	
public:
	/* TJSONAncestor.Create */ inline __fastcall TJSONValue(void) : TJSONAncestor() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONValue(void) { }
	
};


class DELPHICLASS TJSONTrue;
class PASCALIMPLEMENTATION TJSONTrue/* [[sealed]] */ : public TJSONValue
{
	typedef TJSONValue inherited;
	
public:
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Offset);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
public:
	/* TJSONAncestor.Create */ inline __fastcall TJSONTrue(void) : TJSONValue() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONTrue(void) { }
	
};


class PASCALIMPLEMENTATION TJSONString : public TJSONValue
{
	typedef TJSONValue inherited;
	
public:
	static System::Byte __fastcall Hex(const int Digit);
	__fastcall TJSONString(void)/* overload */;
	__fastcall TJSONString(const System::UnicodeString Value)/* overload */;
	__fastcall virtual ~TJSONString(void);
	virtual void __fastcall AddChar(const System::WideChar Ch);
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Idx);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual System::UnicodeString __fastcall Value(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
	virtual bool __fastcall IsNull(void);
	Dbxplatform::TDBXStringBuffer* FStrBuffer;
};


class DELPHICLASS TJSONNumber;
class PASCALIMPLEMENTATION TJSONNumber/* [[sealed]] */ : public TJSONString
{
	typedef TJSONString inherited;
	
public:
	__fastcall TJSONNumber(void)/* overload */;
	__fastcall TJSONNumber(const double Value)/* overload */;
	__fastcall TJSONNumber(const int Value)/* overload */;
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Idx);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual System::UnicodeString __fastcall Value(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	__fastcall TJSONNumber(const System::UnicodeString Value)/* overload */;
	double __fastcall GetAsDouble(void);
	int __fastcall GetAsInt(void);
	
public:
	__property double AsDouble = {read=GetAsDouble};
	__property int AsInt = {read=GetAsInt, nodefault};
public:
	/* TJSONString.Destroy */ inline __fastcall virtual ~TJSONNumber(void) { }
	
};


class DELPHICLASS TJSONObject;
class PASCALIMPLEMENTATION TJSONObject/* [[sealed]] */ : public TJSONValue
{
	typedef TJSONValue inherited;
	
public:
	static int __fastcall HexToDecimal(const System::Byte Value);
	static TJSONValue* __fastcall ParseJSONValue(const System::DynamicArray<System::Byte> Data, const int Offset, bool IsUTF8 = true)/* overload */;
	static TJSONValue* __fastcall ParseJSONValue(const System::DynamicArray<System::Byte> Data, const int Offset, const int Count, bool IsUTF8 = true)/* overload */;
	static TJSONValue* __fastcall ParseJSONValue(const System::UnicodeString Data)/* overload */;
	static TJSONValue* __fastcall ParseJSONValue(const System::UTF8String Data)/* overload */;
	static TJSONValue* __fastcall ParseJSONValueUTF8(const System::DynamicArray<System::Byte> Data, const int Offset, const int Count)/* overload */;
	static TJSONValue* __fastcall ParseJSONValueUTF8(const System::DynamicArray<System::Byte> Data, const int Offset)/* overload */;
	__fastcall TJSONObject(void)/* overload */;
	__fastcall TJSONObject(const TJSONPair* Pair)/* overload */;
	int __fastcall Size(void);
	TJSONPair* __fastcall Get(const int I)/* overload */;
	TJSONPair* __fastcall Get(const System::UnicodeString PairName)/* overload */;
	__fastcall virtual ~TJSONObject(void);
	TJSONObject* __fastcall AddPair(const TJSONPair* Pair)/* overload */;
	TJSONObject* __fastcall AddPair(const TJSONString* Str, const TJSONValue* Val)/* overload */;
	TJSONObject* __fastcall AddPair(const System::UnicodeString Str, const TJSONValue* Val)/* overload */;
	TJSONObject* __fastcall AddPair(const System::UnicodeString Str, const System::UnicodeString Val)/* overload */;
	TJSONPair* __fastcall RemovePair(const System::UnicodeString PairName);
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Idx);
	virtual TJSONAncestor* __fastcall Clone(void);
	int __fastcall Parse(const System::DynamicArray<System::Byte> Data, const int Pos)/* overload */;
	int __fastcall Parse(const System::DynamicArray<System::Byte> Data, const int Pos, const int Count)/* overload */;
	void __fastcall SetMemberList(Dbxplatform::TDBXArrayList* AList);
	virtual System::UnicodeString __fastcall ToString(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
	
private:
	int __fastcall Parse(const TJSONByteReader* Br)/* overload */;
	static void __fastcall ConsumeWhitespaces(const TJSONByteReader* Br);
	static int __fastcall ParseObject(const TJSONByteReader* Br, const TJSONAncestor* Parent);
	static int __fastcall ParsePair(const TJSONByteReader* Br, const TJSONObject* Parent);
	static int __fastcall ParseArray(const TJSONByteReader* Br, const TJSONAncestor* Parent);
	static int __fastcall ParseValue(const TJSONByteReader* Br, const TJSONAncestor* Parent);
	static int __fastcall ParseNumber(const TJSONByteReader* Br, const TJSONAncestor* Parent);
	static int __fastcall ParseString(const TJSONByteReader* Br, const TJSONAncestor* Parent);
	Dbxplatform::TDBXArrayList* FMembers;
};


class DELPHICLASS TJSONNull;
class PASCALIMPLEMENTATION TJSONNull/* [[sealed]] */ : public TJSONValue
{
	typedef TJSONValue inherited;
	
public:
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Offset);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
	virtual bool __fastcall IsNull(void);
public:
	/* TJSONAncestor.Create */ inline __fastcall TJSONNull(void) : TJSONValue() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONNull(void) { }
	
};


class DELPHICLASS TJSONFalse;
class PASCALIMPLEMENTATION TJSONFalse/* [[sealed]] */ : public TJSONValue
{
	typedef TJSONValue inherited;
	
public:
	virtual int __fastcall EstimatedByteSize(void);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Offset);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
public:
	/* TJSONAncestor.Create */ inline __fastcall TJSONFalse(void) : TJSONValue() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TJSONFalse(void) { }
	
};


class DELPHICLASS TJSONArray;
class PASCALIMPLEMENTATION TJSONArray/* [[sealed]] */ : public TJSONValue
{
	typedef TJSONValue inherited;
	
public:
	__fastcall TJSONArray(void)/* overload */;
	__fastcall TJSONArray(const TJSONValue* FirstElem)/* overload */;
	__fastcall TJSONArray(const TJSONValue* FirstElem, const TJSONValue* SecondElem)/* overload */;
	__fastcall TJSONArray(const System::UnicodeString FirstElem, const System::UnicodeString SecondElem)/* overload */;
	__fastcall virtual ~TJSONArray(void);
	int __fastcall Size(void);
	TJSONValue* __fastcall Get(const int Index);
	void __fastcall AddElement(const TJSONValue* Element);
	TJSONArray* __fastcall Add(const System::UnicodeString Element)/* overload */;
	TJSONArray* __fastcall Add(const int Element)/* overload */;
	TJSONArray* __fastcall Add(const double Element)/* overload */;
	TJSONArray* __fastcall Add(const bool Element)/* overload */;
	TJSONArray* __fastcall Add(const TJSONObject* Element)/* overload */;
	TJSONArray* __fastcall Add(const TJSONArray* Element)/* overload */;
	virtual int __fastcall EstimatedByteSize(void);
	void __fastcall SetElements(Dbxplatform::TDBXArrayList* AList);
	virtual int __fastcall ToBytes(const System::DynamicArray<System::Byte> Data, const int Pos);
	virtual System::UnicodeString __fastcall ToString(void);
	virtual TJSONAncestor* __fastcall Clone(void);
	
protected:
	virtual void __fastcall AddDescendant(const TJSONAncestor* Descendant);
	TJSONValue* __fastcall Pop(void);
	
private:
	Dbxplatform::TDBXArrayList* FElements;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxjson */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxjson;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxjsonHPP
