/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/AnalogClockView.h>

@interface FullscreenLandscapeAnalogClockView : AnalogClockView
+(id)resourcePath;
+(int)style;
+(float)faceRadius;
+(BOOL)doesFaceHaveShadow;
+(CGPoint)handRotationalCenterForHand:(int)arg1 ;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(id)makeClockHand:(int)arg1 daytime:(BOOL)arg2 ;
+(id)overHourHandDotImageForDaytime:(BOOL)arg1 ;
+(id)makeOverSecondHandDotImage;
-(double)updateInterval;
-(double)coarseUpdateInterval;
@end

