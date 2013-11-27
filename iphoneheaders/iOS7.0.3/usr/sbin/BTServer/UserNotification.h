/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <BTServer/BTServer-Structs.h>
@interface UserNotification : NSObject {

	/*^block*/ id _completionBlock;
	BOOL _isCanceled;
	CFDictionaryRef _notificationDictionary;
	unsigned long _notificationOptions;
	CFRunLoopSourceRef _runLoopSource;
	CFUserNotificationRef _userNotification;

}

@property (nonatomic,copy) id completionBlock;                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled;                     //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,readonly) CFUserNotificationRef userNotification; 
-(id)initWithDictionary:(CFDictionaryRef)arg1 options:(unsigned long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)updateWithDictionary:(CFDictionaryRef)arg1 options:(unsigned long)arg2 ;
-(/*^block*/ id)completionBlock;
-(BOOL)isCanceled;
-(void)dealloc;
-(void)show;
-(void)cancel;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(CFUserNotificationRef)userNotification;
@end

