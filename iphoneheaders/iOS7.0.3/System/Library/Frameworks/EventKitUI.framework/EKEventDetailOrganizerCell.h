/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class NSString, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	UILabel* _organizerView;
	UILabel* _titleView;

}
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(BOOL)shouldDisplayForEvent;
-(BOOL)hasCustomLayout;
-(id)_organizerView;
-(id)_titleView;
-(BOOL)update;
-(void).cxx_destruct;
@end

