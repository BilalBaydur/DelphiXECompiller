// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMessageHandlerCommon.pas' rev: 22.00

#ifndef DbxmessagehandlercommonHPP
#define DbxmessagehandlercommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmessagehandlercommon
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXCommandHandler;
typedef System::DynamicArray<TDBXCommandHandler*> TDBXCommandHandlerArray;

class DELPHICLASS TDBXConnectionHandler;
typedef System::DynamicArray<TDBXConnectionHandler*> TDBXConnectionHandlerArray;

class DELPHICLASS TDBXExecuteMessage;
class DELPHICLASS TDBXPrepareMessage;
class DELPHICLASS TDBXNextResultMessage;
class DELPHICLASS TDBXNextMessage;
class DELPHICLASS TDBXMoreBlobMessage;
class DELPHICLASS TDBXCommandCloseMessage;
class DELPHICLASS TDBXReaderCloseMessage;
class DELPHICLASS TDBXErrorMessage;
class PASCALIMPLEMENTATION TDBXCommandHandler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXCommandHandler(const Dbxcommon::TDBXContext* ADbxContext);
	__fastcall virtual ~TDBXCommandHandler(void);
	virtual void __fastcall DbxExecute(const TDBXExecuteMessage* Message) = 0 ;
	virtual void __fastcall DbxPrepare(const TDBXPrepareMessage* Message) = 0 ;
	virtual void __fastcall DbxNextResult(const TDBXNextResultMessage* Message) = 0 ;
	virtual void __fastcall DbxNext(const TDBXNextMessage* Message) = 0 ;
	virtual void __fastcall DbxMoreBlob(const TDBXMoreBlobMessage* Message) = 0 ;
	virtual void __fastcall DbxCommandClose(const TDBXCommandCloseMessage* Message) = 0 ;
	virtual void __fastcall DbxReaderClose(const TDBXReaderCloseMessage* Message) = 0 ;
	virtual void __fastcall DbxErrorMessage(const TDBXErrorMessage* Message) = 0 ;
	virtual Dbxcommontable::TDBXStreamerRow* __fastcall CreateDbxRow(void);
	virtual bool __fastcall ClearResources(void);
	
protected:
	Dbxcommontable::TDBXActiveTableReaderList* __fastcall GetActiveStreamerRowList(void);
	virtual int __fastcall GetCommandHandle(void);
	virtual void __fastcall SetCommandHandle(const int Handle);
	
private:
	int FCommandHandle;
	Dbxcommon::TDBXContext* FDbxContext;
	Dbxcommontable::TDBXActiveTableReaderList* FActiveStreamerRowList;
	TDBXCommandHandler* FNextOwnedHandler;
	
public:
	__property TDBXCommandHandler* NextOwnedHandler = {write=FNextOwnedHandler};
	__property Dbxcommontable::TDBXActiveTableReaderList* ActiveStreamerRowList = {read=GetActiveStreamerRowList};
	__property int CommandHandle = {read=GetCommandHandle, write=SetCommandHandle, nodefault};
	__property Dbxcommon::TDBXContext* DBXContext = {read=FDbxContext};
};


class DELPHICLASS TDBXConnectMessage;
class DELPHICLASS TDBXDisconnectMessage;
class DELPHICLASS TDBXTxBeginMessage;
class DELPHICLASS TDBXTxEndMessage;
class DELPHICLASS TDBXVendorPropertyMessage;
class DELPHICLASS TDBXOpenMessage;
class DELPHICLASS TDBXCommandMessage;
class PASCALIMPLEMENTATION TDBXConnectionHandler : public TDBXCommandHandler
{
	typedef TDBXCommandHandler inherited;
	
public:
	__fastcall TDBXConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext);
	virtual void __fastcall DbxConnect(const TDBXConnectMessage* Message) = 0 ;
	virtual void __fastcall DbxDisconnect(const TDBXDisconnectMessage* Message) = 0 ;
	virtual void __fastcall DbxTxBegin(const TDBXTxBeginMessage* Message) = 0 ;
	virtual void __fastcall DbxTxEnd(const TDBXTxEndMessage* Message) = 0 ;
	virtual void __fastcall DbxVendorProperty(const TDBXVendorPropertyMessage* Message) = 0 ;
	virtual void __fastcall DbxOpen(const TDBXOpenMessage* Message) = 0 ;
	virtual TDBXCommandHandler* __fastcall AcquireCommandHandler(const TDBXCommandMessage* Message) = 0 ;
	virtual bool __fastcall DbxBeforeRequest(void) = 0 ;
	
protected:
	virtual System::UnicodeString __fastcall GetProductName(void) = 0 ;
	virtual int __fastcall GetCommandHandle(void);
	virtual void __fastcall SetCommandHandle(const int Handle);
	
private:
	Dbxcommon::TDBXError* __fastcall InvalidOperationError(void);
	
public:
	__property System::UnicodeString ProductName = {read=GetProductName};
public:
	/* TDBXCommandHandler.Destroy */ inline __fastcall virtual ~TDBXConnectionHandler(void) { }
	
};


class DELPHICLASS TDBXDisconnectHandler;
class PASCALIMPLEMENTATION TDBXDisconnectHandler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Disconnect(const TDBXConnectionHandler* Handler) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXDisconnectHandler(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDisconnectHandler(void) { }
	
};


class DELPHICLASS TDBXMessage;
class PASCALIMPLEMENTATION TDBXMessage : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TDBXMessage(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXErrorMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	virtual void __fastcall HandleMessage(const TDBXCommandHandler* Handler);
	
protected:
	void __fastcall SetError(const Sysutils::Exception* Ex);
	
private:
	System::UnicodeString __fastcall GetNestedMessage(const System::UnicodeString Message, const Sysutils::Exception* Ex, const int Level);
	void __fastcall InitDBXErrorMessage(const TDBXErrorMessage* Message);
	Sysutils::Exception* FEx;
	int FErrorCode;
	System::UnicodeString FErrorMessage;
	System::UnicodeString FErrorClassName;
	
public:
	__property Sysutils::Exception* Error = {read=FEx, write=SetError};
	__property int ErrorCode = {read=FErrorCode, write=FErrorCode, nodefault};
	__property System::UnicodeString ErrorClassName = {read=FErrorClassName, write=FErrorClassName};
	__property System::UnicodeString ErrorMessage = {read=FErrorMessage, write=FErrorMessage};
public:
	/* TObject.Create */ inline __fastcall TDBXErrorMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXErrorMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXDisconnectMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler);
public:
	/* TObject.Create */ inline __fastcall TDBXDisconnectMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDisconnectMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXConnectMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler);
	
private:
	Dbxcommon::TDBXProperties* FConnectProperties;
	int FConnectionHandle;
	System::UnicodeString FProductName;
	bool FSuccessfulConnect;
	
public:
	__property System::UnicodeString ProductName = {read=FProductName, write=FProductName};
	__property Dbxcommon::TDBXProperties* ConnectProperties = {read=FConnectProperties, write=FConnectProperties};
	__property int ConnectionHandle = {read=FConnectionHandle, write=FConnectionHandle, nodefault};
	__property bool SuccessfulConnect = {read=FSuccessfulConnect, write=FSuccessfulConnect, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXConnectMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXConnectMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXCommandMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	__fastcall virtual ~TDBXCommandMessage(void);
	
protected:
	void __fastcall SetExplicitParameters(const Dbxcommon::TDBXParameterList* ExplicitParameters);
	
private:
	int FCommandHandle;
	bool FUpdatable;
	System::UnicodeString FCommandType;
	System::UnicodeString FCommand;
	bool FParameterTypeChanged;
	Dbxcommon::TDBXParameterList* FParameters;
	Dbxcommon::TDBXParameterList* FExplicitParameters;
	Dbxplatform::TDBXInt32s FParameterDbxDataTypes;
	bool FServerSideCommand;
	
public:
	__property System::UnicodeString Command = {read=FCommand, write=FCommand};
	__property int CommandHandle = {read=FCommandHandle, write=FCommandHandle, nodefault};
	__property System::UnicodeString CommandType = {read=FCommandType, write=FCommandType};
	__property bool Updatable = {read=FUpdatable, write=FUpdatable, nodefault};
	__property bool ParameterTypeChanged = {read=FParameterTypeChanged, write=FParameterTypeChanged, nodefault};
	__property Dbxcommon::TDBXParameterList* Parameters = {read=FParameters, write=FParameters};
	__property Dbxcommon::TDBXParameterList* ExplicitParameters = {read=FExplicitParameters, write=SetExplicitParameters};
	__property Dbxplatform::TDBXInt32s ParameterDbxDataTypes = {read=FParameterDbxDataTypes, write=FParameterDbxDataTypes};
	__property bool ServerSideCommand = {read=FServerSideCommand, write=FServerSideCommand, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXCommandMessage(void) : TDBXMessage() { }
	
};


class PASCALIMPLEMENTATION TDBXExecuteMessage : public TDBXCommandMessage
{
	typedef TDBXCommandMessage inherited;
	
public:
	__fastcall virtual ~TDBXExecuteMessage(void);
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler)/* overload */;
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler)/* overload */;
	void __fastcall Reset(void);
	void __fastcall AddTableReader(const Dbxcommon::TDBXReader* Table);
	Dbxcommon::TDBXReader* __fastcall GetTableReader(const int Ordinal);
	void __fastcall FreeTableReaders(void);
	
protected:
	virtual void __fastcall SetConnectionHandler(const System::TObject* ConnectionHandler);
	virtual System::TObject* __fastcall GetConnectionHandler(void);
	
private:
	bool FPrepared;
	int FTableCount;
	Dbxcommon::TDBXReaderArray FTables;
	bool FHasParameters;
	bool FHasOutOrReturnParameters;
	bool FHasDBXTableReaderOutOrReturnParameter;
	Dbxcommontable::TDBXStreamerRow* FRow;
	Dbxcommon::TDBXReader* FReturnReader;
	Dbxcommontable::TDBXActiveTableReaderList* FActiveStreamerRowList;
	int FIsolationLevel;
	__int64 FRowsAffected;
	System::TObject* FConnectionHandler;
	
public:
	__property __int64 RowsAffected = {read=FRowsAffected, write=FRowsAffected};
	__property int IsolationLevel = {read=FIsolationLevel, write=FIsolationLevel, nodefault};
	__property int TableReaderCount = {read=FTableCount, nodefault};
	__property bool HasParameters = {read=FHasParameters, write=FHasParameters, nodefault};
	__property bool HasDBXTableReaderOutOrReturnParameter = {read=FHasDBXTableReaderOutOrReturnParameter, write=FHasDBXTableReaderOutOrReturnParameter, nodefault};
	__property bool HasOutOrReturnParameters = {read=FHasOutOrReturnParameters, write=FHasOutOrReturnParameters, nodefault};
	__property Dbxcommontable::TDBXStreamerRow* Row = {read=FRow, write=FRow};
	__property Dbxcommon::TDBXReader* ReturnReader = {read=FReturnReader, write=FReturnReader};
	__property Dbxcommontable::TDBXActiveTableReaderList* ActiveStreamerRowList = {read=FActiveStreamerRowList, write=FActiveStreamerRowList};
	__property bool Prepared = {read=FPrepared, write=FPrepared, nodefault};
	__property System::TObject* ConnectionHandler = {read=GetConnectionHandler, write=SetConnectionHandler};
public:
	/* TObject.Create */ inline __fastcall TDBXExecuteMessage(void) : TDBXCommandMessage() { }
	
};


class PASCALIMPLEMENTATION TDBXCommandCloseMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler);
	
private:
	int FCommandHandle;
	
public:
	__property int CommandHandle = {read=FCommandHandle, write=FCommandHandle, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXCommandCloseMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXCommandCloseMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXMoreBlobMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler)/* overload */;
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler)/* overload */;
	
private:
	int FCommandHandle;
	int FRowHandle;
	int FBlobHandle;
	__int64 FRow;
	int FOrdinal;
	bool FOutParameter;
	Dbxcommon::TDBXStreamReader* FStreamReader;
	bool FEos;
	
public:
	__property int CommandHandle = {read=FCommandHandle, write=FCommandHandle, nodefault};
	__property int BlobHandle = {read=FBlobHandle, write=FBlobHandle, nodefault};
	__property int Ordinal = {read=FOrdinal, write=FOrdinal, nodefault};
	__property __int64 Row = {read=FRow, write=FRow};
	__property bool OutParameter = {read=FOutParameter, write=FOutParameter, nodefault};
	__property Dbxcommon::TDBXStreamReader* StreamReader = {read=FStreamReader, write=FStreamReader};
	__property int RowHandle = {read=FRowHandle, write=FRowHandle, nodefault};
	__property bool Eos = {read=FEos, write=FEos, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXMoreBlobMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMoreBlobMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXNextMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler);
	
private:
	int FCommandHandle;
	int FRowHandle;
	__int64 FPosition;
	Dbxcommontable::TDBXActiveTableReaderList* FActiveStreamerRowList;
	
public:
	__property int CommandHandle = {read=FCommandHandle, write=FCommandHandle, nodefault};
	__property __int64 Position = {read=FPosition, write=FPosition};
	__property int RowHandle = {read=FRowHandle, write=FRowHandle, nodefault};
	__property Dbxcommontable::TDBXActiveTableReaderList* ActiveStreamerRowList = {read=FActiveStreamerRowList, write=FActiveStreamerRowList};
public:
	/* TObject.Create */ inline __fastcall TDBXNextMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXNextMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXNextResultMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler);
	
private:
	int FCommandHandle;
	bool FUpdateable;
	__int64 FRowsAffected;
	Dbxcommon::TDBXReader* FNextResult;
	
public:
	__property int CommandHandle = {read=FCommandHandle, write=FCommandHandle, nodefault};
	__property Dbxcommon::TDBXReader* NextResult = {read=FNextResult, write=FNextResult};
	__property bool Updateable = {read=FUpdateable, write=FUpdateable, nodefault};
	__property __int64 RowsAffected = {read=FRowsAffected, write=FRowsAffected};
public:
	/* TObject.Create */ inline __fastcall TDBXNextResultMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXNextResultMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXOpenMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler);
	
private:
	int FConnectionHandle;
	
public:
	__property int ConnectionHandle = {read=FConnectionHandle, write=FConnectionHandle, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXOpenMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXOpenMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXPrepareMessage : public TDBXCommandMessage
{
	typedef TDBXCommandMessage inherited;
	
public:
	void __fastcall Reset(void);
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler);
public:
	/* TDBXCommandMessage.Destroy */ inline __fastcall virtual ~TDBXPrepareMessage(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXPrepareMessage(void) : TDBXCommandMessage() { }
	
};


class DELPHICLASS TDBXProtocolHandler;
class PASCALIMPLEMENTATION TDBXProtocolHandler : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall HandleProtocol(void) = 0 ;
	virtual bool __fastcall HandleNonBlockingProtocol(void) = 0 ;
	virtual void __fastcall SetUp(const System::TObject* Data) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TDBXProtocolHandler(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXProtocolHandler(void) { }
	
};


class PASCALIMPLEMENTATION TDBXReaderCloseMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXCommandHandler* Handler);
	
private:
	int FReaderHandle;
	int FCommandHandle;
	
public:
	__property int CommandHandle = {read=FCommandHandle, write=FCommandHandle, nodefault};
	__property int ReaderHandle = {read=FReaderHandle, write=FReaderHandle, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXReaderCloseMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXReaderCloseMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXTxBeginMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler);
	
private:
	int FIsolationLevel;
	int FTransactionHandle;
	
public:
	__property int IsolationLevel = {read=FIsolationLevel, write=FIsolationLevel, nodefault};
	__property int TransactionHandle = {read=FTransactionHandle, write=FTransactionHandle, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXTxBeginMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTxBeginMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXTxEndMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler);
	
private:
	bool FCommit;
	int FTransactionHandle;
	
public:
	__property int TransactionHandle = {read=FTransactionHandle, write=FTransactionHandle, nodefault};
	__property bool Commit = {read=FCommit, write=FCommit, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDBXTxEndMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXTxEndMessage(void) { }
	
};


class PASCALIMPLEMENTATION TDBXVendorPropertyMessage : public TDBXMessage
{
	typedef TDBXMessage inherited;
	
public:
	void __fastcall HandleMessage(const TDBXConnectionHandler* Handler);
	
private:
	System::UnicodeString FPropertyName;
	System::UnicodeString FPropertyValue;
	
public:
	__property System::UnicodeString PropertyName = {read=FPropertyName, write=FPropertyName};
	__property System::UnicodeString PropertyValue = {read=FPropertyValue, write=FPropertyValue};
public:
	/* TObject.Create */ inline __fastcall TDBXVendorPropertyMessage(void) : TDBXMessage() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXVendorPropertyMessage(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmessagehandlercommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmessagehandlercommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmessagehandlercommonHPP
