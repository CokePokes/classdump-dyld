/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PUAbstractTransition.h>

@class UICollectionView, UICollectionViewLayout, PUCollectionViewTransitionLayout, NSMutableDictionary, CAMediaTimingFunction, CADisplayLink;

@interface PUCollectionViewTransition : PUAbstractTransition {

	UICollectionView* __targetCollectionView;
	UICollectionViewLayout* __fromLayout;
	UICollectionViewLayout* __toLayout;
	PUCollectionViewTransitionLayout* __transitionLayout;
	NSMutableDictionary* __indexPathsToInterpolatingLayoutAttributes;
	CAMediaTimingFunction* __interpolationTimingFunction;
	CADisplayLink* __interpolatingDisplayLink;
	/*^block*/ id __interpolatingCompletionBlock;
	double __interpolationProgress;
	double __interpolationInitialProgress;
	double __initialUpdateTime;

}

@property (setter=_setTargetCollectionView:,nonatomic,retain) UICollectionView * _targetCollectionView;                                                           //@synthesize _targetCollectionView=__targetCollectionView - In the implementation block
@property (setter=_setFromLayout:,nonatomic,retain) UICollectionViewLayout * _fromLayout;                                                                         //@synthesize _fromLayout=__fromLayout - In the implementation block
@property (setter=_setToLayout:,nonatomic,retain) UICollectionViewLayout * _toLayout;                                                                             //@synthesize _toLayout=__toLayout - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) PUCollectionViewTransitionLayout * _transitionLayout;                                                   //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (setter=_setIndexPathsToInterpolatingLayoutAttributes:,nonatomic,retain) NSMutableDictionary * _indexPathsToInterpolatingLayoutAttributes;              //@synthesize _indexPathsToInterpolatingLayoutAttributes=__indexPathsToInterpolatingLayoutAttributes - In the implementation block
@property (setter=_setInterpolationTimingFunction:,nonatomic,retain) CAMediaTimingFunction * _interpolationTimingFunction;                                        //@synthesize _interpolationTimingFunction=__interpolationTimingFunction - In the implementation block
@property (assign,setter=_setInterpolationProgress:,nonatomic) double _interpolationProgress;                                                                     //@synthesize _interpolationProgress=__interpolationProgress - In the implementation block
@property (assign,setter=_setInterpolationInitialProgress:,nonatomic) double _interpolationInitialProgress;                                                       //@synthesize _interpolationInitialProgress=__interpolationInitialProgress - In the implementation block
@property (setter=_setInterpolatingDisplayLink:,nonatomic,retain) CADisplayLink * _interpolatingDisplayLink;                                                      //@synthesize _interpolatingDisplayLink=__interpolatingDisplayLink - In the implementation block
@property (assign,setter=_setInitialUpdateTime:,nonatomic) double _initialUpdateTime;                                                                             //@synthesize _initialUpdateTime=__initialUpdateTime - In the implementation block
@property (setter=_setInterpolatingCompletionBlock:,nonatomic,copy) id _interpolatingCompletionBlock;                                                             //@synthesize _interpolatingCompletionBlock=__interpolatingCompletionBlock - In the implementation block
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(id)_transitionLayout;
-(void)_updateBidirectionalAnimatingLayoutAttributes;
-(void)_updateUnidirectionalAnimatingLayoutAttributes;
-(id)_indexPathsToInterpolatingLayoutAttributes;
-(id)_fromLayout;
-(id)_toLayout;
-(id)_targetCollectionView;
-(id)_indexPathsFromLayout:(id)arg1 inCollectionView:(id)arg2 withMapping:(out id*)arg3 ;
-(void)_setIndexPathsToInterpolatingLayoutAttributes:(id)arg1 ;
-(void)finishTransitionUsingDynamicsAtVelocity:(double)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)finishTransitionUsingInterpolationToProgress:(double)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(id)_interpolatingAttributes;
-(double)_initialUpdateTime;
-(double)_interpolationInitialProgress;
-(double)_interpolationProgress;
-(id)_interpolationTimingFunction;
-(id)_interpolatingDisplayLink;
-(void)_setInterpolatingDisplayLink:(id)arg1 ;
-(/*^block*/ id)_interpolatingCompletionBlock;
-(void)interpolatedTransition:(id)arg1 ;
-(void)_setInitialUpdateTime:(double)arg1 ;
-(void)_setInterpolatingCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_setInterpolationProgress:(double)arg1 ;
-(void)_setInterpolationInitialProgress:(double)arg1 ;
-(void)_setInterpolationTimingFunction:(id)arg1 ;
-(void)cancelInteractiveTransitionWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithCollectionView:(id)arg1 fromLayout:(id)arg2 toLayout:(id)arg3 ;
-(id)initWithCollectionView:(id)arg1 fromLayout:(id)arg2 ;
-(void)performTransitionWithBounce:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)finishInteractiveTransitionAtVelocity:(double)arg1 withBounce:(BOOL)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)cancelInteractiveTransitionWithBounce:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_setTargetCollectionView:(id)arg1 ;
-(void)_setFromLayout:(id)arg1 ;
-(void)_setToLayout:(id)arg1 ;
-(void).cxx_destruct;
@end

