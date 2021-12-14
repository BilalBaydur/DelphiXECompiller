// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMessageHandlerJSonCommon.pas' rev: 22.00

#ifndef DbxmessagehandlerjsoncommonHPP
#define DbxmessagehandlerjsoncommonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXMessageHandlerCommon.hpp>	// Pascal unit
#include <DBXStream.hpp>	// Pascal unit
#include <DBXStreamPlatform.hpp>	// Pascal unit
#include <DBXStreamer.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmessagehandlerjsoncommon
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXJSonConnectionHandler;
class PASCALIMPLEMENTATION TDBXJSonConnectionHandler : public Dbxmessagehandlercommon::TDBXConnectionHandler
{
	typedef Dbxmessagehandlercommon::TDBXConnectionHandler inherited;
	
public:
	__fastcall TDBXJSonConnectionHandler(const Dbxcommon::TDBXContext* ADbxContext, const bool AUsesDbxParameters, const Dbxstream::TDBXJSonStreamReader* ADbxStreamReader, const Dbxstream::TDBXJSonStreamWriter* ADbxStreamWriter, const Dbxstream::TDBXRowBuffer* ARowBuffer, const bool AOwnsStreamers);
	__fastcall virtual ~TDBXJSonConnectionHandler(void);
	Dbxcommontable::TDBXActiveTableReaderItem* __fastcall GetActiveTableReaderItem(const Dbxcommontable::TDBXActiveTableReaderList* ActiveStreamerRowList, const int CommandHandle, const int RowHandle);
	Dbxstreamplatform::TDBXJSonRow* __fastcall CreateJSonRow(const int CommandHandle, const bool OwnsRow);
	Dbxcommon::TDBXReader* __fastcall ReadDBXReader(void);
	Dbxstreamer::TDBXJSonReader* __fastcall ReadDBXReaderMetaData(void);
	void __fastcall HandleMetadataData(void);
	Dbxjson::TJSONObject* __fastcall ReadMetadataData(void);
	Dbxjson::TJSONValue* __fastcall ReadCallbackData(void);
	void __fastcall WriteFirst(const int CommandHandle, const int RowHandle, const Dbxstreamplatform::TDBXJSonRow* DbxRow, const Dbxcommon::TDBXReader* Value, const int BcdFormat);
	bool __fastcall WriteNext(const int CommandHandle, const Dbxstreamplatform::TDBXJSonRow* DbxStreamerRow, const Dbxcommon::TDBXReader* Value, const bool FirstRows);
	void __fastcall WriteDBXReader(const int CommandHandle, const Dbxcommontable::TDBXActiveTableReaderItem* Item);
	Dbxcommon::TDBXParameter* __fastcall ReadParameter(void);
	void __fastcall ReadParameters(const Dbxmessagehandlercommon::TDBXCommandMessage* Message);
	void __fastcall WriteParameters(const Dbxmessagehandlercommon::TDBXCommandMessage* Message, const bool SomethingWritten);
	void __fastcall WriteCallbackData(const Dbxjson::TJSONValue* Data, const bool Flush);
	void __fastcall WriteMetadataData(const Dbxjson::TJSONObject* Data, const bool Flush);
	
protected:
	bool __fastcall IsNoDBXReaderParameterReturn(const Dbxcommon::TDBXParameterList* Parameters);
	bool __fastcall IsOutputDBXReader(const Dbxcommon::TDBXParameter* Parameter);
	bool __fastcall IsConnectionLost(void);
	
private:
	Dbxstream::TDBXRowBuffer* __fastcall CreateRowBuffer(const int CommandHandle);
	Dbxcommon::TDBXWritableValueArray __fastcall ReadValueTypes(const Dbxcommon::TDBXContext* Context, const Dbxcommon::TDBXRow* Row, const int ColumnCount, const bool UseDbxFlags);
	void __fastcall FlushStreamWriterIfNeeded(void);
	void __fastcall WriteParameter(const Dbxcommon::TDBXParameter* Parameter);
	
protected:
	Dbxstream::TDBXJSonStreamReader* FDbxStreamReader;
	Dbxstream::TDBXJSonStreamWriter* FDbxStreamWriter;
	Dbxstream::TDBXRowBuffer* FDbxRowBuffer;
	bool FUsesDbxParameters;
	bool FOwnsStreamers;
	
public:
	__property bool ConnectionLost = {read=IsConnectionLost, nodefault};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmessagehandlerjsoncommon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmessagehandlerjsoncommon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmessagehandlerjsoncommonHPP
