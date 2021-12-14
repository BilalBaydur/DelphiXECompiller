// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwradiobutton.pas' rev: 22.00

#ifndef WwradiobuttonHPP
#define WwradiobuttonHPP

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
#include <Grids.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwradiobutton
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwWinButtonIndents;
class PASCALIMPLEMENTATION TwwWinButtonIndents : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	Controls::TWinControl* FWinControl;
	int FIndentBX;
	int FIndentBY;
	int FIndentTX;
	int FIndentTY;
	void __fastcall SetIndentBX(int Value);
	void __fastcall SetIndentBY(int Value);
	void __fastcall SetIndentTX(int Value);
	void __fastcall SetIndentTY(int Value);
	
protected:
	virtual void __fastcall Repaint(Controls::TWinControl* FWinControl);
	
public:
	__fastcall TwwWinButtonIndents(Classes::TComponent* AOwner);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property int ButtonX = {read=FIndentBX, write=SetIndentBX, default=0};
	__property int ButtonY = {read=FIndentBY, write=SetIndentBY, default=0};
	__property int TextX = {read=FIndentTX, write=SetIndentTX, default=0};
	__property int TextY = {read=FIndentTY, write=SetIndentTY, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwWinButtonIndents(void) { }
	
};


#pragma option push -b-
enum TwwTransparentRegion { wwtrBorder, wwtrText, wwtrIcon };
#pragma option pop

typedef System::Set<TwwTransparentRegion, TwwTransparentRegion::wwtrBorder, TwwTransparentRegion::wwtrIcon>  TwwTransparentRegions;

class DELPHICLASS TwwCustomRadioButton;
class PASCALIMPLEMENTATION TwwCustomRadioButton : public Stdctrls::TRadioButton
{
	typedef Stdctrls::TRadioButton inherited;
	
private:
	Controls::TControlCanvas* FCanvas;
	Wwframe::TwwEditFrame* FFrame;
	TwwWinButtonIndents* FIndents;
	bool FAlwaysTransparent;
	System::UnicodeString FValueChecked;
	System::UnicodeString FValueUnchecked;
	bool FShowFocusRect;
	bool SpaceKeyPressed;
	Imglist::TCustomImageList* FImages;
	Imglist::TCustomImageList* FGlyphImages;
	bool FWordWrap;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool __fastcall isTransparentEffective(void);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	virtual void __fastcall DrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall BMSetCheck(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CNCommand(Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	bool __fastcall IsMouseInControl(void);
	
protected:
	virtual bool __fastcall GetShowText(void);
	void __fastcall TransparentInvalidate(TwwTransparentRegions Regions);
	virtual Graphics::TColor __fastcall GetPaintCopyTextColor(void);
	virtual Graphics::TColor __fastcall GetLastBrushColor(void);
	virtual int __fastcall GetButtonIndex(void);
	virtual bool __fastcall GetEffectiveChecked(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Paint(void);
	void __fastcall PaintBorder(void);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall ComputeImageRect(Types::TRect &DrawRect);
	virtual void __fastcall ComputeTextRect(Types::TRect &DrawRect);
	virtual void __fastcall ComputeGlyphRect(Types::TRect &DrawRect);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual Graphics::TCanvas* __fastcall GetCanvas(void);
	virtual void __fastcall DoMouseEnter(void);
	virtual void __fastcall DoMouseLeave(void);
	virtual void __fastcall SetChecked(bool Value);
	
public:
	__fastcall virtual ~TwwCustomRadioButton(void);
	__fastcall virtual TwwCustomRadioButton(Classes::TComponent* AOwner);
	__property Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property Wwframe::TwwEditFrame* Frame = {read=FFrame, write=FFrame};
	
__published:
	__property bool AlwaysTransparent = {read=FAlwaysTransparent, write=FAlwaysTransparent, nodefault};
	__property TwwWinButtonIndents* Indents = {read=FIndents, write=FIndents};
	__property System::UnicodeString ValueChecked = {read=FValueChecked, write=FValueChecked};
	__property System::UnicodeString ValueUnchecked = {read=FValueUnchecked, write=FValueUnchecked};
	__property bool ShowFocusRect = {read=FShowFocusRect, write=FShowFocusRect, default=1};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=FImages};
	__property Imglist::TCustomImageList* GlyphImages = {read=FGlyphImages, write=FGlyphImages};
	__property Action;
	__property Alignment = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption;
	__property Checked = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property bool WordWrap = {read=FWordWrap, write=FWordWrap, default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomRadioButton(HWND ParentWindow) : Stdctrls::TRadioButton(ParentWindow) { }
	
};


class DELPHICLASS TwwRadioButton;
class PASCALIMPLEMENTATION TwwRadioButton : public TwwCustomRadioButton
{
	typedef TwwCustomRadioButton inherited;
	
__published:
	__property Action;
	__property Alignment = {default=1};
	__property AlwaysTransparent;
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption;
	__property Checked = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Frame;
	__property Images;
	__property Indents;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property ShowFocusRect = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property ValueChecked;
	__property ValueUnchecked;
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TwwCustomRadioButton.Destroy */ inline __fastcall virtual ~TwwRadioButton(void) { }
	/* TwwCustomRadioButton.Create */ inline __fastcall virtual TwwRadioButton(Classes::TComponent* AOwner) : TwwCustomRadioButton(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwRadioButton(HWND ParentWindow) : TwwCustomRadioButton(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwradiobutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwradiobutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwradiobuttonHPP
