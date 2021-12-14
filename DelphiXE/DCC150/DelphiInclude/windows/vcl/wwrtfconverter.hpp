// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrtfconverter.pas' rev: 22.00

#ifndef WwrtfconverterHPP
#define WwrtfconverterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrtfconverter
{
//-- type declarations -------------------------------------------------------
typedef short TwwFileCodeError;

typedef System::AnsiString TwwAnsiString;

typedef int __stdcall (*TwwConvertCallbackOut)(int cchBuff, int nPercent);

typedef int __stdcall (*TwwConvertCallbackIn)(int rgfOptions, int p2);

typedef HRESULT __stdcall (*TwwInitConverter32)(unsigned hwnd, System::WideChar * szModule);

typedef void __stdcall (*TwwUninitConverter)(void);

typedef short __stdcall (*TwwIsFormatCorrect32)(unsigned ghszFile, unsigned ghszClass);

typedef short __stdcall (*TwwForeignToRtf32)(unsigned hFile, _di_IStorage pStorage, unsigned hBuffer, unsigned hClass, unsigned hSubset, TwwConvertCallbackOut OutFunction);

typedef short __stdcall (*TwwRtfToForeign32)(unsigned hFile, _di_IStorage pStorage, unsigned hBuffer, unsigned hClass, TwwConvertCallbackIn InFunction);

typedef void * __stdcall (*TwwRegisterApp)(unsigned lFlags, void * lpFuture);

typedef int __stdcall (*TwwCchFetchLpszError)(int fce, System::WideChar * lpszError, int cb);

typedef void __stdcall (*TwwGetReadNames)(unsigned haszClass, unsigned haszDescrip, unsigned haszExt);

typedef void __stdcall (*TwwGetWriteNames)(unsigned haszClass, unsigned haszDescrip, unsigned haszExt);

typedef int __stdcall (*TwwRegisterConverter)(unsigned hkeyRoot);

class DELPHICLASS TwwRTFConverter;
class PASCALIMPLEMENTATION TwwRTFConverter : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	unsigned FLibrary;
	TwwInitConverter32 InitConverter32;
	TwwUninitConverter UninitConverter;
	TwwIsFormatCorrect32 IsFormatCorrect32;
	TwwForeignToRtf32 ForeignToRtf32;
	TwwRtfToForeign32 RtfToForeign32;
	TwwRegisterApp RegisterApp;
	TwwCchFetchLpszError CchFetchLpszError;
	TwwGetReadNames GetReadNames;
	TwwGetWriteNames GetWriteNames;
	TwwRegisterConverter RegisterConverter;
	void __fastcall LoadLibrary(HWND hwnd, System::UnicodeString libpath);
	void __fastcall UnloadLibrary(void);
	
public:
	__fastcall TwwRTFConverter(HWND hwnd, System::UnicodeString libpath);
	__fastcall virtual ~TwwRTFConverter(void);
	bool __fastcall IsKnownFormat(System::UnicodeString FilePath);
	short __fastcall ForeignToRTF(Wwriched::TwwCustomRichEdit* richedit, System::UnicodeString FilePath, System::UnicodeString formatClass = L"");
	short __fastcall RTFToForeign(Wwriched::TwwCustomRichEdit* richedit, System::UnicodeString FilePath, System::UnicodeString formatClass = L"");
	System::UnicodeString __fastcall GetErrorMessage(short ErrorCode);
};


class DELPHICLASS TwwRtfConverterList;
class PASCALIMPLEMENTATION TwwRtfConverterList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Classes::TStringList* RawDescription;
	
public:
	Classes::TStringList* libpath;
	Classes::TStringList* Description;
	Classes::TStringList* formatClass;
	Classes::TStringList* Filters;
	System::UnicodeString FilterList;
	__fastcall TwwRtfConverterList(bool import);
	__fastcall virtual ~TwwRtfConverterList(void);
	void __fastcall GetConverterList(HKEY regRoot, System::UnicodeString regPath, System::UnicodeString appName, bool import);
};


//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt wwfceTrue = 0x1;
static const System::ShortInt wwfceNoErr = 0x0;
static const System::ShortInt wwfceOpenInFileErr = -1;
static const System::ShortInt wwfceReadErr = -2;
static const System::ShortInt wwfceWriteErr = -4;
static const System::ShortInt wwfceInvalidFile = -5;
static const System::ShortInt wwfceNoMemory = -8;
static const System::ShortInt wwfceOpenOutFileErr = -12;
static const System::ShortInt wwfceUserCancel = -13;
static const System::ShortInt wwfceWrongFileType = -14;

}	/* namespace Wwrtfconverter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrtfconverter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrtfconverterHPP
