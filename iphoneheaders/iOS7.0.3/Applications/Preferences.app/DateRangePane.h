/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, UIDatePicker, PSTableCell;

@interface DateRangePane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	UIDatePicker* _datePicker;
	PSTableCell* _fromCell;
	PSTableCell* _toCell;
	CFDateFormatterRef _timeFormatter;
	int _selectedIndex;

}

@property (assign,nonatomic) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic) int selectedIndex;                      //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(id)datePicker;
-(void)setDatePicker:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(void)update;
@end

