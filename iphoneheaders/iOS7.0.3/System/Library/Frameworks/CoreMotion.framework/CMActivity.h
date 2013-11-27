/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (nonatomic,readonly) BOOL maybeExitingVehicle; 
@property (nonatomic,readonly) BOOL hasExitedVehicle; 
-(id)initWithMotionActivity:(CLMotionActivity)arg1 andTimestamp:(double)arg2 ;
-(int)confidence;
-(BOOL)isMoving;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(BOOL)maybeExitingVehicle;
-(BOOL)hasExitedVehicle;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isRunning;
-(CLMotionActivity)activity;
@end

