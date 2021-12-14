// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployTypes.pas' rev: 22.00

#ifndef DeploytypesHPP
#define DeploytypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deploytypes
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TFileDeployItem;
class PASCALIMPLEMENTATION TFileDeployItem : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FFilename;
	System::UnicodeString FDestination;
	
public:
	__fastcall TFileDeployItem(const System::UnicodeString AFilename, const System::UnicodeString ADestination);
	virtual System::UnicodeString __fastcall ToString(void);
	__property System::UnicodeString Filename = {read=FFilename, write=FFilename};
	__property System::UnicodeString Destination = {read=FDestination, write=FDestination};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFileDeployItem(void) { }
	
};


typedef Generics_collections::TObjectList__1<TFileDeployItem*>* TDeployList;

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Deploytypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deploytypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploytypesHPP
