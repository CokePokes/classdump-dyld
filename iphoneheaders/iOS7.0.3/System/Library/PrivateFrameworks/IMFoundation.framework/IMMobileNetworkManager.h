/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMNetworkManager.h>

@class NSRecursiveLock, NSMutableSet, NSNumber;

@interface IMMobileNetworkManager : IMNetworkManager {

	BOOL _cachedAirplaneMode;
	BOOL _isCachedAirplaneModeValid;
	BOOL _registered;
	BOOL _shouldBringUpDataContext;
	BOOL _dataContextActive;
	NSRecursiveLock* _lock;
	NSMutableSet* _disableFastDormancyTokens;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSMutableSet* _cellAutoAssociationTokens;
	void* _serverConnection;
	void* _suspendDormancyAssertion;
	void* _wifiManager;
	SCPreferencesRef _prefs;
	CTServerConnectionRef _ctServerConnection;
	void* _cellAssertion;
	int _applySkipCount;

}

@property (nonatomic,readonly) BOOL isAirplaneModeEnabled; 
@property (nonatomic,readonly) BOOL isWiFiEnabled; 
@property (nonatomic,readonly) BOOL isWiFiAssociated; 
@property (nonatomic,readonly) BOOL isWiFiCaptive; 
@property (nonatomic,readonly) BOOL isHostingWiFiHotSpot; 
@property (nonatomic,readonly) BOOL autoAssociateWiFi; 
@property (nonatomic,readonly) BOOL autoAssociateCellular; 
@property (nonatomic,readonly) BOOL disableFastDormancy; 
@property (nonatomic,readonly) BOOL willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) BOOL willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,readonly) BOOL dataConnectionExists; 
@property (nonatomic,readonly) BOOL has2GDataConnection; 
@property (nonatomic,readonly) BOOL hasLTEDataConnection; 
@property (nonatomic,readonly) BOOL isDataSwitchEnabled; 
@property (nonatomic,readonly) BOOL isDataConnectionActive; 
@property (nonatomic,readonly) BOOL inValidSIMState; 
@property (nonatomic,readonly) BOOL isSIMLocked; 
@property (nonatomic,readonly) BOOL isSIMRemoved; 
@property (assign,nonatomic) void* wifiManager;                                         //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) SCPreferencesRef _prefs;                                   //@synthesize prefs=_prefs - In the implementation block
@property (assign,nonatomic) void* _cellAssertion;                                      //@synthesize cellAssertion=_cellAssertion - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef _ctServerConnection;                 //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (assign,nonatomic) int _applySkipCount;                                       //@synthesize applySkipCount=_applySkipCount - In the implementation block
@property (assign,nonatomic) BOOL _isCachedAirplaneModeValid;                           //@synthesize isCachedAirplaneModeValid=_isCachedAirplaneModeValid - In the implementation block
@property (assign,nonatomic) BOOL _cachedAirplaneMode;                                  //@synthesize cachedAirplaneMode=_cachedAirplaneMode - In the implementation block
@property (assign,nonatomic) void* _serverConnection;                                   //@synthesize serverConnection=_serverConnection - In the implementation block
@property (assign,nonatomic) void* _suspendDormancyAssertion;                           //@synthesize suspendDormancyAssertion=_suspendDormancyAssertion - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;                  //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * cellularAutoAssociationTokens;              //@synthesize cellAutoAssociationTokens=_cellAutoAssociationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * disableFastDormancyTokens;                  //@synthesize disableFastDormancyTokens=_disableFastDormancyTokens - In the implementation block
@property (assign,nonatomic) BOOL registered;                                           //@synthesize registered=_registered - In the implementation block
@property (assign,nonatomic) BOOL shouldBringUpDataContext;                             //@synthesize shouldBringUpDataContext=_shouldBringUpDataContext - In the implementation block
@property (assign,nonatomic) BOOL dataContextActive;                                    //@synthesize dataContextActive=_dataContextActive - In the implementation block
-(SCPreferencesRef)_prefs;
-(void)dealloc;
-(id)init;
-(id)lock;
-(void)setLock:(id)arg1 ;
-(BOOL)isWiFiEnabled;
-(BOOL)inValidSIMState;
-(BOOL)isSIMLocked;
-(void)showSIMUnlock;
-(BOOL)isAirplaneModeEnabled;
-(void)removeFastDormancyDisableToken:(id)arg1 ;
-(void)addFastDormancyDisableToken:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)registered;
-(BOOL)isWiFiAssociated;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)isDataConnectionActive;
-(void)_createWiFiManager;
-(void)_initializeSCPrefs:(id)arg1 ;
-(void)_createCTServerConnection;
-(void)_releaseCTServerConnection;
-(void)_adjustWiFiAutoAssociation;
-(void)_adjustCellularAutoAssociation;
-(void)_adjustFastDormancyTokens;
-(void)_synchronize;
-(void*)_getValueForKey:(id)arg1 ;
-(BOOL)autoAssociateWiFi;
-(void)_adjustWiFiAutoAssociationLocked;
-(BOOL)autoAssociateCellular;
-(BOOL)disableFastDormancy;
-(void)_setFastDormancySuspended:(BOOL)arg1 ;
-(void)__adjustFastDormancyTokens;
-(void)_adjustCelluarAutoAssociation;
-(BOOL)isSIMRemoved;
-(BOOL)_isDataConnectionAvailable;
-(void)_makeDataConnectionAvailable:(BOOL)arg1 ;
-(void)_notifyTarget:(unsigned)arg1 ;
-(BOOL)isHostingWiFiHotSpot;
-(BOOL)willTryToAutoAssociateWiFiNetwork;
-(BOOL)willTryToSearchForWiFiNetwork;
-(id)wiFiSignalStrength;
-(id)wiFiScaledRSSI;
-(id)wiFiScaledRate;
-(BOOL)isWiFiCaptive;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(void)addCellularAutoAssociationClientToken:(id)arg1 ;
-(void)removeCellularAutoAssociationClientToken:(id)arg1 ;
-(void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)dataConnectionExists;
-(BOOL)has2GDataConnection;
-(BOOL)hasLTEDataConnection;
-(BOOL)isDataSwitchEnabled;
-(id)disableFastDormancyTokens;
-(void)setDisableFastDormancyTokens:(id)arg1 ;
-(id)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(id)arg1 ;
-(id)cellularAutoAssociationTokens;
-(void)setCellularAutoAssociationTokens:(id)arg1 ;
-(void*)_serverConnection;
-(void)set_serverConnection:(void*)arg1 ;
-(void*)_suspendDormancyAssertion;
-(void)set_suspendDormancyAssertion:(void*)arg1 ;
-(void)set_prefs:(SCPreferencesRef)arg1 ;
-(CTServerConnectionRef)_ctServerConnection;
-(void)set_ctServerConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)_cachedAirplaneMode;
-(void)set_cachedAirplaneMode:(BOOL)arg1 ;
-(void*)_cellAssertion;
-(void)set_cellAssertion:(void*)arg1 ;
-(BOOL)_isCachedAirplaneModeValid;
-(void)set_isCachedAirplaneModeValid:(BOOL)arg1 ;
-(int)_applySkipCount;
-(void)set_applySkipCount:(int)arg1 ;
-(BOOL)shouldBringUpDataContext;
-(void)setShouldBringUpDataContext:(BOOL)arg1 ;
-(BOOL)dataContextActive;
-(void)setDataContextActive:(BOOL)arg1 ;
-(void)refresh;
-(void*)wifiManager;
-(void)setWifiManager:(void*)arg1 ;
@end

