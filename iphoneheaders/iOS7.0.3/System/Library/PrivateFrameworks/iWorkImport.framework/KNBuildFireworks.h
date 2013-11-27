/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNAnimParameterGroup, NSArray, TSDGLShader, TSDGLDataBuffer, TSDGLTextureInfo, TSDGLFrameBuffer, TSDGLBloomEffect;

@interface KNBuildFireworks : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	KNAnimParameterGroup* _parameterGroup;
	CGRect _drawableFrame;
	CGRect _frameRect;
	CATransform3D _baseOrthoTransform;
	CATransform3D _baseTransform;
	int _oldViewportRect[4];
	NSArray* _fireworksSystems;
	TSDGLShader* _fireworksShader;
	TSDGLShader* _objectShader;
	TSDGLDataBuffer* _objectDataBuffer;
	TSDGLShader* _centerBurstShader;
	TSDGLDataBuffer* _centerBurstDataBuffer;
	TSDGLTextureInfo* _centerBurstTextureInfo;
	TSDGLTextureInfo* _particleTextureInfo;
	TSDGLFrameBuffer* _framebuffer;
	TSDGLShader* _fboShader;
	TSDGLDataBuffer* _fboDataBuffer;
	TSDGLBloomEffect* _bloomEffect;
	float _previousPercent;
	BOOL _shouldApplyBloomEffect;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(BOOL)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)p_setupParticleTexture;
-(void)p_setupFBOWithSize:(CGSize)arg1 ;
-(void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2 ;
-(id)p_fireworksSystemsForTR:(id)arg1 build:(id)arg2 context:(id)arg3 ;
-(void)p_drawObject:(id)arg1 withContext:(id)arg2 ;
-(void)p_drawParticleSystemsWithPercent:(float)arg1 sparkles:(BOOL)arg2 particleSystemOpacity:(float)arg3 context:(id)arg4 ;
-(void)dealloc;
@end

