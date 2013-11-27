/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CAMBlurredSnapshotView : UIView {

	BOOL _blurred;
	BOOL _dimmed;
	BOOL __supportsBlur;
	int _style;
	UIView* _snapshotView;
	UIView* __lowQualityBlurView;
	UIView* __dimmingView;
	CGRect _targetFrame;

}

@property (assign,nonatomic) int style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * snapshotView;                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) BOOL blurred;                                //@synthesize blurred=_blurred - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                 //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                          //@synthesize targetFrame=_targetFrame - In the implementation block
@property (nonatomic,readonly) BOOL _supportsBlur;                        //@synthesize _supportsBlur=__supportsBlur - In the implementation block
@property (nonatomic,readonly) UIView * _lowQualityBlurView;              //@synthesize _lowQualityBlurView=__lowQualityBlurView - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                     //@synthesize _dimmingView=__dimmingView - In the implementation block
-(void)dealloc;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(id)snapshotView;
-(id)_dimmingView;
-(id)initWithView:(id)arg1 ;
-(CGRect)targetFrame;
-(void)setTargetFrame:(CGRect)arg1 ;
-(void)setBlurred:(BOOL)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(BOOL)blurred;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(void)_applySnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_removeSnapshotBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_applyLowQualityBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_removeLowQualityBlurAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_applySnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_removeSnapshotDimAnimated:(BOOL)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_setupBlurOnSnapshot;
-(void)_prepareForApplyingBlurAnimation:(BOOL)arg1 inputRadiusAmount:(float*)arg2 inputRadiusDuration:(double*)arg3 inputRadiusDelay:(double*)arg4 inputRadiusTimingFunction:(id*)arg5 opacityAmount:(float*)arg6 opacityDuration:(double*)arg7 opacityDelay:(double*)arg8 opacityTimingFunction:(id*)arg9 ;
-(id)_lowQualityBlurView;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)_prepareForApplyingLowQualityBlurAnimation:(BOOL)arg1 opacityAmount:(float*)arg2 opacityDuration:(double*)arg3 opacityDelay:(double*)arg4 opacityTimingFunction:(id*)arg5 targetView:(id*)arg6 ;
-(void)_setupDimOnSnapshot;
-(BOOL)dimmed;
-(BOOL)_supportsBlur;
@end

