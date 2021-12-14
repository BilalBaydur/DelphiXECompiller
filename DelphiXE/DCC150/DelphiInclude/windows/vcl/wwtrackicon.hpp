// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwTrackIcon.pas' rev: 22.00

#ifndef WwtrackiconHPP
#define WwtrackiconHPP

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

//-- user supplied -----------------------------------------------------------

namespace Wwtrackicon
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwTrackIcon;
class PASCALIMPLEMENTATION TwwTrackIcon : public Controls::TGraphicControl
{
	typedef Controls::TGraphicControl inherited;
	
private:
	Graphics::TBitmap* TrackBmp;
	Classes::TNotifyEvent FOnEndDrag;
	System::UnicodeString FBitmapName;
	int FMinValue;
	int FMaxValue;
	int FPosition;
	void __fastcall MouseLoop_Drag(int X, int Y);
	void __fastcall SetBitmapName(System::UnicodeString val);
	int __fastcall GetPosition(void);
	void __fastcall SetPosition(int value);
	
protected:
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TwwTrackIcon(Classes::TComponent* AOwner);
	__fastcall virtual ~TwwTrackIcon(void);
	
__published:
	__property Classes::TNotifyEvent OnEndDrag = {read=FOnEndDrag, write=FOnEndDrag};
	__property System::UnicodeString BitmapName = {read=FBitmapName, write=SetBitmapName};
	__property int MinValue = {read=FMinValue, write=FMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=FMaxValue, nodefault};
	__property int Position = {read=GetPosition, write=SetPosition, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wwtrackicon */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwtrackicon;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwtrackiconHPP
