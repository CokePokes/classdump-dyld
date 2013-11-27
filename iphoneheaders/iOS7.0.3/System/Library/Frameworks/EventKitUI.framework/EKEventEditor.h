/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKCalendarItemEditor.h>

@class EKEventDateEditItem, UIColor, EKEvent;

@interface EKEventEditor : EKCalendarItemEditor {

	EKEventDateEditItem* _dateItem;
	BOOL _isTransitioning;
	BOOL _showAttachments;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL showAttachments;                   //@synthesize showAttachments=_showAttachments - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setShowAttachments:(BOOL)arg1 ;
-(void)setShowsTimeZone:(BOOL)arg1 ;
-(BOOL)_canDetachSingleOccurrence;
-(id)preferredTitle;
-(id)_editItems;
-(id)notificationNamesForLocaleChange;
-(void)_revertEvent;
-(void)_copyEventForPossibleRevert;
-(id)defaultAlertTitle;
-(id)defaultTitleForCalendarItem;
-(BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)_nameForDeleteButton;
-(id)_viewForSheet;
-(void)setupDeleteButton;
-(void)refreshStartAndEndDates;
-(BOOL)showAttachments;
-(unsigned)entityType;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEvent:(id)arg1 ;
-(id)event;
-(void).cxx_destruct;
@end

