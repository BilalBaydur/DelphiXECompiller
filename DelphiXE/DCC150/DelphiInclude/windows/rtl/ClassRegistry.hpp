// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ClassRegistry.pas' rev: 22.00

#ifndef ClassregistryHPP
#define ClassregistryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Classregistry
{
//-- type declarations -------------------------------------------------------
typedef System::TObject TAssemblyType;

class DELPHICLASS TClassRegistryObject;
class PASCALIMPLEMENTATION TClassRegistryObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual TClassRegistryObject(void);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TClassRegistryObject(void) { }
	
};


typedef TMetaClass* TRegistryClass;

class DELPHICLASS EClassRegistryError;
class PASCALIMPLEMENTATION EClassRegistryError : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EClassRegistryError(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EClassRegistryError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EClassRegistryError(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EClassRegistryError(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EClassRegistryError(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EClassRegistryError(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClassRegistryError(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClassRegistryError(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EClassRegistryError(void) { }
	
};


#pragma pack(push,1)
struct DECLSPEC_DRECORD TInstanceCreator
{
	
private:
	System::UnicodeString FClassName;
	System::TClass FObjectClass;
	TRegistryClass FRegistryClass;
	System::TObject* __fastcall CreateInstance(void);
};
#pragma pack(pop)


class DELPHICLASS TClassRegistryPackageItem;
class PASCALIMPLEMENTATION TClassRegistryPackageItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FUseCount;
	System::UnicodeString FPackageName;
	unsigned FPackageHandle;
	__fastcall TClassRegistryPackageItem(System::UnicodeString PackageName);
	
public:
	__fastcall virtual ~TClassRegistryPackageItem(void);
public:
	/* TObject.Create */ inline __fastcall TClassRegistryPackageItem(void) : System::TObject() { }
	
};


class DELPHICLASS TClassRegistryItem;
class PASCALIMPLEMENTATION TClassRegistryItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FClassName;
	System::TClass FObjectClass;
	TRegistryClass FRegistryClass;
	TClassRegistryPackageItem* FPackageItem;
	void __fastcall InitializeInstanceCreator(TInstanceCreator &InstanceCreator);
public:
	/* TObject.Create */ inline __fastcall TClassRegistryItem(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TClassRegistryItem(void) { }
	
};


class DELPHICLASS TClassRegistry;
class PASCALIMPLEMENTATION TClassRegistry : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Classes::TThreadList* FLock;
	Classes::TStringList* FClasses;
	Classes::TStringList* FPackages;
	bool FCanDestroy;
	static TClassRegistry* ClassRegistry;
	TClassRegistryItem* __fastcall FindClass(System::UnicodeString ClassName);
	TClassRegistryPackageItem* __fastcall FindPackage(System::UnicodeString PackageName);
	
public:
	__fastcall TClassRegistry(void);
	__fastcall virtual ~TClassRegistry(void);
	__classmethod TClassRegistry* __fastcall GetClassRegistry();
	void __fastcall RegisterPackageClass(System::UnicodeString ClassName, System::UnicodeString PackageName);
	void __fastcall RegisterClass(System::UnicodeString ClassName, System::TClass ObjectClass)/* overload */;
	void __fastcall RegisterClass(System::UnicodeString ClassName, System::TClass ObjectClass, System::TObject* AssemblyType)/* overload */;
	void __fastcall RegisterRegistryClass(System::UnicodeString ClassName, TRegistryClass RegistryClass);
	void __fastcall UnregisterClass(System::UnicodeString ClassName);
	bool __fastcall HasClass(System::UnicodeString ClassName);
	System::TObject* __fastcall CreateInstance(System::UnicodeString ClassName);
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Classregistry */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Classregistry;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ClassregistryHPP
