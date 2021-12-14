// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwfltvw.pas' rev: 22.00

#ifndef WwfltvwHPP
#define WwfltvwHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwfltvw
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwFilterDialogView;
class PASCALIMPLEMENTATION TwwFilterDialogView : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Grids::TStringGrid* StringGrid1;
	Buttons::TBitBtn* CancelBtn;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall StringGrid1DrawCell(System::TObject* Sender, int Col, int Row, const Types::TRect &Rect, Grids::TGridDrawState State);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall StringGrid1Enter(System::TObject* Sender);
	
private:
	void __fastcall ApplyIntl(void);
	
public:
	Stdctrls::TButton* OKBtn;
	__fastcall virtual TwwFilterDialogView(Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwFilterDialogView(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwFilterDialogView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwFilterDialogView(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall wwFilterDialogView(Classes::TComponent* tc, Classes::TList* FieldInfo);

}	/* namespace Wwfltvw */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwfltvw;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwfltvwHPP
