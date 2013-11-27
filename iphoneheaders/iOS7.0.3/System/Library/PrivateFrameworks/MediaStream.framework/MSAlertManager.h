/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <MediaStream/MediaStream-Structs.h>
@class NSMutableDictionary;

@interface MSAlertManager : NSObject {

	NSMutableDictionary* _personIDToNotification;

}
+(id)sharedAlertManager;
-(id)init;
-(void)_dismissNotificationForPersonID:(id)arg1 ;
-(void)_showNotificationInfo:(id)arg1 ;
-(void)_userDidRespondToNotification:(CFUserNotificationRef)arg1 info:(id)arg2 responseFlags:(unsigned long)arg3 ;
-(void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void).cxx_destruct;
@end

