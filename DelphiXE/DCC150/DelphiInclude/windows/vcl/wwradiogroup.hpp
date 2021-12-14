// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwradiogroup.pas' rev: 22.00

#ifndef WwradiogroupHPP
#define WwradiogroupHPP

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
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwradiobutton.hpp>	// Pascal unit
#include <wwclearbuttongroup.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Wwdbgrid.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwradiogroup
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwCustomRadioGroup;
typedef void __fastcall (__closure *TwwCreateRadioButton)(TwwCustomRadioGroup* Sender, Wwradiobutton::TwwRadioButton* RadioButton);

class DELPHICLASS TwwRGEditFrame;
class PASCALIMPLEMENTATION TwwRGEditFrame : public Wwframe::TwwEditFrame
{
	typedef Wwframe::TwwEditFrame inherited;
	
__published:
	__property FocusBorders = {default=0};
	__property NonFocusBorders = {default=0};
public:
	/* TwwEditFrame.Create */ inline __fastcall TwwRGEditFrame(Classes::TComponent* Owner) : Wwframe::TwwEditFrame(Owner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwRGEditFrame(void) { }
	
};


class DELPHICLASS TwwRGWinButtonIndents;
class PASCALIMPLEMENTATION TwwRGWinButtonIndents : public Wwradiobutton::TwwWinButtonIndents
{
	typedef Wwradiobutton::TwwWinButtonIndents inherited;
	
protected:
	virtual void __fastcall Repaint(Controls::TWinControl* FWinControl);
public:
	/* TwwWinButtonIndents.Create */ inline __fastcall TwwRGWinButtonIndents(Classes::TComponent* AOwner) : Wwradiobutton::TwwWinButtonIndents(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwRGWinButtonIndents(void) { }
	
};


class PASCALIMPLEMENTATION TwwCustomRadioGroup : public Wwclearbuttongroup::TwwCustomTransparentGroupBox
{
	typedef Wwclearbuttongroup::TwwCustomTransparentGroupBox inherited;
	
private:
	TwwCreateRadioButton FOnCreateRadioButton;
	Wwradiobutton::TwwWinButtonIndents* FIndents;
	Wwframe::TwwEditFrame* FFrame;
	TwwRGEditFrame* FButtonFrame;
	Classes::TStrings* FItems;
	int FItemIndex;
	int FColumns;
	bool FReading;
	bool FUpdating;
	bool FShowBorder;
	bool FShowGroupCaption;
	bool FShowFocusRect;
	bool FTransparentActiveItem;
	Imglist::TCustomImageList* FImages;
	Imglist::TCustomImageList* FGlyphImages;
	Classes::TList* FButtons;
	Graphics::TColor PaintCopyTextColor;
	bool FShowText;
	bool FFocused;
	bool SkipSetChildFocus;
	bool FWordWrap;
	Classes::TAlignment FAlignment;
	bool FNoSpacing;
	bool FAnyClickToggles;
	bool FDisableThemes;
	Wwintl::TwwController* FController;
	bool FArrowsModifySelection;
	void __fastcall SetController(Wwintl::TwwController* Value);
	void __fastcall ArrangeButtons(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItems(Classes::TStrings* Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual bool __fastcall StoreItemIndex(void);
	virtual bool __fastcall IsTransparent(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall DoCreateRadioButton(Wwradiobutton::TwwRadioButton* RadioButton);
	virtual void __fastcall SetParent(Controls::TWinControl* AParent);
	virtual void __fastcall Paint(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual bool __fastcall CanModify(void);
	virtual bool __fastcall HaveBorder(void);
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, stored=StoreItemIndex, default=-1};
	__property Classes::TStrings* Items = {read=FItems, write=SetItems};
	
public:
	Graphics::TColor LastBrushColor;
	bool InCNKeyDown;
	__fastcall virtual TwwCustomRadioGroup(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCustomRadioGroup(void);
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	void __fastcall UpdateButtons(void);
	__property Wwintl::TwwController* Controller = {read=FController, write=SetController};
	__property TwwRGEditFrame* ButtonFrame = {read=FButtonFrame, write=FButtonFrame};
	__property Wwframe::TwwEditFrame* Frame = {read=FFrame, write=FFrame};
	__property bool ShowBorder = {read=FShowBorder, write=FShowBorder, default=1};
	__property bool ShowGroupCaption = {read=FShowGroupCaption, write=FShowGroupCaption, default=1};
	__property bool ShowFocusRect = {read=FShowFocusRect, write=FShowFocusRect, default=1};
	__property bool TransparentActiveItem = {read=FTransparentActiveItem, write=FTransparentActiveItem, default=0};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=FImages};
	__property Imglist::TCustomImageList* GlyphImages = {read=FGlyphImages, write=FGlyphImages};
	__property Wwradiobutton::TwwWinButtonIndents* Indents = {read=FIndents, write=FIndents};
	__property TwwCreateRadioButton OnCreateRadioButton = {read=FOnCreateRadioButton, write=FOnCreateRadioButton};
	__property bool ShowText = {read=FShowText, write=FShowText, default=1};
	__property bool WordWrap = {read=FWordWrap, write=FWordWrap, default=0};
	__property Classes::TLeftRight Alignment = {read=FAlignment, write=FAlignment, default=1};
	__property bool NoSpacing = {read=FNoSpacing, write=FNoSpacing, default=0};
	__property bool AnyClickToggles = {read=FAnyClickToggles, write=FAnyClickToggles, nodefault};
	__property bool ArrowsModifySelection = {read=FArrowsModifySelection, write=FArrowsModifySelection, default=0};
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomRadioGroup(HWND ParentWindow) : Wwclearbuttongroup::TwwCustomTransparentGroupBox(ParentWindow) { }
	
};


class DELPHICLASS TwRadioGroup;
class PASCALIMPLEMENTATION TwRadioGroup : public TwwCustomRadioGroup
{
	typedef TwwCustomRadioGroup inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption;
	__property Color = {default=-16777211};
	__property Columns = {default=1};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ButtonFrame;
	__property ItemIndex = {default=-1};
	__property Items;
	__property Constraints;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property ShowBorder = {default=1};
	__property ShowGroupCaption = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Transparent = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TwwCustomRadioGroup.Create */ inline __fastcall virtual TwRadioGroup(Classes::TComponent* AOwner) : TwwCustomRadioGroup(AOwner) { }
	/* TwwCustomRadioGroup.Destroy */ inline __fastcall virtual ~TwRadioGroup(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwRadioGroup(HWND ParentWindow) : TwwCustomRadioGroup(ParentWindow) { }
	
};


class DELPHICLASS TwwRadioGroup;
class PASCALIMPLEMENTATION TwwRadioGroup : public TwwCustomRadioGroup
{
	typedef TwwCustomRadioGroup inherited;
	
private:
	Dbctrls::TFieldDataLink* FDataLink;
	System::UnicodeString FValue;
	Classes::TStrings* FValues;
	bool FInSetValue;
	Classes::TNotifyEvent FOnChange;
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall UpdateData(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField(void);
	Db::TDataSource* __fastcall GetDataSource(void);
	Db::TField* __fastcall GetField(void);
	bool __fastcall GetReadOnly(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetValue(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetItems(Classes::TStrings* Value);
	void __fastcall SetValues(Classes::TStrings* Value);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE void __fastcall SetColor(Graphics::TColor Value);
	Graphics::TColor __fastcall GetColor(void);
	HIDESBASE bool __fastcall IsColorStored(void);
	
protected:
	virtual bool __fastcall StoreItemIndex(void);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC void __fastcall Click(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual bool __fastcall CanModify(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	__property Dbctrls::TFieldDataLink* DataLink = {read=FDataLink};
	
public:
	__fastcall virtual TwwRadioGroup(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwRadioGroup(void);
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment(void);
	__property Db::TField* Field = {read=GetField};
	__property System::UnicodeString Value = {read=FValue, write=SetValue};
	System::UnicodeString __fastcall GetButtonValue(int Index);
	System::UnicodeString __fastcall GetDisplayValue(const System::UnicodeString Value);
	
__published:
	__property Controller;
	__property DisableThemes;
	__property ItemIndex = {default=-1};
	__property TransparentActiveItem = {default=0};
	__property Frame;
	__property ButtonFrame;
	__property Indents;
	__property Images;
	__property GlyphImages;
	__property ShowBorder = {default=1};
	__property ShowGroupCaption = {default=1};
	__property ShowFocusRect = {default=1};
	__property Transparent = {default=0};
	__property ShowText = {default=1};
	__property NoSpacing = {default=0};
	__property ArrowsModifySelection = {default=0};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption;
	__property Graphics::TColor Color = {read=GetColor, write=SetColor, stored=IsColorStored, nodefault};
	__property Columns = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Items = {write=SetItems};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property WordWrap = {default=0};
	__property Alignment = {default=1};
	__property Classes::TStrings* Values = {read=FValues, write=SetValues};
	__property Visible = {default=1};
	__property Touch;
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnCreateRadioButton;
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRadioGroup(HWND ParentWindow) : TwwCustomRadioGroup(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwradiogroup */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwradiogroup;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwradiogroupHPP
