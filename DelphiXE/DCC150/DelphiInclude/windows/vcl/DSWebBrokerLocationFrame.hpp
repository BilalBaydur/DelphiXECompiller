// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSWebBrokerLocationFrame.pas' rev: 22.00

#ifndef DswebbrokerlocationframeHPP
#define DswebbrokerlocationframeHPP

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
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <StdActns.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dswebbrokerlocationframe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSWebBrokerLocationFrameC;
class PASCALIMPLEMENTATION TDSWebBrokerLocationFrameC : public Forms::TFrame
{
	typedef Forms::TFrame inherited;
	
__published:
	Stdctrls::TLabel* Label1;
	Stdctrls::TEdit* LocationEdit;
	Stdctrls::TButton* BrowseBtn;
	Actnlist::TActionList* ActionList1;
	Stdactns::TBrowseForFolder* BrowseForFolder1;
	void __fastcall BrowseForFolder1BeforeExecute(System::TObject* Sender);
	void __fastcall BrowseForFolder1Accept(System::TObject* Sender);
	
private:
	System::UnicodeString __fastcall LocationEditText(void);
	void __fastcall LocationEditChange(System::TObject* Sender);
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSWebBrokerLocationFrameC(Classes::TComponent* AOwner) : Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSWebBrokerLocationFrameC(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSWebBrokerLocationFrameC(HWND ParentWindow) : Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dswebbrokerlocationframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dswebbrokerlocationframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DswebbrokerlocationframeHPP
