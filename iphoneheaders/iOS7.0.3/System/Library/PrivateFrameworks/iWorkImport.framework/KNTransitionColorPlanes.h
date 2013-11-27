/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameAnimator.h>
#import <iWorkImport/KNAnimationPlugin.h>

@class TSDGLShader, TSDGLDataBuffer, TSDGLMotionBlurEffect;

@interface KNTransitionColorPlanes : KNAnimationEffect <KNFrameAnimator, KNAnimationPlugin> {

	TSDGLShader* _colorShader;
	TSDGLShader* _velocityShader;
	TSDGLDataBuffer* _colorDataBuffer;
	TSDGLDataBuffer* _velocityDataBuffer;
	unsigned _colorCount;
	TSDGLMotionBlurEffect* _motionBlurEffect;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)defaultAttributes;
+(id)animationName;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(CATransform3D)p_mvpMatrixWithTexture:(id)arg1 direction:(unsigned)arg2 percent:(double)arg3 colorIndex:(unsigned)arg4 ;
-(void)p_drawWithContext:(id)arg1 isVelocity:(BOOL)arg2 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)dealloc;
@end

