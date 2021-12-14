// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXMetaDataCommand.pas' rev: 22.00

#ifndef DbxmetadatacommandHPP
#define DbxmetadatacommandHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXMetaDataReader.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxmetadatacommand
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXMetaDataCommand;
class PASCALIMPLEMENTATION TDBXMetaDataCommand : public Dbxcommon::TDBXCommand
{
	typedef Dbxcommon::TDBXCommand inherited;
	
public:
	__fastcall TDBXMetaDataCommand(Dbxcommon::TDBXContext* DBXContext, Dbxcommon::TDBXCommand* MorphicCommand, Dbxmetadatareader::TDBXMetaDataReader* Provider);
	__fastcall virtual ~TDBXMetaDataCommand(void);
	
protected:
	virtual void __fastcall SetRowSetSize(const __int64 RowSetSize);
	virtual void __fastcall SetMaxBlobSize(const __int64 MaxBlobSize);
	virtual __int64 __fastcall GetRowsAffected(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedGetNextReader(void);
	virtual void __fastcall DerivedOpen(void);
	virtual void __fastcall DerivedClose(void);
	virtual void __fastcall DerivedPrepare(void);
	virtual Dbxcommon::TDBXReader* __fastcall DerivedExecuteQuery(void);
	virtual void __fastcall DerivedExecuteUpdate(void);
	
private:
	Dbxcommon::TDBXValueType* __fastcall CreateValueType(System::WideString Name, int DataType, int Size);
	Dbxcommontable::TDBXTable* __fastcall FetchDatabaseColumns(void);
	Dbxcommon::TDBXCommand* FQueryCommand;
	Dbxmetadatareader::TDBXMetaDataReader* FReader;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxmetadatacommand */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxmetadatacommand;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxmetadatacommandHPP
