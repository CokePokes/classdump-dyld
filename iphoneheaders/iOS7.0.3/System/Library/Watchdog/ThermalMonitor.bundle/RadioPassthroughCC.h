/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:49:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioPassthroughCC : ComponentControl <tGraphDataSource> {

	SCPreferencesRef radioPrefs;
	bool airplaneMode;
	bool radioTransmitting;
	NSObject<OS_dispatch_queue>* radioQueue;
	CTServerConnectionRef serverConnection;
	int defaultPeriodUpdateSecs;
	CFRunLoopRef runLoop;
	CFDictionaryRef txPowerConfiguration;
	int txPowerLimit;
	int txDutyCycleLimit;

}
-(void)initializeRadio;
-(void)setDecay:(int)arg1 :(int)arg2 ;
-(id)initWithTitle:(const char*)arg1 usingRunLoop:(CFRunLoopRef)arg2 withComponentControllerParams:(CFDictionaryRef)arg3 ;
-(void)createConnectionToCT:(long)arg1 ;
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(void)createServerConnection;
-(void)refreshCurrentLoadingIndex;
-(void)calculateMitigation;
-(bool)getTemperature:(long)arg1 :(int*)arg2 :(int*)arg3 ;
-(void)setMaxTransmitPower;
-(void)updateRadioTemp:(int)arg1 :(int)arg2 ;
-(void)dealloc;
-(void)defaultAction;
@end

