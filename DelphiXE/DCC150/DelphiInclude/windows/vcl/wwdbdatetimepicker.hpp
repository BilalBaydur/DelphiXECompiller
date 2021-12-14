// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwdbdatetimepicker.pas' rev: 22.00

#ifndef WwdbdatetimepickerHPP
#define WwdbdatetimepickerHPP

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
#include <Mask.hpp>	// Pascal unit
#include <wwmonthcalendar.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <wwSystem.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Grids.hpp>	// Pascal unit
#include <Wwtypes.hpp>	// Pascal unit
#include <wwframe.hpp>	// Pascal unit
#include <wwcombobutton.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwdbdatetimepicker
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwDTCalAlignment { wwdtaLeft, wwdtaRight, wwdtaCenter };
#pragma option pop

#pragma option push -b-
enum TwwDTEditDataType { wwDTEdtDateTime, wwDTEdtDate, wwDTEdtTime };
#pragma option pop

#pragma option push -b-
enum TwwDTOption { wwDTOAutoAdvance };
#pragma option pop

typedef System::Set<TwwDTOption, TwwDTOption::wwDTOAutoAdvance, TwwDTOption::wwDTOAutoAdvance>  TwwDTOptions;

class DELPHICLASS TwwDTInterval;
class PASCALIMPLEMENTATION TwwDTInterval : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FMinutesInterval;
	bool FRoundMinutes;
	
public:
	__fastcall TwwDTInterval(void);
	
__published:
	__property int MinutesInterval = {read=FMinutesInterval, write=FMinutesInterval, default=1};
	__property bool RoundMinutes = {read=FRoundMinutes, write=FRoundMinutes, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwDTInterval(void) { }
	
};


class DELPHICLASS TwwPopupCalendar;
class DELPHICLASS TwwDBDateTimePicker;
class PASCALIMPLEMENTATION TwwPopupCalendar : public Wwmonthcalendar::TwwMonthCalendar
{
	typedef Wwmonthcalendar::TwwMonthCalendar inherited;
	
private:
	TwwDBDateTimePicker* FCombo;
	
protected:
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TWMMouse &Message);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall GetFocus(void);
	
public:
	__fastcall virtual TwwPopupCalendar(Classes::TComponent* AOwner);
public:
	/* TwwMonthCalendar.Destroy */ inline __fastcall virtual ~TwwPopupCalendar(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwPopupCalendar(HWND ParentWindow) : Wwmonthcalendar::TwwMonthCalendar(ParentWindow) { }
	
};


class DELPHICLASS TwwCalendarOptions;
class PASCALIMPLEMENTATION TwwCalendarOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TwwDTCalAlignment FAlignment;
	Wwmonthcalendar::TwwDateTimeColors* FColors;
	Graphics::TFont* FFont;
	int FWidth;
	int FHeight;
	Wwmonthcalendar::TwwMonthOptions FOptions;
	Wwmonthcalendar::TwwPopupYearOptions* FPopupYearOptions;
	Wwmonthcalendar::TwwCalDayOfWeek FFirstDayOfWeek;
	void __fastcall SetPopupYearOptions(Wwmonthcalendar::TwwPopupYearOptions* Value);
	int __fastcall GetHeight(void);
	void __fastcall SetHeight(int Value);
	int __fastcall GetWidth(void);
	void __fastcall SetWidth(int Value);
	Graphics::TFont* __fastcall GetFont(void);
	void __fastcall SetFont(Graphics::TFont* Value);
	void __fastcall SetAlignment(TwwDTCalAlignment Value);
	void __fastcall SetColors(Wwmonthcalendar::TwwDateTimeColors* Value);
	void __fastcall SetFirstDayOfWeek(Wwmonthcalendar::TwwCalDayOfWeek Value);
	
protected:
	void __fastcall SetOptions(Wwmonthcalendar::TwwMonthOptions Value);
	
public:
	__fastcall TwwCalendarOptions(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwCalendarOptions(void);
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	
__published:
	__property TwwDTCalAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Wwmonthcalendar::TwwDateTimeColors* Colors = {read=FColors, write=SetColors};
	__property Graphics::TFont* Font = {read=GetFont, write=SetFont};
	__property Wwmonthcalendar::TwwMonthOptions Options = {read=FOptions, write=SetOptions, default=1};
	__property Wwmonthcalendar::TwwPopupYearOptions* PopupYearOptions = {read=FPopupYearOptions, write=SetPopupYearOptions};
	__property Wwmonthcalendar::TwwCalDayOfWeek FirstDayOfWeek = {read=FFirstDayOfWeek, write=SetFirstDayOfWeek, default=7};
};


