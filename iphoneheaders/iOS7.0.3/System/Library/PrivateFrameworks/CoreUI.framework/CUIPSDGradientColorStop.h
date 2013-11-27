/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <CoreFoundation/NSCoding.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

	psdGradientColor gradientColor;

}
+(void)initialize;
+(id)colorStopWithLocation:(float)arg1 gradientColor:(psdGradientColor)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isColorStop;
-(float)colorLocation;
-(id)initWithLocation:(float)arg1 gradientColor:(psdGradientColor)arg2 ;
-(psdGradientColor)gradientColor;
@end

