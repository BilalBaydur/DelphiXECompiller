// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBConnAdmin.pas' rev: 22.00

#ifndef DbconnadminHPP
#define DbconnadminHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dbconnadmin
{
//-- type declarations -------------------------------------------------------
__interface IConnectionAdmin;
typedef System::DelphiInterface<IConnectionAdmin> _di_IConnectionAdmin;
__interface IConnectionAdmin  : public System::IInterface 
{
	
public:
	virtual int __fastcall GetDriverNames(Classes::TStrings* List) = 0 ;
	virtual int __fastcall GetDelegateDriverNames(Classes::TStrings* List) = 0 ;
	virtual int __fastcall GetDriverParams(const System::UnicodeString DriverName, Classes::TStrings* Params) = 0 ;
	virtual void __fastcall GetDriverLibNames(const System::UnicodeString DriverName, System::UnicodeString &LibraryName, System::UnicodeString &VendorLibrary) = 0 ;
	virtual int __fastcall GetConnectionNames(Classes::TStrings* List, System::UnicodeString DriverName) = 0 ;
	virtual int __fastcall GetConnectionParams(const System::UnicodeString ConnectionName, Classes::TStrings* Params) = 0 ;
	virtual void __fastcall AddConnection(const System::UnicodeString ConnectionName, const System::UnicodeString DriverName) = 0 ;
	virtual void __fastcall DeleteConnection(const System::UnicodeString ConnectionName) = 0 ;
	virtual void __fastcall ModifyConnection(const System::UnicodeString ConnectionName, Classes::TStrings* Params) = 0 ;
	virtual void __fastcall RenameConnection(const System::UnicodeString OldName, const System::UnicodeString NewName) = 0 ;
};

class DELPHICLASS TConnectionAdmin;
class PASCALIMPLEMENTATION TConnectionAdmin : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Inifiles::TCustomIniFile* FConnectionConfig;
	
protected:
	int __fastcall GetDriverNames(Classes::TStrings* List);
	int __fastcall GetDelegateDriverNames(Classes::TStrings* List);
	int __fastcall GetDriverParams(const System::UnicodeString DriverName, Classes::TStrings* Params);
	void __fastcall GetDriverLibNames(const System::UnicodeString DriverName, System::UnicodeString &LibraryName, System::UnicodeString &VendorLibrary);
	int __fastcall GetConnectionNames(Classes::TStrings* List, System::UnicodeString DriverName);
	int __fastcall GetConnectionParams(const System::UnicodeString ConnectionName, Classes::TStrings* Params);
	void __fastcall AddConnection(const System::UnicodeString ConnectionName, const System::UnicodeString DriverName);
	void __fastcall DeleteConnection(const System::UnicodeString ConnectionName);
	void __fastcall ModifyConnection(const System::UnicodeString ConnectionName, Classes::TStrings* Params);
	void __fastcall RenameConnection(const System::UnicodeString OldName, const System::UnicodeString NewName);
	
public:
	__fastcall TConnectionAdmin(void);
	__fastcall virtual ~TConnectionAdmin(void);
	__property Inifiles::TCustomIniFile* ConnectionConfig = {read=FConnectionConfig};
private:
	void *__IConnectionAdmin;	/* IConnectionAdmin */
	
public:
	operator IConnectionAdmin*(void) { return (IConnectionAdmin*)&__IConnectionAdmin; }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE _di_IConnectionAdmin __fastcall GetConnectionAdmin(void);

}	/* namespace Dbconnadmin */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dbconnadmin;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbconnadminHPP
