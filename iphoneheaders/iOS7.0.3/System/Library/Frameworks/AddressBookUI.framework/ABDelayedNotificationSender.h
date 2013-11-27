/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject {

	CFArrayRef _delegatesForDelayedNotification;
	NSMutableArray* _delayedNotifications;
	CFDictionaryRef _delayedNotificationInfos;

}
-(BOOL)containsDelegate:(id)arg1 ;
-(void)addDelayedNotification:(id)arg1 withInfo:(CFDictionaryRef)arg2 allowDuplicateNotification:(BOOL)arg3 ;
-(void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2 ;
-(void)addDelayedNotification:(id)arg1 ;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
@end

