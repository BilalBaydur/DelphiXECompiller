// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataError.pas' rev: 22.00

#ifndef DbxmetadataerrorHPP
#define DbxmetadataerrorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadataerror
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMetaDataError;
class PASCALIMPLEMENTATION TDBXMetaDataError : public Dbxcommon::TDBXError
{
	typedef Dbxcommon::TDBXError inherited;
	
public:
	__fastcall TDBXMetaDataError(const System::WideString Message);
public:
	/* Exception.CreateFmt */ inline __fastcall TDBXMetaDataError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Dbxcommon::TDBXError(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall TDBXMetaDataError(int Ident)/* overload */ : Dbxcommon::TDBXError(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall TDBXMetaDataError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Dbxcommon::TDBXError(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall TDBXMetaDataError(const System::UnicodeString Msg, int AHelpContext) : Dbxcommon::TDBXError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TDBXMetaDataError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Dbxcommon::TDBXError(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TDBXMetaDataError(int Ident, int AHelpContext)/* overload */ : Dbxcommon::TDBXError(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TDBXMetaDataError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Dbxcommon::TDBXError(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TDBXMetaDataError(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadataerror */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadataerror;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadataerrorHPP
