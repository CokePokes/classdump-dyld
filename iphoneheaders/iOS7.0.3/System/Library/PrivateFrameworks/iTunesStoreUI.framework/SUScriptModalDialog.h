/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIAlertView, ISDialog;

@interface SUScriptModalDialog : NSObject {

	UIAlertView* _alert;
	int _buttonIndex;
	ISDialog* _dialog;

}
+(id)titleForURL:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)initWithDialog:(id)arg1 ;
-(id)copyResponseByRunningModal;
-(id)_copyResponseByRunningModal;
@end

