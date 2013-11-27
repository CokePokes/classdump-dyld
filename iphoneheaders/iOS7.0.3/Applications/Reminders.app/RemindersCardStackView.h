/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Reminders/RemindersCardViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol RemindersCardStackViewDataSource;
@class RemindersCardController, NSMutableArray, UIView, NSMutableDictionary, NSTimer, ;

@interface RemindersCardStackView : UIScrollView <RemindersCardViewDelegate, UIGestureRecognizerDelegate> {

	RemindersCardController* _currentlyDisplayedCard;
	NSMutableArray* _cardPileViews;
	int _displayedCardIndex;
	UIView* _pileContainer;
	int _presentationState;
	NSMutableDictionary* _cardControllersByID;
	RemindersCardController* _reorderdCard;
	int _previousIndexOfReorderedCard;
	CGPoint _reorderedCardViewPositionInFrame;
	CGPoint _panningVelocity;
	NSTimer* _autoscrollTimer;
	BOOL _isReordering;
	BOOL _reorderPeekCompensated;
	BOOL _hasScrolledUp;
	BOOL _hasScrolledDown;
	NSMutableDictionary* _cardViewsInFlightByID;
	unsigned _userInteractionCounter;
	NSMutableDictionary* _animatorsByID;
	BOOL _gestureInteractionEnabled;
	BOOL _dockPresentedCardUnderSearch;
	<RemindersCardStackViewDataSource>* _datasource;

}

