/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSLock, NSArray;

@interface SUGradient : NSObject <NSCoding, NSCopying> {

	NSMutableArray* _colorStops;
	NSLock* _lock;
	SUGradientPoint _p0;
	SUGradientPoint _p1;
	BOOL _sorted;
	int _type;

}

@property (readonly) int gradientType; 
@property (readonly) SUGradientPoint p0; 
@property (readonly) SUGradientPoint p1; 
@property (readonly) NSArray * colorStopColors; 
@property (readonly) NSArray * colorStopOffsets; 
@property (readonly) int numberOfColorStops; 
+(id)gradientWithColor:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
-(int)numberOfColorStops;
-(id)colorStopColors;
-(void)addColorStopWithOffset:(float)arg1 color:(CGColorRef)arg2 ;
-(CGShadingRef)copyShading;
-(id)initWithPoint0:(SUGradientPoint)arg1 point1:(SUGradientPoint)arg2 type:(int)arg3 ;
-(id)newPatternColorWithSize:(CGSize)arg1 opaque:(BOOL)arg2 ;
-(int)gradientType;
-(CGGradientRef)copyCGGradient;
-(SUGradientPoint)p0;
-(SUGradientPoint)p1;
-(id)colorStopOffsets;
@end

