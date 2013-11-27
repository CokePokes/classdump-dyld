/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/EKCalendar.servicebundle/EKCalendar
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EKCalendar/EKCalendarItemAlertItem.h>

@interface EKReminderAlertItem : EKCalendarItemAlertItem {

	BOOL _showingRemindWhenILeaveButton;
	BOOL _showingCallButton;
	BOOL _showingFaceTimeButton;

}
+(id)_activeItems;
-(void)_callOrFacetime;
-(void)configureCompactSheet:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)configureExpandedSheet:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)compactAlertClickedButtonAtIndex:(int)arg1 ;
-(void)expandedAlertClickedButtonAtIndex:(int)arg1 ;
-(void)configureTitleAndMessageOnAlertView:(id)arg1 ;
-(void)_snoozeAlarm15Minutes;
-(void)_snoozeAlarmUntilILeave;
-(void)_markReminderAsCompleted;
-(void)_revealReminder;
@end

