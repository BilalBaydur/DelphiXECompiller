// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxSocketChannelNative.pas' rev: 22.00

#ifndef DbxsocketchannelnativeHPP
#define DbxsocketchannelnativeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <IdTCPClient.hpp>	// Pascal unit
#include <DBXRSAFilter.hpp>	// Pascal unit
#include <ScktComp.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxsocketchannelnative
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSocketChannel;
class PASCALIMPLEMENTATION TDBXSocketChannel : public Dbxtransport::TDbxChannel
{
	typedef Dbxtransport::TDbxChannel inherited;
	
private:
	Dbxcommon::TDBXCommunicationLayer* FCommLayer;
	
protected:
	virtual Dbxtransport::TDBXChannelInfo* __fastcall GetChannelInfo(void);
	
public:
	__fastcall TDBXSocketChannel(void)/* overload */;
	__fastcall TDBXSocketChannel(const int id)/* overload */;
	__fastcall virtual ~TDBXSocketChannel(void);
	virtual void __fastcall Open(void);
	virtual void __fastcall Close(void);
	void __fastcall Terminate(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
};


class DELPHICLASS TDBXTCPLayer;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDBXTCPLayer : public Dbxcommon::TDBXCommunicationLayer
{
	typedef Dbxcommon::TDBXCommunicationLayer inherited;
	
private:
	Scktcomp::TClientSocket* FTcpClient;
	bool FConnected;
	
public:
	__fastcall virtual TDBXTCPLayer(void);
	__fastcall virtual ~TDBXTCPLayer(void);
	virtual void __fastcall Open(const Dbxcommon::TDBXProperties* DBXProperties);
	virtual void __fastcall Close(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual void __fastcall Terminate(void);
	virtual System::UnicodeString __fastcall Info(void);
};


class DELPHICLASS TDBXIdTCPLayer;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDBXIdTCPLayer : public Dbxcommon::TDBXCommunicationLayer
{
	typedef Dbxcommon::TDBXCommunicationLayer inherited;
	
private:
	Idtcpclient::TIdTCPClient* FIdSocket;
	bool FConnected;
	
protected:
	int __fastcall ReadData(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual Idtcpclient::TIdTCPClient* __fastcall CreateClientSocket(void);
	
public:
	__fastcall virtual TDBXIdTCPLayer(void);
	__fastcall virtual ~TDBXIdTCPLayer(void);
	virtual void __fastcall Open(const Dbxcommon::TDBXProperties* DBXProperties);
	virtual void __fastcall Close(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual void __fastcall Terminate(void);
	virtual System::UnicodeString __fastcall Info(void);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsocketchannelnative */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsocketchannelnative;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsocketchannelnativeHPP
