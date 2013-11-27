/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/_InfiniteScrollViewControllerDelegate.h>

@class NSMutableArray, EKCalendarDate, UIScrollView, CalendarModel;

@interface InfiniteScrollViewController : UIViewController <UIScrollViewDelegate, _InfiniteScrollViewControllerDelegate> {

	NSMutableArray* _views;
	EKCalendarDate* _startingDate;
	NSMutableArray* _reusableViews;
	EKCalendarDate* _lastKnownShownDate;
	BOOL _viewIsVisible;
	BOOL _viewCullingDisabledForScrollAnimation;
	BOOL _isUserFingerDown;
	BOOL _isRelayingOut;
	UIScrollView* _scrollView;
	CalendarModel* _model;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign) BOOL isUserFingerDown;                              //@synthesize isUserFingerDown=_isUserFingerDown - In the implementation block
@property (nonatomic,readonly) CalendarModel * model;                  //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL isRelayingOut;                     //@synthesize isRelayingOut=_isRelayingOut - In the implementation block
+(BOOL)_view:(id)arg1 containsCalendarDate:(id)arg2 ;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(void)showSelectedDateIfNeeded;
-(id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(void)showDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)dateOfCenterViewInBuffer;
-(void)willBeginDragging;
-(CGPoint)nearestMajorBoundaryForPoint:(CGPoint)arg1 ;
-(void)didEndScrolling;
-(id)centerViewOnScreen;
-(void)reinitializeAllViewsWithCalendarDate:(id)arg1 ;
-(CGPoint)nearestMajorBoundaryForPoint:(CGPoint)arg1 date:(id*)arg2 ;
-(BOOL)isUserFingerDown;
-(id)subviewForPoint:(CGPoint)arg1 ;
-(float)showDateVerticalOffset;
-(BOOL)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)scrollViewDidLayoutSubviews;
-(void)_recenterContentIfNeededWithForce:(BOOL)arg1 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(id)_addNewTopView;
-(id)_addNewBottomView;
-(void)_layoutInitialSubviews;
-(void)_setUpInitialViewWithDate:(id)arg1 ;
-(void)_adjustLoadedViewRange;
-(void)_reloadDataForAllViews;
-(float)subviewBufferExtensionMultiplier;
-(id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1 ;
-(float)heightForSubviewWithCalendarDate:(id)arg1 ;
-(float)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned)maximumCachedReusableViews;
-(void)_removeTopView;
-(void)_removeBottomView;
-(void)_recenterContentIfNeeded;
-(void)setIsUserFingerDown:(BOOL)arg1 ;
-(void)didEndDraggingWillDecelerate:(BOOL)arg1 ;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)showDate:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)subviewForDate:(id)arg1 ;
-(id)dateOfViewInBufferIndexRelativeToCenter:(int)arg1 ;
-(id)dateOfCenterViewOnScreen;
-(void)enumerateScrollViewSubviews:(/*^block*/ id)arg1 ;
-(id)dequeueReusableView;
-(BOOL)isRelayingOut;
-(id)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)model;
-(id)scrollView;
-(void)didScroll;
-(void).cxx_destruct;
@end

