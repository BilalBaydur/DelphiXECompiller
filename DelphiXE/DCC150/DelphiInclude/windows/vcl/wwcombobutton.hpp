// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwcombobutton.pas' rev: 22.00

#ifndef WwcombobuttonHPP
#define WwcombobuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwcombobutton
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwComboButtonActionLink;
class PASCALIMPLEMENTATION TwwComboButtonActionLink : public Controls::TControlActionLink
{
	typedef Controls::TControlActionLink inherited;
	
protected:
	Buttons::TSpeedButton* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked(void);
	virtual bool __fastcall IsGroupIndexLinked(void);
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetChecked(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TwwComboButtonActionLink(System::TObject* AClient) : Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TwwComboButtonActionLink(void) { }
	
};


class DELPHICLASS TwwComboButton;
class PASCALIMPLEMENTATION TwwComboButton : public Controls::TGraphicControl
{
	typedef Controls::TGraphicControl inherited;
	
private:
	int FGroupIndex;
	bool FDown;
	bool FDragging;
	bool FAllowAllUp;
	Buttons::TButtonLayout FLayout;
	int FSpacing;
	bool FTransparent;
	int FMargin;
	bool FFlat;
	bool FMouseInControl;
	bool FEllipsis;
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall UpdateExclusive(void);
	Graphics::TBitmap* __fastcall GetGlyph(void);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	Buttons::TNumGlyphs __fastcall GetNumGlyphs(void);
	void __fastcall SetNumGlyphs(Buttons::TNumGlyphs Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetLayout(Buttons::TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetMargin(int Value);
	void __fastcall UpdateTracking(void);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMButtonPressed(Messages::TMessage &Message);
	MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMSysColorChange(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
protected:
	void *FGlyph;
	Buttons::TButtonState FState;
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC Controls::TControlActionLinkClass __fastcall GetActionLinkClass(void);
	DYNAMIC HPALETTE __fastcall GetPalette(void);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall IsVistaComboNonEditable(void);
	virtual bool __fastcall IsVistaTransparentButton(void);
	virtual bool __fastcall ParentMouseInControl(void);
	virtual bool __fastcall ParentDroppedDown(void);
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	__property bool Ellipsis = {read=FEllipsis, write=FEllipsis, nodefault};
	
public:
	__fastcall virtual TwwComboButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwComboButton(void);
	DYNAMIC void __fastcall Click(void);
	
__published:
	__property Action;
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property Caption;
	__property Enabled = {default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property Font;
	__property Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	__property Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property Buttons::TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
};


#pragma option push -b-
enum TwwSpinButtonDirection { wwsdUp, wwsdDown };
#pragma option pop

class DELPHICLASS TwwSpinControlButton;
class PASCALIMPLEMENTATION TwwSpinControlButton : public TwwComboButton
{
	typedef TwwComboButton inherited;
	
private:
	TwwSpinButtonDirection FScrollDirection;
	
protected:
	virtual void __fastcall Paint(void);
	__property TwwSpinButtonDirection ScrollDirection = {read=FScrollDirection, write=FScrollDirection, nodefault};
public:
	/* TwwComboButton.Create */ inline __fastcall virtual TwwSpinControlButton(Classes::TComponent* AOwner) : TwwComboButton(AOwner) { }
	/* TwwComboButton.Destroy */ inline __fastcall virtual ~TwwSpinControlButton(void) { }
	
};


class DELPHICLASS TGlyphList;
class PASCALIMPLEMENTATION TGlyphList : public Controls::TImageList
{
	typedef Controls::TImageList inherited;
	
private:
	Classes::TBits* Used;
	int FCount;
	int __fastcall AllocateIndex(void);
	
public:
	__fastcall TGlyphList(int AWidth, int AHeight);
	__fastcall virtual ~TGlyphList(void);
	HIDESBASE int __fastcall AddMasked(Graphics::TBitmap* Image, Graphics::TColor MaskColor);
	HIDESBASE void __fastcall Delete(int Index);
	__property int Count = {read=FCount, nodefault};
public:
	/* TCustomImageList.Create */ inline __fastcall virtual TGlyphList(Classes::TComponent* AOwner) : Controls::TImageList(AOwner) { }
	
};


class DELPHICLASS TwwComboButtonGlyph;
class PASCALIMPLEMENTATION TwwComboButtonGlyph : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Graphics::TBitmap* FOriginal;
	TGlyphList* FGlyphList;
	System::StaticArray<int, 4> FIndexs;
	Graphics::TColor FTransparentColor;
	Buttons::TNumGlyphs FNumGlyphs;
	Classes::TNotifyEvent FOnChange;
	Controls::TControl* FComboButton;
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	void __fastcall SetNumGlyphs(Buttons::TNumGlyphs Value);
	void __fastcall Invalidate(void);
	int __fastcall CreateButtonGlyph(Buttons::TButtonState State);
	void __fastcall DrawButtonGlyph(Graphics::TCanvas* Canvas, const Types::TPoint &GlyphPos, Buttons::TButtonState State, bool Transparent);
	void __fastcall DrawButtonText(Graphics::TCanvas* Canvas, const System::UnicodeString Caption, const Types::TRect &TextBounds, Buttons::TButtonState State, int BiDiFlags);
	void __fastcall CalcButtonLayout(Graphics::TCanvas* Canvas, const Types::TRect &Client, const Types::TPoint &Offset, const System::UnicodeString Caption, Buttons::TButtonLayout Layout, int Margin, int Spacing, Types::TPoint &GlyphPos, Types::TRect &TextBounds, int BiDiFlags);
	
public:
	__property Controls::TControl* ComboButton = {read=FComboButton};
	__fastcall TwwComboButtonGlyph(Controls::TControl* AComboButton);
	__fastcall virtual ~TwwComboButtonGlyph(void);
	Types::TRect __fastcall Draw(Graphics::TCanvas* Canvas, const Types::TRect &Client, const Types::TPoint &Offset, const System::UnicodeString Caption, Buttons::TButtonLayout Layout, int Margin, int Spacing, Buttons::TButtonState State, bool Transparent, int BiDiFlags);
	__property Graphics::TBitmap* Glyph = {read=FOriginal, write=SetGlyph};
	__property Buttons::TNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwcombobutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwcombobutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwcombobuttonHPP
