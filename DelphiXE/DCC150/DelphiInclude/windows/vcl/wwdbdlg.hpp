// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwdbdlg.pas' rev: 22.00

#ifndef WwdbdlgHPP
#define WwdbdlgHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <wwdblook.hpp>	// Pascal unit
#include <wwidlg.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Wwdbigrd.hpp>	// Pascal unit
#include <Wwstr.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbdlg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDBLookupComboDlg;
class PASCALIMPLEMENTATION TwwDBLookupComboDlg : public Wwdblook::TwwDBCustomLookupCombo
{
	typedef Wwdblook::TwwDBCustomLookupCombo inherited;
	
private:
	Wwdbigrd::TwwDBGridOptions FGridOptions;
	Graphics::TColor FGridColor;
	Classes::TAlignment FGridTitleAlignment;
	Wwidlg::TwwDBLookupDlgOptions FOptions;
	System::UnicodeString FCaption;
	int FMaxWidth;
	int FMaxHeight;
	Wwidlg::TwwUserButtonEvent FUserButton1Click;
	Wwidlg::TwwUserButtonEvent FUserButton2Click;
	System::UnicodeString FUserButton1Caption;
	System::UnicodeString FUserButton2Caption;
	Wwidlg::TwwOnInitDialogEvent FOnInitDialog;
	Wwidlg::TwwOnInitDialogEvent FOnCloseDialog;
	Classes::TNotifyEvent FOnSortChange;
	bool FPictureMaskFromField;
	Classes::TStrings* FControlType;
	bool FControlInfoInDataset;
	Classes::TStrings* FPictureMasks;
	bool FPictureMaskFromDataSet;
	void __fastcall SetPictureMasks(Classes::TStrings* val);
	HIDESBASE void __fastcall SetControlType(Classes::TStrings* val);
	HIDESBASE void __fastcall SetOptions(Wwidlg::TwwDBLookupDlgOptions sel);
	void __fastcall SetGridOptions(Wwdbigrd::TwwDBGridOptions sel);
	
protected:
	virtual bool __fastcall IsLookupDlg(void);
	
public:
	__fastcall virtual TwwDBLookupComboDlg(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBLookupComboDlg(void);
	DYNAMIC void __fastcall DropDown(void);
	
__published:
	__property Controller;
	__property DisableThemes = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property ParentBiDiMode = {default=1};
	__property bool PictureMaskFromField = {read=FPictureMaskFromField, write=FPictureMaskFromField, default=0};
	__property Classes::TStrings* ControlType = {read=FControlType, write=SetControlType};
	__property bool ControlInfoInDataset = {read=FControlInfoInDataset, write=FControlInfoInDataset, default=1};
	__property bool PictureMaskFromDataset = {read=FPictureMaskFromDataSet, write=FPictureMaskFromDataSet, default=1};
	__property Classes::TStrings* PictureMasks = {read=FPictureMasks, write=SetPictureMasks};
	__property Wwidlg::TwwDBLookupDlgOptions Options = {read=FOptions, write=SetOptions, default=3};
	__property Wwdbigrd::TwwDBGridOptions GridOptions = {read=FGridOptions, write=SetGridOptions, default=9469};
	__property Graphics::TColor GridColor = {read=FGridColor, write=FGridColor, nodefault};
	__property Classes::TAlignment GridTitleAlignment = {read=FGridTitleAlignment, write=FGridTitleAlignment, nodefault};
	__property System::UnicodeString Caption = {read=FCaption, write=FCaption};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, nodefault};
	__property int MaxHeight = {read=FMaxHeight, write=FMaxHeight, nodefault};
	__property System::UnicodeString UserButton1Caption = {read=FUserButton1Caption, write=FUserButton1Caption};
	__property System::UnicodeString UserButton2Caption = {read=FUserButton2Caption, write=FUserButton2Caption};
	__property Wwidlg::TwwUserButtonEvent OnUserButton1Click = {read=FUserButton1Click, write=FUserButton1Click};
	__property Wwidlg::TwwUserButtonEvent OnUserButton2Click = {read=FUserButton2Click, write=FUserButton2Click};
	__property Wwidlg::TwwOnInitDialogEvent OnInitDialog = {read=FOnInitDialog, write=FOnInitDialog};
	__property Wwidlg::TwwOnInitDialogEvent OnCloseDialog = {read=FOnCloseDialog, write=FOnCloseDialog};
	__property Classes::TNotifyEvent OnSortChange = {read=FOnSortChange, write=FOnSortChange};
	__property Picture;
	__property SearchDelay = {default=0};
	__property Selected;
	__property DataField;
	__property DataSource;
	__property LookupTable;
	__property LookupField;
	__property SeqSearchOptions = {default=1};
	__property Style = {default=0};
	__property AutoSelect = {default=1};
	__property Color = {default=-16777211};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ButtonStyle = {default=0};
	__property ButtonEffects;
	__property ButtonWidth = {default=0};
	__property ButtonGlyph;
	__property Frame;
	__property ImeMode = {default=3};
	__property ImeName;
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property AutoDropDown;
	__property ShowButton;
	__property OrderByDisplay = {default=1};
	__property AllowClearKey;
	__property UseTFields = {default=1};
	__property ShowMatchText = {default=0};
	__property Touch;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnCloseUp;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnPerformCustomSearch;
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBLookupComboDlg(HWND ParentWindow) : Wwdblook::TwwDBCustomLookupCombo(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwdbdlg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbdlg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbdlgHPP
