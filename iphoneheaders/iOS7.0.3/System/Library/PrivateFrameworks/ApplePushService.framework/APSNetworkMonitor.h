/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <apsd/apsd-Structs.h>
#import <apsd/CUTWiFiManagerDelegate.h>
#import <apsd/APSSystemMonitorListener.h>
#import <apsd/APSDecayTimerDelegate.h>

@class CUTWeakReference, NSString, NSMutableArray, APSDecayTimer, PCSimpleTimer, NSDate;

@interface APSNetworkMonitor : NSObject <CUTWiFiManagerDelegate, APSSystemMonitorListener, APSDecayTimerDelegate> {

	CUTWeakReference* _delegate;
	NSString* _lastSSID;
	NSMutableArray* _wifiMeasurements;
	unsigned _wifiGrowAttemptsBeforeSSID;
	unsigned _wifiGrowAttempts;
	double _wifiKeepAliveInterval;
	APSDecayTimer* _decayTimer;
	PCSimpleTimer* _connectionThrottleTimer;
	BOOL _shouldThrottleConnection;
	BOOL _serverSupportsDualMode;
	int _dualMode;
	NSDate* _lastPiggybackReset;
	NSDate* _lastPiggybackConnection;
	unsigned _piggybackCount;
	unsigned _maxCostDrivenConnectionsPerDay;
	unsigned _maxPiggybackConnectionsPerDay;
	BOOL _disableCostDrivenDualMode;
	BOOL _shouldUseDualMode;
	BOOL _shouldEnableWifiAutoAssoc;
	BOOL _criticalReliability;
	BOOL _isPiggybacking;

}

@property (assign,nonatomic) <APSNetworkMonitorDelegate> * delegate; 
@property (assign,nonatomic) BOOL serverSupportsDualMode;                         //@synthesize serverSupportsDualMode=_serverSupportsDualMode - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseDualMode;                            //@synthesize shouldUseDualMode=_shouldUseDualMode - In the implementation block
@property (nonatomic,readonly) BOOL isPiggybacking;                               //@synthesize isPiggybacking=_isPiggybacking - In the implementation block
+(unsigned)powerCostForPushOnRAT:(CFStringRef)arg1 withLinkQuality:(int)arg2 ;
-(void)setCriticalReliability:(BOOL)arg1 ;
-(BOOL)shouldUseDualMode;
-(void)closedSecondChannel:(int)arg1 ;
-(BOOL)isPiggybacking;
-(void)setDisableCostDrivenDualChannelAttempts:(id)arg1 ;
-(void)setPiggybackDualChannelAttempts:(id)arg1 ;
-(void)setCostDrivenDualChannelAttempts:(id)arg1 ;
-(void)openedSecondChannel;
-(void)setServerSupportsDualMode:(BOOL)arg1 ;
-(void)notePushWithCost:(unsigned)arg1 ;
-(void)setCurrentWiFiKeepAliveInterval:(double)arg1 growAttempts:(unsigned)arg2 ;
-(void)decayTimerFired:(id)arg1 ;
-(void)_reloadDualMode;
-(void)_processSSIDChange;
-(void)_clearConnectionThrottleTimer;
-(void)_toggleWiFiAutoAssociateIfNecessary;
-(void)_flushStaleWiFiMeasurements;
-(void)_flushStaleElementsFrom:(id*)arg1 withThreshold:(double)arg2 ;
-(double)_accumulatedAwakePercentage;
-(BOOL)_wifiIsHistoricallyCheap;
-(BOOL)_checkPiggybackBudget;
-(void)__toggleWiFiAutoAssociateIfNecessary;
-(void)_connectionThrottleTimerFired;
-(BOOL)serverSupportsDualMode;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_handleSignificantTimeChange;
-(void)cutWiFiManagerLinkDidChange:(id)arg1 ;
-(void)cutWiFiManager:(id)arg1 generatedPowerReading:(id)arg2 ;
-(void)systemDidLock;
-(void)systemDidUnlock;
@end

