// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXReaderTableStorage.pas' rev: 22.00

#ifndef DbxreadertablestorageHPP
#define DbxreadertablestorageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxreadertablestorage
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXReaderTableStorage;
class PASCALIMPLEMENTATION TDBXReaderTableStorage : public Dbxcommontable::TDBXRowTable
{
	typedef Dbxcommontable::TDBXRowTable inherited;
	
private:
	bool FLastNext;
	Dbxcommon::TDBXCommand* FCommand;
	Dbxcommon::TDBXReader* FReader;
	Dbxcommon::TDBXValueTypeArray FColumns;
	bool FNextCalled;
	
public:
	__fastcall TDBXReaderTableStorage(Dbxcommon::TDBXCommand* Command, Dbxcommon::TDBXReader* Reader);
	__fastcall virtual ~TDBXReaderTableStorage(void);
	virtual int __fastcall GetOrdinal(const System::UnicodeString ColumnName)/* overload */;
	virtual bool __fastcall First(void);
	virtual bool __fastcall Next(void);
	virtual bool __fastcall InBounds(void);
	virtual void __fastcall Close(void);
	
protected:
	virtual Dbxcommon::TDBXWritableValue* __fastcall GetWritableValue(const int Ordinal);
	virtual Dbxcommon::TDBXValueTypeArray __fastcall GetColumns(void);
	virtual System::TObject* __fastcall GetStorage(void);
	virtual System::TObject* __fastcall GetCommand(void);
};


class DELPHICLASS TBcdObject;
class PASCALIMPLEMENTATION TBcdObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall TBcdObject(const Fmtbcd::TBcd &Bcd);
	
private:
	Fmtbcd::TBcd FBcd;
	
public:
	__property Fmtbcd::TBcd BcdValue = {read=FBcd};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBcdObject(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxreadertablestorage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxreadertablestorage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxreadertablestorageHPP
