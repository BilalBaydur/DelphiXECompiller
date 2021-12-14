// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXStream.pas' rev: 22.00

#ifndef DbxstreamHPP
#define DbxstreamHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxstream
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXBcdFormat;
class PASCALIMPLEMENTATION TDBXBcdFormat : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt TextReadWrite = 0x0;
	
	static const System::ShortInt BinaryRead = 0x1;
	
	static const System::ShortInt BinaryWrite = 0x2;
	
	static const System::ShortInt BinaryReadWrite = 0x3;
	
public:
	/* TObject.Create */ inline __fastcall TDBXBcdFormat(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXBcdFormat(void) { }
	
};


class DELPHICLASS TDBXBinaryStream;
class PASCALIMPLEMENTATION TDBXBinaryStream : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXBinaryStream(void);
	__fastcall virtual ~TDBXBinaryStream(void);
	void __fastcall Growbuf(const int BytesNeeded);
	int __fastcall Skip(const int Length);
	bool __fastcall ReadBoolean(void);
	System::Byte __fastcall ReadByte(void);
	short __fastcall ReadInt8(void);
	int __fastcall ReadInt32(void);
	short __fastcall ReadInt16(void);
	__int64 __fastcall ReadInt64(void);
	float __fastcall ReadSingle(void);
	__int64 __fastcall ReadDoubleAsInt64(void);
	double __fastcall ReadDouble(void);
	__int64 __fastcall ReadTimestamp(void);
	int __fastcall ReadTimestampNanos(void);
	void __fastcall ReadBigDecimalBuffer(void);
	bool __fastcall BigDecimalFitsInInt64(void);
	
protected:
	void __fastcall SetMinBufferSize(const int Size);
	int __fastcall SkipNullTermString(void);
	void __fastcall SkipField(void);
	__int64 __fastcall GetBigDecimalBufferAsInt64(void);
	int __fastcall GetBigDecimalLength(void);
	bool FTwoByteStringTerminator;
	System::DynamicArray<System::Byte> FBuf;
	// System::TArray__1<System::Byte>  FBuf;
	int FBufLength;
	int FOff;
	int FCurrentOrdinal;
	System::DynamicArray<System::Byte> FBigDecimalBuffer;
	// System::TArray__1<System::Byte>  FBigDecimalBuffer;
	Dbxplatform::TDBXInt32s FBigDecimalLength;
	int FBigDecimalScale;
	int FBigDecimalSignum;
	
private:
	int FNanos;
	int FMinBufSize;
	
public:
	__property int MinBufferSize = {read=FMinBufSize, write=SetMinBufferSize, nodefault};
	__property System::DynamicArray<System::Byte> Buffer = {read=FBuf};
	// __property System::TArray__1<System::Byte>  Buffer = ...;
	__property int BufferOffset = {read=FOff, nodefault};
	__property System::DynamicArray<System::Byte> BigDecimalBuffer = {read=FBigDecimalBuffer};
	// __property System::TArray__1<System::Byte>  BigDecimalBuffer = ...;
	__property __int64 BigDecimalBufferAsInt64 = {read=GetBigDecimalBufferAsInt64};
	__property int BigDecimalLength = {read=GetBigDecimalLength, nodefault};
	__property int BigDecimalSignum = {read=FBigDecimalSignum, nodefault};
	__property int BigDecimalScale = {read=FBigDecimalScale, nodefault};
	__property int CurrentOrdinal = {read=FCurrentOrdinal, nodefault};
};


class DELPHICLASS TDBXCharDecoder;
class PASCALIMPLEMENTATION TDBXCharDecoder : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	void __fastcall InitDecoder(void);
	bool __fastcall GrowDecodeBufTo(const int InNewSize);
	bool __fastcall Decode(const System::DynamicArray<System::Byte> Buf, const int InBufOff, const int MaxBytes);
	void __fastcall AddNullChar(void);
	__fastcall virtual ~TDBXCharDecoder(void);
	
private:
	bool __fastcall DecodeChars(const System::DynamicArray<System::Byte> Buf, const int InBufOff, const int InMaxOff);
	
protected:
	bool FHitChar;
	bool FHasHalfChar;
	System::Byte FHalfChar;
	int FDecodeLength;
	bool FNullTerminated;
	int FDecodeOff;
	Dbxplatform::TDBXWideChars FDecodeBuf;
	bool FAddQuotes;
	
private:
	bool FPreventGrowth;
	
public:
	__property int DecodeOff = {read=FDecodeOff, nodefault};
	__property Dbxplatform::TDBXWideChars DecodeBuf = {read=FDecodeBuf};
	__property bool PreventGrowth = {write=FPreventGrowth, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXCharDecoder(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXColumnFlags;
class PASCALIMPLEMENTATION TDBXColumnFlags : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TDBXColumnFlags(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXColumnFlags(void) { }
	
};


class DELPHICLASS TDBXFieldHeader;
class PASCALIMPLEMENTATION TDBXFieldHeader : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::Byte FNullValue = 0x80;
	
	static const System::Byte FAssignedNull = 0xc0;
	
	static const System::Byte FNullMask = 0xc0;
	
	static const System::Byte FPositive = 0x40;
	
	static const System::Byte FNullTermStringField = 0x0;
	
	static const System::Byte FTinyField = 0x20;
	
	static const System::Byte FBigField = 0x10;
	
	static const System::Byte FJSONField = 0x40;
	
	static const System::Byte FCallbackField = 0x2;
	
	static const System::Byte FBlobHeader = 0x8;
	
	static const System::Byte FBlobRefHeader = 0xc;
	
	static const System::Byte FBlobMask = 0x78;
	
	static const System::ShortInt FTinyHeaderLength = 0x1;
	
	static const System::ShortInt FNullTermLength = 0x4;
	
	static const System::ShortInt FOldNullTermLength = 0x2;
	
	static const System::ShortInt FJSONBlockLength = 0x5;
	
	static const System::ShortInt FNullTermOverHead = 0x5;
	
	static const System::ShortInt FOldNullTermOverHead = 0x3;
	
	static const System::ShortInt FTinyHeaderLengthMask = 0x1f;
	
	static const System::ShortInt FBigHeaderLength = 0x3;
	
	static const System::ShortInt FSmallBlobHeaderLength = 0x5;
	
	static const System::ShortInt FMaxHeaderLength = 0xe;
	
public:
	/* TObject.Create */ inline __fastcall TDBXFieldHeader(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXFieldHeader(void) { }
	
};


class DELPHICLASS TDBXFieldPacker;
class PASCALIMPLEMENTATION TDBXFieldPacker : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static int __fastcall UnpackInt(const System::DynamicArray<System::Byte> Buf, const int InOffset);
	static void __fastcall PackInt(const System::DynamicArray<System::Byte> Buf, const int InOffset, const int IVal);
	static int __fastcall RepackRealForIndex(const System::DynamicArray<System::Byte> SourceBuf, const int InSourceOff, const System::DynamicArray<System::Byte> DestBuf, const int InDestOff, const int Type);
	static __int64 __fastcall UnpackDoubleAsInt64(const System::DynamicArray<System::Byte> Buf, const int InOffset);
	static double __fastcall UnpackDouble(const System::DynamicArray<System::Byte> Buf, const int Offset);
	static int __fastcall PackDouble(const System::DynamicArray<System::Byte> Buf, const int InOffset, const double DValue, const bool ForIndex);
	static float __fastcall UnpackFloat(const System::DynamicArray<System::Byte> Buf, const int InOffset);
	static int __fastcall PackFloat(const System::DynamicArray<System::Byte> Buf, const int InOffset, const float FValue, const bool ForIndex);
	static int __fastcall PackAsciiShort(const System::DynamicArray<System::Byte> Buf, const int InOffset, const int InSVal, const bool Compact);
	static int __fastcall PackAsciiInt(const System::DynamicArray<System::Byte> Buf, const int InOffset, const int InIVal, const bool Compact);
	static int __fastcall PackAsciiLong(const System::DynamicArray<System::Byte> Buf, const int InOffset, const __int64 InLVal, const bool Compact);
	static int __fastcall PackStringHeader(const System::DynamicArray<System::Byte> Buffer, const int InOff, const int Count);
	static short __fastcall UnpackAsciiShort(const System::DynamicArray<System::Byte> Buf, const int InOffset);
	static int __fastcall UnpackAsciiInt(const System::DynamicArray<System::Byte> Buf, const int InOffset);
	static __int64 __fastcall UnpackAsciiLong(const System::DynamicArray<System::Byte> Buf, const int InOffset);
	static int __fastcall GetBlobHeaderLength(const System::DynamicArray<System::Byte> Buffer, const int Off);
	static int __fastcall GetBlobLength(const System::DynamicArray<System::Byte> Buffer, const int Off);
	static int __fastcall PackBigDecimal(const System::DynamicArray<System::Byte> Buf, const int InOffset, const System::DynamicArray<System::Byte> Bytes, const int InScale, const int Signum, const int InMaxWidth, const int Precision, const bool Compact);
	static System::DynamicArray<System::Byte> __fastcall UnpackBigDecimal(const System::DynamicArray<System::Byte> Buf, const int InOffset, const System::DynamicArray<System::Byte> InDest, const Dbxplatform::TDBXInt32s ReturnLength);
	
protected:
	static void __fastcall ComplementIntValue(const System::DynamicArray<System::Byte> Buf);
public:
	/* TObject.Create */ inline __fastcall TDBXFieldPacker(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXFieldPacker(void) { }
	
};


class DELPHICLASS TDBXJSonError;
class PASCALIMPLEMENTATION TDBXJSonError : public Dbxcommon::TDBXError
{
	typedef Dbxcommon::TDBXError inherited;
	
public:
	__fastcall TDBXJSonError(const int ErrorCode, const System::UnicodeString Message, const Sysutils::Exception* Ex);
	
private:
	int FJSonErrorCode;
	
public:
	__property int JSonErrorCode = {read=FJSonErrorCode, nodefault};
	
private:
	static const System::ShortInt FSerialVersionUID = 0x1;
	
public:
	/* Exception.CreateFmt */ inline __fastcall TDBXJSonError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Dbxcommon::TDBXError(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDBXJSonError(int Ident)/* overload */ : Dbxcommon::TDBXError(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDBXJSonError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Dbxcommon::TDBXError(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDBXJSonError(const System::UnicodeString Msg, int AHelpContext) : Dbxcommon::TDBXError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDBXJSonError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Dbxcommon::TDBXError(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDBXJSonError(int Ident, int AHelpContext)/* overload */ : Dbxcommon::TDBXError(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDBXJSonError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Dbxcommon::TDBXError(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDBXJSonError(void) { }
	
};


class DELPHICLASS TDBXJSonErrorCodes;
class PASCALIMPLEMENTATION TDBXJSonErrorCodes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt ServerError = 0x1;
	
	static const System::ShortInt ParseError = 0x2;
	
	static const System::ShortInt BadCall = 0x3;
	
	static const System::ShortInt MemberOutOfSequence = 0x4;
	
	static const System::ShortInt ServiceError = 0x5;
	
	static const System::ShortInt ProcedureNotFound = 0x7;
	
public:
	/* TObject.Create */ inline __fastcall TDBXJSonErrorCodes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXJSonErrorCodes(void) { }
	
};


class DELPHICLASS TDBXJSonStreamReader;
class PASCALIMPLEMENTATION TDBXJSonStreamReader/* [[sealed]] */ : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool __fastcall HasMoreBytes(void);
	int __fastcall Next(void)/* overload */;
	void __fastcall SkipToEndOfObject(void);
	void __fastcall SkipToEndOfArray(void);
	int __fastcall ReadParams(void);
	void __fastcall UnexpectedToken(const int ExpectedToken);
	int __fastcall Next(const int ExpectedToken)/* overload */;
	int __fastcall NextValueSeparator(void);
	int __fastcall ReadIntResultObject(void);
	void __fastcall NextResultObjectStart(void);
	void __fastcall ReadErrorBody(void);
	int __fastcall ReadMethod(void);
	void __fastcall FillBuffer(const System::DynamicArray<System::Byte> Bytes)/* overload */;
	void __fastcall ReadDataBytes(const System::DynamicArray<System::Byte> Buffer, const int InReadOff, const int InCount);
	bool __fastcall ReadBoolean(void);
	int __fastcall ReadInt(void);
	__int64 __fastcall GetBytes(const System::DynamicArray<System::Byte> Buffer, const __int64 Offset, const __int64 Count);
	System::Byte __fastcall ReadByte(void);
	short __fastcall ReadShort(void);
	__int64 __fastcall ReadLong(void);
	float __fastcall ReadFloat(void);
	double __fastcall ReadDouble(void);
	void __fastcall Open(void);
	void __fastcall Close(void);
	System::UnicodeString __fastcall ReadString(void);
	int __fastcall ReadStringCode(void);
	bool __fastcall GetBooleanValue(void);
	__fastcall virtual ~TDBXJSonStreamReader(void);
	
protected:
	int __fastcall NextNumber(void);
	int __fastcall NextString(void)/* overload */;
	__int64 __fastcall GetByteLength(void);
	System::UnicodeString __fastcall GetStringValue(void);
	bool __fastcall IsConnectionLost(void);
	void __fastcall GrowCharBuffer(void);
	void __fastcall GrowByteBuffer(void);
	void __fastcall CreateBuffers(void);
	
private:
	void __fastcall SkipString(void);
	int __fastcall ReadBinaryInt(void);
	void __fastcall NextDataStoreHeader(void);
	void __fastcall UnexpectedByte(const System::Byte UnexpectedByte);
	System::UnicodeString __fastcall TokenToString(const int Token);
	void __fastcall UnexpectedString(const System::UnicodeString ExpectedString);
	int __fastcall NextMethod(void);
	void __fastcall ParseStringCode(void);
	int __fastcall NextColon(void);
	int __fastcall NextVersion(void);
	int __fastcall NextString(const System::UnicodeString ExpectedString, const int Offset, const int Count)/* overload */;
	int __fastcall HexToDecimal(const System::Byte Value);
	int __fastcall NextString(const int StartPosition)/* overload */;
	System::UnicodeString __fastcall BytesToString(const int Count);
	void __fastcall TraceRead(void);
	void __fastcall ReadError(void);
	void __fastcall FillBuffer(void)/* overload */;
	
protected:
	int FToken;
	int FStringCode;
	System::UnicodeString FStringValue;
	__int64 FLongValue;
	double FDoubleValue;
	bool FBooleanValue;
	Dbxplatform::TDBXWideChars FCharBuffer;
	int FCharBufferSize;
	int FCharBufferCount;
	System::DynamicArray<System::Byte> FByteBuffer;
	// System::TArray__1<System::Byte>  FByteBuffer;
	int FByteBufferSize;
	int FByteBufferCount;
	System::DynamicArray<System::Byte> FReadBuffer;
	// System::TArray__1<System::Byte>  FReadBuffer;
	int FReadPosition;
	int FReadLastPosition;
	Dbxtransport::TDbxChannel* FChannel;
	
private:
	Dbxcommon::TDBXContext* FContext;
	int FReadBufferSize;
	
public:
	__property __int64 ByteLength = {read=GetByteLength};
	__property Dbxtransport::TDbxChannel* DbxChannel = {write=FChannel};
	__property int StringCode = {read=FStringCode, nodefault};
	__property int Token = {read=FToken, nodefault};
	__property System::UnicodeString StringValue = {read=GetStringValue};
	__property __int64 LongValue = {read=FLongValue};
	__property double DoubleValue = {read=FDoubleValue};
	__property int ReadBufferSize = {read=FReadBufferSize, write=FReadBufferSize, nodefault};
	__property Dbxcommon::TDBXContext* Context = {read=FContext};
	__property Dbxcommon::TDBXContext* DbxContext = {write=FContext};
	__property bool ConnectionLost = {read=IsConnectionLost, nodefault};
	
private:
	#define TDBXJSonStreamReader_TrueString L"true"
	
	#define TDBXJSonStreamReader_FalseString L"false"
	
	#define TDBXJSonStreamReader_NullString L"null"
	
	#define TDBXJSonStreamReader_MethodString L"\"method\""
	
	#define TDBXJSonStreamReader_ParamsString L"\"params\""
	
	#define TDBXJSonStreamReader_ResultString L"\"result\""
	
	#define TDBXJSonStreamReader_ErrorString L"\"error\""
	
public:
	/* TObject.Create */ inline __fastcall TDBXJSonStreamReader(void) : System::TObject() { }
	
};


class DELPHICLASS TDBXJSonStreamWriter;
class PASCALIMPLEMENTATION TDBXJSonStreamWriter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXJSonStreamWriter(void);
	void __fastcall WriteConnectObjectStart(void);
	void __fastcall WriteHandleObject(const int Handle);
	void __fastcall WriteDisconnectObject(const int ConnectionHandle);
	void __fastcall WriteTxBegin(const int Isolation);
	void __fastcall WriteTxEnd(const bool Commit, const int Txid);
	void __fastcall WriteClientMoreBlobObject(const int CommandHandle, const int RowHandle, const int BlobHandle, const __int64 Row, const int Ordinal, const bool IsOutParameter);
	void __fastcall WriteServerMoreBlobObject(const int CommandHandle, const int RowHandle, const int IblobHandle, const __int64 Row, const int Ordinal);
	void __fastcall WriteCommandCloseObject(const int CommandHandle);
	void __fastcall WriteReaderCloseObject(const int ReaderHandle, const int CommandHandle);
	void __fastcall WriteTableObjectStart(void);
	void __fastcall WriteColumnsObjectStart(void);
	void __fastcall WriteParameterMetadataStart(void);
	void __fastcall WritePrepareStart(const int CommandHandle, const bool Updateable, const System::UnicodeString CommandType, const System::UnicodeString Command);
	void __fastcall WriteExecuteStart(void);
	void __fastcall WriteExecuteFieldsObject(const int CommandHandle, const bool Updateable, const System::UnicodeString CommandType, const System::UnicodeString Command);
	void __fastcall WriteParametersObjectStart(const int Count);
	void __fastcall WriteParameter(const int DataType, const int SubType, const int ParameterDirection, const int Precision, const int Scale, const System::UnicodeString Name, const int ChildPosition, const int Size);
	void __fastcall WriteFieldsObjectStart(void);
	void __fastcall WriteExecute(const int CommandHandle);
	void __fastcall WriteResultVoidObject(void);
	void __fastcall WriteResultObjectStart(void);
	void __fastcall WriteSessionObjectStart(void);
	void __fastcall WriteRowsObjectStart(void);
	void __fastcall WriteDataObjectStart(void);
	void __fastcall WriteDataObject(const System::DynamicArray<System::Byte> Data, const int Count)/* overload */;
	int __fastcall CalcRowBufferSize(void);
	bool __fastcall WriteDataObject(const Dbxcommon::TDBXStreamReader* Reader)/* overload */;
	void __fastcall WriteClientNextObject(const int RowHandle, const __int64 Position, const int CommandHandle);
	void __fastcall WriteServerNextObject(const int RowHandle, const __int64 Position, const int CommandHandle);
	void __fastcall WriteNextResultObject(const int Handle);
	void __fastcall WriteVendorProperty(const System::UnicodeString PropertyName);
	void __fastcall WriteResultEnd(void);
	void __fastcall WriteResultObject(const __int64 Value);
	void __fastcall WriteRpcError(const System::UnicodeString Name, const int ErrorCode, const System::UnicodeString Message, const Dbxplatform::TDBXStringArray NameValuePairs);
	void __fastcall WriteNamedString(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall WriteObjectStart(void);
	void __fastcall WriteObjectEnd(void);
	void __fastcall WriteArrayStart(void);
	void __fastcall WriteArrayEnd(void);
	void __fastcall WriteParamsStart(void);
	void __fastcall WriteValueSeparator(void);
	void __fastcall WriteNameSeparator(void);
	void __fastcall WriteDataBytes(const System::DynamicArray<System::Byte> SourceBytes, const int InSourceOffset, const int InCount);
	void __fastcall WriteString(const System::UnicodeString Chars);
	void __fastcall Flush(void);
	void __fastcall FlushFullBuffer(void);
	void __fastcall WriteInt(const int InData);
	void __fastcall WriteByte(const System::Byte Data);
	void __fastcall WriteSpace(void);
	void __fastcall WriteShort(const short Data);
	void __fastcall WriteLong(const __int64 InData);
	void __fastcall WriteFloat(const float Data);
	void __fastcall WriteDouble(const double Data);
	void __fastcall WriteBoolean(const bool Data);
	void __fastcall WriteNull(void);
	void __fastcall WriteMetadata(const Dbxjson::TJSONObject* Data);
	void __fastcall WriteCallback(const Dbxjson::TJSONValue* Data);
	void __fastcall WriteCallbackResponse(const Dbxjson::TJSONValue* Data);
	void __fastcall WriteSignature(void);
	void __fastcall Open(void);
	void __fastcall Close(void);
	void __fastcall Skip(const int Count);
	__fastcall virtual ~TDBXJSonStreamWriter(void);
	
protected:
	bool __fastcall IsClosed(void);
	bool __fastcall IsConnectionLost(void);
	virtual void __fastcall CreateBuffers(void);
	
private:
	void __fastcall WriteCommandFields(const int CommandHandle, const bool Updateable, const System::UnicodeString CommandType, const System::UnicodeString Command);
	void __fastcall WriteBytes(const System::DynamicArray<System::Byte> Bytes);
	System::UnicodeString __fastcall BytesToString(const int Count);
	void __fastcall TraceWrite(const int Count);
	
public:
	static int ProtocolVersion2;
	static int ProtocolVersion;
	
protected:
	int FWriteBufferSize;
	System::DynamicArray<System::Byte> FWriteBuffer;
	// System::TArray__1<System::Byte>  FWriteBuffer;
	System::DynamicArray<System::Byte> FDecimalBuffer;
	// System::TArray__1<System::Byte>  FDecimalBuffer;
	int FWriteBufferPosition;
	int FWriteCount;
	Dbxtransport::TDbxChannel* FChannel;
	
private:
	static System::DynamicArray<System::Byte> Hex;
	// System::TArray__1<System::Byte>  Hex;
	static System::DynamicArray<System::Byte> MethodStart;
	// System::TArray__1<System::Byte>  MethodStart;
	static System::DynamicArray<System::Byte> ParamsStart;
	// System::TArray__1<System::Byte>  ParamsStart;
	static System::DynamicArray<System::Byte> Connect;
	// System::TArray__1<System::Byte>  Connect;
	static System::DynamicArray<System::Byte> Disconnect;
	// System::TArray__1<System::Byte>  Disconnect;
	static System::DynamicArray<System::Byte> Prepare;
	// System::TArray__1<System::Byte>  Prepare;
	static System::DynamicArray<System::Byte> Parameters;
	// System::TArray__1<System::Byte>  Parameters;
	static System::DynamicArray<System::Byte> ParameterMetadataStart;
	// System::TArray__1<System::Byte>  ParameterMetadataStart;
	static System::DynamicArray<System::Byte> Execute;
	// System::TArray__1<System::Byte>  Execute;
	static System::DynamicArray<System::Byte> CommandClose;
	// System::TArray__1<System::Byte>  CommandClose;
	static System::DynamicArray<System::Byte> ReaderClose;
	// System::TArray__1<System::Byte>  ReaderClose;
	static System::DynamicArray<System::Byte> ResultStart;
	// System::TArray__1<System::Byte>  ResultStart;
	static System::DynamicArray<System::Byte> ErrorStart;
	// System::TArray__1<System::Byte>  ErrorStart;
	static System::DynamicArray<System::Byte> CodeLabel;
	// System::TArray__1<System::Byte>  CodeLabel;
	static System::DynamicArray<System::Byte> MessageLabel;
	// System::TArray__1<System::Byte>  MessageLabel;
	static System::DynamicArray<System::Byte> NullValue;
	// System::TArray__1<System::Byte>  NullValue;
	static System::DynamicArray<System::Byte> TrueValue;
	// System::TArray__1<System::Byte>  TrueValue;
	static System::DynamicArray<System::Byte> FalseValue;
	// System::TArray__1<System::Byte>  FalseValue;
	static System::DynamicArray<System::Byte> ColumnsStart;
	// System::TArray__1<System::Byte>  ColumnsStart;
	static System::DynamicArray<System::Byte> TableStart;
	// System::TArray__1<System::Byte>  TableStart;
	static System::DynamicArray<System::Byte> SessionStart;
	// System::TArray__1<System::Byte>  SessionStart;
	static System::DynamicArray<System::Byte> RowsStart;
	// System::TArray__1<System::Byte>  RowsStart;
	static System::DynamicArray<System::Byte> DataStart;
	// System::TArray__1<System::Byte>  DataStart;
	static System::DynamicArray<System::Byte> Next;
	// System::TArray__1<System::Byte>  Next;
	static System::DynamicArray<System::Byte> NextStart;
	// System::TArray__1<System::Byte>  NextStart;
	static System::DynamicArray<System::Byte> HandleStart;
	// System::TArray__1<System::Byte>  HandleStart;
	static System::DynamicArray<System::Byte> FieldsStart;
	// System::TArray__1<System::Byte>  FieldsStart;
	static System::DynamicArray<System::Byte> Txbegin;
	// System::TArray__1<System::Byte>  Txbegin;
	static System::DynamicArray<System::Byte> Txend;
	// System::TArray__1<System::Byte>  Txend;
	static System::DynamicArray<System::Byte> MoreBlob;
	// System::TArray__1<System::Byte>  MoreBlob;
	static System::DynamicArray<System::Byte> MoreBlobStart;
	// System::TArray__1<System::Byte>  MoreBlobStart;
	static System::DynamicArray<System::Byte> NextResult;
	// System::TArray__1<System::Byte>  NextResult;
	static System::DynamicArray<System::Byte> VendorProperty;
	// System::TArray__1<System::Byte>  VendorProperty;
	static System::DynamicArray<System::Byte> CallbackStart;
	// System::TArray__1<System::Byte>  CallbackStart;
	static System::DynamicArray<System::Byte> MetadataStart;
	// System::TArray__1<System::Byte>  MetadataStart;
	
public:
	__property bool Closed = {read=IsClosed, nodefault};
	__property Dbxtransport::TDbxChannel* DbxChannel = {write=FChannel};
	__property int WriteBufferSize = {read=FWriteBufferSize, write=FWriteBufferSize, nodefault};
	__property System::DynamicArray<System::Byte> Buffer = {read=FWriteBuffer};
	// __property System::TArray__1<System::Byte>  Buffer = ...;
	__property int BufferPosition = {read=FWriteBufferPosition, nodefault};
	__property bool ConnectionLost = {read=IsConnectionLost, nodefault};
};


class DELPHICLASS TDBXRowBlobStreamReader;
class PASCALIMPLEMENTATION TDBXRowBlobStreamReader : public Dbxcommon::TDBXStreamReader
{
	typedef Dbxcommon::TDBXStreamReader inherited;
	
public:
	void __fastcall Init(const bool IsBlobHeader, const __int64 Size, const int BufferSize);
	void __fastcall Store(const System::DynamicArray<System::Byte> InBuffer, const int InOffset, const int Count)/* overload */;
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buf, const int InOffset, const int InSize);
	virtual bool __fastcall Eos(void);
	virtual __int64 __fastcall Size(void);
	virtual void __fastcall Close(void);
	__fastcall virtual ~TDBXRowBlobStreamReader(void);
	
private:
	void __fastcall InitBufferTo(const int BufferSize);
	void __fastcall Store(const int Count)/* overload */;
	TDBXJSonStreamReader* FDbxStreamReader;
	TDBXJSonStreamWriter* FDbxStreamWriter;
	Dbxplatform::TDBXInt32s FCommandHandle;
	int FRowHandle;
	int FBlobHandle;
	int FOrdinal;
	__int64 FRow;
	bool FClient;
	bool FParameterBuffer;
	System::DynamicArray<System::Byte> FBuffer;
	// System::TArray__1<System::Byte>  FBuffer;
	int FBufferBytes;
	int FBufferOffset;
	bool FHasMoreData;
	bool FEos;
	__int64 FKnownSize;
	
public:
	__property System::DynamicArray<System::Byte> Buffer = {read=FBuffer};
	// __property System::TArray__1<System::Byte>  Buffer = ...;
	__property TDBXJSonStreamReader* StreamReader = {write=FDbxStreamReader};
	__property TDBXJSonStreamWriter* StreamWriter = {write=FDbxStreamWriter};
	__property int BlobHandle = {write=FBlobHandle, nodefault};
	__property int Ordinal = {write=FOrdinal, nodefault};
	__property __int64 Row = {write=FRow};
	__property bool Client = {write=FClient, nodefault};
	__property bool ParameterBuffer = {read=FParameterBuffer, write=FParameterBuffer, nodefault};
	__property Dbxplatform::TDBXInt32s CommandHandle = {read=FCommandHandle, write=FCommandHandle};
	
protected:
	__property int RowHandle = {read=FRowHandle, write=FRowHandle, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXRowBlobStreamReader(void) : Dbxcommon::TDBXStreamReader() { }
	
};


class DELPHICLASS TDBXRowBuffer;
class DELPHICLASS TDBXStringEncoder;
class DELPHICLASS TDBXStringDecoder;
class PASCALIMPLEMENTATION TDBXRowBuffer : public TDBXBinaryStream
{
	typedef TDBXBinaryStream inherited;
	
public:
	__fastcall TDBXRowBuffer(void);
	__fastcall virtual ~TDBXRowBuffer(void);
	bool __fastcall NextRow(void);
	bool __fastcall GoToRow(const int Row);
	void __fastcall GoToField(const int Ordinal);
	int __fastcall ReadParameterBlobSize(void);
	int __fastcall ReadReaderBlobSize(void);
	void __fastcall ReadBytes(const System::DynamicArray<System::Byte> DestBuf, const int DestOff, const int Count);
	bool __fastcall ReadNull(void);
	void __fastcall ReadCallback(void);
	int __fastcall ReadEncodedStringLength(void);
	int __fastcall ReadChars(const int RowHandle, const Dbxplatform::TDBXWideChars CharBuf, const int MaxChars);
	int __fastcall ReadInlineAnsiChars(const int RowHandle, const System::DynamicArray<System::Byte> ByteBuf, const int MaxChars);
	System::UnicodeString __fastcall ReadString(const int RowHandle);
	int __fastcall ReadStringBytes(const int RowHandle, const System::DynamicArray<System::Byte> ByteBuf, const int Offset)/* overload */;
	int __fastcall ReadAnsiStringBytes(const int RowHandle, const System::DynamicArray<System::Byte> ByteBuf, const int Offset);
	System::DynamicArray<System::Byte> __fastcall ReadStringBytes(const int RowHandle)/* overload */;
	void __fastcall WriteBoolean(const bool Data);
	void __fastcall WriteByte(const System::Byte Data);
	void __fastcall WriteShort(const short Data);
	void __fastcall WriteInt32(const int Data);
	void __fastcall WriteNull(void);
	void __fastcall WriteCallback(void);
	int __fastcall WriteBytes(const Dbxcommon::TDBXStreamReader* Reader);
	int __fastcall PrepareJSONByteBlock(const int EstimatedSize);
	void __fastcall EncodeJSONByteBlockSize(const int Size);
	int __fastcall DecodeJSONByteBlockSize(void);
	int __fastcall JsonByteBlockOffset(void);
	void __fastcall WriteInt64(const __int64 Data);
	void __fastcall WriteDouble(const double Data);
	void __fastcall WriteSingle(const float Data);
	void __fastcall WriteTimestamp(const __int64 TimeValue, const int Nanos);
	bool __fastcall WriteString(const System::UnicodeString Data);
	void __fastcall Post(void);
	void __fastcall Cancel(void);
	void __fastcall ReadDataBytes(void);
	Dbxcommon::TDBXStreamReader* __fastcall ReadBlobStreamReader(const int RowHandle);
	
protected:
	void __fastcall SetPreventDecoderGrowth(const bool PreventGrowth);
	virtual void __fastcall MakePositionValid(void);
	bool __fastcall IsNull(void);
	bool __fastcall IsCallback(void);
	bool __fastcall IsLastParameterBlobSegment(void);
	bool __fastcall IsBlobHeader(void);
	int __fastcall GetEncodedStringLength(void);
	int __fastcall GetStringBytesLength(void);
	System::DynamicArray<System::Byte> __fastcall GetOverflowStringBytes(void);
	void __fastcall SetReadSize(const int Size);
	virtual void __fastcall SetDbxStreamReader(const TDBXJSonStreamReader* DbxStreamReader);
	virtual void __fastcall SetDbxStreamWriter(const TDBXJSonStreamWriter* DbxStreamWriter);
	
private:
	void __fastcall GrowRowOffsets(void);
	int __fastcall AvailableInline(void);
	void __fastcall InitRowBlobStreamReader(const TDBXRowBlobStreamReader* Reader, const int RowHandle);
	TDBXRowBlobStreamReader* __fastcall GetRowBlobStreamReader(const int RowHandle);
	TDBXRowBlobStreamReader* FBlobStreamReader;
	bool FClient;
	Dbxplatform::TDBXInt32s FCommandHandle;
	int FBlobId;
	TDBXJSonStreamReader* FDbxStreamReader;
	TDBXJSonStreamWriter* FDbxStreamWriter;
	System::DynamicArray<System::Byte> FBlobStringBuffer;
	// System::TArray__1<System::Byte>  FBlobStringBuffer;
	TDBXStringEncoder* FEncoder;
	TDBXStringDecoder* FDecoder;
	Dbxcommon::TDBXContext* FDbxContext;
	__int64 FCurrentTotalRow;
	int FCurrentRow;
	int FColumnCount;
	int FRowCount;
	Dbxplatform::TDBXInt32s FRowOffsets;
	int FReadSize;
	int FMaxInline;
	bool FParameterBuffer;
	int FLastInlinByteCount;
	bool FHeaderConsumed;
	int FLastHeaderOffset;
	int FLastOrdinal;
	
public:
	__property bool PreventDecoderGrowth = {write=SetPreventDecoderGrowth, nodefault};
	__property bool Null = {read=IsNull, nodefault};
	__property bool Callback = {read=IsCallback, nodefault};
	__property bool LastParameterBlobSegment = {read=IsLastParameterBlobSegment, nodefault};
	__property bool BlobHeader = {read=IsBlobHeader, nodefault};
	__property int EncodedStringLength = {read=GetEncodedStringLength, nodefault};
	__property int StringBytesLength = {read=GetStringBytesLength, nodefault};
	__property System::DynamicArray<System::Byte> BcdBuffer = {read=FBigDecimalBuffer};
	// __property System::TArray__1<System::Byte>  BcdBuffer = ...;
	__property System::DynamicArray<System::Byte> OverflowStringBytes = {read=GetOverflowStringBytes};
	// __property System::TArray__1<System::Byte>  OverflowStringBytes = ...;
	__property System::DynamicArray<System::Byte> buf = {read=FBuf};
	// __property System::TArray__1<System::Byte>  buf = ...;
	__property int offset = {read=FOff, nodefault};
	__property int ReadSize = {read=FReadSize, write=SetReadSize, nodefault};
	__property int ColumnCount = {write=FColumnCount, nodefault};
	__property bool Client = {read=FClient, write=FClient, nodefault};
	__property TDBXJSonStreamReader* DbxStreamReader = {write=SetDbxStreamReader};
	__property TDBXJSonStreamWriter* DbxStreamWriter = {write=SetDbxStreamWriter};
	__property TDBXStringEncoder* Encoder = {read=FEncoder};
	__property int MaxInline = {read=FMaxInline, nodefault};
	__property TDBXStringDecoder* Decoder = {read=FDecoder};
	__property bool ParameterBuffer = {read=FParameterBuffer, write=FParameterBuffer, nodefault};
	__property Dbxplatform::TDBXInt32s CommandHandle = {read=FCommandHandle, write=FCommandHandle};
};


class DELPHICLASS TDBXStringCodes;
class PASCALIMPLEMENTATION TDBXStringCodes : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt Unknown = 0x1;
	
	static const System::ShortInt Result = 0x2;
	
	static const System::ShortInt Error = 0x3;
	
	static const System::ShortInt Connect = 0x4;
	
	static const System::ShortInt Disconnect = 0x5;
	
	static const System::ShortInt Prepare = 0x7;
	
	static const System::ShortInt Execute = 0x8;
	
	static const System::ShortInt CommandClose = 0x9;
	
	static const System::ShortInt ReaderClose = 0xa;
	
	static const System::ShortInt Rows = 0xb;
	
	static const System::ShortInt Table = 0xc;
	
	static const System::ShortInt Columns = 0xd;
	
	static const System::ShortInt Session = 0xe;
	
	static const System::ShortInt Data = 0xf;
	
	static const System::ShortInt Next = 0x10;
	
	static const System::ShortInt Handle = 0x11;
	
	static const System::ShortInt Fields = 0x12;
	
	static const System::ShortInt Parameters = 0x13;
	
	static const System::ShortInt Txbegin = 0x14;
	
	static const System::ShortInt Txend = 0x15;
	
	static const System::ShortInt MoreBlob = 0x16;
	
	static const System::ShortInt NextResult = 0x17;
	
	static const System::ShortInt VendorProperty = 0x18;
	
	static const System::ShortInt Callback = 0x19;
	
	static const System::ShortInt Metadata = 0x1a;
	
public:
	/* TObject.Create */ inline __fastcall TDBXStringCodes(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXStringCodes(void) { }
	
};


class PASCALIMPLEMENTATION TDBXStringDecoder : public TDBXCharDecoder
{
	typedef TDBXCharDecoder inherited;
	
public:
	void __fastcall InitWideCharsDecoder(const Dbxplatform::TDBXWideChars OutBuf);
	void __fastcall InitByteDecoder(void)/* overload */;
	void __fastcall InitByteDecoder(const int ExpectedSize)/* overload */;
	bool __fastcall DecodeToWideBytes(const System::DynamicArray<System::Byte> InBuf, const int InOff, const System::DynamicArray<System::Byte> OutBuf, const int MaxBytes);
	bool __fastcall DecodeBytes(const System::DynamicArray<System::Byte> InBuf, const int InOff, const int MaxBytes);
	System::DynamicArray<System::Byte> __fastcall ExtractDecodeByteBuffer(void);
	__fastcall virtual ~TDBXStringDecoder(void);
	
private:
	void __fastcall GrowDecodeByteBuf(void);
	bool __fastcall DecodeCharsToBytes(const System::DynamicArray<System::Byte> InBuf, const int InOff, const System::DynamicArray<System::Byte> DecodeByteBuf, const int InOutOff, const int InMaxOff);
	int FMaxOff;
	System::DynamicArray<System::Byte> FDecodeByteBuf;
	// System::TArray__1<System::Byte>  FDecodeByteBuf;
	int FDecodeByteOff;
	int FDecodeByteLength;
	
public:
	__property int DecodeLength = {read=FDecodeLength, nodefault};
	__property int DecodeByteOff = {read=FDecodeByteOff, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXStringDecoder(void) : TDBXCharDecoder() { }
	
};


class PASCALIMPLEMENTATION TDBXStringEncoder : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXStringEncoder(void);
	System::DynamicArray<System::Byte> __fastcall ExtractEncodeBuffer(void);
	bool __fastcall Encode(const System::UnicodeString Source, const System::DynamicArray<System::Byte> InDest, const int DestOff, const int InMaxBytes, const bool NullTerm);
	__fastcall virtual ~TDBXStringEncoder(void);
	
private:
	void __fastcall GrowEncodeBufTo(const System::DynamicArray<System::Byte> OldBuf, const int NewLength);
	
protected:
	int FEncodeLength;
	System::DynamicArray<System::Byte> FEncodeBuf;
	// System::TArray__1<System::Byte>  FEncodeBuf;
	int FEncodeOff;
	int FReadOff;
	
public:
	__property System::DynamicArray<System::Byte> EncodeBuf = {read=FEncodeBuf};
	// __property System::TArray__1<System::Byte>  EncodeBuf = ...;
	__property int EncodeOff = {read=FEncodeOff, nodefault};
};


class DELPHICLASS TDBXTokens;
class PASCALIMPLEMENTATION TDBXTokens : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::ShortInt ErrorToken = 0x1;
	
	static const System::ShortInt ObjectStartToken = 0x2;
	
	static const System::ShortInt ObjectEndToken = 0x3;
	
	static const System::ShortInt ArrayStartToken = 0x4;
	
	static const System::ShortInt ArrayEndToken = 0x5;
	
	static const System::ShortInt TrueToken = 0x6;
	
	static const System::ShortInt FalseToken = 0x7;
	
	static const System::ShortInt NullToken = 0x8;
	
	static const System::ShortInt NumberStartToken = 0x9;
	
	static const System::ShortInt NumberEndToken = 0x9;
	
	static const System::ShortInt StringStartToken = 0xa;
	
	static const System::ShortInt StringEndToken = 0xb;
	
	static const System::ShortInt NameSeparatorToken = 0xc;
	
	static const System::ShortInt ValueSeparatorToken = 0xd;
	
public:
	/* TObject.Create */ inline __fastcall TDBXTokens(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTokens(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxstream */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxstream;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxstreamHPP
