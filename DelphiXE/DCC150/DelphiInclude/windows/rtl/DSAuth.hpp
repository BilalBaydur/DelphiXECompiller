// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAuth.pas' rev: 22.00

#ifndef DsauthHPP
#define DsauthHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DSCommonServer.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsauth
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TRoleAuth;
class PASCALIMPLEMENTATION TRoleAuth : public System::TCustomAttribute
{
	typedef System::TCustomAttribute inherited;
	
private:
	bool FIsDesignTime;
	System::TDateTime FCreateTime;
	Classes::TStringList* FAuthorizedRoles;
	Classes::TStringList* FDeniedRoles;
	
public:
	__fastcall virtual TRoleAuth(System::UnicodeString AuthorizedRoles, System::UnicodeString DeniedRoles)/* overload */;
	__fastcall virtual TRoleAuth(Classes::TStrings* AllowRoles, Classes::TStrings* DenyRoles, bool DesignTime)/* overload */;
	__fastcall virtual ~TRoleAuth(void);
	__property Classes::TStringList* AuthorizedRoles = {read=FAuthorizedRoles};
	__property Classes::TStringList* DeniedRoles = {read=FDeniedRoles};
	__property bool IsDesignTime = {read=FIsDesignTime, nodefault};
	__property System::TDateTime CreateTime = {read=FCreateTime};
};


class DELPHICLASS TDSCustomRoleItem;
class PASCALIMPLEMENTATION TDSCustomRoleItem : public Classes::TCollectionItem
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Classes::TStrings* FDeniedRoles;
	Classes::TStrings* FAuthorizedRoles;
	Classes::TStrings* FApplyTo;
	void __fastcall SetAuthorizedRoles(const Classes::TStrings* Value);
	void __fastcall SetDeniedRoles(const Classes::TStrings* Value);
	void __fastcall SetApplyTo(const Classes::TStrings* Value);
	HIDESBASE void __fastcall Changed(void);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName(void);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TDSCustomRoleItem(Classes::TCollection* Collection)/* overload */;
	__fastcall virtual ~TDSCustomRoleItem(void);
	__property Classes::TStrings* AuthorizedRoles = {read=FAuthorizedRoles, write=SetAuthorizedRoles};
	__property Classes::TStrings* DeniedRoles = {read=FDeniedRoles, write=SetDeniedRoles};
	__property Classes::TStrings* ApplyTo = {read=FApplyTo, write=SetApplyTo};
};


class DELPHICLASS TDSRoleItem;
class PASCALIMPLEMENTATION TDSRoleItem : public TDSCustomRoleItem
{
	typedef TDSCustomRoleItem inherited;
	
__published:
	__property AuthorizedRoles;
	__property DeniedRoles;
	__property ApplyTo;
public:
	/* TDSCustomRoleItem.Create */ inline __fastcall virtual TDSRoleItem(Classes::TCollection* Collection)/* overload */ : TDSCustomRoleItem(Collection) { }
	/* TDSCustomRoleItem.Destroy */ inline __fastcall virtual ~TDSRoleItem(void) { }
	
};


class DELPHICLASS TDSRoleItems;
class PASCALIMPLEMENTATION TDSRoleItems : public Classes::TCollection
{
	typedef Classes::TCollection inherited;
	
public:
	TDSRoleItem* operator[](int Index) { return Items[Index]; }
	
private:
	Classes::TPersistent* FOwner;
	System::TDateTime FLastUpdated;
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	HIDESBASE TDSRoleItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TDSRoleItem* Value);
	
public:
	__fastcall virtual TDSRoleItems(Classes::TPersistent* AOwner);
	void __fastcall MarkUpdated(void);
	__property System::TDateTime LastUpdated = {read=FLastUpdated};
	__property TDSRoleItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDSRoleItems(void) { }
	
};


typedef void __fastcall (__closure *TDSAuthenticationEvent)(System::TObject* Sender, const System::UnicodeString Protocol, const System::UnicodeString Context, const System::UnicodeString User, const System::UnicodeString Password, bool &valid, Classes::TStrings* UserRoles);

typedef void __fastcall (__closure *TDSAuthorizationEvent)(System::TObject* Sender, Dscommonserver::TDSAuthorizeEventObject* AuthorizeEventObject, bool &valid);

#pragma option push -b-
enum TDSRoleComparison { rcNoUserRoles, rcNoMethodRoles, rcUserRoleAllowed, rcUserRoleDenied, rcNoMatch };
#pragma option pop

class DELPHICLASS TDSCustomAuthenticationManager;
class PASCALIMPLEMENTATION TDSCustomAuthenticationManager : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	TDSAuthenticationEvent FOnUserAuthenticate;
	TDSAuthorizationEvent FOnUserAuthorize;
	Dbxcommon::TValidateCertificate FValidateCertificateEvent;
	
private:
	TDSRoleItems* FRoleItems;
	void __fastcall SetRoleItems(const TDSRoleItems* Value);
	
protected:
	TDSAuthenticationEvent __fastcall GetOnUserAuthenticate(void);
	TDSAuthorizationEvent __fastcall GetOnUserAuthorize(void);
	virtual Dbxcommon::TValidateCertificate __fastcall GetValidateCertificateEvent(void);
	virtual void __fastcall SetValidateCertificateEvent(const Dbxcommon::TValidateCertificate Event);
	virtual bool __fastcall HasUserAuthenticateEvent(void);
	virtual Classes::TStrings* __fastcall SessionUserRoles(void);
	virtual bool __fastcall Authenticate(const Dscommonserver::TDSAuthenticateEventObject* AuthenticateEventObject, const System::UnicodeString Protocol, const System::UnicodeString Context, const System::UnicodeString User, const System::UnicodeString Password, Classes::TStrings* UserRoles = (Classes::TStrings*)(0x0))/* overload */;
	
public:
	__fastcall virtual TDSCustomAuthenticationManager(Classes::TComponent* AOwner);
	__fastcall virtual ~TDSCustomAuthenticationManager(void);
	__classmethod TDSRoleComparison __fastcall CompareRoles(Classes::TStrings* UserRoles, Classes::TStrings* AuthorizedRoles, Classes::TStrings* DeniedRoles);
	virtual bool __fastcall Authenticate(const System::UnicodeString Protocol, const System::UnicodeString Context, const System::UnicodeString AuthUserName, const System::UnicodeString AuthPassword, const System::TObject* Request, const System::TObject* Response)/* overload */;
	virtual bool __fastcall Authenticate(const Dscommonserver::TDSAuthenticateEventObject* AuthenticateEventObject, Dbxcommon::TDBXProperties* connectionProps)/* overload */;
	virtual bool __fastcall ValidatePeerCertificate(Dbxcommon::TX509Certificate* Certificate, const int ADepth);
	virtual bool __fastcall Authorize(const Dscommonserver::TDSAuthorizeEventObject* EventObject);
	__property TDSAuthorizationEvent OnUserAuthorize = {read=GetOnUserAuthorize, write=FOnUserAuthorize};
	__property TDSAuthenticationEvent OnUserAuthenticate = {read=GetOnUserAuthenticate, write=FOnUserAuthenticate};
	__property Dbxcommon::TValidateCertificate OnValidatePeerCertificate = {read=GetValidateCertificateEvent, write=SetValidateCertificateEvent};
	virtual TRoleAuth* __fastcall GetAuthRole(const System::UnicodeString ClassName, const System::UnicodeString MethodName);
	__property TDSRoleItems* Roles = {read=FRoleItems, write=SetRoleItems};
};


class DELPHICLASS TDSAuthenticationManager;
class PASCALIMPLEMENTATION TDSAuthenticationManager : public TDSCustomAuthenticationManager
{
	typedef TDSCustomAuthenticationManager inherited;
	
__published:
	__property OnUserAuthenticate;
	__property OnUserAuthorize;
	__property Roles;
public:
	/* TDSCustomAuthenticationManager.Create */ inline __fastcall virtual TDSAuthenticationManager(Classes::TComponent* AOwner) : TDSCustomAuthenticationManager(AOwner) { }
	/* TDSCustomAuthenticationManager.Destroy */ inline __fastcall virtual ~TDSAuthenticationManager(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsauth */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsauth;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsauthHPP
