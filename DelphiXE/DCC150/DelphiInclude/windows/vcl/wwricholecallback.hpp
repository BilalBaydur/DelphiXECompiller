// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwricholecallback.pas' rev: 22.00

#ifndef WwricholecallbackHPP
#define WwricholecallbackHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <ComObj.hpp>	// Pascal unit
#include <wwrichole.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <OleCtnrs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwricholecallback
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRichEditOleCallback;
class PASCALIMPLEMENTATION TRichEditOleCallback : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Classes::TComponent* FOwner;
	
protected:
	HRESULT __stdcall GetNewStorage(/* out */ _di_IStorage &stg);
	HRESULT __stdcall GetInPlaceContext(/* out */ _di_IOleInPlaceFrame &Frame, /* out */ _di_IOleInPlaceUIWindow &Doc, tagOIFI &FrameInfo);
	HRESULT __stdcall ShowContainerUI(BOOL fShow);
	HRESULT __stdcall QueryInsertObject(const GUID &clsid, _di_IStorage stg, int cp);
	HRESULT __stdcall DeleteObject(_di_IOleObject oleobj);
	HRESULT __stdcall QueryAcceptData(_di_IDataObject dataobj, System::Word &cfFormat, unsigned reco, BOOL fReally, unsigned hMetaPict);
	HRESULT __stdcall ContextSensitiveHelp(BOOL fEnterMode);
	HRESULT __stdcall GetClipboardData(const _charrange &chrg, unsigned reco, /* out */ _di_IDataObject &dataobj);
	HRESULT __stdcall GetDragDropEffect(BOOL fDrag, unsigned grfKeyState, unsigned &dwEffect);
	HRESULT __stdcall GetContextMenu(System::Word seltype, _di_IOleObject oleobj, const _charrange &chrg, HMENU &menu);
	
public:
	__fastcall TRichEditOleCallback(Classes::TComponent* AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRichEditOleCallback(void) { }
	
private:
	void *__IRichEditOleCallback;	/* Wwrichole::IRichEditOleCallback */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Wwrichole::_di_IRichEditOleCallback()
	{
		Wwrichole::_di_IRichEditOleCallback intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IRichEditOleCallback*(void) { return (IRichEditOleCallback*)&__IRichEditOleCallback; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwricholecallback */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwricholecallback;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwricholecallbackHPP
