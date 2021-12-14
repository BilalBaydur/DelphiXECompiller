// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Wwtypes.pas' rev: 22.00

#ifndef WwtypesHPP
#define WwtypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwtypes
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TwwInvalidValueEvent)(Db::TDataSet* DataSet, Db::TField* Field);

typedef Db::TParam* __fastcall (__closure *TwwFilterFieldMethod)(System::UnicodeString AFieldName);

typedef void __fastcall (__closure *TwwDataSetFilterEvent)(Db::TDataSet* table, bool &Accept);

typedef void __fastcall (__closure *TwwPerformSearchEvent)(System::TObject* Sender, Db::TDataSet* LookupTable, System::UnicodeString SearchField, System::UnicodeString SearchValue, bool PerformLookup, bool &Found);

#pragma option push -b-
enum TwwGetWordOption { wwgwSkipLeadingBlanks, wwgwQuotesAsWords, wwgwStripQuotes, wwgwSpacesInWords };
#pragma option pop

#pragma option push -b-
enum TwwWriteTextOption { wtoAmpersandToUnderline, wtoEllipsis, wtoWordWrap, wtoMergeCanvas, wtoTransparent, wtoCenterVert };
#pragma option pop

typedef System::Set<TwwWriteTextOption, TwwWriteTextOption::wtoAmpersandToUnderline, TwwWriteTextOption::wtoCenterVert>  TwwWriteTextOptions;

typedef System::Set<TwwGetWordOption, TwwGetWordOption::wwgwSkipLeadingBlanks, TwwGetWordOption::wwgwSpacesInWords>  TwwGetWordOptions;

#pragma option push -b-
enum TwwEditAlignment { eaLeftAlignEditing, eaRightAlignEditing };
#pragma option pop

class DELPHICLASS TwwFormPosition;
class PASCALIMPLEMENTATION TwwFormPosition : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FLeft;
	int FTop;
	int FWidth;
	int FHeight;
	
__published:
	__property int Left = {read=FLeft, write=FLeft, nodefault};
	__property int Top = {read=FTop, write=FTop, nodefault};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Height = {read=FHeight, write=FHeight, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TwwFormPosition(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TwwFormPosition(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TwwCheatCastNotify;
class PASCALIMPLEMENTATION TwwCheatCastNotify : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
public:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
public:
	/* TComponent.Create */ inline __fastcall virtual TwwCheatCastNotify(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TwwCheatCastNotify(void) { }
	
};


class DELPHICLASS TwwCheatCastKeyDown;
class PASCALIMPLEMENTATION TwwCheatCastKeyDown : public Stdctrls::TCustomEdit
{
	typedef Stdctrls::TCustomEdit inherited;
	
public:
	DYNAMIC void __fastcall KeyDown(System::Word &key, Classes::TShiftState shift);
public:
	/* TCustomEdit.Create */ inline __fastcall virtual TwwCheatCastKeyDown(Classes::TComponent* AOwner) : Stdctrls::TCustomEdit(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TwwCheatCastKeyDown(HWND ParentWindow) : Stdctrls::TCustomEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TwwCheatCastKeyDown(void) { }
	
};


#pragma option push -b-
enum TwwOnFilterOption { ofoEnabled, ofoShowHourGlass, ofoCancelOnEscape };
#pragma option pop

typedef System::Set<TwwOnFilterOption, TwwOnFilterOption::ofoEnabled, TwwOnFilterOption::ofoCancelOnEscape>  TwwOnFilterOptions;

//-- var, const, procedure ---------------------------------------------------
#define wwNewLineString L"<New Line>"
static const System::ShortInt CmpLess = -1;
static const System::ShortInt CMPEql = 0x0;
static const System::ShortInt CmpGtr = 0x1;
static const System::ShortInt CMPKeyEql = 0x2;
#define wwSLookupSourceError L"Unable to use duplicate DataSource and LookupSource"
#define wwSLookupTableError L"LookupSource must be connected to a TDataSet component"
extern PACKAGE int __fastcall wwFilterMemoSize(void);

}	/* namespace Wwtypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwtypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwtypesHPP
