// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwexport.pas' rev: 22.00

#ifndef WwexportHPP
#define WwexportHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwexport
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwGridExportType { wwgetTxt, wwgetHTML, wwgetSYLK, wwgetXML };
#pragma option pop

#pragma option push -b-
enum TwwGridExportEnocodingType { wwetDefault, wwetASCII, wwetBigEndianUnicode, wwetUTF7, wwetUTF8, wwetUnicode };
#pragma option pop

#pragma option push -b-
enum TwwExportSaveOption { esoShowHeader, esoShowFooter, esoDynamicColors, esoShowTitle, esoDblQuoteFields, esoSaveSelectedOnly, esoAddControls, esoBestColFit, esoShowRecordNo, esoEmbedURL, esoShowAlternating, esoTransparentGrid, esoClipboard };
#pragma option pop

typedef System::Set<TwwExportSaveOption, TwwExportSaveOption::esoShowHeader, TwwExportSaveOption::esoClipboard>  TwwExportSaveOptions;

class DELPHICLASS TwwExportOptions;
class PASCALIMPLEMENTATION TwwExportOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::UnicodeString FFileName;
	TwwGridExportType FExportType;
	System::UnicodeString FDelimiter;
	TwwExportSaveOptions FOptions;
	System::UnicodeString FTitleName;
	int FOutputWidthinTwips;
	int FHTMLBorderWidth;
	bool FUseOldClipboardSaving;
	bool FUseA1SYLKReference;
	TwwGridExportEnocodingType FEncoding;
	System::UnicodeString __fastcall GetFileName(void);
	void __fastcall SetFileName(System::UnicodeString val);
	System::UnicodeString __fastcall GetDelimiter(void);
	void __fastcall SetDelimiter(System::UnicodeString val);
	bool __fastcall IsDelimiterStored(void);
	
protected:
	virtual System::UnicodeString __fastcall AddQuotes(System::UnicodeString s);
	int __fastcall XRecNoOffset(void);
	int __fastcall QuotesPad(void);
	
public:
	Classes::TComponent* Owner;
	virtual void __fastcall Save(void);
	void __fastcall ExportToStream(Classes::TStream* fs);
	__fastcall virtual TwwExportOptions(Classes::TComponent* AOwner);
	__property bool UseOldClipboardSaving = {read=FUseOldClipboardSaving, write=FUseOldClipboardSaving, default=0};
	__property bool UseA1SYLKReference = {read=FUseA1SYLKReference, write=FUseA1SYLKReference, default=0};
	
__published:
	__property System::UnicodeString Delimiter = {read=GetDelimiter, write=SetDelimiter, stored=IsDelimiterStored};
	__property TwwGridExportType ExportType = {read=FExportType, write=FExportType, default=0};
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property int HTMLBorderWidth = {read=FHTMLBorderWidth, write=FHTMLBorderWidth, default=1};
	__property TwwExportSaveOptions Options = {read=FOptions, write=FOptions, default=1049};
	__property int OutputWidthinTwips = {read=FOutputWidthinTwips, write=FOutputWidthinTwips, default=0};
	__property System::UnicodeString TitleName = {read=FTitleName, write=FTitleName};
	__property TwwGridExportEnocodingType Encoding = {read=FEncoding, write=FEncoding, default=5};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwExportOptions(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwexport */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwexport;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwexportHPP
