/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@class NSMutableDictionary, NSDate, NSString, PLEntry, NSMutableArray, PLDuetSnapshotList;

@interface PLBatteryLifeMonitorLogger : PLLogger {

	NSMutableDictionary* _modeledPower;
	NSDate* _lastRollTime;
	NSString* _wifiHardwareChipset;
	PLEntry* _lastWiFiEntry;
	PLEntry* _lastNetworkUsageEntry;
	NSMutableDictionary* _energyPerApp;
	NSMutableArray* _perAppDataUsageSnapshots;
	NSMutableDictionary* _lastPerAppDataUsageSnapshots;
	PLDuetSnapshotList* _duetSnapshots;

}

@property (retain) NSMutableDictionary * modeledPower;                              //@synthesize modeledPower=_modeledPower - In the implementation block
@property (retain) NSDate * lastRollTime;                                           //@synthesize lastRollTime=_lastRollTime - In the implementation block
@property (nonatomic,retain) NSString * wifiHardwareChipset;                        //@synthesize wifiHardwareChipset=_wifiHardwareChipset - In the implementation block
@property (retain) PLEntry * lastWiFiEntry;                                         //@synthesize lastWiFiEntry=_lastWiFiEntry - In the implementation block
@property (retain) PLEntry * lastNetworkUsageEntry;                                 //@synthesize lastNetworkUsageEntry=_lastNetworkUsageEntry - In the implementation block
@property (retain) NSMutableDictionary * energyPerApp;                              //@synthesize energyPerApp=_energyPerApp - In the implementation block
@property (retain) NSMutableArray * perAppDataUsageSnapshots;                       //@synthesize perAppDataUsageSnapshots=_perAppDataUsageSnapshots - In the implementation block
@property (retain) NSMutableDictionary * lastPerAppDataUsageSnapshots;              //@synthesize lastPerAppDataUsageSnapshots=_lastPerAppDataUsageSnapshots - In the implementation block
@property (retain) PLDuetSnapshotList * duetSnapshots;                              //@synthesize duetSnapshots=_duetSnapshots - In the implementation block
-(void)dealloc;
-(id)init;
-(void)log;
-(id)loggerFunctionCall:(short)arg1 withParameters:(id)arg2 ;
-(void)readPowerModelsFromPlists;
-(void)initLastProtocolModelPower;
-(void)rollingInit;
-(id)duetSnapshots;
-(void)setupDuetXPCConnection;
-(void)handleWifiLogNotification:(id)arg1 ;
-(void)handleBasebandTxPowerNotification:(id)arg1 ;
-(void)handleBasebandEventNotification:(id)arg1 ;
-(void)handleBasebandICENotification:(id)arg1 ;
-(void)handleBatteryPropertiesReceivedNotification:(id)arg1 ;
-(void)handleDuetEventNotification:(id)arg1 ;
-(void)handleGasGaugeNotification:(id)arg1 ;
-(void)handleAudioEventNotification:(id)arg1 ;
-(void)handleCoreLocationEventNotification:(id)arg1 ;
-(void)handleDisplayEventNotification:(id)arg1 ;
-(void)handleNetworkUsageEventNotification:(id)arg1 ;
-(void)handleDeviceDidWakeNotification:(id)arg1 ;
-(void)handleSymptomsPerAppDataUsageEventNotification:(id)arg1 ;
-(void)handleTelephonyNotification:(id)arg1 ;
-(void)handleLTESleepManagerStatsNotification:(id)arg1 ;
-(void)handleFileRollNotification:(id)arg1 ;
-(void)setLastRollTime:(id)arg1 ;
-(void)initModeledPower;
-(void)setEnergyPerApp:(id)arg1 ;
-(void)logDebugRollingEvent;
-(id)lastRollTime;
-(void)logModelingState:(id)arg1 withTimestamp:(double)arg2 withValue:(id)arg3 withReason:(id)arg4 withParam:(id)arg5 ;
-(BOOL)stopGasGauge;
-(void)setModeledPower:(id)arg1 ;
-(id)protocolRailForRAT:(id)arg1 ;
-(id)txRailForRAT:(id)arg1 ;
-(id)modeledPower;
-(void)addSnapshot:(id)arg1 toRail:(id)arg2 withReason:(id)arg3 withCap:(double)arg4 ;
-(void)handleRolling;
-(void)logDiscardedInput:(id)arg1 WithReason:(id)arg2 ;
-(id)lastPerAppDataUsageSnapshots;
-(double)clampedValueOf:(double)arg1 withLower:(double)arg2 withUpper:(double)arg3 ;
-(void)setLastPerAppDataUsageSnapshots:(id)arg1 ;
-(id)perAppDataUsageSnapshots;
-(id)safeEntryFromNotification:(id)arg1 ;
-(id)lastNetworkUsageEntry;
-(void)logDebugNetworkUsageWithRxBytes:(unsigned)arg1 withTxBytes:(unsigned)arg2 ;
-(void)updateWiFiModelWithNetworkInBytes:(unsigned)arg1 networkOutBytes:(unsigned)arg2 ;
-(void)setLastNetworkUsageEntry:(id)arg1 ;
-(void)updateForegroundStatus;
-(BOOL)isGPSOn;
-(void)setLastWiFiEntry:(id)arg1 ;
-(void)logDebugBasebandTxPower:(double)arg1 withTimestamp:(double)arg2 withTxSum:(double)arg3 withRat:(id)arg4 ;
-(void)logDebugBasebandProtocolPower:(double)arg1 withTimestamp:(double)arg2 withRat:(id)arg3 ;
-(BOOL)giveDuetEventsFreePass;
-(void)logDebugBatteryWithTimeDelta:(double)arg1 withEnergy:(double)arg2 withPower:(double)arg3 ;
-(void)logDebugBasebandICEWithWCDMAPower:(double)arg1 withGSMPower:(double)arg2 ;
-(void)stopAllDuetEvents;
-(double)timerForFlushRadioEvent:(id)arg1 ;
-(void)logDuetSnapshotEntry:(id)arg1 ;
-(void)logDebugModeledPower;
-(void)flushRadios:(double)arg1 ;
-(BOOL)startGasGauge;
-(void)logDebugFlushRadiosWithTimeout:(double)arg1 withDuetActive:(BOOL)arg2 ;
-(void)_flushRadiosNow:(id)arg1 ;
-(void)_flushRadiosOnPeriodicTimer:(id)arg1 ;
-(id)lastWiFiEntry;
-(id)wifiHardwareChipset;
-(void)logModelingRail:(id)arg1 withTimestamp:(double)arg2 withPower:(double)arg3 withReason:(id)arg4 withParam:(id)arg5 ;
-(void)updateBatteryCharge;
-(double)computeBatteryCapInRange:(id)arg1 ;
-(double)computeModeledEnergyInRange:(id)arg1 ;
-(BOOL)deviceWasChargingInRange:(id)arg1 ;
-(void)fixPowerSnapshotListsForLastActivity;
-(void)logDebugSafeTimeForModeling:(double)arg1 withLastRail:(id)arg2 ;
-(void)logDuetEventsStoppedAtStopAll:(id)arg1 ;
-(void)DuetLSTXPCHandler:(id)arg1 ;
-(void)logDuetQueryResults:(unsigned long long)arg1 withData:(double)arg2 ;
-(id)energyPerApp;
-(void)logDebugEnergyModeledTillNow;
-(double)duetEnergyInRange:(id)arg1 fillGasGaugeUsed:(BOOL*)arg2 ;
-(void)logSnapshot:(id)arg1 withEnergy:(double)arg2 withGasGauge:(BOOL)arg3 ;
-(void)logDebugDuetEventsEnergy:(double)arg1 withDuetEvents:(id)arg2 inRange:(id)arg3 ;
-(void)accountEnergy:(double)arg1 forActivity:(id)arg2 ;
-(void)clearFromPowerSnapshotListsUntilTime:(double)arg1 ;
-(void)logDebugAccountEnergyWithSafeTime:(double)arg1 withClearTime:(double)arg2 ;
-(void)logDebugPerAppDataUsageSnapshot:(id)arg1 ;
-(double)safeTimeForModeling;
-(void)logDebugDuetCarryWithFromTime:(double)arg1 toTime:(double)arg2 didCarry:(BOOL)arg3 ;
-(void)accountSymptomsEnergyWithSafeTimeForModeling:(double)arg1 ;
-(void)accountEnergyWithSafeTimeForModeling:(double)arg1 ;
-(void)logDebugEnergyPerApp;
-(void)logDebugDuetQuery:(id)arg1 ;
-(void)queryDuetForEnergy;
-(BOOL)isLoggingUnRestricted;
-(void)logDebugModeledPowerSnapshotList:(id)arg1 withName:(id)arg2 ;
-(BOOL)isValidNotification:(id)arg1 ;
-(void)setWifiHardwareChipset:(id)arg1 ;
-(void)setPerAppDataUsageSnapshots:(id)arg1 ;
-(void)setDuetSnapshots:(id)arg1 ;
@end

