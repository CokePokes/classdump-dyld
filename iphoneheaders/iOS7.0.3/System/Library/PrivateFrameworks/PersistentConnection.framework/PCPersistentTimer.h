/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PersistentConnection/PCLoggingDelegate.h>
#import <CommonUtilities/CUTPowerMonitorDelegate.h>

@class NSString, PCSimpleTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate, CUTPowerMonitorDelegate> {

	double _fireTime;
	double _startTime;
	unsigned _guidancePriority;
	double _minimumEarlyFireProportion;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	NSString* _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	PCSimpleTimer* _simpleTimer;

}

@property (assign,nonatomic) double minimumEarlyFireProportion;              //@synthesize minimumEarlyFireProportion=_minimumEarlyFireProportion - In the implementation block
@property (assign,nonatomic) BOOL disableSystemWaking;                       //@synthesize disableSystemWaking=_disableSystemWaking - In the implementation block
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) NSString * loggingIdentifier;                 //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(void)_updateTime:(double)arg1 forGuidancePriority:(unsigned)arg2 ;
+(id)lastSystemWakeDate;
+(double)currentMachTimeInterval;
+(double)_currentGuidanceTime;
-(id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)setMinimumEarlyFireProportion:(double)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(double)fireTime;
-(void)dealloc;
-(id)debugDescription;
-(void)invalidate;
-(BOOL)isValid;
-(id)userInfo;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(void)setDisableSystemWaking:(BOOL)arg1 ;
-(id)loggingIdentifier;
-(id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7 ;
-(void)_updateTimers;
-(void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2 ;
-(void)_fireTimerFired;
-(BOOL)firingIsImminent;
-(double)_nextForcedAlignmentAbsoluteTime;
-(double)_earlyFireTime;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
-(double)minimumEarlyFireProportion;
-(BOOL)disableSystemWaking;
@end

