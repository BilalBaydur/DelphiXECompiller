// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXSybaseASAMetaDataWriter.pas' rev: 22.00

#ifndef DbxsybaseasametadatawriterHPP
#define DbxsybaseasametadatawriterHPP

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

namespace Dbxsybaseasametadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXSybaseASACustomMetaDataWriter;
class PASCALIMPLEMENTATION TDBXSybaseASACustomMetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
protected:
	virtual void __fastcall MakeSqlNullable(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Column);
	virtual void __fastcall MakeSqlDropSecondaryIndex(const Dbxplatform::TDBXStringBuffer* Buffer, const Dbxcommontable::TDBXTableRow* Index);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXSybaseASACustomMetaDataWriter(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TDBXSybaseASACustomMetaDataWriter(void) : Dbxmetadatawriter::TDBXBaseMetaDataWriter() { }
	
};


class DELPHICLASS TDBXSybaseASAMetaDataWriter;
class PASCALIMPLEMENTATION TDBXSybaseASAMetaDataWriter : public TDBXSybaseASACustomMetaDataWriter
{
	typedef TDBXSybaseASACustomMetaDataWriter inherited;
	
public:
	__fastcall TDBXSybaseASAMetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual bool __fastcall IsCatalogsSupported(void);
	virtual bool __fastcall IsSchemasSupported(void);
	virtual bool __fastcall IsSerializedIsolationSupported(void);
	virtual bool __fastcall IsMultipleStatementsSupported(void);
	virtual bool __fastcall IsDDLTransactionsSupported(void);
	virtual bool __fastcall IsDescendingIndexConstraintsSupported(void);
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
	virtual System::UnicodeString __fastcall GetSqlRenameTable(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXSybaseASAMetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxsybaseasametadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxsybaseasametadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxsybaseasametadatawriterHPP
