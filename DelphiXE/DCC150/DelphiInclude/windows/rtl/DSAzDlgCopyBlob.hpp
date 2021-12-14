// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgCopyBlob.pas' rev: 22.00

#ifndef DsazdlgcopyblobHPP
#define DsazdlgcopyblobHPP

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
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgcopyblob
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzCopyBlob;
class PASCALIMPLEMENTATION TAzCopyBlob : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TGroupBox* gbDestination;
	Stdctrls::TLabel* Label1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TLabel* Label3;
	Stdctrls::TLabel* Label4;
	Stdctrls::TEdit* edtModifiedSince;
	Stdctrls::TEdit* edtUnmodified;
	Stdctrls::TEdit* edtNoneMatch;
	Stdctrls::TEdit* edtMatch;
	Valedit::TValueListEditor* vleMeta;
	Stdctrls::TButton* btnAddMetadata;
	Stdctrls::TButton* btnDelMetadata;
	Extctrls::TLabeledEdit* lbeDestContainer;
	Extctrls::TLabeledEdit* lbeDestBlob;
	Stdctrls::TGroupBox* gbSource;
	Stdctrls::TLabel* Label5;
	Stdctrls::TLabel* Label6;
	Stdctrls::TLabel* Label7;
	Stdctrls::TLabel* Label8;
	Stdctrls::TEdit* edtSrcMod;
	Stdctrls::TEdit* edtSrcUnmod;
	Stdctrls::TEdit* edtSrcNoneMatch;
	Stdctrls::TEdit* edtSrcMatch;
	void __fastcall btnAddMetadataClick(System::TObject* Sender);
	void __fastcall btnDelMetadataClick(System::TObject* Sender);
	void __fastcall lbeDestContainerChange(System::TObject* Sender);
	
private:
	void __fastcall ValidateCopy(void);
	
public:
	System::UnicodeString __fastcall GetSrcModifiedSince(void);
	System::UnicodeString __fastcall GetSrcUnmodifiedSince(void);
	System::UnicodeString __fastcall GetSrcMatch(void);
	System::UnicodeString __fastcall GetSrcNoneMatch(void);
	System::UnicodeString __fastcall GetDestContainer(void);
	void __fastcall SetDestContainer(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetDestBlob(void);
	System::UnicodeString __fastcall GetDestModifiedSince(void);
	System::UnicodeString __fastcall GetDestUnmodifiedSince(void);
	System::UnicodeString __fastcall GetDestMatch(void);
	System::UnicodeString __fastcall GetDestNoneMatch(void);
	void __fastcall AssignMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall PopulateWithMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	Classes::TStrings* __fastcall RawMetadata(void);
	__property System::UnicodeString DestContainer = {read=GetDestContainer, write=SetDestContainer};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzCopyBlob(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzCopyBlob(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzCopyBlob(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzCopyBlob(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgcopyblob */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgcopyblob;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgcopyblobHPP
