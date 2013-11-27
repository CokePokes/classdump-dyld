/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {

	int _availability;
	unsigned _supportedAvailabilities;
	NSArray* _choices;
	unsigned _availabilityIndexInChoices;

}
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(void)refreshFromCalendarItemAndStore;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(void).cxx_destruct;
@end

