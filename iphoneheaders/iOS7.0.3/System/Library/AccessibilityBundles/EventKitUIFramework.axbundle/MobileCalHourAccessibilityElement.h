/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUIFramework/EventKitUIFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSDate, UIView;

@interface MobileCalHourAccessibilityElement : UIAccessibilityElement {

	NSDate* hourDate;
	UIView* _dayGridView;

}

@property (nonatomic,retain) NSDate * hourDate; 
@property (assign,nonatomic) UIView * dayGridView;              //@synthesize dayGridView=_dayGridView - In the implementation block
-(id)hourDate;
-(void)setHourDate:(id)arg1 ;
-(void)setDayGridView:(id)arg1 ;
-(id)dayGridView;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
@end

