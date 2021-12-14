// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwspin.pas' rev: 22.00

#ifndef WwspinHPP
#define WwspinHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <wwcombobutton.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwspin
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwSpinButton;
class DELPHICLASS TwwTimerSpeedButton;
class PASCALIMPLEMENTATION TwwSpinButton : public Controls::TWinControl
{
	typedef Controls::TWinControl inherited;
	
private:
	TwwTimerSpeedButton* FUpButton;
	TwwTimerSpeedButton* FDownButton;
	Classes::TNotifyEvent FOnUpClick;
	Classes::TNotifyEvent FOnDownClick;
	TwwTimerSpeedButton* __fastcall CreateButton(void);
	Graphics::TBitmap* __fastcall GetUpGlyph(void);
	Graphics::TBitmap* __fastcall GetDownGlyph(void);
	void __fastcall SetUpGlyph(Graphics::TBitmap* Value);
	void __fastcall SetDownGlyph(Graphics::TBitmap* Value);
	void __fastcall BtnClick(System::TObject* Sender);
	void __fastcall AdjustSizes(int &W, int &H);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	MESSAGE void __fastcall WMGetDlgCode(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	void __fastcall SetFlat(bool val);
	bool __fastcall GetFlat(void);
	void __fastcall PaintTransparentBackground(void);
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TwwSpinButton(Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Graphics::TBitmap* DownGlyph = {read=GetDownGlyph, write=SetDownGlyph};
	__property Graphics::TBitmap* UpGlyph = {read=GetUpGlyph, write=SetUpGlyph};
	__property Classes::TNotifyEvent OnDownClick = {read=FOnDownClick, write=FOnDownClick};
	__property Classes::TNotifyEvent OnUpClick = {read=FOnUpClick, write=FOnUpClick};
	
__published:
	__property bool Flat = {read=GetFlat, write=SetFlat, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwSpinButton(HWND ParentWindow) : Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TwwSpinButton(void) { }
	
};


#pragma option push -b-
enum Wwspin__2 { tbFocusRect, tbAllowTimer };
#pragma option pop

typedef System::Set<Wwspin__2, Wwspin__2::tbFocusRect, Wwspin__2::tbAllowTimer>  TTimeBtnState;

class PASCALIMPLEMENTATION TwwTimerSpeedButton : public Wwcombobutton::TwwSpinControlButton
{
	typedef Wwcombobutton::TwwSpinControlButton inherited;
	
private:
	Extctrls::TTimer* FRepeatTimer;
	TTimeBtnState FTimeBtnState;
	void __fastcall TimerExpired(System::TObject* Sender);
	
protected:
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	
public:
	bool MouseInControl;
	__fastcall virtual ~TwwTimerSpeedButton(void);
	__property TTimeBtnState TimeBtnState = {read=FTimeBtnState, write=FTimeBtnState, nodefault};
public:
	/* TwwComboButton.Create */ inline __fastcall virtual TwwTimerSpeedButton(Classes::TComponent* AOwner) : Wwcombobutton::TwwSpinControlButton(AOwner) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwspin */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwspin;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwspinHPP
