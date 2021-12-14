// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgBlockBlob.pas' rev: 22.00

#ifndef DsazdlgblockblobHPP
#define DsazdlgblockblobHPP

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
#include <Grids.hpp>	// Pascal unit
#include <ValEdit.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgblockblob
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzBlockBlob;
class PASCALIMPLEMENTATION TAzBlockBlob : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TLabel* lblBlobName;
	Stdctrls::TEdit* edtBlobName;
	Stdctrls::TGroupBox* GroupBox1;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TLabel* Label4;
	Stdctrls::TEdit* edtContentType;
	Stdctrls::TEdit* edtLanguage;
	Stdctrls::TEdit* edtMD5;
	Stdctrls::TEdit* edtEncoding;
	Stdctrls::TEdit* edtFilename;
	Stdctrls::TLabel* lblContentLocation;
	Stdctrls::TButton* btnFile;
	Valedit::TValueListEditor* vleMeta;
	Stdctrls::TButton* btnAddMetadata;
	Stdctrls::TButton* btnDelMetadata;
	void __fastcall btnFileClick(System::TObject* Sender);
	void __fastcall btnAddMetadataClick(System::TObject* Sender);
	void __fastcall btnDelMetadataClick(System::TObject* Sender);
	void __fastcall edtBlobNameChange(System::TObject* Sender);
	
private:
	void __fastcall SetBlobName(const System::UnicodeString Name);
	void __fastcall SetContentType(const System::UnicodeString Name);
	void __fastcall SetContentLanguage(const System::UnicodeString Name);
	void __fastcall SetContentMD5(const System::UnicodeString Name);
	void __fastcall SetContentEncoding(const System::UnicodeString Name);
	
public:
	System::UnicodeString __fastcall GetBlobName(void);
	System::UnicodeString __fastcall GetContentType(void);
	System::UnicodeString __fastcall GetContentLanguage(void);
	System::UnicodeString __fastcall GetContentMD5(void);
	System::UnicodeString __fastcall GetContentEncoding(void);
	System::UnicodeString __fastcall GetContentLocation(void);
	void __fastcall AssignMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall PopulateWithMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall SetOKCaption(const System::UnicodeString Name);
	Classes::TStrings* __fastcall RawMetadata(void);
	__property System::UnicodeString BlobName = {read=GetBlobName, write=SetBlobName};
	__property System::UnicodeString ContentType = {read=GetContentType, write=SetContentType};
	__property System::UnicodeString ContentLanguage = {read=GetContentLanguage, write=SetContentLanguage};
	__property System::UnicodeString ContentEncoding = {read=GetContentEncoding, write=SetContentEncoding};
	__property System::UnicodeString ContentMD5 = {read=GetContentMD5, write=SetContentMD5};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzBlockBlob(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzBlockBlob(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzBlockBlob(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzBlockBlob(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgblockblob */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgblockblob;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgblockblobHPP
