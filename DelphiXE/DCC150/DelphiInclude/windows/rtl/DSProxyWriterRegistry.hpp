// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyWriterRegistry.pas' rev: 22.00

#ifndef DsproxywriterregistryHPP
#define DsproxywriterregistryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Contnrs.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsproxywriterregistry
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSProxyWriterPackagesLoader;
class DELPHICLASS TDSProxyWriterPackageFileList;
class PASCALIMPLEMENTATION TDSProxyWriterPackagesLoader : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static void __fastcall Clear(Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString AKey);
	static void __fastcall Load(TDSProxyWriterPackageFileList* AList, Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString AKey);
	static void __fastcall Save(TDSProxyWriterPackageFileList* AList, Inifiles::TCustomIniFile* AIniFile, const System::UnicodeString AKey);
	
public:
	__classmethod System::TObject* __fastcall LoadPackages(TDSProxyWriterPackageFileList* APackageList);
	__classmethod TDSProxyWriterPackageFileList* __fastcall LoadPackageList();
	__classmethod void __fastcall SavePackageList(TDSProxyWriterPackageFileList* AList);
public:
	/* TObject.Create */ inline __fastcall TDSProxyWriterPackagesLoader(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDSProxyWriterPackagesLoader(void) { }
	
};


class DELPHICLASS TDSProxyWriterPackageFile;
class PASCALIMPLEMENTATION TDSProxyWriterPackageFileList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Generics_collections::TDictionary__2<System::UnicodeString,TDSProxyWriterPackageFile*>* FList;
	System::UnicodeString FUntitledPackage;
	System::DynamicArray<TDSProxyWriterPackageFile*> __fastcall GetList(void);
	int __fastcall GetCount(void);
	
protected:
	bool FModified;
	virtual void __fastcall HandleError(Sysutils::Exception* E, TDSProxyWriterPackageFile* PackageInfo);
	
public:
	__fastcall TDSProxyWriterPackageFileList(void);
	__fastcall virtual ~TDSProxyWriterPackageFileList(void);
	void __fastcall Clear(void);
	virtual void __fastcall Add(const System::UnicodeString AName, const System::UnicodeString ADescription, bool ADisabled = false);
	void __fastcall Remove(const System::UnicodeString AFile);
	bool __fastcall Contains(const System::UnicodeString AFile);
	__property System::DynamicArray<TDSProxyWriterPackageFile*> List = {read=GetList};
	// __property System::TArray__1<TDSProxyWriterPackageFile*>  List = ...;
	__property int Count = {read=GetCount, nodefault};
	__property bool Modified = {read=FModified, nodefault};
};


class PASCALIMPLEMENTATION TDSProxyWriterPackageFile : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FFileName;
	System::UnicodeString FDescription;
	bool FDisabled;
	
public:
	__fastcall TDSProxyWriterPackageFile(const System::UnicodeString AFileName, System::UnicodeString ADescription, bool ADisabled);
	__property System::UnicodeString FileName = {read=FFileName};
	__property System::UnicodeString Description = {read=FDescription, write=FDescription};
	__property bool Disabled = {read=FDisabled, write=FDisabled, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSProxyWriterPackageFile(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sProxyWriterPackages L"Proxy Writer Packages"
#define sDSProxyGenSettingsKey L"Software\\Embarcadero\\DSProxyGen"

}	/* namespace Dsproxywriterregistry */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxywriterregistry;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxywriterregistryHPP
