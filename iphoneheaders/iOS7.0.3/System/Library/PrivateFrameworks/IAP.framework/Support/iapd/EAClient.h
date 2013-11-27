/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iapd/iapd-Structs.h>
@class NSString, NSTimer;

@interface EAClient : NSObject {

	unsigned _machPort;
	CFMachPortRef _cfMachPort;
	unsigned _clientID;
	unsigned _capabilities;
	BOOL _legacyLingoAccessoriesEnabled;
	BOOL _supportsAccessibility;
	BOOL _clientRequiresAccReset;
	int _processId;
	SCD_Struct_EA1 _auditToken;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long _processAssertionStartTime;
	NSTimer* _processAssertionTimer;
	int _iapSessionRefCount;

}

@property (assign,nonatomic) unsigned machPort;                               //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) CFMachPortRef cfMachPort;                        //@synthesize cfMachPort=_cfMachPort - In the implementation block
@property (assign,nonatomic) unsigned clientID;                               //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                           //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) SCD_Struct_EA1 auditToken;                     //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) unsigned capabilities;                         //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL locationSupportedByClient; 
@property (assign,nonatomic) BOOL legacyLingoAccessoriesEnabled;              //@synthesize legacyLingoAccessoriesEnabled=_legacyLingoAccessoriesEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsAccessibility;                    //@synthesize supportsAccessibility=_supportsAccessibility - In the implementation block
@property (assign,nonatomic) BOOL clientRequiresAccReset;                     //@synthesize clientRequiresAccReset=_clientRequiresAccReset - In the implementation block
+(unsigned)clientIDForLocationClient;
-(int)_getProcessId;
-(BOOL)locationSupportedByClient;
-(void)_processAssertionTimerExpired;
-(id)initWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_EA1)arg2 andBundleId:(id)arg3 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(void)increaseSessionRefCount;
-(void)decreaseSessionRefCount;
-(void)setLocationSupportedByClient:(BOOL)arg1 ;
-(void)setClientRequiresAccReset:(BOOL)arg1 ;
-(BOOL)legacyLingoAccessoriesEnabled;
-(void)setLegacyLingoAccessoriesEnabled:(BOOL)arg1 ;
-(BOOL)clientRequiresAccReset;
-(void)setCfMachPort:(CFMachPortRef)arg1 ;
-(CFMachPortRef)cfMachPort;
-(unsigned)machPort;
-(BOOL)supportsAccessibility;
-(id)bundleId;
-(void)dealloc;
-(id).cxx_construct;
-(SCD_Struct_EA1)auditToken;
-(unsigned)capabilities;
-(void)setClientID:(unsigned)arg1 ;
-(unsigned)clientID;
-(void)setMachPort:(unsigned)arg1 ;
@end

