// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgSnapshotBlob.pas' rev: 22.00

#ifndef DsazdlgsnapshotblobHPP
#define DsazdlgsnapshotblobHPP

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

namespace Dsazdlgsnapshotblob
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzSnapshotBlob;
class PASCALIMPLEMENTATION TAzSnapshotBlob : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Extctrls::TBevel* Bevel1;
	Stdctrls::TGroupBox* GroupBox1;
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
	void __fastcall btnAddMetadataClick(System::TObject* Sender);
	void __fastcall btnDelMetadataClick(System::TObject* Sender);
	
public:
	System::UnicodeString __fastcall GetModifiedSince(void);
	System::UnicodeString __fastcall GetUnmodifiedSince(void);
	System::UnicodeString __fastcall GetMatch(void);
	System::UnicodeString __fastcall GetNoneMatch(void);
	void __fastcall AssignMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	void __fastcall PopulateWithMetadata(const Generics_collections::TDictionary__2<System::UnicodeString,System::UnicodeString>* meta);
	Classes::TStrings* __fastcall RawMetadata(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzSnapshotBlob(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzSnapshotBlob(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzSnapshotBlob(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzSnapshotBlob(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgsnapshotblob */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgsnapshotblob;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgsnapshotblobHPP
