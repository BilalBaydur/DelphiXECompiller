// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDataExpressMetaDataProvider.pas' rev: 22.00

#ifndef DbxdataexpressmetadataproviderHPP
#define DbxdataexpressmetadataproviderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataProvider.hpp>	// Pascal unit
#include <DBXMetaDataCommandFactory.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdataexpressmetadataprovider
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDataExpressMetaDataProvider;
class PASCALIMPLEMENTATION TDBXDataExpressMetaDataProvider : public Dbxmetadataprovider::TDBXMetaDataProvider
{
	typedef Dbxmetadataprovider::TDBXMetaDataProvider inherited;
	
private:
	Dbxcommon::TDBXConnection* FConnection;
	
public:
	__fastcall TDBXDataExpressMetaDataProvider(void)/* overload */;
	__fastcall TDBXDataExpressMetaDataProvider(Dbxcommon::TDBXConnection* Connection)/* overload */;
	void __fastcall Open(void);
	__property Dbxcommon::TDBXConnection* Connection = {read=FConnection, write=FConnection};
public:
	/* TDBXMetaDataProvider.Destroy */ inline __fastcall virtual ~TDBXDataExpressMetaDataProvider(void) { }
	
};


class DELPHICLASS TDBXDataExpressProviderWriteableContext;
class PASCALIMPLEMENTATION TDBXDataExpressProviderWriteableContext : public Dbxmetadatacommandfactory::TDBXDataExpressProviderContext
{
	typedef Dbxmetadatacommandfactory::TDBXDataExpressProviderContext inherited;
	
private:
	Dbxcommon::TDBXTransaction* FTransaction;
	
public:
	virtual Dbxcommontable::TDBXTable* __fastcall CreateTableStorage(const System::UnicodeString CollectionName, const Dbxcommon::TDBXValueTypeArray Columns);
	virtual Dbxcommontable::TDBXTableRow* __fastcall CreateRowStorage(const System::UnicodeString CollectionName, const Dbxcommon::TDBXValueTypeArray Columns);
	virtual void __fastcall StartTransaction(void);
	virtual void __fastcall StartSerializedTransaction(void);
	virtual void __fastcall Commit(void);
	virtual void __fastcall Rollback(void);
public:
	/* TDBXDataExpressProviderContext.Create */ inline __fastcall TDBXDataExpressProviderWriteableContext(void) : Dbxmetadatacommandfactory::TDBXDataExpressProviderContext() { }
	/* TDBXDataExpressProviderContext.Destroy */ inline __fastcall virtual ~TDBXDataExpressProviderWriteableContext(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdataexpressmetadataprovider */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdataexpressmetadataprovider;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdataexpressmetadataproviderHPP
