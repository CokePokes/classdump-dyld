/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNContentAwareTransitionAnimator.h>
#import <iWorkImport/KNContentAwareFrameAnimator.h>

@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;

@interface KNContentAwareDissolveAndFlip : KNAnimationEffect <KNContentAwareTransitionAnimator, KNContentAwareFrameAnimator> {

	KNAnimParameterGroup* _parameterGroup;
	KNMotionBlurAnimationPluginWrapper* _motionBlurWrapper;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(BOOL)isCharacterAwareEffect;
+(BOOL)requiresBullets;
+(BOOL)requiresMagicMoveTextures;
+(BOOL)requiresPerspectiveTransform;
+(id)customAttributes;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(void)dealloc;
@end

