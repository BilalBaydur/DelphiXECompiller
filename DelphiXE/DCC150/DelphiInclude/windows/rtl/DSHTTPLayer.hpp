// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSHTTPLayer.pas' rev: 22.00

#ifndef DshttplayerHPP
#define DshttplayerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dshttplayer
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXHTTPLayer;
class DELPHICLASS TDSHTTPClient;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDBXHTTPLayer : public Dbxcommon::TDBXCommunicationLayer
{
	typedef Dbxcommon::TDBXCommunicationLayer inherited;
	
protected:
	System::UnicodeString FURITunnel;
	System::UnicodeString FSessionId;
	TDSHTTPClient* Fhttp;
	virtual void __fastcall InitHTTPClient(void);
	virtual System::UnicodeString __fastcall HTTPProtocol(void);
	
public:
	__fastcall virtual TDBXHTTPLayer(void);
	__fastcall virtual ~TDBXHTTPLayer(void);
	virtual void __fastcall Close(void);
	virtual void __fastcall Open(const Dbxcommon::TDBXProperties* DBXProperties);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual System::UnicodeString __fastcall Info(void);
};


class DELPHICLASS TDBXHTTPSLayer;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDBXHTTPSLayer : public TDBXHTTPLayer
{
	typedef TDBXHTTPLayer inherited;
	
protected:
	virtual void __fastcall InitHTTPClient(void);
	virtual System::UnicodeString __fastcall HTTPProtocol(void);
	
public:
	virtual void __fastcall Open(const Dbxcommon::TDBXProperties* DBXProperties);
public:
	/* TDBXHTTPLayer.Create */ inline __fastcall virtual TDBXHTTPSLayer(void) : TDBXHTTPLayer() { }
	/* TDBXHTTPLayer.Destroy */ inline __fastcall virtual ~TDBXHTTPSLayer(void) { }
	
};


class DELPHICLASS TDSHTTPResponseStream;
class PASCALIMPLEMENTATION TDSHTTPClient : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual int __fastcall GetResponseCode(void) = 0 ;
	virtual System::UnicodeString __fastcall GetResponseText(void) = 0 ;
	
public:
	virtual System::UnicodeString __fastcall Post(System::UnicodeString AURL, Classes::TStrings* ASource) = 0 ;
	virtual System::UnicodeString __fastcall Put(System::UnicodeString AURL, Classes::TStream* ASource) = 0 ;
	virtual TDSHTTPResponseStream* __fastcall Get(System::UnicodeString AURL) = 0 ;
	virtual void __fastcall SetConnectTimeout(int AMilisec);
	virtual void __fastcall SetReadTimeout(int AMilisec);
	virtual void __fastcall SetBasicAuthentication(const System::UnicodeString user, const System::UnicodeString password) = 0 ;
	__property int ResponseCode = {read=GetResponseCode, nodefault};
	__property System::UnicodeString ResponseText = {read=GetResponseText};
public:
	/* TObject.Create */ inline __fastcall TDSHTTPClient(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPClient(void) { }
	
};


class PASCALIMPLEMENTATION TDSHTTPResponseStream : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual __int64 __fastcall GetContentLength(void) = 0 ;
	
public:
	virtual int __fastcall Read(System::DynamicArray<System::Byte> Buffer, int Count) = 0 ;
	virtual void __fastcall Close(void) = 0 ;
	__property __int64 ContentLength = {read=GetContentLength};
public:
	/* TObject.Create */ inline __fastcall TDSHTTPResponseStream(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSHTTPResponseStream(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Dshttplayer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dshttplayer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DshttplayerHPP
