/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLSleepWakeLogger.bundle/PLSleepWakeLogger
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PLSleepWakeLogger/PLSleepWakeLogger-Structs.h>
#import <PowerlogLoggerSupport/PLTelephonyConnectedLogger.h>

@interface PLSleepWakeLogger : PLTelephonyConnectedLogger {

	unsigned rootDomainConnect;
	unsigned pmNotifier;
	IONotificationPortRef systemPowerPortRef;

}

@property (assign,nonatomic) unsigned rootDomainConnect; 
-(void)dealloc;
-(void)log;
-(id)initWithConnection:(id)arg1 ;
-(id)wakeReason;
-(id)stringForData:(id)arg1 ;
-(id)basebandWakeLogStringWithDecodedReason:(id)arg1 ;
-(id)_dateFromTimeval:(timeval)arg1 ;
-(BOOL)isBasebandWakeup:(id)arg1 ;
-(void)handleBasebandWake:(id)arg1 ;
-(id)eurekaBasebandWakeLogStringWithDecodedReason:(id)arg1 ;
-(id)iceBasebandWakeLogStringWithDecodedReason:(id)arg1 ;
-(void)systemPoweredOn;
-(unsigned)rootDomainConnect;
-(void)setRootDomainConnect:(unsigned)arg1 ;
@end

