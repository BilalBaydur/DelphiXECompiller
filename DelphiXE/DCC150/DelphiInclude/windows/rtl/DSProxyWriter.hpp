// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProxyWriter.pas' rev: 22.00

#ifndef DsproxywriterHPP
#define DsproxywriterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Masks.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsproxywriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSProxyWriterFactory;
class DELPHICLASS TDSProxyWriter;
class PASCALIMPLEMENTATION TDSProxyWriterFactory : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static TDSProxyWriterFactory* __fastcall Instance();
	static void __fastcall RegisterWriter(const System::UnicodeString Id, const Dbxplatform::TObjectClass WriterClass);
	static void __fastcall UnregisterWriter(const System::UnicodeString Id);
	__classmethod bool __fastcall HasWriter(const System::UnicodeString Id);
	static TDSProxyWriter* __fastcall GetWriter(const System::UnicodeString Id);
	static Dbxplatform::TDBXStringArray __fastcall RegisteredWritersList();
	__fastcall TDSProxyWriterFactory(void);
	__fastcall virtual ~TDSProxyWriterFactory(void);
	
private:
	static TDSProxyWriterFactory* FSingleton;
	static Dbxplatform::TDBXObjectStore* FRegisteredWriters;
};


#pragma option push -b-
enum TDSProxyWriteFeature { feConnectsWithDSRestConnection, feConnectsWithDBXConnection, feRESTClient, feDBXClient };
#pragma option pop

typedef System::Set<TDSProxyWriteFeature, TDSProxyWriteFeature::feConnectsWithDSRestConnection, TDSProxyWriteFeature::feDBXClient>  TDSProxyWriteFeatures;

struct DECLSPEC_DRECORD TDSProxyWriterProperties
{
	
public:
	System::UnicodeString UsesUnits;
	System::UnicodeString DefaultExcludeClasses;
	System::UnicodeString DefaultExcludeMethods;
	Sysutils::TEncoding* DefaultEncoding;
	System::UnicodeString Author;
	System::UnicodeString Comment;
	System::UnicodeString Language;
	TDSProxyWriteFeatures Features;
};


struct DECLSPEC_DRECORD TDSProxyFileDescription
{
	
public:
	System::UnicodeString ID;
	System::UnicodeString DefaultFileExt;
};


typedef System::DynamicArray<TDSProxyFileDescription> TDSProxyFileDescriptions;

class DELPHICLASS TDSCustomProxyWriter;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TDSProxyWriter : public Dbxplatform::TFactoryObject
{
	typedef Dbxplatform::TFactoryObject inherited;
	
public:
	virtual TDSCustomProxyWriter* __fastcall CreateProxyWriter(void) = 0 ;
	virtual TDSProxyWriterProperties __fastcall Properties(void) = 0 ;
	virtual TDSProxyFileDescriptions __fastcall FileDescriptions(void) = 0 ;
public:
	/* TFactoryObject.Create */ inline __fastcall virtual TDSProxyWriter(void) : Dbxplatform::TFactoryObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDSProxyWriter(void) { }
	
};


class PASCALIMPLEMENTATION TDSCustomProxyWriter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TDSCustomProxyWriter(void);
	__fastcall virtual ~TDSCustomProxyWriter(void);
	virtual void __fastcall WriteProxy(void);
	
protected:
	virtual void __fastcall WriteImplementation(void) = 0 ;
	virtual void __fastcall WriteInterface(void) = 0 ;
	virtual void __fastcall WriteFileHeader(void);
	virtual System::UnicodeString __fastcall GetTimeStamp(void);
	virtual void __fastcall DerivedWrite(const System::UnicodeString Line) = 0 ;
	virtual void __fastcall DerivedWriteLine(void) = 0 ;
	virtual System::UnicodeString __fastcall GetAssignmentString(void) = 0 ;
	bool __fastcall IncludeClassName(const System::UnicodeString ClassName);
	bool __fastcall IncludeMethodName(const System::UnicodeString MethodName);
	virtual bool __fastcall IncludeClass(const Dscommonproxy::TDSProxyClass* ProxyClass);
	virtual bool __fastcall IncludeMethod(const Dscommonproxy::TDSProxyMethod* ProxyMethod);
	void __fastcall WriteLine(const System::UnicodeString Line)/* overload */;
	void __fastcall Indent(void);
	void __fastcall Outdent(void);
	void __fastcall WriteLine(void)/* overload */;
	virtual bool __fastcall IsKnownTableTypeName(const System::UnicodeString Name);
	virtual bool __fastcall IsKnownDBXValueTypeName(const System::UnicodeString Name);
	virtual bool __fastcall IsKnownJSONTypeName(const System::UnicodeString Name);
	virtual System::UnicodeString __fastcall GetDelphiTypeName(const Dscommonproxy::TDSProxyParameter* Param);
	System::UnicodeString __fastcall GetGetter(const Dscommonproxy::TDSProxyParameter* Param);
	System::UnicodeString __fastcall GetSetter(const Dscommonproxy::TDSProxyParameter* Param);
	virtual System::UnicodeString __fastcall GetCreateDataSetReader(const Dscommonproxy::TDSProxyParameter* Param) = 0 ;
	virtual System::UnicodeString __fastcall GetCreateParamsReader(const Dscommonproxy::TDSProxyParameter* Param) = 0 ;
	
private:
	Dscommonproxy::TDSProxyMetadata* FMetadata;
	bool FOwnsMetaData;
	
private:
	void __fastcall ClearMasks(void);
	bool __fastcall InclusionTest(const Dbxplatform::TDBXStringArray Includes, const Dbxplatform::TDBXStringArray Excludes, const System::UnicodeString Name);
	void __fastcall SetMetaDataLoader(const Dscommonproxy::_di_IDSProxyMetaDataLoader Value);
	
protected:
	System::UnicodeString FUnitFileName;
	System::UnicodeString FIndentString;
	int FIndentIncrement;
	Dscommonproxy::_di_IDSProxyMetaDataLoader FMetaDataLoader;
	
private:
	int FIndentSpaces;
	Generics_collections::TObjectDictionary__2<System::UnicodeString,Masks::TMask*>* FMasks;
	Dbxplatform::TDBXStringArray FIncludeClasses;
	Dbxplatform::TDBXStringArray FExcludeClasses;
	Dbxplatform::TDBXStringArray FIncludeMethods;
	Dbxplatform::TDBXStringArray FExcludeMethods;
	Generics_collections::TDictionary__2<System::UnicodeString,Dscommonproxy::_di_IDSProxyWriter>* FProxyWriters;
	Dscommonproxy::TDSProxyMetadata* __fastcall GetMetadata(void);
	void __fastcall SetExcludeClasses(const Dbxplatform::TDBXStringArray Value);
	void __fastcall SetExcludeMethods(const Dbxplatform::TDBXStringArray Value);
	void __fastcall SetIncludeClasses(const Dbxplatform::TDBXStringArray Value);
	void __fastcall SetIncludeMethods(const Dbxplatform::TDBXStringArray Value);
	
public:
	__property Dscommonproxy::TDSProxyMetadata* Metadata = {read=GetMetadata};
	__property Dscommonproxy::_di_IDSProxyMetaDataLoader MetaDataLoader = {read=FMetaDataLoader, write=SetMetaDataLoader};
	__property Generics_collections::TDictionary__2<System::UnicodeString,Dscommonproxy::_di_IDSProxyWriter>* ProxyWriters = {read=FProxyWriters};
	__property System::UnicodeString UnitFileName = {read=FUnitFileName, write=FUnitFileName};
	__property Dbxplatform::TDBXStringArray IncludeClasses = {read=FIncludeClasses, write=SetIncludeClasses};
	__property Dbxplatform::TDBXStringArray ExcludeClasses = {read=FExcludeClasses, write=SetExcludeClasses};
	__property Dbxplatform::TDBXStringArray IncludeMethods = {read=FIncludeMethods, write=SetIncludeMethods};
	__property Dbxplatform::TDBXStringArray ExcludeMethods = {read=FExcludeMethods, write=SetExcludeMethods};
	
protected:
	__property System::UnicodeString AssignmentString = {read=GetAssignmentString};
};


//-- var, const, procedure ---------------------------------------------------
#define sDSProxyDelphiLanguage L"Delphi"
#define sDSProxyCppLanguage L"C++"
#define sDSProxyJavaScriptLanguage L"Java Script"

}	/* namespace Dsproxywriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsproxywriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsproxywriterHPP
