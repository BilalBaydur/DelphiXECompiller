// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXEncryption.pas' rev: 22.00

#ifndef DbxencryptionHPP
#define DbxencryptionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxencryption
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TPC1Cypher;
class PASCALIMPLEMENTATION TPC1Cypher/* [[sealed]] */ : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte TEMPXORVeri;
	
public:
	__fastcall TPC1Cypher(void)/* overload */;
	__fastcall TPC1Cypher(const System::UnicodeString Key)/* overload */;
	System::Byte __fastcall Cypher(const System::Byte C);
	System::Byte __fastcall Decypher(const System::Byte C);
	bool __fastcall SetEncryptionKey(const System::UnicodeString Key);
	void __fastcall Reset(void);
	
protected:
	System::UnicodeString __fastcall GetEncryptionKey(void);
	
private:
	bool __fastcall Init(void);
	int __fastcall Assemble(void);
	int __fastcall Code(const int I);
	int FSi;
	int FX1a2;
	Dbxplatform::TDBXInt32s FX1a0;
	System::DynamicArray<System::Byte> FCle;
	// System::TArray__1<System::Byte>  FCle;
	System::UnicodeString FCypherKey;
	
public:
	__property System::UnicodeString EncryptionKey = {read=GetEncryptionKey};
	
private:
	static const System::ShortInt Keylen = 0x10;
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPC1Cypher(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxencryption */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxencryption;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxencryptionHPP
