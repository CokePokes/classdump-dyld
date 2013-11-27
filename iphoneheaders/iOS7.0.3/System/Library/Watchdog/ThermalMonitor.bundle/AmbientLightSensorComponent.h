/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:49:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ContextAwareObject.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface AmbientLightSensorComponent : ContextAwareObject <tGraphDataSource> {

	int previousSunlightLoadingIndexValue;
	int sunlightLoadingIndexValue;
	int thermalSunlightStateToken;
	long temperature;
	long ALS_FS;
	long ALS_IR;
	long IR_PRED;
	CFArrayRef array;
	IOHIDServiceClientRef service;

}

@property (nonatomic,readonly) long temperature; 
@property (nonatomic,readonly) long ALS_FS; 
@property (nonatomic,readonly) long ALS_IR; 
@property (nonatomic,readonly) long IR_PRED; 
-(void)initHIDServices;
-(long)ALS_FS;
-(bool)synchContext;
-(int)getContextState;
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(bool)isContextTriggered;
-(long)IR_PRED;
-(long)ALS_IR;
-(void)dealloc;
-(id)init;
-(long)temperature;
@end

