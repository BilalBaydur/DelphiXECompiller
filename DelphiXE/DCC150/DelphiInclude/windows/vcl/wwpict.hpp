// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WwPict.pas' rev: 22.00

#ifndef WwpictHPP
#define WwpictHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwpict
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwPicResult { prComplete, prIncomplete, prEmpty, prError, prSyntax, prAmbiguous, prIncompNoFill };
#pragma option pop

struct DECLSPEC_DRECORD TwwProcessData
{
	
public:
	System::Word TermCh;
	bool SkipAutoFill;
};


class DELPHICLASS TwwPictureValidator;
class PASCALIMPLEMENTATION TwwPictureValidator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef System::DynamicArray<TwwProcessData> _TwwPictureValidator__1;
	
	
private:
	System::Word Status;
	System::Word Options;
	System::UnicodeString Pic;
	System::UnicodeString Input;
	System::Word I;
	System::Word J;
	_TwwPictureValidator__1 ProcessArray;
	int ProcessLevel;
	
protected:
	System::Word __fastcall GetTermCh(void);
	bool __fastcall GetSkipAutoFill(void);
	void __fastcall SetSkipAutoFill(bool Value);
	TwwPicResult __fastcall Process(System::Word TermCh);
	void __fastcall ToGroupEnd(System::Word &I, System::Word TermCh);
	void __fastcall ToParensEnd(System::Word &I);
	TwwPicResult __fastcall Iteration(void);
	System::Word __fastcall CalcTerm(void);
	TwwPicResult __fastcall Scan(void);
	TwwPicResult __fastcall CheckComplete(TwwPicResult Rslt, int startGroup, int EndGroup);
	void __fastcall Consume(System::WideChar Ch);
	TwwPicResult __fastcall Group(void);
	bool __fastcall IsOptionalParensGroup(int startGroup, int EndGroup);
	bool __fastcall SkipToComma(void);
	
public:
	__fastcall TwwPictureValidator(const System::UnicodeString APic, bool AutoFill);
	__fastcall virtual ~TwwPictureValidator(void);
	virtual bool __fastcall IsValidInput(System::UnicodeString &S, bool SuppressFill);
	virtual bool __fastcall IsValid(const System::UnicodeString S);
	virtual TwwPicResult __fastcall Picture(System::UnicodeString &AInput, bool AutoFill);
	bool __fastcall isSyntaxError(void);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwpict */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwpict;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwpictHPP
