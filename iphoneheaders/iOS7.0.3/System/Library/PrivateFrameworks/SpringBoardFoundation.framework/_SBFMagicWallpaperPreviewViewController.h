/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoardFoundation/SBFLockScreenDateFormatter.h>

@protocol SBFProceduralWallpaper;
@class , NSDictionary, SBFLockScreenDateView, NSTimer;

@interface _SBFMagicWallpaperPreviewViewController : UIViewController <SBFLockScreenDateFormatter> {

	<SBFProceduralWallpaper>* _proceduralWallpaper;
	NSDictionary* _wallpaper;
	NSDictionary* _options;
	SBFLockScreenDateView* _dateView;
	NSTimer* _updateTimer;

}
-(void)dealloc;
-(void)_updateView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_layoutDateView;
-(id)initWithWallpaper:(id)arg1 options:(id)arg2 ;
-(void)_stopUpdateTimer;
-(float)_timeBaselineY;
-(void)_startUpdateTimer;
-(id)formatDateAsTimeNoAMPM:(id)arg1 ;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1 ;
-(void)resetFormattersIfNecessary;
@end

