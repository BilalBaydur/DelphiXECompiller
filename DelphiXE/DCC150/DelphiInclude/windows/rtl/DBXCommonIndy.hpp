// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXCommonIndy.pas' rev: 22.00

#ifndef DbxcommonindyHPP
#define DbxcommonindyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <IdSSLOpenSSL.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxcommonindy
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TX500PrincipalIndy;
class PASCALIMPLEMENTATION TX500PrincipalIndy : public Dbxcommon::TX500Principal
{
	typedef Dbxcommon::TX500Principal inherited;
	
protected:
	Idsslopenssl::TIdX509Name* FIdX509Name;
	bool FInstanceOwner;
	
public:
	__fastcall virtual TX500PrincipalIndy(Idsslopenssl::TIdX509Name* idX509Name, bool instanceOwner);
	__fastcall virtual ~TX500PrincipalIndy(void);
	virtual System::UnicodeString __fastcall GetName(void);
	virtual int __fastcall GetEncoded(void);
};


class DELPHICLASS TX509CertificateIndy;
class PASCALIMPLEMENTATION TX509CertificateIndy : public Dbxcommon::TX509Certificate
{
	typedef Dbxcommon::TX509Certificate inherited;
	
protected:
	Idsslopenssl::TIdX509* FIdX509;
	TX500PrincipalIndy* FSubjectPrincipal;
	TX500PrincipalIndy* FIssuerPrincipal;
	bool FInstanceOwner;
	
public:
	__fastcall virtual TX509CertificateIndy(System::UnicodeString CertFile)/* overload */;
	__fastcall virtual TX509CertificateIndy(Idsslopenssl::TIdX509* idX509, bool instanceOwner)/* overload */;
	__fastcall virtual ~TX509CertificateIndy(void);
	virtual System::DynamicArray<System::Byte> __fastcall GetEncoded(void)/* overload */;
	virtual Dbxcommon::TPublicKey* __fastcall GetPublicKey(void)/* overload */;
	virtual bool __fastcall Verify(Dbxcommon::TPublicKey* key)/* overload */;
	virtual void __fastcall CheckValidity(void)/* overload */;
	virtual void __fastcall CheckValidity(System::TDateTime ADate)/* overload */;
	virtual System::TDateTime __fastcall GetNotAfter(void);
	virtual System::TDateTime __fastcall GetNotBefore(void);
	virtual int __fastcall GetBasicConstraints(void);
	virtual System::UnicodeString __fastcall GetSerialNumber(void);
	virtual int __fastcall GetVersion(void);
	virtual System::UnicodeString __fastcall GetSigAlgName(void);
	virtual System::UnicodeString __fastcall GetSignature(void);
	virtual Dbxcommon::TX500Principal* __fastcall GetIssuerX500Principal(void);
	virtual Dbxcommon::TX500Principal* __fastcall GetSubjectX500Principal(void);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxcommonindy */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxcommonindy;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxcommonindyHPP
