// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBXStreamer.pas' rev: 22.00

#ifndef DbxstreamerHPP
#define DbxstreamerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXCommonTable.hpp>	// Pascal unit
#include <DBXStream.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbxstreamer
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDBXJSonReader;
class PASCALIMPLEMENTATION TDBXJSonReader : public Dbxcommon::TDBXReader
{
	typedef Dbxcommon::TDBXReader inherited;
	
public:
	__fastcall TDBXJSonReader(const Dbxcommon::TDBXContext* DbxContext, const Dbxcommon::TDBXRow* ADbxRow, const int ARowHandle, const int ACommandHandle, const Dbxcommon::TDBXWritableValueArray ADbxValues, const Dbxstream::TDBXJSonStreamReader* ADbxReader, const Dbxstream::TDBXJSonStreamWriter* ADbxWriter, const Dbxstream::TDBXRowBuffer* ADbxRowBuffer, const bool Updateable);
	__fastcall virtual ~TDBXJSonReader(void);
	bool __fastcall ReadFirstData(void);
	virtual void __fastcall DerivedClose(void);
	virtual bool __fastcall DerivedNext(void);
	
protected:
	virtual int __fastcall GetRowHandle(void);
	virtual Dbxcommon::TDBXByteReader* __fastcall GetByteReader(void);
	virtual bool __fastcall IsUpdateable(void);
	
private:
	bool __fastcall ReadData(void);
	__int64 FPosition;
	int FCommandHandle;
	int FRowHandle;
	Dbxstream::TDBXJSonStreamReader* FDbxReader;
	Dbxstream::TDBXJSonStreamWriter* FDbxWriter;
	Dbxstream::TDBXRowBuffer* FDbxRowBuffer;
	bool FUpdateable;
	bool FReadLastBuffer;
	Dbxcommon::TDBXByteReader* FByteReader;
	bool FInitialized;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxstreamer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxstreamer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxstreamerHPP
