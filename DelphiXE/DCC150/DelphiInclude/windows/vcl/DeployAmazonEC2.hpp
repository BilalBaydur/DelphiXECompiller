// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeployAmazonEC2.pas' rev: 22.00

#ifndef Deployamazonec2HPP
#define Deployamazonec2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Deployamazonec2
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define EC2_ERROR L"Error:"
#define USE_HTTPS L"https://"
#define AMAZON_EC2 L"Amazon EC2"
extern PACKAGE void __fastcall GetMachines(const System::UnicodeString AUsername, const System::UnicodeString APassword, const System::UnicodeString ARegionEndPoint, const int AHandle);
extern PACKAGE void __fastcall GetRegions(const System::UnicodeString AUsername, const System::UnicodeString APassword, const int AHandle);

}	/* namespace Deployamazonec2 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Deployamazonec2;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Deployamazonec2HPP
