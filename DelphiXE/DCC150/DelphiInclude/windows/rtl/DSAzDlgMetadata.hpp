// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAzDlgMetadata.pas' rev: 22.00

#ifndef DsazdlgmetadataHPP
#define DsazdlgmetadataHPP

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

//-- user supplied -----------------------------------------------------------

namespace Dsazdlgmetadata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TAzMetadata;
class PASCALIMPLEMENTATION TAzMetadata : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	Valedit::TValueListEditor* vleMeta;
	Stdctrls::TButton* btnDelMetadata;
	Stdctrls::TButton* btnAddMetadata;
	void __fastcall btnAddMetadataClick(System::TObject* Sender);
	void __fastcall btnDelMetadataClick(System::TObject* Sender);
	void __fastcall vleMetaStringsChange(System::TObject* Sender);
	
private:
	bool __fastcall IsMetadata(const System::UnicodeString Data);
	System::UnicodeString __fastcall MetadataName(const System::UnicodeString Data);
	System::UnicodeString __fastcall ShortName(const System::UnicodeString xmsData);
	
public:
	void __fastcall PopulateContentFromHeader(const Classes::TStrings* header, bool AChange = false);
	void __fastcall PopulateHeaderFromContainer(const Classes::TStrings* header);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAzMetadata(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAzMetadata(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAzMetadata(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAzMetadata(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsazdlgmetadata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsazdlgmetadata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsazdlgmetadataHPP
