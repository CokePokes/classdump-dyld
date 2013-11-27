/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

	_UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
	float _planarRotationAngle;
	UIOffset _viewerOffset;

}

@property (assign,nonatomic) UIOffset viewerOffset;                  //@synthesize viewerOffset=_viewerOffset - In the implementation block
@property (assign,nonatomic) float planarRotationAngle;              //@synthesize planarRotationAngle=_planarRotationAngle - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)_reset;
-(UIOffset)viewerOffset;
-(void)setViewerOffset:(UIOffset)arg1 ;
-(id)_acceleratedOutputRange;
-(void)_setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(UIOffset)_acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(float)planarRotationAngle;
-(void)setPlanarRotationAngle:(float)arg1 ;
@end

