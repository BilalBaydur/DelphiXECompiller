// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXTransportFilter.pas' rev: 22.00

#ifndef DbxtransportfilterHPP
#define DbxtransportfilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxtransportfilter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXFilterSocketChannel;
class PASCALIMPLEMENTATION TDBXFilterSocketChannel : public Dbxtransport::TDbxChannel
{
	typedef Dbxtransport::TDbxChannel inherited;
	
public:
	virtual bool __fastcall HasLeftover(void);
	__fastcall TDBXFilterSocketChannel(void)/* overload */;
	__fastcall TDBXFilterSocketChannel(const Dbxtransport::TTransportFilterCollection* List)/* overload */;
	__fastcall virtual ~TDBXFilterSocketChannel(void);
	virtual bool __fastcall HasFilters(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual void __fastcall Close(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual int __fastcall GetFlag(void);
	virtual void __fastcall SetChannel(const Dbxtransport::TDbxChannel* Channel);
	virtual void __fastcall SetFilterList(const Dbxtransport::TTransportFilterCollection* Filters);
	virtual Dbxtransport::TDBXChannelInfo* __fastcall GetChannelInfo(void);
	virtual Dbxcommon::TDBXProperties* __fastcall GetDBXProperties(void);
	virtual void __fastcall SetDBXProperties(const Dbxcommon::TDBXProperties* Properties);
	virtual bool __fastcall IsConnectionLost(void);
	
private:
	int __fastcall ConsumeLeftover(const System::DynamicArray<System::Byte> Data, const int Offset, const int Len);
	void __fastcall SetLeftover(const System::DynamicArray<System::Byte> Data, const int Offset);
	Dbxjson::TJSONObject* __fastcall FilterParameters(const bool OnlyPublicKeyCryptographs);
	bool __fastcall RestoreFilterList(const System::DynamicArray<System::Byte> Data, const int Pos);
	bool __fastcall FillBuffer(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	int __fastcall SendFilterParameters(const bool OnlyPublickKeyCryptographs);
	int __fastcall ReceiveAndSetConfederateFilterParameters(const bool PublicKeyEncrypted);
	System::DynamicArray<System::Byte> __fastcall FilterDataRead(const System::DynamicArray<System::Byte> Data, const int Count, const bool OnlyPublikKeyCryptographs);
	System::DynamicArray<System::Byte> __fastcall FilterDataWrite(const System::DynamicArray<System::Byte> Data, const int Count, const bool OnlyPublikKeyCryptographs);
	
public:
	static int Pendant;
	static int Filtered;
	static int Regular;
	
private:
	Dbxtransport::TTransportFilterCollection* FFilterList;
	bool FOwnFilterList;
	System::DynamicArray<System::Byte> FHeaderData;
	// System::TArray__1<System::Byte>  FHeaderData;
	Dbxtransport::TDbxChannel* FDelegate;
	int FFilterFlag;
	System::DynamicArray<System::Byte> FLeftover;
	// System::TArray__1<System::Byte>  FLeftover;
	int FLeftoverPos;
	
public:
	__property int Flag = {read=GetFlag, nodefault};
	__property Dbxtransport::TDbxChannel* Channel = {read=FDelegate, write=SetChannel};
	__property Dbxtransport::TTransportFilterCollection* FilterList = {write=SetFilterList};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxtransportfilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxtransportfilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxtransportfilterHPP
