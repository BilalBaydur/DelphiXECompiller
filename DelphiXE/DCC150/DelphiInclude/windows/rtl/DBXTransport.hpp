// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXTransport.pas' rev: 22.00

#ifndef DbxtransportHPP
#define DbxtransportHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXEncryption.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxtransport
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDbxChannel;
class DELPHICLASS TDBXChannelInfo;
class PASCALIMPLEMENTATION TDbxChannel : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall Open(void) = 0 ;
	virtual void __fastcall Close(void) = 0 ;
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count) = 0 ;
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count) = 0 ;
	__fastcall virtual ~TDbxChannel(void);
	
protected:
	virtual bool __fastcall IsConnectionLost(void);
	virtual TDBXChannelInfo* __fastcall GetChannelInfo(void) = 0 ;
	virtual Dbxcommon::TDBXProperties* __fastcall GetDBXProperties(void);
	virtual void __fastcall SetDBXProperties(const Dbxcommon::TDBXProperties* Properties);
	TDBXChannelInfo* FChannelInfo;
	
private:
	Dbxcommon::TDBXProperties* FDbxProperties;
	
public:
	__property TDBXChannelInfo* ChannelInfo = {read=GetChannelInfo};
	__property Dbxcommon::TDBXProperties* DBXProperties = {read=GetDBXProperties, write=SetDBXProperties};
	__property bool ConnectionLost = {read=IsConnectionLost, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDbxChannel(void) : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TDBXChannelInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXChannelInfo(const int AId);
	
protected:
	virtual System::UnicodeString __fastcall GetInfo(void);
	
private:
	int FId;
	
public:
	__property int Id = {read=FId, nodefault};
	__property System::UnicodeString Info = {read=GetInfo};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXChannelInfo(void) { }
	
};


class DELPHICLASS TDBXCommunicationLayerFactory;
class PASCALIMPLEMENTATION TDBXCommunicationLayerFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static TDBXCommunicationLayerFactory* __fastcall Instance();
	static void __fastcall RegisterLayer(const System::UnicodeString CommLayerId, const Dbxplatform::TObjectClass CommLayerClass);
	static void __fastcall UnregisterLayer(const System::UnicodeString CommLayerId);
	static Dbxcommon::TDBXCommunicationLayer* __fastcall CommunicationLayer(const System::UnicodeString Id);
	static Dbxplatform::TDBXStringArray __fastcall RegisteredLayerList();
	__fastcall TDBXCommunicationLayerFactory(void);
	__fastcall virtual ~TDBXCommunicationLayerFactory(void);
	
private:
	static TDBXCommunicationLayerFactory* FSingleton;
	static Dbxplatform::TDBXObjectStore* FRegisteredLayers;
};


class DELPHICLASS TDBXLocalChannel;
class PASCALIMPLEMENTATION TDBXLocalChannel : public TDbxChannel
{
	typedef TDbxChannel inherited;
	
public:
	__fastcall TDBXLocalChannel(const System::UnicodeString ServerName);
	__fastcall virtual ~TDBXLocalChannel(void);
	virtual void __fastcall Close(void);
	virtual void __fastcall Open(void);
	virtual int __fastcall Read(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall WriteLocalData(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual int __fastcall ReadLocalData(const System::DynamicArray<System::Byte> Buffer, const int Offset, const int Count);
	virtual bool __fastcall HasReadData(void);
	virtual bool __fastcall HasWriteData(void);
	
protected:
	virtual TDBXChannelInfo* __fastcall GetChannelInfo(void);
	
private:
	System::DynamicArray<System::Byte> FReadBuffer;
	// System::TArray__1<System::Byte>  FReadBuffer;
	int FReadCount;
	int FReadOffset;
	bool FHasReadData;
	System::DynamicArray<System::Byte> FWriteBuffer;
	// System::TArray__1<System::Byte>  FWriteBuffer;
	int FWriteCount;
	int FWriteOffset;
	bool FHasWriteData;
};


class DELPHICLASS TDBXSocketChannelInfo;
class PASCALIMPLEMENTATION TDBXSocketChannelInfo : public TDBXChannelInfo
{
	typedef TDBXChannelInfo inherited;
	
public:
	__fastcall TDBXSocketChannelInfo(const int AId, const System::UnicodeString AInfo);
	
protected:
	virtual System::UnicodeString __fastcall GetInfo(void);
	
private:
	System::UnicodeString FInfo;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXSocketChannelInfo(void) { }
	
};


class DELPHICLASS TFilterProperties;
class PASCALIMPLEMENTATION TFilterProperties : public Dbxplatform::TBaseFilterProperties
{
	typedef Dbxplatform::TBaseFilterProperties inherited;
	
public:
	/* TStringList.Create */ inline __fastcall TFilterProperties(void)/* overload */ : Dbxplatform::TBaseFilterProperties() { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TFilterProperties(void) { }
	
};


class DELPHICLASS TTransportFilter;
class DELPHICLASS TTransportFilterCollection;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TTransportFilter : public Dbxplatform::TFactoryObject
{
	typedef Dbxplatform::TFactoryObject inherited;
	
public:
	static System::UnicodeString __fastcall Encode(const System::DynamicArray<System::Byte> Data, const int Pos, const int DataLength);
	static System::DynamicArray<System::Byte> __fastcall Decode(const System::UnicodeString StrData);
	__fastcall virtual TTransportFilter(void);
	virtual System::UnicodeString __fastcall Id(void) = 0 ;
	virtual System::UnicodeString __fastcall GetParameterValue(const System::UnicodeString ParamName);
	virtual bool __fastcall SetParameterValue(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual bool __fastcall SetConfederateParameter(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessInput(const System::DynamicArray<System::Byte> Data) = 0 ;
	virtual System::DynamicArray<System::Byte> __fastcall ProcessOutput(const System::DynamicArray<System::Byte> Data) = 0 ;
	virtual void __fastcall StartHandshake(void);
	virtual bool __fastcall HandshakeComplete(void);
	virtual TTransportFilter* __fastcall GetCollectionFilter(const System::UnicodeString FilterId);
	
protected:
	virtual Dbxplatform::TDBXStringArray __fastcall GetParameters(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetUserParameters(void);
	virtual void __fastcall SetServerInstance(const bool IsServerSide);
	virtual bool __fastcall IsPublicKeyCryptograph(void);
	virtual bool __fastcall IsServerInstance(void);
	virtual bool __fastcall IsClientInstance(void);
	virtual TTransportFilterCollection* __fastcall GetFilterCollection(void);
	virtual void __fastcall SetFilterCollection(const TTransportFilterCollection* FilterCollection);
	virtual bool __fastcall IsHandshakeStarted(void);
	
private:
	bool FServerInstance;
	TTransportFilterCollection* FFilterCollection;
	bool FHandshakeStarted;
	
public:
	__property Dbxplatform::TDBXStringArray Parameters = {read=GetParameters};
	__property Dbxplatform::TDBXStringArray UserParameters = {read=GetUserParameters};
	__property bool PublicKeyCryptograph = {read=IsPublicKeyCryptograph, nodefault};
	__property bool ServerInstance = {read=IsServerInstance, write=SetServerInstance, nodefault};
	__property bool ClientInstance = {read=IsClientInstance, nodefault};
	__property TTransportFilterCollection* FilterCollection = {read=GetFilterCollection, write=SetFilterCollection};
	__property bool HandshakeStarted = {read=IsHandshakeStarted, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTransportFilter(void) { }
	
};


class DELPHICLASS TTransportCypherFilter;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TTransportCypherFilter/* [[sealed]] */ : public TTransportFilter
{
	typedef TTransportFilter inherited;
	
public:
	virtual System::UnicodeString __fastcall GetParameterValue(const System::UnicodeString ParamName);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessInput(const System::DynamicArray<System::Byte> Data);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessOutput(const System::DynamicArray<System::Byte> Data);
	virtual bool __fastcall SetParameterValue(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual bool __fastcall SetConfederateParameter(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual System::UnicodeString __fastcall Id(void);
	
protected:
	System::UnicodeString __fastcall GetClearKey(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetUserParameters(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetParameters(void);
	
private:
	Dbxencryption::TPC1Cypher* __fastcall SetUp(const System::UnicodeString Key);
	void __fastcall TearDown(const Dbxencryption::TPC1Cypher* Cypher);
	System::UnicodeString FCypherKey;
	System::UnicodeString FConfederateKey;
	__property System::UnicodeString ClearKey = {read=GetClearKey};
	#define TTransportCypherFilter_Key L"Key"
	
	#define TTransportCypherFilter_Code L"CODE"
	
	#define TTransportCypherFilter_Filterunit L"FilterUnit"
	
public:
	/* TTransportFilter.Create */ inline __fastcall virtual TTransportCypherFilter(void) : TTransportFilter() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTransportCypherFilter(void) { }
	
};


class PASCALIMPLEMENTATION TTransportFilterCollection : public Dbxplatform::TBaseTransportFilterCollection
{
	typedef Dbxplatform::TBaseTransportFilterCollection inherited;
	
public:
	__fastcall TTransportFilterCollection(void);
	virtual int __fastcall AddFilter(const System::UnicodeString FilterId)/* overload */;
	virtual int __fastcall AddFilter(const TTransportFilter* Filter)/* overload */;
	virtual bool __fastcall RemoveFilter(const int Index);
	virtual TTransportFilter* __fastcall GetFilter(const int Pos)/* overload */;
	virtual TTransportFilter* __fastcall GetFilter(const System::UnicodeString Id)/* overload */;
	virtual bool __fastcall HandshakeComplete(void);
	virtual void __fastcall StartHandshake(void);
	virtual System::UnicodeString __fastcall ToJSON(void);
	static TTransportFilterCollection* __fastcall FromJSON(const System::UnicodeString Json);
	
protected:
	virtual Dbxplatform::TDBXStringArray __fastcall GetFilterIdList(void);
	
public:
	__property Dbxplatform::TDBXStringArray FilterIdList = {read=GetFilterIdList};
public:
	/* TBaseTransportFilterCollection.Destroy */ inline __fastcall virtual ~TTransportFilterCollection(void) { }
	
};


class DELPHICLASS TTransportFilterFactory;
class PASCALIMPLEMENTATION TTransportFilterFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static TTransportFilterFactory* __fastcall Instance();
	static TTransportFilter* __fastcall CreateFilter(const System::UnicodeString FilterId);
	static void __fastcall RegisterFilter(const System::UnicodeString FilterId, const Dbxplatform::TObjectClass FilterClass)/* overload */;
	static void __fastcall RegisterFilter(const Dbxplatform::TObjectClass FilterClass)/* overload */;
	static void __fastcall UnregisterFilter(const System::UnicodeString FilterId)/* overload */;
	static void __fastcall UnregisterFilter(const Dbxplatform::TObjectClass FilterClass)/* overload */;
	static Dbxplatform::TDBXStringArray __fastcall RegisteredFiltersId();
	__fastcall TTransportFilterFactory(void);
	__fastcall virtual ~TTransportFilterFactory(void);
	
private:
	static TTransportFilterFactory* FSingleton;
	static Dbxplatform::TDBXObjectStore* FRegisteredFilters;
};


class DELPHICLASS TTransportFilterItem;
class PASCALIMPLEMENTATION TTransportFilterItem : public Dbxplatform::TBaseTransportFilterItem
{
	typedef Dbxplatform::TBaseTransportFilterItem inherited;
	
public:
	__fastcall virtual TTransportFilterItem(Classes::TCollection* Collection);
	__fastcall virtual ~TTransportFilterItem(void);
	
protected:
	virtual void __fastcall SetFilterId(const System::UnicodeString FilterId);
	virtual System::UnicodeString __fastcall GetFilterId(void);
	virtual TTransportFilter* __fastcall GetFilter(void);
	virtual void __fastcall SetFilter(const TTransportFilter* Filter);
	virtual void __fastcall SetProperties(const TFilterProperties* Value);
	virtual TFilterProperties* __fastcall GetProperties(void);
	
private:
	System::UnicodeString FFilterId;
	TTransportFilter* FFilter;
	TFilterProperties* FFilterProperties;
	bool FFilterPropertiesChanged;
	void __fastcall UpdateFilterProperties(void);
	void __fastcall UpdateFilter(void);
	void __fastcall OnFilterPropertiesChange(System::TObject* Sender);
	
public:
	__property TTransportFilter* Filter = {read=GetFilter, write=SetFilter};
	
__published:
	__property System::UnicodeString FilterId = {read=GetFilterId, write=SetFilterId};
	__property TFilterProperties* Properties = {read=GetProperties, write=SetProperties};
};


class DELPHICLASS TTransportFilterTools;
class PASCALIMPLEMENTATION TTransportFilterTools : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static System::DynamicArray<System::Byte> __fastcall FilterQuery(const System::DynamicArray<System::Byte> Buffer);
	static bool __fastcall IsFilterQuery(const System::DynamicArray<System::Byte> Buffer);
	static System::DynamicArray<System::Byte> __fastcall NoFilter(const System::DynamicArray<System::Byte> Buffer);
	static bool __fastcall HasNoFilter(const System::DynamicArray<System::Byte> Buffer);
	static bool __fastcall HasPublicKey(const System::DynamicArray<System::Byte> Buffer);
	static bool __fastcall HasPublicKeyCryptography(const TTransportFilterCollection* FilterList);
	static void __fastcall EncodeDataLength(const System::DynamicArray<System::Byte> Data, const int Len);
	static void __fastcall EncodePublicKeyLength(const System::DynamicArray<System::Byte> Data, const int Len);
	static int __fastcall DecodeDataLen(const System::DynamicArray<System::Byte> Data);
	static const System::ShortInt HeaderLen = 0x5;
	
	
private:
	static const System::ShortInt HeaderFilter = 0xd;
	
	static const System::ShortInt HeaderQuery = 0x5;
	
	static const System::ShortInt HeaderNoFilter = 0x6;
	
	static const System::ShortInt HeaderPublicKey = 0x7;
	
public:
	/* TObject.Create */ inline __fastcall TTransportFilterTools(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTransportFilterTools(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxtransport */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxtransport;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxtransportHPP
