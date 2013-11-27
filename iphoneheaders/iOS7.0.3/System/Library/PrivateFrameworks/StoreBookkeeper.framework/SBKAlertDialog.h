/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface SBKAlertDialog : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	/*^block*/ id _completionHandler;
	NSString* _acceptButtonTitle;

}

@property (copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (copy) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (copy) NSString * acceptButtonTitle;              //@synthesize acceptButtonTitle=_acceptButtonTitle - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setTitle:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)title;
-(/*^block*/ id)completionHandler;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setCancelButtonTitle:(id)arg1 ;
-(void)showWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setAcceptButtonTitle:(id)arg1 ;
-(BOOL)_runAsUIAlertView;
-(void)_runAsCFUserNotificationDisplayAlert;
-(id)acceptButtonTitle;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4 ;
-(void).cxx_destruct;
-(id)cancelButtonTitle;
@end

