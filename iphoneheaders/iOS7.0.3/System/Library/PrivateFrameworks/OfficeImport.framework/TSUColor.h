/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSUColor : NSObject <NSCopying> {

	CGColorRef mCGColor;

}

@property (readonly) CGColorRef CGColor; 
+(id)blackColor;
+(id)clearColor;
+(id)colorWithWhite:(float)arg1 alpha:(float)arg2 ;
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)whiteColor;
+(id)grayColor;
+(id)lightGrayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)colorWithDeviceRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 ;
+(id)colorWithCalibratedHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
+(id)colorWithBGR:(unsigned long)arg1 ;
+(id)colorWithSystemColorID:(int)arg1 ;
+(id)stringForSystemColorID:(int)arg1 ;
+(id)stringForColor:(id)arg1 ;
+(id)colorWithBGRValue:(long)arg1 ;
+(id)colorWithRGBValue:(long)arg1 ;
+(id)colorWithCsColour:(const CsColour*)arg1 ;
+(id)colorWithEshColor:(const EshColor*)arg1 ;
+(id)colorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 ;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
-(void)dealloc;
-(CGColorRef)CGColor;
-(id)copy;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(void)set;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(BOOL)isOpaque;
-(id)initWithWhite:(float)arg1 alpha:(float)arg2 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(float)alphaComponent;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(BOOL)isBlack;
-(float)redComponent;
-(float)greenComponent;
-(float)blueComponent;
-(BOOL)isEqualToColor:(id)arg1 ;
-(CGColorRef)cgColorRef;
-(SCD_Struct_TS74)ttColor;
-(id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
-(id)newSolidColoredBitmap:(CGSize)arg1 ;
-(id)solidColoredPngImage;
-(unsigned long)toBGR;
-(id)colorWithTintValue:(double)arg1 ;
-(id)colorWithShadeValue:(double)arg1 ;
-(CsColour)csColour;
-(EshColor)eshColor;
-(void)getRGBBytes:(char*)arg1 :(char*)arg2 :(char*)arg3 ;
-(float)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2 ;
-(id)UIColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(float)luminance;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
@end

