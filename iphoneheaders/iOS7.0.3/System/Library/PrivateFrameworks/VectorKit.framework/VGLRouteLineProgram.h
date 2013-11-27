/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLFogProgram.h>

@interface VGLRouteLineProgram : VGLFogProgram {

	int _uTextureSampler;
	int _textureSampler;
	int _uTravelledTextureSampler;
	int _travelledTextureSampler;
	int _uAlphaTextureSampler;
	int _alphaTextureSampler;
	int _uHalfWidth;
	float _halfWidth;
	int _uStrokeWidthScale;
	float _strokeWidthScale;
	int _uSplitLength;
	float _splitLength;
	int _uTravelledColor;
	VGLColor _travelledColor;
	int _uBrightness;
	float _brightness;
	int _uLightDirection;
	SCD_Struct_VG165 _lightDirection;
	int _uInverseBaseColor;
	VGLColor _inverseBaseColor;
	int _uAlphaScale;
	float _alphaScale;

}

@property (assign,nonatomic) int textureSampler;                       //@synthesize textureSampler=_textureSampler - In the implementation block
@property (assign,nonatomic) int travelledTextureSampler;              //@synthesize travelledTextureSampler=_travelledTextureSampler - In the implementation block
@property (assign,nonatomic) int alphaTextureSampler;                  //@synthesize alphaTextureSampler=_alphaTextureSampler - In the implementation block
@property (assign,nonatomic) float halfWidth;                          //@synthesize halfWidth=_halfWidth - In the implementation block
@property (assign,nonatomic) float strokeWidthScale;                   //@synthesize strokeWidthScale=_strokeWidthScale - In the implementation block
@property (assign,nonatomic) float splitLength;                        //@synthesize splitLength=_splitLength - In the implementation block
@property (assign,nonatomic) VGLColor travelledColor;                  //@synthesize travelledColor=_travelledColor - In the implementation block
@property (assign,nonatomic) float brightness;                         //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) VGLColor inverseBaseColor;                //@synthesize inverseBaseColor=_inverseBaseColor - In the implementation block
@property (assign,nonatomic) float alphaScale;                         //@synthesize alphaScale=_alphaScale - In the implementation block
+(id)vertName;
+(id)fragName;
-(id).cxx_construct;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(void)setup;
-(void)setTextureSampler:(int)arg1 ;
-(void)setHalfWidth:(float)arg1 ;
-(void)setAlphaScale:(float)arg1 ;
-(int)textureSampler;
-(float)halfWidth;
-(float)alphaScale;
-(VGLColor)travelledColor;
-(void)setTravelledColor:(VGLColor)arg1 ;
-(void)setStrokeWidthScale:(float)arg1 ;
-(void)setInverseBaseColor:(VGLColor)arg1 ;
-(void)setAlphaTextureSampler:(int)arg1 ;
-(void)setSplitLength:(float)arg1 ;
-(float)strokeWidthScale;
-(void)setTravelledTextureSampler:(int)arg1 ;
-(int)travelledTextureSampler;
-(int)alphaTextureSampler;
-(float)splitLength;
-(VGLColor)inverseBaseColor;
@end

