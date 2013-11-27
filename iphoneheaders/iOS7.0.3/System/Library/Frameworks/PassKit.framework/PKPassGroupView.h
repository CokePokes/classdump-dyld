/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>
#import <PassKit/WLCardViewDelegate.h>
#import <PassKit/PKGroupDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKPassGroupViewDelegate;
@class NSMutableDictionary, PKReusablePassViewQueue, UIScrollView, UIPageControl, UIView, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIInterpolatingMotionEffect, PKGroup, , PKPassView;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	NSMutableDictionary* _passViewsByUniqueID;
	PKReusablePassViewQueue* _passViewQueue;
	int _presentationState;
	UIScrollView* _horizontalScrollView;
	UIPageControl* _pageControl;
	unsigned _displayIndex;
	UIView* _dimmerView;
	float _dimmerValue;
	BOOL _showPageControl;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL _canPan;
	UIInterpolatingMotionEffect* _horizontalMotionEffect;
	UIInterpolatingMotionEffect* _verticalMotionEffect;
	PKGroup* _group;
	<PKPassGroupViewDelegate>* _delegate;
	float _verticalMotionRelativeValue;
	float _horizontalMotionRelativeValue;

}

@property (nonatomic,retain) PKGroup * group;                                      //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) PKPassView * frontmostPassView; 
@property (assign,nonatomic) PKReusablePassViewQueue * passViewQueue;              //@synthesize passViewQueue=_passViewQueue - In the implementation block
@property (assign,nonatomic) int presentationState;                                //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) unsigned displayIndex;                              //@synthesize displayIndex=_displayIndex - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl; 
@property (assign,nonatomic) float verticalMotionRelativeValue;                    //@synthesize verticalMotionRelativeValue=_verticalMotionRelativeValue - In the implementation block
@property (assign,nonatomic) float horizontalMotionRelativeValue;                  //@synthesize horizontalMotionRelativeValue=_horizontalMotionRelativeValue - In the implementation block
@property (nonatomic,readonly) <PKPassGroupViewDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)_handleLongPress:(id)arg1 ;
-(id)groupID;
-(void)setDimmer:(float)arg1 animated:(BOOL)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)passViewBackGrowsCentered:(id)arg1 ;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2 ;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2 ;
-(BOOL)passViewShouldFlip:(id)arg1 ;
-(void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2 ;
-(void)passViewTapped:(id)arg1 ;
-(void)setPresentationState:(int)arg1 animated:(BOOL)arg2 ;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(NSRange)_rangeOfVisibleIndexes;
-(id)frontmostPassView;
-(id)initWithGroup:(id)arg1 delegate:(id)arg2 contentMode:(int)arg3 ;
-(void)applyDefaultModeForPassesWithDuration:(double)arg1 ;
-(void)setPresentationState:(int)arg1 animated:(BOOL)arg2 resizePasses:(BOOL)arg3 ;
-(void)setHorizontalMotionRelativeValue:(float)arg1 ;
-(void)setVerticalMotionRelativeValue:(float)arg1 ;
-(void)setHorizontalMotionEnabled:(BOOL)arg1 ;
-(void)setVerticalMotionEnabled:(BOOL)arg1 ;
-(void)setPassViewQueue:(id)arg1 ;
-(id)_loadCardViewForIndex:(unsigned)arg1 contentMode:(int)arg2 ;
-(void)_addPanAndLongPressGestureRecognizers;
-(void)_removePanAndLongPressGestureRecognizers;
-(void)_pageControlChanged:(id)arg1 ;
-(void)_setupViewsForPagingWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2 ;
-(void)_setupViewsForStackingWithAnimation:(BOOL)arg1 scrolling:(BOOL)arg2 resizeCards:(BOOL)arg3 ;
-(void)_setupViewsForPileWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2 ;
-(void)_setupViewsForFanningWithAnimation:(BOOL)arg1 resizeCards:(BOOL)arg2 ;
-(int)_defaultContentModeForIndex:(unsigned)arg1 ;
-(void)_enumerateCardViewsByStackOrderWithBlock:(/*^block*/ id)arg1 ;
-(void)_showFrontmostPassOnly:(BOOL)arg1 ;
-(void)setShowPageControlWithAnimation:(BOOL)arg1 duration:(double)arg2 delay:(double)arg3 ;
-(CGRect)_pagingFrameForCardView:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_setupPageControl;
-(CGRect)_fanningFrameForCardView:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_stackIndexesFromVisibleIndexes:(NSRange)arg1 ;
-(unsigned)displayIndex;
-(id)_uniqueIDsOfVisibleCards;
-(id)_loadCardViewForUniqueID:(id)arg1 ;
-(void)_evictUnusedViews;
-(void)_loadNeededViews;
-(void)_updatePageControl;
-(void)_tilePagesEagerly:(BOOL)arg1 ;
-(void)flipPassViewForPass:(id)arg1 animated:(BOOL)arg2 fromLeft:(BOOL)arg3 ;
-(id)passViewQueue;
-(float)verticalMotionRelativeValue;
-(float)horizontalMotionRelativeValue;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)_contentSize;
-(void)setGroup:(id)arg1 ;
-(id)group;
-(id)pageControl;
-(void)_handlePanGesture:(id)arg1 ;
-(void)setPresentationState:(int)arg1 ;
-(int)presentationState;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned)arg3 ;
@end

