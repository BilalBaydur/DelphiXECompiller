// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataWriterFactory.pas' rev: 22.00

#ifndef DbxmetadatawriterfactoryHPP
#define DbxmetadatawriterfactoryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXMetaDataWriter.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatawriterfactory
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMetaDataWriterFactory;
class PASCALIMPLEMENTATION TDBXMetaDataWriterFactory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static Classes::TStringList* FProviderRegistry;
	
public:
	__classmethod void __fastcall RegisterWriter(System::UnicodeString DialectName, System::TClass WriterClass);
	__classmethod void __fastcall UnRegisterWriter(System::UnicodeString DialectName, System::TClass WriterClass);
	__classmethod void __fastcall FreeWriterRegistry();
	__classmethod Dbxmetadatawriter::TDBXMetaDataWriter* __fastcall CreateWriter(System::UnicodeString DialectName);
public:
	/* TObject.Create */ inline __fastcall TDBXMetaDataWriterFactory(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXMetaDataWriterFactory(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define SWriterPrefix L"Borland.MetaDataWriter."

}	/* namespace Dbxmetadatawriterfactory */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatawriterfactory;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatawriterfactoryHPP
