/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMObject.h>

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject

@property (readonly) DOMCSSPrimitiveValue * red; 
@property (readonly) DOMCSSPrimitiveValue * green; 
@property (readonly) DOMCSSPrimitiveValue * blue; 
@property (readonly) DOMCSSPrimitiveValue * alpha; 
-(void)dealloc;
-(id)alpha;
-(CGColorRef)color;
-(id)red;
-(id)green;
-(id)blue;
-(void)finalize;
@end

