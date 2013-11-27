/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNChunkableBuildAnimator.h>

@class NSMutableArray;

@interface KNBuildLensFlare : KNAnimationEffect <KNChunkableBuildAnimator> {

	float mGlobalScale;
	float mGlobalDuration;
	NSMutableArray* mLayerToOldParentArray;

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
-(void)animationDidEndWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(id)p_layerWithImage:(CGImageRef)arg1 scale:(float)arg2 centeredAt:(CGPoint)arg3 ;
-(void)addLayerWithImageRef:(CGImageRef)arg1 toResultDictionary:(id)arg2 withLayer:(id)arg3 minScale:(float)arg4 maxScale:(float)arg5 opacity:(float)arg6 translation:(float)arg7 rotation:(float)arg8 direction:(unsigned)arg9 ;
-(float)stretchPercent:(float)arg1 toFill:(float)arg2 ;
-(void)dealloc;
@end

