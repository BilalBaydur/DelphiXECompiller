// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwmonthcalendar.pas' rev: 22.00

#ifndef WwmonthcalendarHPP
#define WwmonthcalendarHPP

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
#include <ComCtrls.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwmonthcalendar
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwDateTimeColors;
class PASCALIMPLEMENTATION TwwDateTimeColors : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	Classes::TComponent* Owner;
	Graphics::TColor FBackColor;
	Graphics::TColor FTextColor;
	Graphics::TColor FTitleBackColor;
	Graphics::TColor FTitleTextColor;
	Graphics::TColor FMonthBackColor;
	Graphics::TColor FTrailingTextColor;
	void __fastcall SetColor(int Index, Graphics::TColor Value);
	void __fastcall SetAllColors(void);
	
public:
	__fastcall TwwDateTimeColors(Classes::TComponent* AOwner);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property Graphics::TColor TextColor = {read=FTextColor, write=SetColor, index=1, default=-16777208};
	__property Graphics::TColor TitleBackColor = {read=FTitleBackColor, write=SetColor, index=2, default=-16777214};
	__property Graphics::TColor TitleTextColor = {read=FTitleTextColor, write=SetColor, index=3, default=16777215};
	__property Graphics::TColor MonthBackColor = {read=FMonthBackColor, write=SetColor, index=4, default=16777215};
	__property Graphics::TColor TrailingTextColor = {read=FTrailingTextColor, write=SetColor, index=5, default=-16777197};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwDateTimeColors(void) { }
	
};


class DELPHICLASS TwwPopupYearOptions;
class PASCALIMPLEMENTATION TwwPopupYearOptions : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FYearsPerColumn;
	int FNumberColumns;
	int FStartYear;
	bool FShowEditYear;
	int __fastcall GetStartYear(void);
	void __fastcall SetStartYear(int Value);
	void __fastcall SetNumberColumns(int Value);
	void __fastcall SetYearsPerColumn(int Value);
	void __fastcall SetShowEdityear(bool Value);
	
public:
	__fastcall TwwPopupYearOptions(Classes::TComponent* AOwner);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property int YearsPerColumn = {read=FYearsPerColumn, write=SetYearsPerColumn, default=10};
	__property int NumberColumns = {read=FNumberColumns, write=SetNumberColumns, default=2};
	__property int StartYear = {read=GetStartYear, write=SetStartYear, default=2000};
	__property bool ShowEditYear = {read=FShowEditYear, write=SetShowEdityear, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwPopupYearOptions(void) { }
	
};


#pragma option push -b-
enum TwwMonthOption { mdoDayState, mdoWeekNumbers, mdoNoToday, mdoNoTodayCircle, mdoMultiSelect, mdoNoTrailingDates, mdoShortDaysOfWeek, mdoNoSelChangeOnNav };
#pragma option pop

typedef System::Set<TwwMonthOption, TwwMonthOption::mdoDayState, TwwMonthOption::mdoNoSelChangeOnNav>  TwwMonthOptions;

typedef void __fastcall (__closure *TCalcBoldDayEvent)(System::TObject* Sender, System::TDate ADate, int Month, int Day, int Year, bool &Accept);

typedef void __fastcall (__closure *TmcMouseMoveEvent)(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y, int Month, int Day, int Year);

typedef void __fastcall (__closure *TmcMouseUPDownEvent)(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y, int Month, int Day, int Year);

#pragma option push -b-
enum TwwCalDayOfWeek { wwdowMonday, wwdowTuesday, wwdowWednesday, wwdowThursday, wwdowFriday, wwdowSaturday, wwdowSunday, wwdowLocaleDefault };
#pragma option pop

class DELPHICLASS TwwMonthCalendar;
class PASCALIMPLEMENTATION TwwMonthCalendar : public Controls::TWinControl
{
	typedef Controls::TWinControl inherited;
	
private:
	Forms::TFormBorderStyle FBorder;
	TwwDateTimeColors* FCalColors;
	System::TDateTime FDateTime;
	System::TDateTime FStartDate;
	System::TDateTime FEndDate;
	System::TDate FMaxDate;
	System::TDate FMinDate;
	Classes::TNotifyEvent FOnChange;
	TCalcBoldDayEvent FOnCalcBoldDay;
	TwwMonthOptions FOptions;
	int FMaxSelectCount;
	bool FSelChanged;
	TmcMouseMoveEvent FOnMouseMove;
	TmcMouseUPDownEvent FOnMouseDown;
	TmcMouseUPDownEvent FOnMouseUp;
	Menus::TPopupMenu* FYearPopupMenu;
	bool FYearPopupShowing;
	bool FMonthPopupShowing;
	bool FAfterYearPopup;
	bool FAfterMonthPopup;
	Menus::TPopupMenu* FMonthPopupMenu;
	_SYSTEMTIME FPopupSystemTime;
	int FPrevPopupMonth;
	Classes::TList* FDummyList;
	TwwPopupYearOptions* FPopupYearOptions;
	TwwCalDayOfWeek FFirstDayOfWeek;
	void __fastcall AdjustHeight(void);
	System::TDate __fastcall GetDate(void);
	System::TTime __fastcall GetTime(void);
	System::TDate __fastcall GetEndDate(void);
	System::TDate __fastcall GetStartDate(void);
	int __fastcall GetHeight(void);
	int __fastcall GetWidth(void);
	void __fastcall SetCalColors(TwwDateTimeColors* Value);
	void __fastcall SetDate(System::TDate Value);
	void __fastcall SetEndDate(System::TDate Value);
	void __fastcall SetStartDate(System::TDate Value);
	void __fastcall SetDateTime(System::TDateTime Value);
	void __fastcall SetBorder(Forms::TBorderStyle Value);
	HIDESBASE void __fastcall SetHeight(int Value);
	HIDESBASE void __fastcall SetWidth(int Value);
	void __fastcall SetMaxDate(System::TDate Value);
	void __fastcall SetMaxSelectCount(int Value);
	void __fastcall SetMinDate(System::TDate Value);
	void __fastcall SetRange(System::TDateTime MinVal, System::TDateTime MaxVal);
	void __fastcall SetTime(System::TTime Value);
	void __fastcall SetPopupYearOptions(TwwPopupYearOptions* Value);
	void __fastcall SetFirstDayOfWeek(TwwCalDayOfWeek Value);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CNNotify(Messages::TWMNotify &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall SetOptions(TwwMonthOptions val);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall GetFocus(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	bool __fastcall SetSelRange(System::TDate AStart, System::TDate AEnd);
	bool __fastcall SetMonthCalDateTime(System::TDateTime Value);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall wwPopupMenuClick(System::TObject* Sender);
	void __fastcall wwMonthPopupMenuClick(System::TObject* Sender);
	
public:
	System::Variant Patch;
	__fastcall virtual TwwMonthCalendar(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwMonthCalendar(void);
	bool __fastcall IsPopupYearMonthShowing(void);
	__property System::TDate EndDate = {read=GetEndDate, write=SetEndDate};
	__property System::TDate StartDate = {read=GetStartDate, write=SetStartDate};
	__property System::TDateTime DateTime = {read=FDateTime, write=SetDateTime};
	
__published:
	__property Forms::TBorderStyle BorderStyle = {read=FBorder, write=SetBorder, default=0};
	__property TwwDateTimeColors* CalColors = {read=FCalColors, write=SetCalColors};
	__property System::TDate Date = {read=GetDate, write=SetDate};
	__property System::TTime Time = {read=GetTime, write=SetTime};
	__property Color = {stored=true, default=-16777211};
	__property TwwMonthOptions Options = {read=FOptions, write=SetOptions, default=1};
	__property TwwPopupYearOptions* PopupYearOptions = {read=FPopupYearOptions, write=SetPopupYearOptions};
	__property TwwCalDayOfWeek FirstDayOfWeek = {read=FFirstDayOfWeek, write=SetFirstDayOfWeek, default=7};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property int MaxSelectCount = {read=FMaxSelectCount, write=SetMaxSelectCount, default=31};
	__property System::TDate MaxDate = {read=FMaxDate, write=SetMaxDate};
	__property System::TDate MinDate = {read=FMinDate, write=SetMinDate};
	__property ParentColor = {default=0};
	__property TabStop = {default=1};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property TCalcBoldDayEvent OnCalcBoldDay = {read=FOnCalcBoldDay, write=FOnCalcBoldDay};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TmcMouseUPDownEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property TmcMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property TmcMouseUPDownEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwMonthCalendar(HWND ParentWindow) : Controls::TWinControl(ParentWindow) { }
	
};


class DELPHICLASS TwwDBCustomMonthCalendar;
class PASCALIMPLEMENTATION TwwDBCustomMonthCalendar : public TwwMonthCalendar
{
	typedef TwwMonthCalendar inherited;
	
private:
	Dbctrls::TFieldDataLink* FDataLink;
	TwwMonthCalendar* FPaintControl;
	Db::TField* __fastcall GetField(void);
	System::UnicodeString __fastcall GetDataField(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	bool __fastcall GetReadOnly(void);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetDataSource(Db::TDataSource* Value);
	Db::TDataSource* __fastcall GetDataSource(void);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall UpdateData(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall Change(void);
	
public:
	__fastcall virtual TwwDBCustomMonthCalendar(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwDBCustomMonthCalendar(void);
	DYNAMIC bool __fastcall ExecuteAction(Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(Classes::TBasicAction* Action);
	__property Db::TField* Field = {read=GetField};
	
__published:
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBCustomMonthCalendar(HWND ParentWindow) : TwwMonthCalendar(ParentWindow) { }
	
};


class DELPHICLASS TwwDBMonthCalendar;
class PASCALIMPLEMENTATION TwwDBMonthCalendar : public TwwDBCustomMonthCalendar
{
	typedef TwwDBCustomMonthCalendar inherited;
	
__published:
	__property Anchors = {default=3};
	__property Align = {default=0};
	__property BorderStyle = {default=0};
	__property CalColors;
	__property Constraints;
	__property Date;
	__property Time;
	__property Color = {default=-16777211};
	__property Options = {default=1};
	__property PopupYearOptions;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FirstDayOfWeek = {default=7};
	__property Font;
	__property Height;
	__property ImeMode = {default=3};
	__property ImeName;
	__property MaxSelectCount = {default=31};
	__property MaxDate;
	__property MinDate;
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property Width;
	__property OnCalcBoldDay;
	__property OnClick;
	__property OnChange;
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
	__property OnStartDrag;
	__property DataField;
	__property DataSource;
	__property ReadOnly = {default=0};
public:
	/* TwwDBCustomMonthCalendar.Create */ inline __fastcall virtual TwwDBMonthCalendar(Classes::TComponent* AOwner) : TwwDBCustomMonthCalendar(AOwner) { }
	/* TwwDBCustomMonthCalendar.Destroy */ inline __fastcall virtual ~TwwDBMonthCalendar(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwDBMonthCalendar(HWND ParentWindow) : TwwDBCustomMonthCalendar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::ShortInt MaxMonthForDayState = 0xe;

}	/* namespace Wwmonthcalendar */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwmonthcalendar;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwmonthcalendarHPP
