// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXClient.pas' rev: 22.00

#ifndef DbxclientHPP
#define DbxclientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <DBXStreamer.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMessageHandlerJSonClient.hpp>	// Pascal unit
#include <DBXStream.hpp>	// Pascal unit
#include <DBXStreamPlatform.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXJSONReflect.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <ClassRegistry.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxclient
{
//-- type declarations -------------------------------------------------------
typedef TMetaClass* TDBXClientDriverLoaderClass;

class DELPHICLASS TDBXClientDriverLoader;
class PASCALIMPLEMENTATION TDBXClientDriverLoader : public Dbxcommon::TDBXDriverLoader
{
	typedef Dbxcommon::TDBXDriverLoader inherited;
	
public:
	__fastcall virtual TDBXClientDriverLoader(void);
	virtual Dbxcommon::TDBXDriver* __fastcall Load(const Dbxcommon::TDBXDriverDef &DriverDef);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXClientDriverLoader(void) { }
	
};


class DELPHICLASS TDBXClientDriver;
class PASCALIMPLEMENTATION TDBXClientDriver : public Dbxcommon::TDBXDriver
{
	typedef Dbxcommon::TDBXDriver inherited;
	
private:
	Dbxcommon::TDBXCommand* __fastcall CreateClientCommand(Dbxcommon::TDBXContext* DbxContext, Dbxcommon::TDBXConnection* Connection, Dbxcommon::TDBXCommand* MorphicCommand);
	
protected:
	virtual void __fastcall Close(void);
	virtual Dbxcommon::TDBXConnection* __fastcall CreateConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	virtual Dbxtransport::TDbxChannel* __fastcall CreateChannel(void);
	
public:
	__fastcall virtual TDBXClientDriver(const Dbxcommon::TDBXDriverDef &DriverDef)/* overload */;
	__fastcall TDBXClientDriver(const Dbxcommon::TDBXDriverDef &DriverDef, Dbxcommon::TDBXProperties* DriverProps)/* overload */;
	__fastcall virtual ~TDBXClientDriver(void);
	virtual System::UnicodeString __fastcall GetDriverVersion(void);
};


class DELPHICLASS TDBXClientTransaction;
class DELPHICLASS TDBXClientConnection;
class PASCALIMPLEMENTATION TDBXClientTransaction : public Dbxcommon::TDBXTransaction
{
	typedef Dbxcommon::TDBXTransaction inherited;
	
private:
	int FTransactionHandle;
	__fastcall TDBXClientTransaction(TDBXClientConnection* Connection, int IsolationLevel, int TransactionHandle);
protected:
	/* TDBXTransaction.Create */ inline __fastcall TDBXClientTransaction(Dbxcommon::TDBXConnection* Connection) : Dbxcommon::TDBXTransaction(Connection) { }
	
public:
	/* TDBXTransaction.Destroy */ inline __fastcall virtual ~TDBXClientTransaction(void) { }
	
};


class PASCALIMPLEMENTATION TDBXClientConnection : public Dbxcommon::TDBXConnection
{
	typedef Dbxcommon::TDBXConnection inherited;
	
private:
	Dbxtransport::TDbxChannel* FChannel;
	
private:
	TDBXClientDriver* FDriver;
	Dbxmessagehandlerjsonclient::TDBXJSonClientOutputConnectionHandler* FDBXConHandler;
	Dbxstream::TDBXJSonStreamReader* FDbxReader;
	Dbxstream::TDBXJSonStreamWriter* FDbxWriter;
	int FConnectionHandle;
	System::UnicodeString FProductName;
	int FProtocolVersion;
	Classes::TStringList* FVendorProps;
	void __fastcall updateIsolationLevel(int IsolationLevel);
	
protected:
	virtual Dbxcommon::TDBXTransaction* __fastcall CreateAndBeginTransaction(const int Isolation);
	virtual void __fastcall Commit(const Dbxcommon::TDBXTransaction* InTransaction);
	virtual void __fastcall Rollback(const Dbxcommon::TDBXTransaction* InTransaction);
	virtual void __fastcall SetTraceInfoEvent(const Dbxcommon::TDBXTraceEvent TraceInfoEvent);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedGetCommandTypes(const Classes::TStrings* List);
	virtual void __fastcall DerivedGetCommands(const System::UnicodeString CommandType, const Classes::TStrings* List);
	virtual void __fastcall DerivedClose(void);
	virtual System::UnicodeString __fastcall GetProductName(void);
	
public:
	__fastcall TDBXClientConnection(Dbxcommon::TDBXConnectionBuilder* ConnectionBuilder);
	__fastcall virtual ~TDBXClientConnection(void);
	virtual System::UnicodeString __fastcall GetVendorProperty(const System::UnicodeString Name);
};


class DELPHICLASS TDBXClientCommand;
class PASCALIMPLEMENTATION TDBXClientCommand : public Dbxcommon::TDBXCommand
{
	typedef Dbxcommon::TDBXCommand inherited;
	
private:
	Dbxstream::TDBXJSonStreamReader* FDbxReader;
	Dbxstream::TDBXJSonStreamWriter* FDbxWriter;
	int FConnectionHandle;
	int FCommandHandle;
	__int64 FRowsAffected;
	bool FUpdateable;
	TDBXClientConnection* FConnection;
	Dbxstream::TDBXRowBuffer* FDbxReaderBuffer;
	Dbxcommontable::TDBXActiveTableReaderList* FDBXActiveTableReaderList;
	Dbxcommon::TDBXReader* __fastcall Execute(void);
	
private:
	Dbxstream::TDBXRowBuffer* FDbxParameterBuffer;
	bool FParameterTypeChange;
	Dbxstreamplatform::TDBXJSonRow* FParameterRow;
	__fastcall TDBXClientCommand(Dbxcommon::TDBXContext* DBXContext, TDBXClientConnection* Connection, int ConnectionHandle, Dbxstream::TDBXJSonStreamReader* DbxReader, Dbxstream::TDBXJSonStreamWriter* DbxWriter);
	
protected:
	virtual void __fastcall SetRowSetSize(const __int64 RowSetSize);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual Dbxcommon::TDBXRow* __fastcall CreateParameterRow(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual void __fastcall DerivedClearParameters(void);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	
public:
	__fastcall virtual ~TDBXClientCommand(void);
	Dbxjsonreflect::TJSONMarshal* __fastcall GetJSONMarshaler(void);
	Dbxjsonreflect::TJSONUnMarshal* __fastcall GetJSONUnMarshaler(void);
	__classmethod void __fastcall AddConverter(Dbxjsonreflect::TConverterEvent* event);
	__classmethod void __fastcall AddReverter(Dbxjsonreflect::TReverterEvent* event);
protected:
	/* TDBXCommand.Create */ inline __fastcall TDBXClientCommand(Dbxcommon::TDBXContext* DBXContext) : Dbxcommon::TDBXCommand(DBXContext) { }
	
};


class DELPHICLASS TDBXJSonByteReader;
class PASCALIMPLEMENTATION TDBXJSonByteReader : public Dbxcommon::TDBXReaderByteReader
{
	typedef Dbxcommon::TDBXReaderByteReader inherited;
	
private:
	int FReaderHandle;
	Dbxstream::TDBXJSonStreamReader* FDbxStreamReader;
	Dbxstream::TDBXJSonStreamWriter* FDbxStreamWriter;
	Dbxstream::TDBXRowBuffer* FDbxRowBuffer;
	Dbxstreamer::TDBXJSonReader* FDbxClientReader;
	
public:
	__fastcall TDBXJSonByteReader(Dbxcommon::TDBXContext* DBXContext, int ReaderHandle, Dbxstreamer::TDBXJSonReader* ClientReader, Dbxstream::TDBXJSonStreamReader* DbxReader, Dbxstream::TDBXJSonStreamWriter* DbxWriter, Dbxstream::TDBXRowBuffer* DbxRowBuffer);
	virtual void __fastcall GetAnsiString(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetWideString(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetUInt8(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt8(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetUInt16(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt16(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt32(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetInt64(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
	virtual void __fastcall GetDouble(int Ordinal, const System::DynamicArray<System::Byte> Value, int Offset, BOOL &IsNull);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXJSonByteReader(void) { }
	
};


class DELPHICLASS TDBXClientParameterRow;
class PASCALIMPLEMENTATION TDBXClientParameterRow : public Dbxstreamplatform::TDBXJSonRow
{
	typedef Dbxstreamplatform::TDBXJSonRow inherited;
	
private:
	TDBXClientCommand* FDbxClientCommand;
	
protected:
	__fastcall TDBXClientParameterRow(Dbxcommon::TDBXContext* DBXContext, int ReaderHandle, TDBXClientCommand* DbxClientCommand, Dbxstream::TDBXJSonStreamReader* DbxStreamReader, Dbxstream::TDBXJSonStreamWriter* DbxStreamWriter, Dbxstream::TDBXRowBuffer* DbxRowBuffer);
	virtual void __fastcall SetValueType(Dbxcommon::TDBXValueType* ValueType);
	virtual void __fastcall ValueNotSet(const Dbxcommon::TDBXWritableValue* Value);
	
public:
	__fastcall virtual ~TDBXClientParameterRow(void);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxclient */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxclient;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxclientHPP
