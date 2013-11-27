/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying> {

	NSString* _phase;
	float _percentComplete;
	float _normalizedPercentComplete;
	double _timeRemaining;

}

@property (nonatomic,retain) NSString * phase;                             //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float percentComplete;                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) float normalizedPercentComplete;              //@synthesize normalizedPercentComplete=_normalizedPercentComplete - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPercentComplete:(float)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(float)percentComplete;
-(id)phase;
-(void)setPhase:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isDone;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(void)setNormalizedPercentComplete:(float)arg1 ;
-(float)normalizedPercentComplete;
@end

