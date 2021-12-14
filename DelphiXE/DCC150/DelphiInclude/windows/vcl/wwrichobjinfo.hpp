// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwrichobjinfo.pas' rev: 22.00

#ifndef WwrichobjinfoHPP
#define WwrichobjinfoHPP

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
#include <Controls.hpp>	// Pascal unit
#include <ComObj.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <RichEdit.hpp>	// Pascal unit
#include <wwrichole.hpp>	// Pascal unit
#include <OleCtnrs.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <OleDlg.hpp>	// Pascal unit
#include <OleConst.hpp>	// Pascal unit
#include <wwriched.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwrichobjinfo
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TwwOleUIObjInfo;
class PASCALIMPLEMENTATION TwwOleUIObjInfo : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Wwriched::TwwCustomRichEdit* FRichEdit;
	Wwrichole::TREOBJECT FReObject;
	
public:
	__fastcall TwwOleUIObjInfo(Wwriched::TwwCustomRichEdit* RichEdit, const Wwrichole::TREOBJECT &ReObject);
	HRESULT __stdcall GetObjectInfo(int dwObject, int &dwObjSize, System::WideChar * &lpszLabel, System::WideChar * &lpszType, System::WideChar * &lpszShortType, System::WideChar * &lpszLocation);
	HRESULT __stdcall GetConvertInfo(int dwObject, GUID &ClassID, System::Word &wFormat, GUID &ConvertDefaultClassID, System::PGUID &lpClsidExclude, int &cClsidExclude);
	HRESULT __stdcall ConvertObject(int dwObject, const GUID &clsidNew);
	HRESULT __stdcall GetViewInfo(int dwObject, unsigned &hMetaPict, int &dvAspect, int &nCurrentScale);
	HRESULT __stdcall SetViewInfo(int dwObject, unsigned hMetaPict, int dvAspect, int nCurrentScale, BOOL bRelativeToOrig);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwOleUIObjInfo(void) { }
	
private:
	void *__IOleUIObjInfo;	/* IOleUIObjInfo */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IOleUIObjInfo()
	{
		_di_IOleUIObjInfo intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOleUIObjInfo*(void) { return (IOleUIObjInfo*)&__IOleUIObjInfo; }
	#endif
	
};


class DELPHICLASS TwwOleUILinkInfo;
class PASCALIMPLEMENTATION TwwOleUILinkInfo : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Wwrichole::TREOBJECT FReObject;
	Wwriched::TwwCustomRichEdit* FRichEdit;
	_di_IOleLink FOleLink;
	
public:
	__fastcall TwwOleUILinkInfo(Wwriched::TwwCustomRichEdit* RichEdit, const Wwrichole::TREOBJECT &ReObject);
	int __stdcall GetNextLink(int dwLink);
	HRESULT __stdcall SetLinkUpdateOptions(int dwLink, int dwUpdateOpt);
	HRESULT __stdcall GetLinkUpdateOptions(int dwLink, int &dwUpdateOpt);
	HRESULT __stdcall SetLinkSource(int dwLink, System::WideChar * pszDisplayName, int lenFileName, int &chEaten, BOOL fValidateSource);
	HRESULT __stdcall GetLinkSource(int dwLink, System::WideChar * &pszDisplayName, int &lenFileName, System::WideChar * &pszFullLinkType, System::WideChar * &pszShortLinkType, BOOL &fSourceAvailable, BOOL &fIsSelected);
	HRESULT __stdcall OpenLinkSource(int dwLink);
	HRESULT __stdcall UpdateLink(int dwLink, BOOL fErrorMessage, BOOL fErrorAction);
	HRESULT __stdcall CancelLink(int dwLink);
	HRESULT __stdcall GetLastUpdate(int dwLink, _FILETIME &LastUpdate);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TwwOleUILinkInfo(void) { }
	
private:
	void *__IOleUILinkInfo;	/* IOleUILinkInfo */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator _di_IOleUILinkInfo()
	{
		_di_IOleUILinkInfo intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator IOleUILinkInfo*(void) { return (IOleUILinkInfo*)&__IOleUILinkInfo; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwrichobjinfo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwrichobjinfo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwrichobjinfoHPP
