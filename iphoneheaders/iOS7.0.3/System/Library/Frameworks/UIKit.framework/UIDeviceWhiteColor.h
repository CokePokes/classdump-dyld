/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UIDeviceWhiteColor : UIColor {

	float whiteComponent;
	float alphaComponent;
	CGColorRef cachedColor;
	long cachedColorOnceToken;

}
-(void)dealloc;
-(CGColorRef)CGColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)colorWithAlphaComponent:(float)arg1 ;
-(BOOL)getWhite:(float*)arg1 alpha:(float*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setFill;
-(id)initWithWhite:(float)arg1 alpha:(float)arg2 ;
-(float)alphaComponent;
-(BOOL)_getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4 ;
-(void)setStroke;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(CGColorRef)_createCGColorWithAlpha:(float)arg1 ;
@end

