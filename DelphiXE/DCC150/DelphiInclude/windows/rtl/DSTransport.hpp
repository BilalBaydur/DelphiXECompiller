// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSTransport.pas' rev: 22.00

#ifndef DstransportHPP
#define DstransportHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXMessageHandlerCommon.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dstransport
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSJSONProtocolHandlerFactory;
class PASCALIMPLEMENTATION TDSJSONProtocolHandlerFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDSJSONProtocolHandlerFactory(const Dscommonserver::TDSServerTransport* ATransport);
	__fastcall virtual ~TDSJSONProtocolHandlerFactory(void);
	Dbxmessagehandlercommon::TDBXProtocolHandler* __fastcall CreateProtocolHandler(const Dbxtransport::TDbxChannel* Channel);
	
private:
	Dscommonserver::TDSServerTransport* FTransport;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dstransport */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dstransport;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DstransportHPP
