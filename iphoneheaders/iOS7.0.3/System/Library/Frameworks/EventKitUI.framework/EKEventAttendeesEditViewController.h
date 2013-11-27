/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>

@class EKEventAttendeePicker, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController {

	EKEventAttendeePicker* _picker;

}

@property (nonatomic,copy) NSArray * attendees; 
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(void)setSearchAccountID:(id)arg1 ;
-(id)_firstInvalidRecipientAddress;
-(id)_attendeeFromRecipient:(id)arg1 ;
-(id)_recipientFromAttendee:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
@end

