/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLSimpleRoadProgram.h>

@interface VGLStrokePolygonProgram : VGLSimpleRoadProgram {

	int _uScale;
	float _scale;
	int _uStrokeColor;
	VGLColor _strokeColor;
	int _uTexturePolygonSampler;
	int _texturePolygonSampler;
	int _uIsPolygonSolidColor;
	int _isPolygonSolidColor;
	int _uIsToBeStroked;
	int _isToBeStroked;
	int _uPolygonColor;
	VGLColor _polygonColor;

}

@property (assign,nonatomic) VGLColor strokeColor;                   //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) float scale;                            //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int texturePolygonSampler; 
@property (assign,nonatomic) int isPolygonSolidColor;                //@synthesize isPolygonSolidColor=_isPolygonSolidColor - In the implementation block
@property (assign,nonatomic) int isToBeStroked;                      //@synthesize isToBeStroked=_isToBeStroked - In the implementation block
@property (assign,nonatomic) VGLColor polygonColor;                  //@synthesize polygonColor=_polygonColor - In the implementation block
+(id)vertName;
+(id)fragName;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(void)setStrokeColor:(VGLColor)arg1 ;
-(VGLColor)strokeColor;
-(id).cxx_construct;
-(void)setup;
-(void)setPolygonColor:(VGLColor)arg1 ;
-(void)setIsPolygonSolidColor:(int)arg1 ;
-(void)setTexturePolygonSampler:(int)arg1 ;
-(void)setIsToBeStroked:(int)arg1 ;
-(int)texturePolygonSampler;
-(int)isPolygonSolidColor;
-(int)isToBeStroked;
-(VGLColor)polygonColor;
@end