class DELPHICLASS TwwDBCustomDateTimePicker;
class PASCALIMPLEMENTATION TwwDBCustomDateTimePicker : public Stdctrls::TCustomEdit
{
	typedef Stdctrls::TCustomEdit inherited;
	
private:
	Classes::TAlignment FAlignment;
	TwwPopupCalendar* FCalendar;
	TwwCalendarOptions* FCalendarOptions;
	Wwmonthcalendar::TCalcBoldDayEvent FOnCalcBoldDay;
	Comctrls::TDTDateFormat FDateFormat;
	System::TDate FMaxDate;
	System::TDate FMinDate;
	bool FInCloseUp;
	Classes::TNotifyEvent FOnCloseUp;
	Classes::TNotifyEvent FOnDropDown;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	System::TDateTime FOldDateTime;
	System::TDateTime FDateTime;
	Dbctrls::TFieldDataLink* FDataLink;
	Wwcombobutton::TwwComboButton* FButton;
	Controls::TWinControl* FBtnControl;
	Controls::TControlCanvas* FCanvas;
	bool FFocused;
	int FPos;
	TwwDTEditDataType FUnboundDataType;
	System::UnicodeString FDisplayFormat;
	bool FInDigitEdit;
	bool FIsCleared;
	int FTextMargin;
	bool FInfoPower;
	int FEpoch;
	TwwDTOptions FOptions;
	bool FMouseInControl;
	bool SkipDrawSetFocus;
	System::TDateTime DateTimeBeforeDropDown;
	bool SkipEscapeReset;
	bool FShowButton;
	Wwframe::TwwEditFrame* FFrame;
	Wwframe::TwwButtonEffects* FButtonEffects;
	TwwDTInterval* FInterval;
	Wwframe::TwwComboButtonStyle FButtonStyle;
	int FButtonWidth;
	bool FAutoFillDateAndTime;
	bool skipUpdate;
	bool FMouseInButtonControl;
	bool OldShowHint;
	bool SetModifiedInChangeEvent;
	System::TDateTime CurrentDigitEditDateTime;
	Wwintl::TwwController* FController;
	bool FDisableThemes;
	void __fastcall SetController(Wwintl::TwwController* Value);
	System::TDate __fastcall GetDate(void);
	System::TTime __fastcall GetTime(void);
	void __fastcall SetDate(System::TDate Value);
	void __fastcall SetTime(System::TTime Value);
	void __fastcall SetDateTime(System::TDateTime Value);
	Db::TField* __fastcall GetField(void);
	System::UnicodeString __fastcall GetDataField(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	Db::TDataSource* __fastcall GetDataSource(void);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	void __fastcall SetUnboundDataType(const TwwDTEditDataType Value);
	void __fastcall SetMaxDate(System::TDate Value);
	void __fastcall SetMinDate(System::TDate Value);
	void __fastcall SetDateFormat(Comctrls::TDTDateFormat Value);
	void __fastcall SetEpoch(int Value);
	void __fastcall UpdateButtonPosition(void);
	MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Messages::TWMSetFont &Message);
	void __fastcall SetFocused(bool Value);
	System::UnicodeString __fastcall GetDatetimeToken(System::TDateTime datetime1, int index, int &pos, int &len, System::UnicodeString &s);
	void __fastcall GetCompleteToken(System::WideChar val, System::UnicodeString formatstr, System::UnicodeString &s, int &pos);
	System::UnicodeString __fastcall GetFormatStr(void);
	bool __fastcall isDateField(void);
	bool __fastcall IsDateOnlyField(void);
	bool __fastcall isTimeOnlyField(void);
	bool __fastcall isDateTimeField(void);
	bool __fastcall isAMPM(System::UnicodeString str);
	void __fastcall InDigitEditUpdateRecord(void);
	bool __fastcall IscFormat(void);
	bool __fastcall TimeShowing(void);
	int __fastcall GetMaxVisibleToken(void);
	bool __fastcall isvalid2year(int newnum);
	void __fastcall ReEncodeDateTime(System::Word y, System::Word m, System::Word d, System::Word h, System::Word n, System::Word sec, System::Word msec);
	System::TDate __fastcall GetValidMaxDate(void);
	System::TDate __fastcall GetValidMinDate(void);
	bool __fastcall GetReadOnly(void);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall SetDisplayFormat(System::UnicodeString value);
	void __fastcall SetButtonGlyph(Graphics::TBitmap* Value);
	Graphics::TBitmap* __fastcall GetButtonGlyph(void);
	void __fastcall SetButtonStyle(Wwframe::TwwComboButtonStyle val);
	void __fastcall SetButtonWidth(int val);
	int __fastcall GetButtonWidth(void);
	int __fastcall GetNewHour(int oldhour, int digit);
	virtual bool __fastcall IsVistaComboNonEditable(void);
	
protected:
	__property Controls::TControlCanvas* ControlCanvas = {read=FCanvas};
	virtual void __fastcall DataChange(System::TObject* Sender);
	virtual void __fastcall UpdateData(System::TObject* Sender);
	virtual bool __fastcall IsCustom(void);
	virtual void __fastcall DrawButton(Graphics::TCanvas* Canvas, const Types::TRect &R, Buttons::TButtonState State, Controls::TControlState ControlState, bool &DefaultPaint);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall CloseUp(bool Accept);
	virtual bool __fastcall IsDroppedDown(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC void __fastcall EnableEdit(void);
	void __fastcall HandleDropDownKeys(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall BtnClick(System::TObject* sender);
	void __fastcall BtnMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall EditCanModify(void);
	HIDESBASE void __fastcall SetModified(bool val);
	virtual void __fastcall SetShowButton(bool sel);
	virtual Types::TRect __fastcall GetClientEditRect(void);
	virtual void __fastcall SetEditRect(void);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	virtual bool __fastcall Editable(void);
	void __fastcall ShowText(Graphics::TCanvas* ACanvas, const Types::TRect &ARect, int indentLeft, int indentTop, System::UnicodeString AText);
	DYNAMIC int __fastcall GetIconIndent(void);
	DYNAMIC int __fastcall GetIconLeft(void);
	void __fastcall HighlightToken(System::TDateTime mDateTime);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoExit(void);
	void __fastcall Reset(void);
	bool __fastcall CanEdit(void);
	System::UnicodeString __fastcall GetEffectiveDisplayFormat(bool ExpandNativeFormat);
	void __fastcall GetFirstLastDayOfWeek(int &first, int &last);
	int __fastcall GetMaxTokens(System::UnicodeString formatstr);
	System::UnicodeString __fastcall GetDateTimeStoredText(System::TDateTime ADateTime);
	System::UnicodeString __fastcall GetDateTimeDisplayText(System::TDateTime ADateTime);
	bool __fastcall DateTokenInString(System::UnicodeString formatStr);
	bool __fastcall TimeTokenInString(System::UnicodeString formatStr);
	void __fastcall UpdateButtonGlyph(void);
	virtual void __fastcall DrawFrame(Graphics::TCanvas* Canvas);
	bool __fastcall Is3DBorder(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall InvalidateTransparentButton(void);
	virtual void __fastcall DoMouseEnter(void);
	virtual void __fastcall DoMouseLeave(void);
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	
public:
	System::Variant Patch;
	__fastcall virtual TwwDBCustomDateTimePicker(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBCustomDateTimePicker(void);
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall DropDown(void);
	void __fastcall UpdateRecord(void);
	void __fastcall RefreshText(void);
	void __fastcall ClearDateTime(void);
	bool __fastcall isTransparentEffective(void);
	__property Wwintl::TwwController* Controller = {read=FController, write=SetController};
	__property TwwPopupCalendar* Calendar = {read=FCalendar};
	__property bool DroppedDown = {read=IsDroppedDown, nodefault};
	__property Db::TField* Field = {read=GetField};
	__property Wwframe::TwwEditFrame* Frame = {read=FFrame, write=FFrame};
	__property bool ShowButton = {read=FShowButton, write=SetShowButton, nodefault};
	__property Wwcombobutton::TwwComboButton* Button = {read=FButton};
	__property System::TDateTime DateTime = {read=FDateTime, write=SetDateTime};
	__property TwwDTOptions Options = {read=FOptions, write=FOptions, default=1};
	__property TwwDTInterval* Interval = {read=FInterval, write=FInterval};
	__property bool AutoFillDateAndTime = {read=FAutoFillDateAndTime, write=FAutoFillDateAndTime, default=0};
	__property TwwCalendarOptions* CalendarAttributes = {read=FCalendarOptions, write=FCalendarOptions};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Comctrls::TDTDateFormat DateFormat = {read=FDateFormat, write=SetDateFormat, default=0};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::TDate Date = {read=GetDate, write=SetDate};
	__property int Epoch = {read=FEpoch, write=SetEpoch, nodefault};
	__property System::TTime Time = {read=GetTime, write=SetTime};
	__property System::TDate MaxDate = {read=FMaxDate, write=SetMaxDate};
	__property System::TDate MinDate = {read=FMinDate, write=SetMinDate};
	__property TwwDTEditDataType UnboundDataType = {read=FUnboundDataType, write=SetUnboundDataType, default=0};
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property Wwmonthcalendar::TCalcBoldDayEvent OnCalcBoldDay = {read=FOnCalcBoldDay, write=FOnCalcBoldDay};
	__property Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property bool InfoPower = {read=FInfoPower, nodefault};
	__property Wwframe::TwwComboButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, nodefault};
	__property Wwframe::TwwButtonEffects* ButtonEffects = {read=FButtonEffects, write=FButtonEffects};
	__property Graphics::TBitmap* ButtonGlyph = {read=GetButtonGlyph, write=SetButtonGlyph, stored=IsCustom};
	__property int ButtonWidth = {read=GetButtonWidth, write=SetButtonWidth, default=0};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property Visible = {default=1};
	__property int TokenPos = {read=FPos, write=FPos, nodefault};
	__property bool DisableThemes = {read=FDisableThemes, write=FDisableThemes, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBCustomDateTimePicker(HWND ParentWindow) : Stdctrls::TCustomEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TwwDBDateTimePicker : public TwwDBCustomDateTimePicker
{
	typedef TwwDBCustomDateTimePicker inherited;
	
__published:
	__property Controller;
	__property DisableThemes = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property AutoFillDateAndTime = {default=0};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property CalendarAttributes;
	__property Color = {default=-16777211};
	__property Constraints;
	__property ButtonStyle = {default=1};
	__property DataField;
	__property DateFormat = {default=0};
	__property DataSource;
	__property Date;
	__property Epoch;
	__property ButtonEffects;
	__property Frame;
	__property ButtonWidth = {default=0};
	__property ButtonGlyph;
	__property Time;
	__property DragMode = {default=0};
	__property DragCursor = {default=-12};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName;
	__property MaxDate;
	__property MinDate;
	__property Interval;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property ShowButton;
	__property TabOrder = {default=-1};
	__property Touch;
	__property UnboundDataType = {default=0};
	__property DisplayFormat;
	__property Visible = {default=1};
	__property OnCalcBoldDay;
	__property OnClick;
	__property OnCloseUp;
	__property OnChange;
	__property OnDropDown;
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
	__property OnStartDrag;
	__property OnGesture;
	__property InfoPower;
public:
	/* TwwDBCustomDateTimePicker.Create */ inline __fastcall virtual TwwDBDateTimePicker(Classes::TComponent* AOwner) : TwwDBCustomDateTimePicker(AOwner) { }
	/* TwwDBCustomDateTimePicker.Destroy */ inline __fastcall virtual ~TwwDBDateTimePicker(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBDateTimePicker(HWND ParentWindow) : TwwDBCustomDateTimePicker(ParentWindow) { }
	
};


class DELPHICLASS TwwDateComboButton;
class PASCALIMPLEMENTATION TwwDateComboButton : public Wwcombobutton::TwwComboButton
{
	typedef Wwcombobutton::TwwComboButton inherited;
	
protected:
	virtual bool __fastcall IsVistaTransparentButton(void);
	virtual bool __fastcall IsVistaComboNonEditable(void);
	virtual bool __fastcall ParentMouseInControl(void);
	virtual bool __fastcall ParentDroppedDown(void);
	virtual void __fastcall Paint(void);
public:
	/* TwwComboButton.Create */ inline __fastcall virtual TwwDateComboButton(Classes::TComponent* AOwner) : Wwcombobutton::TwwComboButton(AOwner) { }
	/* TwwComboButton.Destroy */ inline __fastcall virtual ~TwwDateComboButton(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwdbdatetimepicker */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwdbdatetimepicker;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwdbdatetimepickerHPP
