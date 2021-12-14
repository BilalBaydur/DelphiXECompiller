// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXRSAFilter.pas' rev: 22.00

#ifndef DbxrsafilterHPP
#define DbxrsafilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DBXOpenSSL.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxrsafilter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRSAFilter;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TRSAFilter : public Dbxtransport::TTransportFilter
{
	typedef Dbxtransport::TTransportFilter inherited;
	
private:
	bool FUseGlobalKey;
	Dbxopenssl::TRSACypher* FRSACypher;
	int FKeyLength;
	__int64 FKeyExponent;
	void __fastcall InitRSA(void);
	
protected:
	virtual Dbxplatform::TDBXStringArray __fastcall GetParameters(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetUserParameters(void);
	
public:
	__fastcall virtual TRSAFilter(void);
	__fastcall virtual ~TRSAFilter(void);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessInput(const System::DynamicArray<System::Byte> Data);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessOutput(const System::DynamicArray<System::Byte> Data);
	virtual System::UnicodeString __fastcall Id(void);
	virtual bool __fastcall SetConfederateParameter(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual System::UnicodeString __fastcall GetParameterValue(const System::UnicodeString ParamName);
	virtual bool __fastcall SetParameterValue(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual bool __fastcall IsPublicKeyCryptograph(void);
};


//-- var, const, procedure ---------------------------------------------------
#define USE_GLOBAL L"UseGlobalKey"
#define PUBLIC_KEY L"PublicKey"
#define KEY_LENGTH L"KeyLength"
#define KEY_EXPONENT L"KeyExponent"

}	/* namespace Dbxrsafilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxrsafilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxrsafilterHPP
