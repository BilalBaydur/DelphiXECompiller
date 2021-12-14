// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDb2MetaDataWriter.pas' rev: 22.00

#ifndef Dbxdb2metadatawriterHPP
#define Dbxdb2metadatawriterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXMetaDataWriter.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdb2metadatawriter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDb2MetaDataWriter;
class PASCALIMPLEMENTATION TDBXDb2MetaDataWriter : public Dbxmetadatawriter::TDBXBaseMetaDataWriter
{
	typedef Dbxmetadatawriter::TDBXBaseMetaDataWriter inherited;
	
public:
	__fastcall TDBXDb2MetaDataWriter(void);
	virtual void __fastcall Open(void);
	
protected:
	virtual bool __fastcall IsSerializedIsolationSupported(void);
	virtual bool __fastcall IsIndexNamesGlobal(void);
	virtual bool __fastcall IsDescendingIndexConstraintsSupported(void);
	virtual System::UnicodeString __fastcall GetSqlAutoIncrementKeyword(void);
public:
	/* TDBXBaseMetaDataWriter.Destroy */ inline __fastcall virtual ~TDBXDb2MetaDataWriter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdb2metadatawriter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdb2metadatawriter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Dbxdb2metadatawriterHPP
