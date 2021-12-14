// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXInformixMetaDataWriter.pas' rev: 22.00

#ifndef DbxinformixmetadatawriterHPP
#define DbxinformixmetadatawriterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataWriter.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxinformixmetadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXInformixCustomMetaDataWriter;
class PASCALIMPLEMENTATION TDBXInformixCustomMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
protected:
	virtual void __fastcall MakeSqlCreateKey(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index, const Dbxcommontable::TDBXTable* IndexColumns);
	virtual void __fastcall MakeSqlCreateForeignKey(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* ForeignKey, const Dbxcommontable::TDBXTable* ForeignKeyColumns);
	virtual void __fastcall MakeSqlDropSecondaryIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXInformixCustomMetaDataWriter(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXInformixCustomMetaDataWriter(void) : Dbxmetadatawriter::TDBXBaseMetaDataWriter() { }
	
};


class DELPHICLASS TDBXInformixMetaDataWriter;
class PASCALIMPLEMENTATION TDBXInformixMetaDataWriter : public TDBXInformixCustomMetaDataWriter
{
	typedef TDBXInformixCustomMetaDataWriter inherited;
	
public:
	__fastcall TDBXInformixMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual bool __fastcall IsMultipleStatementsSupported(void);
	virtual bool __fastcall IsDescendingIndexConstraintsSupported(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXInformixMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxinformixmetadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxinformixmetadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxinformixmetadatawriterHPP
