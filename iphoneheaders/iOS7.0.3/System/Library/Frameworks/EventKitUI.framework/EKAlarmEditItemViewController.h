/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <EventKitUI/CalendarEventAlarmTableDelegate.h>

@class CalendarEventAlarmTable, EKAlarm;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {

	CalendarEventAlarmTable* _table;
	BOOL _immediateAlarmCreation;
	BOOL _allDay;
	BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
	EKAlarm* _alarm;
	int _alarmIndex;

}

@property (nonatomic,retain) EKAlarm * alarm;                                             //@synthesize alarm=_alarm - In the implementation block
@property (assign,nonatomic) int alarmIndex;                                              //@synthesize alarmIndex=_alarmIndex - In the implementation block
@property (assign,nonatomic) BOOL allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;              //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) int presetIdentifier; 
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(void)setCustomString:(id)arg1 ;
-(void)setAlarmIndex:(int)arg1 ;
-(void)setAlarm:(id)arg1 ;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
-(BOOL)customSelected;
-(id)alarm;
-(int)alarmIndex;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(int)arg1 ;
-(int)presetIdentifier;
-(void)alarmTableDidChangeAlarm:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void).cxx_destruct;
@end

