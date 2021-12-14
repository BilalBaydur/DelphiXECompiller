// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwdbedit.pas' rev: 22.00

#ifndef WwdbeditHPP
#define WwdbeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <Clipbrd.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbedit
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TwwValidateEvent)(System::TObject* Sender, bool PassesPictureTest);

#pragma option push -b-
enum TwwEditDataType { wwDefault, wwEdtDate, wwEdtTime, wwEdtDateTime };
#pragma option pop

class DELPHICLASS TwwRegexMask;
class PASCALIMPLEMENTATION TwwRegexMask : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	System::UnicodeString FMask;
	bool FCaseSensitive;
	bool FAllowInvalidExit;
	System::UnicodeString FErrorMessage;
	Classes::TComponent* RelatedComponent;
	void __fastcall SetMask(System::UnicodeString value);
	
public:
	__fastcall TwwRegexMask(Classes::TComponent* Owner);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString Mask = {read=FMask, write=SetMask};
	__property bool CaseSensitive = {read=FCaseSensitive, write=FCaseSensitive, default=1};
	__property bool AllowInvalidExit = {read=FAllowInvalidExit, write=FAllowInvalidExit, default=0};
	__property System::UnicodeString ErrorMessage = {read=FErrorMessage, write=FErrorMessage};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwRegexMask(void) { }
	
};


class DELPHICLASS TwwDBPicture;
class PASCALIMPLEMENTATION TwwDBPicture : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FPictureMaskFromDataSet;
	System::UnicodeString FPictureMask;
	bool FAutoFill;
	bool FAllowInvalidExit;
	Classes::TComponent* RelatedComponent;
	void __fastcall FlushToDataset(bool SetMask, bool SetAutoFill, bool SetUsePictureMask);
	void __fastcall SetPictureMask(System::UnicodeString val);
	void __fastcall SetAutoFill(bool val);
	void __fastcall SetAllowInvalidExit(bool val);
	System::UnicodeString __fastcall GetPictureMask(void);
	bool __fastcall GetAutoFill(void);
	bool __fastcall GetAllowInvalidExit(void);
	
public:
	__fastcall TwwDBPicture(Classes::TComponent* Owner);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	bool __fastcall IsDatasetMask(void);
	
__published:
	__property bool PictureMaskFromDataSet = {read=FPictureMaskFromDataSet, write=FPictureMaskFromDataSet, default=1};
	__property System::UnicodeString PictureMask = {read=GetPictureMask, write=SetPictureMask};
	__property bool AutoFill = {read=GetAutoFill, write=SetAutoFill, default=1};
	__property bool AllowInvalidExit = {read=GetAllowInvalidExit, write=SetAllowInvalidExit, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwDBPicture(void) { }
	
};


class DELPHICLASS TwwCustomMaskEdit;
class PASCALIMPLEMENTATION TwwCustomMaskEdit : public Mask::TCustomMaskEdit
{
	typedef Mask::TCustomMaskEdit inherited;
	
private:
	TwwDBPicture* FwwPicture;
	TwwRegexMask* FRegexMask;
	bool FWordWrap;
	TwwValidateEvent FOnCheckValue;
	bool FUsePictureMask;
	bool FWantReturns;
	bool FShowVertScrollBar;
	bool DoExitPictureError;
	Wwframe::TwwEditFrame* FFrame;
	bool FMaskStoreLiteralTemplate;
	Wwintl::TwwController* FController;
	Graphics::TColor OrigForeColor;
	Graphics::TColor OrigBackColor;
	HIDESBASE MESSAGE void __fastcall WMVScroll(Messages::TWMScroll &Message);
	void __fastcall SetController(Wwintl::TwwController* Value);
	
protected:
	bool ModifiedInKeyPress;
	bool SetModifiedInChangeEvent;
	System::WideChar __fastcall GetMaskBlank(void);
	virtual bool __fastcall OwnerDraw(void);
	virtual bool __fastcall CustomDraw(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall EnableEdit(void);
	void __fastcall SetWordWrap(bool val);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoExit(void);
	virtual void __fastcall SetEditRect(void);
	virtual void __fastcall CreateWnd(void);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	bool __fastcall HavePictureMask(void);
	HIDESBASE System::UnicodeString __fastcall RemoveEditFormat(const System::UnicodeString Value);
	virtual void __fastcall DoOnCheckValue(bool Valid);
	void __fastcall SetShowVertScrollBar(bool Value);
	virtual void __fastcall ValidationErrorUsingMask(System::UnicodeString msg);
	
public:
	System::Variant Patch;
	virtual void __fastcall ApplyValidationColors(bool valid);
	virtual void __fastcall ResetValidationColors(Graphics::TColor ForeColor = (Graphics::TColor)(0x1fffffff), Graphics::TColor BackColor = (Graphics::TColor)(0x1fffffff));
	virtual void __fastcall DoRefreshValidationDisplay(bool valid)/* overload */;
	virtual void __fastcall DoRefreshValidationDisplay(System::UnicodeString input = L"")/* overload */;
	bool __fastcall IsValidPictureValue(System::UnicodeString s);
	bool __fastcall IsValidRegexValue(System::UnicodeString s);
	bool __fastcall IsValidPictureMask(System::UnicodeString s);
	bool __fastcall IsValidRegexMask(System::UnicodeString s);
	__fastcall virtual TwwCustomMaskEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCustomMaskEdit(void);
	void __fastcall ApplyMask(void);
	bool __fastcall Is3DBorder(void);
	bool __fastcall JustHaveLiteralTemplate(void);
	__property bool MaskStoreLiteralTemplate = {read=FMaskStoreLiteralTemplate, write=FMaskStoreLiteralTemplate, default=0};
	__property Wwframe::TwwEditFrame* Frame = {read=FFrame, write=FFrame};
	__property Wwintl::TwwController* Controller = {read=FController, write=SetController};
	__property TwwDBPicture* Picture = {read=FwwPicture, write=FwwPicture};
	__property TwwRegexMask* RegexMask = {read=FRegexMask, write=FRegexMask};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property TwwValidateEvent OnCheckValue = {read=FOnCheckValue, write=FOnCheckValue};
	__property bool UsePictureMask = {read=FUsePictureMask, write=FUsePictureMask, default=1};
	__property bool WantReturns = {read=FWantReturns, write=FWantReturns, nodefault};
	__property bool ShowVertScrollBar = {read=FShowVertScrollBar, write=SetShowVertScrollBar, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCustomMaskEdit(HWND ParentWindow) : Mask::TCustomMaskEdit(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TwwPictureValidationError)(System::TObject* Sender, Db::TField* Field, System::UnicodeString &Msg, bool &DoDefault);

class DELPHICLASS TwwDBCustomEdit;
class PASCALIMPLEMENTATION TwwDBCustomEdit : public TwwCustomMaskEdit
{
	typedef TwwCustomMaskEdit inherited;
	
private:
	Dbctrls::TFieldDataLink* FDataLink;
	Controls::TControlCanvas* FCanvas;
	Classes::TAlignment FAlignment;
	Classes::TAlignment FUnboundAlignment;
	int FTextMargin;
	System::UnicodeString StartValue;
	bool FAutoFillDate;
	TwwEditDataType FDataType;
	int FEpochYear;
	Wwtypes::TwwEditAlignment FEditAlignment;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	System::UnicodeString FDisplayFormat;
	bool FDisableThemes;
	bool FMouseInControl;
	void __fastcall SetPicture(TwwDBPicture* val);
	TwwDBPicture* __fastcall GetPicture(void);
	bool __fastcall DoAutoFillDate(System::WideChar &key);
	void __fastcall CalcTextMargin(void);
	void __fastcall EditingChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField(void);
	Db::TDataSource* __fastcall GetDataSource(void);
	Db::TField* __fastcall GetField(void);
	bool __fastcall GetReadOnly(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	void __fastcall SetFocused(bool Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	MESSAGE void __fastcall WMUndo(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Messages::TWMSetFont &Message);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TMessage &Message);
	void __fastcall SetUnboundValue(double Value);
	double __fastcall GetUnboundValue(void);
	
protected:
	bool FFocused;
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	virtual void __fastcall Paint(void);
	virtual void __fastcall UpdateData(System::TObject* Sender);
	virtual bool __fastcall IsVistaComboNonEditable(void);
	virtual System::UnicodeString __fastcall GetDisplayFormat(void);
	virtual void __fastcall SetDisplayFormat(System::UnicodeString val);
	virtual bool __fastcall PreventEdit(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DataChange(System::TObject* Sender);
	DYNAMIC void __fastcall Change(void);
	virtual bool __fastcall EditCanModify(void);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall DoEnter(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Reset(void);
	DYNAMIC int __fastcall GetIconIndent(void);
	DYNAMIC int __fastcall GetIconLeft(void);
	DYNAMIC void __fastcall EnableEdit(void);
	virtual bool __fastcall IsMemoField(void);
	System::UnicodeString __fastcall GetDBPicture(void);
	virtual bool __fastcall Editable(void);
	virtual Types::TRect __fastcall GetClientEditRect(void);
	virtual System::UnicodeString __fastcall GetStoredText(void);
	virtual void __fastcall ShowText(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, int indentLeft, int indentTop, System::UnicodeString AText, bool transparent = false);
	bool __fastcall StorePictureProperty(void);
	HIDESBASE void __fastcall SetModified(bool val);
	bool __fastcall ParentGridFocused(void);
	bool __fastcall AllSelected(void);
	virtual bool __fastcall GetShowButton(void);
	virtual void __fastcall SetShowButton(bool sel);
	bool __fastcall isDateField(void);
	bool __fastcall isTimeField(void);
	bool __fastcall isDateTimeField(void);
	__property Controls::TControlCanvas* ControlCanvas = {read=FCanvas, write=FCanvas};
	__property Picture = {read=GetPicture, write=SetPicture, stored=StorePictureProperty};
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall DrawFrame(Controls::TWinControl* Control, Graphics::TCanvas* Canvas);
	Classes::TAlignment __fastcall GetEffectiveAlignment(void);
	virtual void __fastcall ValidationErrorUsingMask(System::UnicodeString msg);
	virtual bool __fastcall IsDroppedDown(void);
	virtual void __fastcall DoMouseEnter(void);
	virtual void __fastcall DoMouseLeave(void);
	HIDESBASE virtual void __fastcall SetAlignment(Classes::TAlignment Value);
	virtual void __fastcall DrawFocusRect(Graphics::TCanvas* ACanvas, const Types::TRect &ARect);
	
public:
	__property int EpochYear = {read=FEpochYear, write=FEpochYear, default=0};
	__property Dbctrls::TFieldDataLink* DataLink = {read=FDataLink};
	__fastcall virtual TwwDBCustomEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBCustomEdit(void);
	bool __fastcall isTransparentEffective(void);
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	virtual bool __fastcall GetFieldMapText(System::UnicodeString StoreValue, System::UnicodeString &res);
	void __fastcall UpdateRecord(void);
	void __fastcall InitText(System::UnicodeString val);
	__property Color = {default=-16777211};
	__property Font;
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	__property Db::TField* Field = {read=GetField};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property bool AutoFillDate = {read=FAutoFillDate, write=FAutoFillDate, default=1};
	__property bool ShowButton = {read=GetShowButton, write=SetShowButton, nodefault};
	__property TwwEditDataType UnboundDataType = {read=FDataType, write=FDataType, nodefault};
	__property Classes::TAlignment UnboundAlignment = {read=FUnboundAlignment, write=FUnboundAlignment, default=0};
	__property double UnboundValue = {read=GetUnboundValue, write=SetUnboundValue};
	__property Wwtypes::TwwEditAlignment EditAlignment = {read=FEditAlignment, write=FEditAlignment, default=0};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBCustomEdit(HWND ParentWindow) : TwwCustomMaskEdit(ParentWindow) { }
	
};


class DELPHICLASS TwwDBEdit;
class PASCALIMPLEMENTATION TwwDBEdit : public TwwDBCustomEdit
{
	typedef TwwDBCustomEdit inherited;
	
__published:
	__property Controller;
	__property DisableThemes = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property AutoFillDate = {default=1};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property ParentBiDiMode = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Ctl3D;
	__property DataField;
	__property DataSource;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property EditAlignment = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Frame;
	__property ImeMode = {default=3};
	__property ImeName;
	__property MaxLength = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property Picture;
	__property RegexMask;
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property MaskStoreLiteralTemplate = {default=0};
	__property ShowVertScrollBar = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property UnboundDataType;
	__property UnboundAlignment = {default=0};
	__property UsePictureMask = {default=1};
	__property Visible = {default=1};
	__property WantReturns;
	__property WordWrap;
	__property OnChange;
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
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnCheckValue;
	__property OnGesture;
public:
	/* TwwDBCustomEdit.Create */ inline __fastcall virtual TwwDBEdit(Classes::TComponent* AOwner) : TwwDBCustomEdit(AOwner) { }
	/* TwwDBCustomEdit.Destroy */ inline __fastcall virtual ~TwwDBEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBEdit(HWND ParentWindow) : TwwDBCustomEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwdbedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbeditHPP
