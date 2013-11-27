/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class SBApplication, UIView, SBStretchTransformer;

@interface SBSwitchAppGestureView : UIView {

	int m_orientation;
	SBApplication* m_startingApp;
	SBApplication* m_endingApp;
	SBApplication* m_leftwardApp;
	SBApplication* m_rightwardApp;
	int m_startingViewOrientation;
	int m_leftwardViewOrientation;
	int m_rightwardViewOrientation;
	UIView* m_startingView;
	UIView* m_leftwardView;
	UIView* m_rightwardView;
	float m_pageWidth;
	float m_percentage;
	float m_contentOffset;
	SBStretchTransformer* m_stretchTransformer;
	BOOL m_finishingPaging;
	BOOL m_underflowing;
	BOOL m_overflowing;
	/*^block*/ id m_completion;

}

@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) SBApplication * startingApp; 
@property (nonatomic,retain) SBApplication * endingApp; 
@property (nonatomic,retain) SBApplication * leftwardApp; 
@property (nonatomic,retain) SBApplication * rightwardApp; 
@property (assign,nonatomic) int startingViewOrientation; 
@property (assign,nonatomic) int leftwardViewOrientation; 
@property (assign,nonatomic) int rightwardViewOrientation; 
@property (nonatomic,readonly) BOOL pagingLeftward; 
@property (nonatomic,readonly) BOOL pagingRightward; 
@property (assign,nonatomic) BOOL underflowing; 
@property (assign,nonatomic) BOOL overflowing; 
@property (nonatomic,retain) UIView * startingView; 
@property (nonatomic,retain) UIView * leftwardView; 
@property (nonatomic,retain) UIView * rightwardView; 
@property (assign,nonatomic) float pageWidth; 
@property (assign,nonatomic) float percentage; 
@property (assign,nonatomic) float contentOffset; 
@property (nonatomic,retain) SBStretchTransformer * stretchTransformer; 
@property (nonatomic,copy) id completion; 
-(void)setPercentage:(float)arg1 ;
-(id)initWithInterfaceOrientation:(int)arg1 startingApp:(id)arg2 leftwardApp:(id)arg3 rightwardApp:(id)arg4 ;
-(void)beginPaging;
-(void)updatePaging:(float)arg1 ;
-(void)finishBackwardToStartWithCompletion:(/*^block*/ id)arg1 ;
-(void)finishForwardToEndWithPercentage:(float)arg1 completion:(/*^block*/ id)arg2 ;
-(id)startingApp;
-(id)endingApp;
-(float)percentage;
-(void)setStartingApp:(id)arg1 ;
-(void)setEndingApp:(id)arg1 ;
-(void)setLeftwardApp:(id)arg1 ;
-(void)setRightwardApp:(id)arg1 ;
-(void)setStartingView:(id)arg1 ;
-(void)setLeftwardView:(id)arg1 ;
-(void)setRightwardView:(id)arg1 ;
-(void)setStretchTransformer:(id)arg1 ;
-(float)contentOffsetForApp:(id)arg1 ;
-(void)transformGestureViewContainer:(id)arg1 ;
-(id)viewForApp:(id)arg1 ;
-(id)startingView;
-(void)setStartingViewOrientation:(int)arg1 ;
-(id)leftwardApp;
-(id)leftwardView;
-(void)setLeftwardViewOrientation:(int)arg1 ;
-(id)rightwardApp;
-(id)rightwardView;
-(void)setRightwardViewOrientation:(int)arg1 ;
-(void)moveToApp:(id)arg1 ;
-(void)setUnderflowing:(BOOL)arg1 ;
-(void)setOverflowing:(BOOL)arg1 ;
-(BOOL)isPagingUnderflowPercentage:(float)arg1 ;
-(void)moveToContentOffset:(float)arg1 percentage:(float)arg2 animated:(BOOL)arg3 ;
-(id)stretchTransformer;
-(BOOL)isPagingOverflowPercentage:(float)arg1 ;
-(BOOL)underflowing;
-(BOOL)overflowing;
-(void)moveToApp:(id)arg1 animated:(BOOL)arg2 ;
-(void)stretchTransformerAnimationDidStop:(BOOL)arg1 ;
-(float)percentageForApp:(id)arg1 ;
-(float)scaleForPercentage:(float)arg1 ;
-(float)opacityForPercentage:(float)arg1 ;
-(BOOL)pagingLeftward;
-(BOOL)pagingRightward;
-(int)startingViewOrientation;
-(int)leftwardViewOrientation;
-(int)rightwardViewOrientation;
-(void)dealloc;
-(int)orientation;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setContentOffset:(float)arg1 ;
-(float)contentOffset;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(float)pageWidth;
-(void)setPageWidth:(float)arg1 ;
@end

