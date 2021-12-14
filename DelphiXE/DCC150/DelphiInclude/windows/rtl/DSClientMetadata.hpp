// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSClientMetadata.pas' rev: 22.00

#ifndef DsclientmetadataHPP
#define DsclientmetadataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <DBXCommon.hpp>	// Pascal unit
#include <DBXPlatform.hpp>	// Pascal unit
#include <DSCommonProxy.hpp>	// Pascal unit
#include <Generics.Collections.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <SqlExpr.hpp>	// Pascal unit
#include <DSServer.hpp>	// Pascal unit
#include <DSProxyWriter.hpp>	// Pascal unit
#include <DSClientRest.hpp>	// Pascal unit
#include <Generics.Defaults.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Dsclientmetadata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TDSCustomMetaDataProvider;
class PASCALIMPLEMENTATION TDSCustomMetaDataProvider : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
public:
	virtual bool __fastcall HasProvider(void);
	virtual Dscommonproxy::_di_IDSProxyMetaDataLoader __fastcall GetProvider(void);
public:
	/* TComponent.Create */ inline __fastcall virtual TDSCustomMetaDataProvider(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSCustomMetaDataProvider(void) { }
	
};


class DELPHICLASS TDSServerMetaDataProvider;
class PASCALIMPLEMENTATION TDSServerMetaDataProvider : public TDSCustomMetaDataProvider
{
	typedef TDSCustomMetaDataProvider inherited;
	
private:
	Dsserver::TDSServer* FServer;
	void __fastcall SetServer(const Dsserver::TDSServer* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	virtual bool __fastcall HasProvider(void);
	virtual Dscommonproxy::_di_IDSProxyMetaDataLoader __fastcall GetProvider(void);
	
__published:
	__property Dsserver::TDSServer* Server = {read=FServer, write=SetServer};
public:
	/* TComponent.Create */ inline __fastcall virtual TDSServerMetaDataProvider(Classes::TComponent* AOwner) : TDSCustomMetaDataProvider(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSServerMetaDataProvider(void) { }
	
};


class DELPHICLASS TDSConnectionMetaDataProvider;
class PASCALIMPLEMENTATION TDSConnectionMetaDataProvider : public TDSCustomMetaDataProvider
{
	typedef TDSCustomMetaDataProvider inherited;
	
private:
	Sqlexpr::TSQLConnection* FConnection;
	void __fastcall SetConnection(const Sqlexpr::TSQLConnection* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	virtual bool __fastcall HasProvider(void);
	virtual Dscommonproxy::_di_IDSProxyMetaDataLoader __fastcall GetProvider(void);
	
__published:
	__property Sqlexpr::TSQLConnection* SQLConnection = {read=FConnection, write=SetConnection};
public:
	/* TComponent.Create */ inline __fastcall virtual TDSConnectionMetaDataProvider(Classes::TComponent* AOwner) : TDSCustomMetaDataProvider(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSConnectionMetaDataProvider(void) { }
	
};


class DELPHICLASS TDSRestMetaDataProvider;
class PASCALIMPLEMENTATION TDSRestMetaDataProvider : public TDSCustomMetaDataProvider
{
	typedef TDSCustomMetaDataProvider inherited;
	
private:
	Dsclientrest::TDSCustomRestConnection* FConnection;
	void __fastcall SetConnection(const Dsclientrest::TDSCustomRestConnection* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	virtual bool __fastcall HasProvider(void);
	virtual Dscommonproxy::_di_IDSProxyMetaDataLoader __fastcall GetProvider(void);
	
__published:
	__property Dsclientrest::TDSCustomRestConnection* RestConnection = {read=FConnection, write=SetConnection};
public:
	/* TComponent.Create */ inline __fastcall virtual TDSRestMetaDataProvider(Classes::TComponent* AOwner) : TDSCustomMetaDataProvider(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSRestMetaDataProvider(void) { }
	
};


typedef Generics_collections::TDictionary__2<System::UnicodeString,Classes::TStream*>* TDSProxyWriterStreamDictionary;

typedef void __fastcall (__closure *TDSProxyGeneratorCreatingFiles)(System::TObject* Sender, Classes::TStrings* FileName, bool &Cancel);

typedef void __fastcall (__closure *TDSProxyGeneratorPrepareWriter)(System::TObject* Sender, Dsproxywriter::TDSCustomProxyWriter* Writer, bool &Cancel);

typedef void __fastcall (__closure *TDSProxyGeneratorFinishWriter)(System::TObject* Sender, Dsproxywriter::TDSCustomProxyWriter* Writer);

typedef void __fastcall (__closure *TDSProxyGeneratorCreatedFiles)(System::TObject* Sender, Classes::TStrings* FileName);

typedef void __fastcall (__closure *TDSProxyGeneratorCreateStream)(System::TObject* Sender, const Dsproxywriter::TDSProxyFileDescription &AFileDescription, const System::UnicodeString AFileName, /* out */ Classes::TStream* &AStream);

class DELPHICLASS TDSCustomProxyGenerator;
class PASCALIMPLEMENTATION TDSCustomProxyGenerator : public Classes::TComponent
{
	typedef Classes::TComponent inherited;
	
private:
	System::UnicodeString FTargetDirectory;
	System::UnicodeString FTargetUnitName;
	System::UnicodeString FIncludeClasses;
	System::UnicodeString FExcludeClasses;
	System::UnicodeString FIncludeMethods;
	System::UnicodeString FExcludeMethods;
	System::UnicodeString FWriter;
	TDSCustomMetaDataProvider* FMetaDataProvider;
	TDSProxyGeneratorCreatedFiles FCreatedFiles;
	TDSProxyGeneratorCreatingFiles FCreatingFiles;
	TDSProxyGeneratorCreateStream FCreateStream;
	Dscommonproxy::_di_IDSProxyMetaDataLoader FMetaDataLoaderIntf;
	TDSProxyGeneratorPrepareWriter FPrepareWriter;
	TDSProxyGeneratorFinishWriter FFinishWriter;
	void __fastcall WriteToStreams(System::DelphiInterface<Sysutils::TProc__1<Generics_collections::TDictionary__2<System::UnicodeString,Classes::TStream*>*> >  Callback)/* overload */;
	void __fastcall WriteToStreams(const Dsproxywriter::TDSProxyWriterProperties &AProperties, Dsproxywriter::TDSCustomProxyWriter* AProxyWriter, Dscommonproxy::_di_IDSProxyMetaDataLoader AConnection, Generics_collections::TDictionary__2<System::UnicodeString,Classes::TStream*>* AStreams)/* overload */;
	void __fastcall GetProxyWriter(System::DelphiInterface<Sysutils::TProc__2<Dsproxywriter::TDSProxyWriterProperties,Dsproxywriter::TDSCustomProxyWriter*> >  Callback);
	void __fastcall SetMetaDataProvider(const TDSCustomMetaDataProvider* Value);
	
protected:
	virtual Generics_collections::TDictionary__2<System::UnicodeString,Classes::TStream*>* __fastcall GetStreams(/* out */ Classes::TStrings* &ACreatedFileNames, bool &LCancel);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	
public:
	__fastcall virtual TDSCustomProxyGenerator(Classes::TComponent* AOwner);
	void __fastcall Write(void)/* overload */;
	void __fastcall Write(Dscommonproxy::_di_IDSProxyMetaDataLoader AConnection)/* overload */;
	void __fastcall WriteToStreams(Generics_collections::TDictionary__2<System::UnicodeString,Classes::TStream*>* AStreams)/* overload */;
	void __fastcall WriteToStreams(Dscommonproxy::_di_IDSProxyMetaDataLoader AConnection, Generics_collections::TDictionary__2<System::UnicodeString,Classes::TStream*>* AStreams)/* overload */;
	Dsproxywriter::TDSProxyWriterProperties __fastcall WriterProperties(void);
	Dsproxywriter::TDSProxyFileDescriptions __fastcall FileDescriptions(void);
	virtual Dscommonproxy::_di_IDSProxyMetaDataLoader __fastcall GetMetaDataLoaderIntf(void);
	__property Dscommonproxy::_di_IDSProxyMetaDataLoader MetaDataLoaderIntf = {read=GetMetaDataLoaderIntf, write=FMetaDataLoaderIntf};
	__property System::UnicodeString IncludeClasses = {read=FIncludeClasses, write=FIncludeClasses};
	__property System::UnicodeString ExcludeClasses = {read=FExcludeClasses, write=FExcludeClasses};
	__property System::UnicodeString IncludeMethods = {read=FIncludeMethods, write=FIncludeMethods};
	__property System::UnicodeString ExcludeMethods = {read=FExcludeMethods, write=FExcludeMethods};
	__property TDSCustomMetaDataProvider* MetaDataProvider = {read=FMetaDataProvider, write=SetMetaDataProvider};
	__property TDSProxyGeneratorCreatingFiles OnCreatingFiles = {read=FCreatingFiles, write=FCreatingFiles};
	__property TDSProxyGeneratorCreatedFiles OnCreatedFiles = {read=FCreatedFiles, write=FCreatedFiles};
	__property TDSProxyGeneratorCreateStream OnCreateStream = {read=FCreateStream, write=FCreateStream};
	__property TDSProxyGeneratorPrepareWriter OnPrepareWriter = {read=FPrepareWriter, write=FPrepareWriter};
	__property TDSProxyGeneratorFinishWriter OnFinishWriter = {read=FFinishWriter, write=FFinishWriter};
	__property System::UnicodeString TargetUnitName = {read=FTargetUnitName, write=FTargetUnitName};
	__property System::UnicodeString TargetDirectory = {read=FTargetDirectory, write=FTargetDirectory};
	__property System::UnicodeString Writer = {read=FWriter, write=FWriter};
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSCustomProxyGenerator(void) { }
	
};


class DELPHICLASS TDSProxyGenerator;
class PASCALIMPLEMENTATION TDSProxyGenerator : public TDSCustomProxyGenerator
{
	typedef TDSCustomProxyGenerator inherited;
	
__published:
	__property IncludeClasses;
	__property ExcludeClasses;
	__property IncludeMethods;
	__property ExcludeMethods;
	__property MetaDataProvider;
	__property OnCreatingFiles;
	__property OnCreatedFiles;
	__property OnCreateStream;
	__property TargetUnitName;
	__property TargetDirectory;
	__property Writer;
public:
	/* TDSCustomProxyGenerator.Create */ inline __fastcall virtual TDSProxyGenerator(Classes::TComponent* AOwner) : TDSCustomProxyGenerator(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TDSProxyGenerator(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Dsclientmetadata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Dsclientmetadata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsclientmetadataHPP
