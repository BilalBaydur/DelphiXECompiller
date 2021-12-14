// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXDBMetaData.pas' rev: 22.00

#ifndef DbxdbmetadataHPP
#define DbxdbmetadataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXMetaDataProvider.hpp>	// Pascal unit
#include <DBXTypedTableStorage.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <DBClient.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxdbmetadata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXDBMetaData;
class PASCALIMPLEMENTATION TDBXDBMetaData : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static Db::TFieldType __fastcall ToFieldType(int DataType);
	
public:
	static void __fastcall AddParams(Db::TParams* Params, Dbxmetadataprovider::TDBXMetaDataTable* MetaDataTable);
	static void __fastcall AddClientDataSetFields(Dbclient::TClientDataSet* ClientDataSet, Dbxmetadataprovider::TDBXMetaDataTable* MetaDataTable);
public:
	/* TObject.Create */ inline __fastcall TDBXDBMetaData(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBXDBMetaData(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxdbmetadata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxdbmetadata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxdbmetadataHPP
