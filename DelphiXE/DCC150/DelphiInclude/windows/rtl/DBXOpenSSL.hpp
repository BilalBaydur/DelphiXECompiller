// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXOpenSSL.pas' rev: 22.00

#ifndef DbxopensslHPP
#define DbxopensslHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <IdSSLOpenSSLHeaders.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxopenssl
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TKeyUsagePolicy { kupUseGlobalKey, kupUseLocalKey };
#pragma option pop

class DELPHICLASS TRSACypher;
class PASCALIMPLEMENTATION TRSACypher/* [[sealed]] */ : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static RSA *GLOBAL_RSA_KEY;
	static bool OPEN_SSL_LOADED;
	static bool OPEN_SSL_LOAD_STATUS;
	static System::UnicodeString ERR_LOAD;
	static System::TObject* KEY_MONITOR;
	static RSA *FLocalKey;
	static RSA *FConfederatedKey;
	static TKeyUsagePolicy FKeyUsagePolicy;
	
private:
	__classmethod void __fastcall Init();
	__classmethod void __fastcall Clear();
	__classmethod void __fastcall GenerateRSAKey(int keyLength, int exponent, System::TObject* monitor, PRSA &Key);
	PRSA __fastcall GetPrivateKey(void);
	System::TObject* __fastcall GetSynchMonitor(void);
	
protected:
	__classmethod System::UnicodeString __fastcall SSLErrorMessage();
	__classmethod void __fastcall ClearKey(PRSA &AKey);
	
public:
	__classmethod bool __fastcall LoadSSL()/* overload */;
	__classmethod bool __fastcall LoadSSLAndCreateKey(int keyLength = 0x400, __int64 exponent = 3LL)/* overload */;
	__classmethod System::UnicodeString __fastcall ErrorLoad();
	__classmethod void __fastcall GenerateGlobalKey(int keyLength = 0x400, __int64 exponent = 3LL);
	__fastcall TRSACypher(void)/* overload */;
	__fastcall TRSACypher(TKeyUsagePolicy KeyUsagePolicy)/* overload */;
	__fastcall virtual ~TRSACypher(void);
	void __fastcall GenerateKey(int keyLength = 0x400, __int64 exponent = 3LL);
	System::DynamicArray<System::Byte> __fastcall GetPublicKey(void);
	void __fastcall SetConfederatePublicKey(System::DynamicArray<System::Byte> publicKey);
	System::DynamicArray<System::Byte> __fastcall PrivateDecrypt(System::DynamicArray<System::Byte> data);
	System::DynamicArray<System::Byte> __fastcall PublicEncrypt(System::DynamicArray<System::Byte> data);
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word RSA_KEY_LENGTH = 0x400;
static const System::ShortInt RSA_KEY_EXPONENT = 0x3;

}	/* namespace Dbxopenssl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxopenssl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxopensslHPP
