// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzure.pas' rev: 22.00

#ifndef DsazureHPP
#define DsazureHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXJSON.hpp>	// Pascal unit
#include <IdAuthentication.hpp>	// Pascal unit
#include <IdHTTP.hpp>	// Pascal unit
#include <IdHTTPServer.hpp>	// Pascal unit
#include <IdAssignedNumbers.hpp>	// Pascal unit
#include <IdContext.hpp>	// Pascal unit
#include <IdCustomHTTPServer.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonIndy.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <IdTCPClient.hpp>	// Pascal unit
#include <IdTCPConnection.hpp>	// Pascal unit
#include <IdComponent.hpp>	// Pascal unit
#include <IdBaseComponent.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazure
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzureConnectionString;
class PASCALIMPLEMENTATION TAzureConnectionString : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	bool FUseDevelopmentStorage;
	System::UnicodeString FAccountName;
	System::UnicodeString FAccountKey;
	bool FUseDefaultEndpoints;
	System::UnicodeString FBlobEndpoint;
	System::UnicodeString FQueueEndpoint;
	System::UnicodeString FTableEndpoint;
	System::UnicodeString FProtocol;
	void __fastcall SetUseDevelopmentStorage(bool use);
	
public:
	__fastcall virtual TAzureConnectionString(Classes::TComponent* AOwner);
	__fastcall virtual ~TAzureConnectionString(void);
	System::UnicodeString __fastcall BlobURL(void);
	System::UnicodeString __fastcall TableURL(void);
	System::UnicodeString __fastcall QueueURL(void);
	
__published:
	__property bool UseDevelopmentStorage = {read=FUseDevelopmentStorage, write=SetUseDevelopmentStorage, nodefault};
	__property System::UnicodeString AccountName = {read=FAccountName, write=FAccountName};
	__property System::UnicodeString AccountKey = {read=FAccountKey, write=FAccountKey};
	__property bool UseDefaultEndpoints = {read=FUseDefaultEndpoints, write=FUseDefaultEndpoints, nodefault};
	__property System::UnicodeString BlobEndpoint = {read=FBlobEndpoint, write=FBlobEndpoint};
	__property System::UnicodeString QueueEndpoint = {read=FQueueEndpoint, write=FQueueEndpoint};
	__property System::UnicodeString TableEndpoint = {read=FTableEndpoint, write=FTableEndpoint};
	__property System::UnicodeString Protocol = {read=FProtocol, write=FProtocol};
};


class DELPHICLASS TSharedKeyAuthorization;
class PASCALIMPLEMENTATION TSharedKeyAuthorization : public Idauthentication::TIdBasicAuthentication
{
	typedef Idauthentication::TIdBasicAuthentication inherited;
	
private:
	System::UnicodeString FStringToSign;
	System::DynamicArray<System::Byte> FSHAKey;
	// System::TArray__1<System::Byte>  FSHAKey;
	
protected:
	__classmethod bool __fastcall IsHMAC_SHA256Avail();
	System::DynamicArray<System::Byte> __fastcall HMAC_SHA256(const System::UnicodeString StringToSign);
	
public:
	virtual System::UnicodeString __fastcall Authentication(void);
	void __fastcall SetSHAKey(const System::UnicodeString Key);
	__property System::UnicodeString StringToSign = {read=FStringToSign, write=FStringToSign};
public:
	/* TIdAuthentication.Create */ inline __fastcall virtual TSharedKeyAuthorization(void) : Idauthentication::TIdBasicAuthentication() { }
	/* TIdAuthentication.Destroy */ inline __fastcall virtual ~TSharedKeyAuthorization(void) { }
	
};


struct TAccessPolicy;
struct DECLSPEC_DRECORD TAccessPolicy
{
	
public:
	System::UnicodeString Start;
	System::UnicodeString Expiry;
	bool PermRead;
	bool PermWrite;
	bool PermDelete;
	bool PermList;
	System::UnicodeString __fastcall GetPermission(void);
	void __fastcall SetPermission(const System::UnicodeString rwdl);
	System::UnicodeString __fastcall AsXML(void);
	static TAccessPolicy __fastcall Create();
	__property System::UnicodeString Permission = {read=GetPermission, write=SetPermission};
};


typedef System::DynamicArray<TAccessPolicy> TAccessPolicyArray;

class DELPHICLASS TSignedIdentifier;
class PASCALIMPLEMENTATION TSignedIdentifier : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FId;
	System::UnicodeString FAccount;
	System::UnicodeString FSharedKey;
	System::UnicodeString FResource;
	
protected:
	System::UnicodeString __fastcall CanonicalizedResource(void);
	System::DynamicArray<System::Byte> __fastcall HMAC_SHA256(const System::UnicodeString StringToSign);
	
public:
	TAccessPolicy AccessPolicy;
	__fastcall TSignedIdentifier(const System::UnicodeString Account, const System::UnicodeString SharedKey, const System::UnicodeString Resource)/* overload */;
	__fastcall TSignedIdentifier(const System::UnicodeString Account, const System::UnicodeString SharedKey, const System::UnicodeString Resource, const TAccessPolicy &Policy)/* overload */;
	virtual System::UnicodeString __fastcall AsXML(void);
	virtual System::UnicodeString __fastcall Signature(void);
	System::UnicodeString __fastcall SI(void);
	System::UnicodeString __fastcall Sig(void);
	__property System::UnicodeString Id = {read=FId, write=FId};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSignedIdentifier(void) { }
	
};


class DELPHICLASS TAzureService;
class DELPHICLASS TAzureHTTP;
class PASCALIMPLEMENTATION TAzureService : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TAzureConnectionString* FConnectionString;
	TAzureHTTP* FDSHTTP;
	TSharedKeyAuthorization* FSharedKeyAuth;
	int FReturnCode;
	__classmethod System::UnicodeString __fastcall VarRecToString(const System::TVarRec &rec);
	
protected:
	System::UnicodeString __fastcall QueryParams(System::TVarRec *Params, const int Params_Size, System::TVarRec *Values, const int Values_Size)/* overload */;
	System::UnicodeString __fastcall QueryParams(System::TVarRec *Params, const int Params_Size, System::TVarRec *Values, const int Values_Size, System::TVarRec *UserParams, const int UserParams_Size, System::TVarRec *UserValues, const int UserValues_Size)/* overload */;
	System::UnicodeString __fastcall CanonicalizedQueryParams(System::TVarRec *aParams, const int aParams_Size, System::TVarRec *aValues, const int aValues_Size, System::TVarRec *aUserParams, const int aUserParams_Size, System::TVarRec *aUserValues, const int aUserValues_Size);
	System::UnicodeString __fastcall GetResponseETag(void);
	System::TDateTime __fastcall GetResponseLastModified(void);
	System::TDateTime __fastcall GetResponseDate(void);
	System::UnicodeString __fastcall GetResponseHeader(const System::UnicodeString Header);
	bool __fastcall GetResponseHeaderExists(const System::UnicodeString Header);
	System::UnicodeString __fastcall GetResponseText(void);
	System::UnicodeString __fastcall GetResponse(System::UnicodeString Url);
	void __fastcall CleanUpHeaders(void);
	
public:
	__fastcall virtual TAzureService(TAzureConnectionString* AConnectionString);
	__fastcall virtual ~TAzureService(void);
	void __fastcall Reset(void);
	System::UnicodeString __fastcall XMsVersion(void);
	System::UnicodeString __fastcall XMsDate(void);
	virtual System::UnicodeString __fastcall StringToSign(const System::UnicodeString VERB, System::TVarRec const *RequestHeaders, const int RequestHeaders_Size, System::TVarRec const *CanonicalizedHeadersName, const int CanonicalizedHeadersName_Size, System::TVarRec const *CanonicalizedHeadersValue, const int CanonicalizedHeadersValue_Size, System::TVarRec const *CanonicalizedResource, const int CanonicalizedResource_Size)/* overload */;
	virtual System::UnicodeString __fastcall StringToSign(const System::UnicodeString VERB, System::TVarRec const *RequestHeaders, const int RequestHeaders_Size, Classes::TStringList* Headers, System::TVarRec const *CanonicalizedResource, const int CanonicalizedResource_Size)/* overload */;
	void __fastcall PopulateContainer(const System::UnicodeString Prefix, const Classes::TStrings* container);
	__classmethod void __fastcall SetUp();
	__classmethod System::UnicodeString __fastcall Encode(const System::UnicodeString Str);
	__classmethod System::UnicodeString __fastcall Decode(const System::UnicodeString Str);
	__classmethod System::UnicodeString __fastcall URLEncode(const System::UnicodeString Str);
	__property int ReturnCode = {read=FReturnCode, nodefault};
	__property System::UnicodeString ETag = {read=GetResponseETag};
	__property System::TDateTime ResponseDate = {read=GetResponseDate};
	__property System::TDateTime LastModified = {read=GetResponseLastModified};
	__property System::UnicodeString ResponseHeader[const System::UnicodeString Header] = {read=GetResponseHeader};
	__property bool ResponseHeaderExists[const System::UnicodeString Header] = {read=GetResponseHeaderExists};
	__property System::UnicodeString ResponseText = {read=GetResponseText};
};


class DELPHICLASS TAzureBlobService;
class PASCALIMPLEMENTATION TAzureBlobService : public TAzureService
{
	typedef TAzureService inherited;
	
private:
	System::UnicodeString __fastcall ListContainers(System::UnicodeString extraQueryParams)/* overload */;
	
public:
	__fastcall virtual TAzureBlobService(TAzureConnectionString* AConnectionString);
	System::UnicodeString __fastcall ListContainers(void)/* overload */;
	System::UnicodeString __fastcall ListContainers(System::TVarRec *Params, const int Params_Size, System::TVarRec *Values, const int Values_Size)/* overload */;
	bool __fastcall CreateContainer(System::UnicodeString ContainerName, const System::UnicodeString PublicAccess = L"container")/* overload */;
	bool __fastcall CreateContainer(System::UnicodeString ContainerName, const Classes::TStringList* MetaDataHeaders, const System::UnicodeString PublicAccess = L"container")/* overload */;
	bool __fastcall CreateRootContainer(const System::UnicodeString PublicAccess = L"container");
	bool __fastcall DeleteContainer(const System::UnicodeString ContainerName);
	bool __fastcall DeleteRootContainer(void);
	bool __fastcall GetContainerProperties(const System::UnicodeString ContainerName);
	bool __fastcall GetContainerMetadata(const System::UnicodeString ContainerName);
	bool __fastcall SetContainerMetadata(const System::UnicodeString ContainerName, const Classes::TStringList* MetaDataHeaders);
	System::UnicodeString __fastcall GetContainerACL(const System::UnicodeString ContainerName);
	bool __fastcall SetContainerACL(const System::UnicodeString ContainerName, const System::UnicodeString Id, const TAccessPolicy &AccessPolicy, const System::UnicodeString PublicAccess = L"container");
	System::UnicodeString __fastcall ListBlobs(const System::UnicodeString ContainerName, System::TVarRec *Params, const int Params_Size, System::TVarRec *Values, const int Values_Size);
	bool __fastcall PutBlockBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, System::DynamicArray<System::Byte> Content, const System::UnicodeString LeaseId = L"", const Classes::TStringList* UserHeaders = (Classes::TStringList*)(0x0), const System::UnicodeString ContentType = L"application/octet-stream", const System::UnicodeString ContentEncoding = L"", const System::UnicodeString ContentLanguage = L"", const System::UnicodeString ContentMD5 = L"", const System::UnicodeString CacheControl = L"");
	bool __fastcall PutPageBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, __int64 BlobSize, __int64 BlobSeqNb = 0LL, const Classes::TStringList* UserHeaders = (Classes::TStringList*)(0x0), const System::UnicodeString ContentType = L"application/octet-stream", const System::UnicodeString ContentEncoding = L"", const System::UnicodeString ContentLanguage = L"", const System::UnicodeString ContentMD5 = L"", const System::UnicodeString CacheControl = L"");
	bool __fastcall GetBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, Classes::TStream* ResponseContent, const System::UnicodeString Snapshot = L"", __int64 StartByte = 0LL, __int64 EndByte = 0LL, const System::UnicodeString LeaseId = L"", bool GetMD5 = false);
	bool __fastcall DeleteBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString Snapshot = L"", const System::UnicodeString LeaseId = L"", const System::UnicodeString DeleteSnapshots = L"");
	bool __fastcall PutBlock(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString BlockId, System::DynamicArray<System::Byte> Content, const System::UnicodeString LeaseId = L"", const System::UnicodeString ContentMD5 = L"");
	bool __fastcall PutPage(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, System::DynamicArray<System::Byte> Content, __int64 StartByte, __int64 EndByte, System::UnicodeString PageWrite = L"update", const System::UnicodeString ContentMD5 = L"", const System::UnicodeString LeaseId = L"", const System::UnicodeString IfSeqNbLte = L"", const System::UnicodeString IfSeqNbLe = L"", const System::UnicodeString IfSeqNbEq = L"", const System::UnicodeString IfModifiedSince = L"", const System::UnicodeString IfUnmodifiedSince = L"", const System::UnicodeString IfMatch = L"", const System::UnicodeString IfNoneMatch = L"");
	bool __fastcall CopyBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString SourceContainer, const System::UnicodeString SourceBlob, const System::UnicodeString SourceSnapshot = L"", const System::UnicodeString SourceIfModifiedSince = L"", const System::UnicodeString SourceIfUnmodifiedSince = L"", const System::UnicodeString SourceIfMatch = L"", const System::UnicodeString SourceIfNoneMatch = L"", const System::UnicodeString IfModifiedSince = L"", const System::UnicodeString IfUnmodifiedSince = L"", const System::UnicodeString IfMatch = L"", const System::UnicodeString IfNoneMatch = L"", const System::UnicodeString SourceLeaseId = L"", const System::UnicodeString LeaseId = L"", const Classes::TStringList* MetaHeaders = (Classes::TStringList*)(0x0));
	System::UnicodeString __fastcall LeaseBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString LeaseAction = L"acquire", const System::UnicodeString LeaseId = L"");
	System::UnicodeString __fastcall SnapshotBlob(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString IfModifiedSince = L"", const System::UnicodeString IfUnmodifiedSince = L"", const System::UnicodeString IfMatch = L"", const System::UnicodeString IfNoneMatch = L"", const System::UnicodeString LeaseId = L"", const Classes::TStringList* MetaHeaders = (Classes::TStringList*)(0x0));
	System::UnicodeString __fastcall GetPageRegions(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString Snapshot = L"", __int64 StartByte = 0LL, __int64 EndByte = 0LL, const System::UnicodeString LeaseId = L"");
	System::UnicodeString __fastcall GetBlockList(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString BlockListType = L"", const System::UnicodeString Snapshot = L"", const System::UnicodeString LeaseId = L"");
	bool __fastcall PutBlockList(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString BlockList, const System::UnicodeString ContentMD5 = L"", const System::UnicodeString BlobCacheControl = L"", const System::UnicodeString BlobContentType = L"", const System::UnicodeString BlobContentEncoding = L"", const System::UnicodeString BlobContentLanguage = L"", const System::UnicodeString BlobContentMD5 = L"", const System::UnicodeString LeaseId = L"", const Classes::TStringList* MetaHeaders = (Classes::TStringList*)(0x0));
	bool __fastcall GetBlobProperties(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString Snapshot = L"", const System::UnicodeString LeaseId = L"");
	bool __fastcall SetBlobProperties(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString BlobCacheControl = L"", const System::UnicodeString BlobContentType = L"", const System::UnicodeString BlobContentEncoding = L"", const System::UnicodeString BlobContentLanguage = L"", const System::UnicodeString BlobContentMD5 = L"", const System::UnicodeString LeaseId = L"");
	bool __fastcall SetPageBlobProperties(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString BlobCacheControl = L"", const System::UnicodeString BlobContentType = L"", const System::UnicodeString BlobContentEncoding = L"", const System::UnicodeString BlobContentLanguage = L"", const System::UnicodeString BlobContentMD5 = L"", const System::UnicodeString BlobContentLength = L"", const System::UnicodeString SeqNbAction = L"", const System::UnicodeString BlobSeqNumber = L"", const System::UnicodeString LeaseId = L"");
	bool __fastcall GetBlobMetadata(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const System::UnicodeString Snapshot = L"", const System::UnicodeString LeaseId = L"");
	bool __fastcall SetBlobMetadata(const System::UnicodeString ContainerName, const System::UnicodeString BlobName, const Classes::TStringList* MetaHeaders, const System::UnicodeString LeaseId = L"");
	void __fastcall PopulateContainerProperties(Classes::TStrings* Props);
	bool __fastcall IsProperty(System::UnicodeString Name);
public:
	/* TAzureService.Destroy */ inline __fastcall virtual ~TAzureBlobService(void) { }
	
};


class DELPHICLASS TAzureTableService;
class PASCALIMPLEMENTATION TAzureTableService : public TAzureService
{
	typedef TAzureService inherited;
	
protected:
	System::UnicodeString __fastcall UpdatedDate(void);
	
public:
	__fastcall virtual TAzureTableService(TAzureConnectionString* AConnectionString);
	System::UnicodeString __fastcall QueryTables(const System::UnicodeString StartingTable = L"");
	System::UnicodeString __fastcall QueryEntities(const System::UnicodeString TableName, const System::UnicodeString FilterExpression = L"")/* overload */;
	System::UnicodeString __fastcall QueryEntities(const System::UnicodeString TableName, const System::UnicodeString PartitionKey, const System::UnicodeString RowKey)/* overload */;
	bool __fastcall CreateTable(const System::UnicodeString TableName);
	bool __fastcall DeleteTable(const System::UnicodeString TableName);
	System::UnicodeString __fastcall InsertEntity(const System::UnicodeString TableName, Dbxjson::TJSONObject* entity);
	bool __fastcall UpdateEntity(const System::UnicodeString TableName, Dbxjson::TJSONObject* entity);
	bool __fastcall MergeEntity(const System::UnicodeString TableName, Dbxjson::TJSONObject* entity);
	bool __fastcall DeleteEntity(const System::UnicodeString TableName, const System::UnicodeString PartitionKey, const System::UnicodeString RowKey);
public:
	/* TAzureService.Destroy */ inline __fastcall virtual ~TAzureTableService(void) { }
	
};


class DELPHICLASS TAzureQueueService;
class PASCALIMPLEMENTATION TAzureQueueService : public TAzureService
{
	typedef TAzureService inherited;
	
private:
	System::UnicodeString __fastcall XMLText(const System::UnicodeString xml, const System::UnicodeString NodeName);
	
public:
	System::UnicodeString __fastcall ListQueues(System::TVarRec *params, const int params_Size, System::TVarRec *values, const int values_Size);
	bool __fastcall CreateQueue(const System::UnicodeString QueueName)/* overload */;
	bool __fastcall CreateQueue(const System::UnicodeString QueueName, const Classes::TStringList* MetaDataHeaders)/* overload */;
	bool __fastcall DeleteQueue(const System::UnicodeString QueueName);
	bool __fastcall GetQueueMetadata(const System::UnicodeString QueueName);
	bool __fastcall PutQueueMetadata(const System::UnicodeString QueueName, const Classes::TStringList* MetaDataHeaders);
	bool __fastcall PutMessage(const System::UnicodeString QueueName, const System::UnicodeString MessageText, const int TimeToLive = 0x0);
	System::UnicodeString __fastcall GetMessages(const System::UnicodeString QueueName, int NumOfMessages = 0x0, int VisibilityTimeout = 0x0);
	System::UnicodeString __fastcall PeekMessages(const System::UnicodeString QueueName, int NumOfMessages);
	bool __fastcall DeleteMessage(const System::UnicodeString QueueName, const System::UnicodeString MessageId, const System::UnicodeString PopReceipt);
	bool __fastcall ClearMessages(const System::UnicodeString QueueName);
	System::UnicodeString __fastcall GetPopReceipt(const System::UnicodeString QueueMessage);
	System::UnicodeString __fastcall GetMessageId(const System::UnicodeString QueueMessage);
public:
	/* TAzureService.Create */ inline __fastcall virtual TAzureQueueService(TAzureConnectionString* AConnectionString) : TAzureService(AConnectionString) { }
	/* TAzureService.Destroy */ inline __fastcall virtual ~TAzureQueueService(void) { }
	
};


class PASCALIMPLEMENTATION TAzureHTTP : public Idhttp::TIdHTTP
{
	typedef Idhttp::TIdHTTP inherited;
	
private:
	Idauthentication::TIdAuthentication* FAuthentication;
	System::UnicodeString FProtocol;
	
protected:
	virtual void __fastcall InitComponent(void);
	
public:
	__fastcall TAzureHTTP(void)/* overload */;
	HIDESBASE System::UnicodeString __fastcall Delete(System::UnicodeString AURL)/* overload */;
	HIDESBASE System::UnicodeString __fastcall Delete(System::UnicodeString AURL, Classes::TStream* AResponseStream)/* overload */;
	void __fastcall Merge(System::UnicodeString AURL, Classes::TStream* RequestStream);
	HIDESBASE void __fastcall Head(System::UnicodeString AURL);
	HIDESBASE System::UnicodeString __fastcall Put(System::UnicodeString AURL)/* overload */;
	void __fastcall SetBasicAuthentication(const System::UnicodeString user, const System::UnicodeString password);
	void __fastcall SetAuthentication(Idauthentication::TIdAuthentication* auth);
	__property System::UnicodeString Protocol = {read=FProtocol, write=FProtocol};
public:
	/* TIdCustomHTTP.Destroy */ inline __fastcall virtual ~TAzureHTTP(void) { }
	
/* Hoisted overloads: */
	
public:
	inline System::UnicodeString __fastcall  Put(System::UnicodeString AURL, Classes::TStream* ASource){ return Idhttp::TIdCustomHTTP::Put(AURL, ASource); }
	inline void __fastcall  Put(System::UnicodeString AURL, Classes::TStream* ASource, Classes::TStream* AResponseContent){ Idhttp::TIdCustomHTTP::Put(AURL, ASource, AResponseContent); }
	
};


//-- var, const, procedure ---------------------------------------------------
#define BlobPublicAccessContainer L"container"
#define BlobPublicAccessBlob L"blob"

}	/* namespace Dsazure */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazure;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazureHPP
