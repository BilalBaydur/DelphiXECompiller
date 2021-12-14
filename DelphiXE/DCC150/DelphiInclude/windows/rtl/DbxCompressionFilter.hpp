// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DbxCompressionFilter.pas' rev: 22.00

#ifndef DbxcompressionfilterHPP
#define DbxcompressionfilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <DBXTransport.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "DbxCompressionFilter"

namespace Dbxcompressionfilter
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TTransportCompressionFilter;
class PASCALIMPLEMENTATION DECLSPEC_DRTTI TTransportCompressionFilter : public Dbxtransport::TTransportFilter
{
	typedef Dbxtransport::TTransportFilter inherited;
	
private:
	int FMinThreshold;
	
protected:
	virtual Dbxplatform::TDBXStringArray __fastcall GetParameters(void);
	virtual Dbxplatform::TDBXStringArray __fastcall GetUserParameters(void);
	
public:
	__fastcall virtual TTransportCompressionFilter(void);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessInput(const System::DynamicArray<System::Byte> Data);
	virtual System::DynamicArray<System::Byte> __fastcall ProcessOutput(const System::DynamicArray<System::Byte> Data);
	virtual System::UnicodeString __fastcall Id(void);
	virtual bool __fastcall SetConfederateParameter(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	virtual System::UnicodeString __fastcall GetParameterValue(const System::UnicodeString ParamName);
	virtual bool __fastcall SetParameterValue(const System::UnicodeString ParamName, const System::UnicodeString ParamValue);
	__property int MinThreshold = {read=FMinThreshold, write=FMinThreshold, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTransportCompressionFilter(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dbxcompressionfilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbxcompressionfilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbxcompressionfilterHPP
