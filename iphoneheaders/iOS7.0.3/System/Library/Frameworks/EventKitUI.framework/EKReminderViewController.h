/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKCalendarItemEditorDelegate.h>
#import <EventKitUI/EKReminderEditorDelegate.h>
#import <EventKitUI/EKPickerTableViewDelegate.h>

@protocol EKReminderViewControllerDelegate;
@class , EKReminderEditor, EKReminder, EKEventStore;

@interface EKReminderViewController : UIViewController <EKCalendarItemEditorDelegate, EKReminderEditorDelegate, EKPickerTableViewDelegate> {

	float _minimumTableHeight;
	BOOL _shouldShowDatePicker;
	id _datePickerTarget;
	SEL _datePickerAction;
	<EKReminderViewControllerDelegate>* _delegate;
	EKReminderEditor* _editor;

}

@property (nonatomic,retain) EKReminder * reminder; 
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (nonatomic,retain) <EKStyleProvider> * styleProvider; 
@property (assign,nonatomic,__weak) <EKReminderViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKReminderEditor * editor;                                         //@synthesize editor=_editor - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)viewForActionSheet;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(void)editor:(id)arg1 didChangeHeightAnimated:(BOOL)arg2 ;
-(void)editor:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(id)editor;
-(void)setEditor:(id)arg1 ;
-(void)pickerTableViewDidChangeDatePickerInterval:(id)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)setReminder:(id)arg1 ;
-(id)reminder;
-(void)viewSizeChangedAnimated:(BOOL)arg1 ;
-(void)editItemChanged;
-(void)willBeginDatePickingWithDate:(id)arg1 target:(id)arg2 action:(SEL)arg3 animated:(BOOL)arg4 minimumTableHeight:(float)arg5 ;
-(void)didEndDatePickingWithTarget:(id)arg1 animated:(BOOL)arg2 ;
-(void)saveReminderAnimated:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)navigationItem;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

