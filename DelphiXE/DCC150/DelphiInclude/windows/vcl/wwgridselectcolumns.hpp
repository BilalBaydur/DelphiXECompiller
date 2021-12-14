// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwgridselectcolumns.pas' rev: 22.00

#ifndef WwgridselectcolumnsHPP
#define WwgridselectcolumnsHPP

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
#include <Mask.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <CheckLst.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <wwgridfilter.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwtreeview.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwgridselectcolumns
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwGridSelectColumnsForm;
class PASCALIMPLEMENTATION TwwGridSelectColumnsForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
__published:
	Checklst::TCheckListBox* CheckListBox1;
	Wwdbigrd::TwwSelectColumnsTreeView* TreeView1;
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	
private:
	bool OKBtnpressed;
	Grids::TCustomGrid* FGrid;
	void __fastcall OKBtnClick(System::TObject* Sender);
	
public:
	Stdctrls::TButton* OKBtn;
	Stdctrls::TButton* CancelBtn;
	__fastcall virtual TwwGridSelectColumnsForm(Classes::TComponent* AOwner);
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TwwGridSelectColumnsForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TwwGridSelectColumnsForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwGridSelectColumnsForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TwwGridSelectColumnsForm* wwGridSelectColumnsForm;

}	/* namespace Wwgridselectcolumns */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwgridselectcolumns;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwgridselectcolumnsHPP
