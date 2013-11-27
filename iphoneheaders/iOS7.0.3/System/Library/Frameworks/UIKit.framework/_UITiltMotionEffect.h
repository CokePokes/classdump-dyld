/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect {

	float _maximumHorizontalTiltAngle;
	float _maximumVerticalTiltAngle;
	float _rotatingSphereRadius;

}

@property (assign,nonatomic) float maximumHorizontalTiltAngle;              //@synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle - In the implementation block
@property (assign,nonatomic) float maximumVerticalTiltAngle;                //@synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle - In the implementation block
@property (assign,nonatomic) float rotatingSphereRadius;                    //@synthesize rotatingSphereRadius=_rotatingSphereRadius - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setRotatingSphereRadius:(float)arg1 ;
-(float)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(float)arg1 ;
-(float)maximumVerticalTiltAngle;
-(void)setMaximumVerticalTiltAngle:(float)arg1 ;
-(float)rotatingSphereRadius;
@end