@property (assign,nonatomic) <RemindersCardStackViewDelegate><UIScrollViewDelegate> * delegate; 
@property (assign,nonatomic) <RemindersCardStackViewDataSource> * datasource;                                //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) int presentationState;                                                          //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) int displayedCardIndex;                                                         //@synthesize displayedCardIndex=_displayedCardIndex - In the implementation block
@property (nonatomic,readonly) BOOL isReordering;                                                            //@synthesize isReordering=_isReordering - In the implementation block
@property (assign,nonatomic) BOOL gestureInteractionEnabled;                                                 //@synthesize gestureInteractionEnabled=_gestureInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL dockPresentedCardUnderSearch;                                              //@synthesize dockPresentedCardUnderSearch=_dockPresentedCardUnderSearch - In the implementation block
-(void)alarmsFired;
-(void)cardViewTapped:(id)arg1 ;
-(void)cardViewPanDidBegin:(id)arg1 ;
-(void)cardViewPanDidEnd:(id)arg1 ;
-(void)cardView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(BOOL)cardViewShouldAllowPanning:(id)arg1 ;
-(void)updateData;
-(void)setDisplayedCardIndex:(int)arg1 ;
-(int)displayedCardIndex;
-(void)setGestureInteractionEnabled:(BOOL)arg1 ;
-(int)_indexOfCardView:(id)arg1 ;
-(float)_yPositionForCardAtIndex:(int)arg1 forState:(int)arg2 ;
-(void)_presentStackViewWithAnimation:(BOOL)arg1 fromGesture:(BOOL)arg2 ;
-(void)_loadPresentedCard;
-(void)_presentCardView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_cleanupPileContainerView;
-(id)_setupCardViewAtIndex:(int)arg1 forState:(int)arg2 addedAsSubview:(BOOL*)arg3 ;
-(void)_arrangeCards;
-(void)_cleanUpAnimatorForCardView:(id)arg1 ;
-(void)_addPanGestureRecognizerToCardView:(id)arg1 ;
-(void)setDockPresentedCardUnderSearch:(BOOL)arg1 ;
-(void)dismissCardView:(id)arg1 withAnimator:(id)arg2 startVelocity:(float)arg3 ;
-(NSRange)_rangeOfAllIndexes;
-(void)stageCardInPresentationState:(int)arg1 atIndex:(int)arg2 ;
-(void)_setPresentedCardView:(id)arg1 ;
-(CGPoint)_positionForCardView:(id)arg1 atIndex:(int)arg2 forState:(int)arg3 ;
-(void)_removeCardAsSubviewWithID:(id)arg1 ;
-(void)_tileCardsForState:(int)arg1 eager:(BOOL)arg2 ;
-(void)_enumerateLoadedCardViews:(/*^block*/ id)arg1 ;
-(float)_cardHeightMultiplier;
-(void)_addCardAsSubview:(id)arg1 forIndex:(int)arg2 ;
-(CATransform3D)_transformForCardView:(id)arg1 forState:(int)arg2 ;
-(id)_cardViewAtIndex:(int)arg1 ;
-(float)_nativeYOfCardAtBounds;
-(void)_generateCardPileWithVisibleIndexes:(NSRange)arg1 reservePlace:(BOOL)arg2 ;
-(void)_positionPileContainerForPresentedCardWithAnimation:(BOOL)arg1 delay:(float)arg2 ;
-(void)_animateCardViewToModalPresentation:(id)arg1 atIndex:(int)arg2 indexes:(id)arg3 animationIndex:(unsigned*)arg4 ;
-(void)_positionCardViewForModalPresentation:(id)arg1 atIndex:(int)arg2 ;
-(void)_presentCardViewPostAnimationActions;
-(void)tileCardsEagerly:(BOOL)arg1 ;
-(void)_animateCardViewToStackPresentation:(id)arg1 atIndex:(unsigned)arg2 indexes:(id)arg3 animationIndex:(unsigned*)arg4 fromGesture:(BOOL)arg5 ;
-(void)_positionCardViewForStackPresentation:(id)arg1 atIndex:(int)arg2 ;
-(void)_handleModalCardGesture:(id)arg1 ;
-(void)_preparePanAnimatorForView:(id)arg1 ;
-(BOOL)gestureInteractionEnabled;
-(void)_beginCardPanWithGestureRecognizer:(id)arg1 ;
-(void)_endCardPanWithGestureRecognizer:(id)arg1 ;
-(float)_scaleForCardView:(id)arg1 forState:(int)arg2 ;
-(float)_heightForCardViewAtIndex:(int)arg1 forState:(int)arg2 ;
-(void)_animateCardIntoPlaceWithGestureRecognizer:(id)arg1 ;
-(float)_yForCardInTableAtIndex:(int)arg1 ;
-(BOOL)dockPresentedCardUnderSearch;
-(float)_yForCardInPileAtIndex:(int)arg1 ;
-(float)_xPositionForCardView:(id)arg1 forState:(int)arg2 ;
-(void)_translateCardView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 animated:(BOOL)arg4 ;
-(void)_transformCardView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 animated:(BOOL)arg4 ;
-(void)_reorderPositionChangedForCardView:(id)arg1 velocity:(CGPoint)arg2 ;
-(void)_animateCardView:(id)arg1 toIndex:(int)arg2 referenceView:(id)arg3 orderAbove:(BOOL)arg4 reorderAfter:(double)arg5 ;
-(id)_sortedCardViewIndexes;
-(void)dismissPresentedCard;
-(void)insertCard:(id)arg1 atIndex:(int)arg2 ;
-(void)deleteCard:(id)arg1 atIndex:(int)arg2 ;
-(id)_animatorForCardController:(id)arg1 ;
-(void)_transformCardView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 duration:(float)arg4 ;
-(float)_rubberBandYOffsetForIndex:(unsigned)arg1 ;
-(void)setDatasource:(id)arg1 ;
-(void)setPresentationState:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)isReordering;
-(id)datasource;
-(NSRange)_rangeOfVisibleIndexes;
-(int)_lastIndex;
-(id)_arrayOfStackedIndexes;
-(NSRange)_rangeOfEagerLoadedIndexes;
-(int)_startVisibleIndex;
-(void)_removeMotionEffectsFromModalPile;
-(void)_removeDimmingFromPileWithAnimation:(BOOL)arg1 ;
-(void)_addDimmingToPileWithAnimation:(BOOL)arg1 ;
-(void)_addMotionEffectsToModalPile;
-(void)_createCardPileContainerView;
-(id)_animatorForGestureRecognizer:(id)arg1 ;
-(int)_indexForPosition:(CGPoint)arg1 ;
-(void)_autoscrollIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGSize)_contentSize;
-(void)_stopAutoscrollTimer;
-(void)_autoscrollForReordering:(id)arg1 ;
-(void)setPresentationState:(int)arg1 ;
-(int)presentationState;
-(void).cxx_destruct;
@end

