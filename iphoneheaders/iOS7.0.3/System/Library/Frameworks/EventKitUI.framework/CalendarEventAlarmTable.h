/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol CalendarEventAlarmTableDelegate, EKStyleProvider;
@class NSString, ;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource> {

	int _alarmIdentifier;
	NSString* _customString;
	int _selectedItem;
	BOOL _immediateAlarmCreation;
	BOOL _useAllDayAlarms;
	BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
	BOOL _customSelected;
	<CalendarEventAlarmTableDelegate>* _alarmTableDelegate;
	<EKStyleProvider>* _styleProvider;

}

@property (assign,nonatomic,__weak) <CalendarEventAlarmTableDelegate> * alarmTableDelegate;              //@synthesize alarmTableDelegate=_alarmTableDelegate - In the implementation block
@property (nonatomic,retain) <EKStyleProvider> * styleProvider;                                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL useAllDayAlarms;                                                       //@synthesize useAllDayAlarms=_useAllDayAlarms - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;                             //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) BOOL customSelected;                                                        //@synthesize customSelected=_customSelected - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)setCustomString:(id)arg1 ;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
-(BOOL)customSelected;
-(void)setAlarmTableDelegate:(id)arg1 ;
-(void)setUseAllDayAlarms:(BOOL)arg1 ;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(int)arg1 ;
-(unsigned)countOfPresets;
-(int)presetIdentifierAtIndex:(unsigned)arg1 ;
-(int)intervalForPresetIdentifier:(int)arg1 ;
-(BOOL)useAllDayAlarms;
-(int)presetIdentifier;
-(void)_selectRow:(int)arg1 ;
-(int)rowForPresetIdentifier:(int)arg1 ;
-(int)_presetIdentifierForRow:(int)arg1 ;
-(void)setCustomSelected:(BOOL)arg1 ;
-(id)alarmTableDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void).cxx_destruct;
@end

