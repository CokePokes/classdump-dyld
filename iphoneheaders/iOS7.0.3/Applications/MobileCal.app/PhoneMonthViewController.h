/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/MonthViewController.h>
#import <MobileCal/PhoneMonthViewInteractionDelegate.h>

@class EKCalendarDate, TappableDayNumber, PhoneMonthWeekView;

@interface PhoneMonthViewController : MonthViewController <PhoneMonthViewInteractionDelegate> {

	BOOL _shouldSetSelectedDate;
	EKCalendarDate* _pressedDay;
	TappableDayNumber* _pressHighlight;
	PhoneMonthWeekView* _pressedMonthView;
	BOOL _loadingOccurrenceCache;
	BOOL _currentlyVisible;
	BOOL _needToReloadEventsOnAppear;
	BOOL _eventLoadingSuspendedForScroll;
	BOOL _reloadAfterStoppedScrolling;

}
+(float)subviewHeightForDate:(id)arg1 orientation:(int)arg2 ;
-(CGRect)frameForTodayHighlight;
-(void)localeChanged;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(float)decelerationDistanceThresholdForPreferringMonthBoundary;
-(float)decelerationDistanceThresholdForDisplayingMonthBanner;
-(void)didEndScrolling;
-(float)decelerationDistanceThresholdToStopShowingMonthBanner;
-(float)showDateVerticalOffset;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(void)updatePalette:(id)arg1 ;
-(CGRect)frameForWeekContainingDate:(id)arg1 ;
-(id)cellWidthsForWeekContainingDate:(id)arg1 ;
-(id)pushedDayViewControllerWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1 ;
-(float)heightForSubviewWithCalendarDate:(id)arg1 ;
-(float)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned)maximumCachedReusableViews;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)_occurrencesChanged:(id)arg1 ;
-(void)_showEventsPreferenceChanged;
-(void)_cachedOccurrencesChanged:(id)arg1 ;
-(void)_loadEventsForAllSubviews;
-(void)_removeMonthHighlight;
-(id)_loadEventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_shouldAnimateDots;
-(id)_dayInMonth:(id)arg1 fromTouches:(id)arg2 ;
-(void)_createMonthHighlightForMonthView:(id)arg1 day:(id)arg2 ;
-(void)_loadEventsForViewsInRangeStartingAt:(id)arg1 endingAt:(id)arg2 ;
-(void)monthView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)monthView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3 ;
-(void)monthView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3 ;
-(void)monthView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3 ;
-(id)monthWeekViewForCalendarDate:(id)arg1 ;
-(int)eventCountDisplayedForDate:(id)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didScroll;
-(void).cxx_destruct;
@end

