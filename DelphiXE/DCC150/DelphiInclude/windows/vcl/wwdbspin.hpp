// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwdbspin.pas' rev: 22.00

#ifndef WwdbspinHPP
#define WwdbspinHPP

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
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <wwdbedit.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <wwspin.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbspin
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDBSpinEdit;
class PASCALIMPLEMENTATION TwwDBSpinEdit : public Wwdbedit::TwwDBCustomEdit
{
	typedef Wwdbedit::TwwDBCustomEdit inherited;
	
private:
	double FMinValue;
	double FMaxValue;
	double FIncrement;
	Wwspin::TwwSpinButton* FButton;
	bool FEditorEnabled;
	Wwframe::TwwButtonEffects* FButtonEffects;
	bool FLimitEditRect;
	Classes::TNotifyEvent FBeforeUpClick;
	Classes::TNotifyEvent FBeforeDownClick;
	Classes::TNotifyEvent FAfterUpClick;
	Classes::TNotifyEvent FAfterDownClick;
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	double __fastcall GetValue(void);
	double __fastcall CheckValue(double NewValue);
	void __fastcall SetValue(double NewValue);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall SetDisplayFormat(System::UnicodeString val);
	virtual bool __fastcall IsValidChar(System::WideChar Key);
	DYNAMIC void __fastcall UpClick(System::TObject* Sender);
	DYNAMIC void __fastcall DownClick(System::TObject* Sender);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC int __fastcall GetIconIndent(void);
	DYNAMIC int __fastcall GetIconLeft(void);
	virtual bool __fastcall GetShowButton(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall SetEditRect(void);
	
public:
	bool SkipUpdate;
	__fastcall virtual TwwDBSpinEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBSpinEdit(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	__property bool HasFocus = {read=FFocused, nodefault};
	
__published:
	__property Controller;
	__property DisableThemes = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property EditAlignment = {default=0};
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property double Increment = {read=FIncrement, write=FIncrement};
	__property double MaxValue = {read=FMaxValue, write=FMaxValue};
	__property double MinValue = {read=FMinValue, write=FMinValue};
	__property double Value = {read=GetValue, write=SetValue};
	__property AutoFillDate = {default=1};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DataField;
	__property DataSource;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Wwframe::TwwButtonEffects* ButtonEffects = {read=FButtonEffects, write=FButtonEffects};
	__property Font;
	__property Frame;
	__property bool LimitEditRect = {read=FLimitEditRect, write=FLimitEditRect, default=0};
	__property ImeMode = {default=3};
	__property ImeName;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Picture;
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property UnboundDataType;
	__property UsePictureMask = {default=1};
	__property Visible = {default=1};
	__property Touch;
	__property OnChange;
	__property OnCheckValue;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnGesture;
	__property Classes::TNotifyEvent AfterUpClick = {read=FAfterUpClick, write=FAfterUpClick};
	__property Classes::TNotifyEvent AfterDownClick = {read=FAfterDownClick, write=FAfterDownClick};
	__property Classes::TNotifyEvent BeforeUpClick = {read=FBeforeUpClick, write=FBeforeUpClick};
	__property Classes::TNotifyEvent BeforeDownClick = {read=FBeforeDownClick, write=FBeforeDownClick};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBSpinEdit(HWND ParentWindow) : Wwdbedit::TwwDBCustomEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwdbspin */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbspin;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbspinHPP
