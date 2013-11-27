/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/YearViewController.h>

@class EKCalendarDate;

@interface PadYearViewController : YearViewController {

	BOOL _viewIsVisible;
	BOOL _viewHasAppearedBefore;
	int _orientationForCurrentViewLayout;
	EKCalendarDate* _activeDateDuringRotation;
	EKCalendarDate* _currentYearNumber;

}
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)didEndScrolling;
-(void)reinitializeAllViewsWithCalendarDate:(id)arg1 ;
-(float)showDateVerticalOffset;
-(float)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1 ;
-(void)updateNavigationBarDisplayedDateString;
-(BOOL)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(Class)multipleMonthViewClass;
-(Class)monthViewControllerClass;
-(unsigned)monthsPerRow;
-(BOOL)shouldAnimateTransitionsToMonthView;
-(void)localeDidChange;
-(void)_updateYearNumbersAnimated:(BOOL)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)didScroll;
-(void).cxx_destruct;
@end

