// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXSqlScanner.pas' rev: 22.00

#ifndef DbxsqlscannerHPP
#define DbxsqlscannerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxsqlscanner
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSqlScanner;
class PASCALIMPLEMENTATION TDBXSqlScanner : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDBXSqlScanner(const System::UnicodeString QuoteChar, const System::UnicodeString QuotePrefix, const System::UnicodeString QuoteSuffix);
	__fastcall virtual ~TDBXSqlScanner(void);
	void __fastcall RegisterId(const System::UnicodeString Id, const int Token);
	void __fastcall Init(const System::UnicodeString Query)/* overload */;
	void __fastcall Init(const System::UnicodeString Query, const int StartIndex)/* overload */;
	int __fastcall LookAtNextToken(void);
	int __fastcall NextToken(void);
	bool __fastcall IsKeyword(const System::UnicodeString Keyword);
	
protected:
	System::UnicodeString __fastcall GetId(void);
	
private:
	static System::WideChar __fastcall ToQuoteChar(const System::UnicodeString QuoteString);
	void __fastcall ResetId(void);
	int __fastcall ScanNumber(void);
	int __fastcall QuotedToken(void);
	int __fastcall PrefixQuotedToken(void);
	int __fastcall UnquotedToken(void);
	int __fastcall ScanSymbol(void);
	void __fastcall SkipToEndOfLine(void);
	System::UnicodeString FQuotePrefix;
	System::UnicodeString FQuoteSuffix;
	System::UnicodeString FQuote;
	System::WideChar FQuotePrefixChar;
	System::WideChar FQuoteSuffixChar;
	System::WideChar FQuoteChar;
	Dbxplatform::TDBXObjectStore* FKeywords;
	System::UnicodeString FQuery;
	int FQueryLength;
	int FIndex;
	int FStartOfId;
	int FEndOfId;
	System::UnicodeString FId;
	bool FWasId;
	bool FWasQuoted;
	System::WideChar FSymbol;
	
public:
	__property System::UnicodeString Id = {read=GetId};
	__property bool Quoted = {read=FWasQuoted, nodefault};
	__property System::WideChar Symbol = {read=FSymbol, nodefault};
	__property System::UnicodeString SqlQuery = {read=FQuery};
	__property int NextIndex = {read=FIndex, nodefault};
	static const System::ShortInt TokenEos = -1;
	
	static const System::ShortInt TokenId = -2;
	
	static const System::ShortInt TokenComma = -3;
	
	static const System::ShortInt TokenPeriod = -4;
	
	static const System::ShortInt TokenSemicolon = -5;
	
	static const System::ShortInt TokenOpenParen = -6;
	
	static const System::ShortInt TokenCloseParen = -7;
	
	static const System::ShortInt TokenNumber = -8;
	
	static const System::ShortInt TokenSymbol = -9;
	
	static const System::ShortInt TokenError = -10;
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsqlscanner */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsqlscanner;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsqlscannerHPP
