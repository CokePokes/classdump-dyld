/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADRemoteUIServicesCancelable.h>

@interface ADRemoteNotificationToken : NSObject <ADRemoteUIServicesCancelable> {

	BOOL _canceled;
	CFUserNotificationRef _notification;
	/*^block*/ id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
+(id)notificationsToTokens;
+(id)tokenForNotificationDescription:(id)arg1 flags:(unsigned long)arg2 completion:(/*^block*/ id)arg3 ;
+(id)existingTokenForNotification:(CFUserNotificationRef)arg1 ;
+(id)allTokens;
-(void)asyncRequest;
-(void)modalRequest;
-(void)dealloc;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(void)cancelRequest;
-(void)handleResponse:(unsigned long)arg1 ;
@end

