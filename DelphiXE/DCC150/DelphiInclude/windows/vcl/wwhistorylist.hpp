// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'wwhistorylist.pas' rev: 22.00

#ifndef WwhistorylistHPP
#define WwhistorylistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Registry.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <wwcommon.hpp>	// Pascal unit
#include <Wwintl.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wwhistorylist
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TwwStorageType { stRegistry, stIniFile };
#pragma option pop

class DELPHICLASS TwwHistoryList;
class PASCALIMPLEMENTATION TwwHistoryList : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FEnabled;
	System::UnicodeString FSection;
	System::UnicodeString FFileName;
	int FMaxSize;
	TwwStorageType FStorageType;
	bool FMRUEnabled;
	int FMRUMaxSize;
	Classes::TStrings* FList;
	bool FLoaded;
	void __fastcall SetEnabled(bool Enabled);
	void __fastcall SetSection(System::UnicodeString Section);
	System::UnicodeString __fastcall GetFileName(void);
	void __fastcall SetFileName(System::UnicodeString FileName);
	void __fastcall SetMaxSize(int MaxSize);
	void __fastcall SetStorageType(TwwStorageType StorageType);
	void __fastcall SetList(Classes::TStrings* List);
	
protected:
	void __fastcall SynchWithList(Classes::TStrings* SynchList);
	
public:
	Classes::TComponent* Owner;
	__property Classes::TStrings* List = {read=FList, write=SetList};
	void __fastcall Load(Classes::TStrings* SyncList);
	__fastcall TwwHistoryList(void);
	__fastcall virtual ~TwwHistoryList(void);
	void __fastcall Save(void);
	void __fastcall SaveToStream(Classes::TStream* Stream);
	void __fastcall LoadFromStream(Classes::TStream* Stream);
	void __fastcall SaveToRegistry(System::UnicodeString Value, System::UnicodeString Key, unsigned RootKey);
	void __fastcall LoadFromRegistry(Classes::TStrings* SynchList, System::UnicodeString Value, System::UnicodeString Key, unsigned RootKey);
	void __fastcall SaveToIniFile(System::UnicodeString Section, System::UnicodeString IniFile);
	void __fastcall LoadFromIniFile(Classes::TStrings* SynchList, System::UnicodeString Section, System::UnicodeString IniFile);
	int __fastcall EffectiveMRUCount(void);
	
__published:
	__property System::UnicodeString Section = {read=FSection, write=SetSection};
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property int MaxSize = {read=FMaxSize, write=SetMaxSize, default=-1};
	__property TwwStorageType StorageType = {read=FStorageType, write=SetStorageType, default=1};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property bool MRUEnabled = {read=FMRUEnabled, write=FMRUEnabled, default=0};
	__property int MRUMaxSize = {read=FMRUMaxSize, write=FMRUMaxSize, default=2};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Wwhistorylist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Wwhistorylist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WwhistorylistHPP
