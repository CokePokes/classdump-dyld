/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLBatteryLifeMonitorLogger.bundle/PLBatteryLifeMonitorLogger
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface PLPowerSnapshotList : NSObject {

	NSMutableArray* _snapshots;

}

@property (retain) NSMutableArray * snapshots;              //@synthesize snapshots=_snapshots - In the implementation block
-(void)addSnapshot:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(id)lastSnapshot;
-(double)lastTimeSinceEpoch;
-(id)snapshots;
-(double)energyInRange:(id)arg1 ;
-(void)clearUntilTime:(double)arg1 ;
-(BOOL)fixForInactivity;
-(void)setSnapshots:(id)arg1 ;
@end

