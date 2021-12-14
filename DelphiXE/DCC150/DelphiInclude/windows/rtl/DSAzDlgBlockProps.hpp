// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgBlockProps.pas' rev: 22.00

#ifndef DsazdlgblockpropsHPP
#define DsazdlgblockpropsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgblockprops
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzBlockProps;
class PASCALIMPLEMENTATION TAzBlockProps : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Extctrls::TLabeledEdit* lbeCache;
	Extctrls::TLabeledEdit* lbeType;
	Extctrls::TLabeledEdit* lbeMD5;
	Extctrls::TLabeledEdit* lbeEncoding;
	Extctrls::TLabeledEdit* lbeLanguage;
	void __fastcall lbeCacheChange(System::TObject* Sender);
	
private:
	System::UnicodeString __fastcall GetCache(void);
	void __fastcall SetCache(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetType(void);
	void __fastcall SetType(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetMD5(void);
	void __fastcall SetMD5(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetEncoding(void);
	void __fastcall SetEncoding(const System::UnicodeString Data);
	System::UnicodeString __fastcall GetLanguage(void);
	void __fastcall SetLanguage(const System::UnicodeString Data);
	
public:
	void __fastcall SetBaseline(void);
	__property System::UnicodeString Cache = {read=GetCache, write=SetCache};
	__property System::UnicodeString ContentType = {read=GetType, write=SetType};
	__property System::UnicodeString MD5 = {read=GetMD5, write=SetMD5};
	__property System::UnicodeString Encoding = {read=GetEncoding, write=SetEncoding};
	__property System::UnicodeString Language = {read=GetLanguage, write=SetLanguage};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzBlockProps(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzBlockProps(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzBlockProps(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzBlockProps(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgblockprops */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgblockprops;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgblockpropsHPP
