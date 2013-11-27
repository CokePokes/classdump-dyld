/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKImageAnnotationMarkerLayer.h>

@interface VKRGBMaskingImageAnnotationMarkerLayer : VKImageAnnotationMarkerLayer {

	CGColorRef _redMaskColor;
	VGLColor _vglRedMaskColor;
	CGColorRef _greenMaskColor;
	VGLColor _vglGreenMaskColor;
	CGColorRef _blueMaskColor;
	VGLColor _vglBlueMaskColor;

}

@property (assign,nonatomic) CGColorRef redMaskColor;                //@synthesize redMaskColor=_redMaskColor - In the implementation block
@property (assign,nonatomic) CGColorRef greenMaskColor;              //@synthesize greenMaskColor=_greenMaskColor - In the implementation block
@property (assign,nonatomic) CGColorRef blueMaskColor;               //@synthesize blueMaskColor=_blueMaskColor - In the implementation block
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(id)_configuredProgramWithContext:(id)arg1 ;
-(void)setRedMaskColor:(CGColorRef)arg1 ;
-(void)setGreenMaskColor:(CGColorRef)arg1 ;
-(void)setBlueMaskColor:(CGColorRef)arg1 ;
-(CGColorRef)redMaskColor;
-(CGColorRef)greenMaskColor;
-(CGColorRef)blueMaskColor;
@end

