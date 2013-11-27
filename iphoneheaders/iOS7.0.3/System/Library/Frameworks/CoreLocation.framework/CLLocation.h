/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSDate, NSString;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CL0 coordinate; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) SCD_Struct_CL3 clientLocation; 
@property (nonatomic,readonly) NSString * iso6709Notation; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) SCD_Struct_CL0 rawCoordinate; 
@property (nonatomic,readonly) double rawCourse; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoordinate:(SCD_Struct_CL0)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 ;
-(id)_initWithCoordinate:(SCD_Struct_CL0)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(id)initWithCoordinate:(SCD_Struct_CL0)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(SCD_Struct_CL0)rawCoordinate;
-(double)rawCourse;
-(double)getDistanceFrom:(id)arg1 ;
-(id)snapToResolution:(double)arg1 ;
-(id)propagateLocationToTime:(double)arg1 ;
-(SCD_Struct_CL3)clientLocation;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)timestamp;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(double)speed;
-(id)shortDescription;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)horizontalAccuracy;
-(SCD_Struct_CL0)coordinate;
-(double)verticalAccuracy;
-(double)altitude;
-(id)iso6709Notation;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(double)distanceFromLocation:(id)arg1 ;
-(double)course;
-(id)initWithClientLocation:(SCD_Struct_CL3)arg1 ;
@end

