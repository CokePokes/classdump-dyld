/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VGLTextureProgram.h>

@interface VGLAnimatableTextureProgram : VGLTextureProgram {

	int _uTextureVariantSampler;
	int _textureVariantSampler;
	int _uTextureVariation;
	float _textureVariation;

}

@property (assign,nonatomic) int textureVariantSampler; 
@property (assign,nonatomic) float textureVariation;                 //@synthesize textureVariation=_textureVariation - In the implementation block
+(id)fragName;
-(void)setup;
-(void)setTextureVariantSampler:(int)arg1 ;
-(void)setTextureVariation:(float)arg1 ;
-(int)textureVariantSampler;
-(float)textureVariation;
@end

