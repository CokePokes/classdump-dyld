/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AssistantCallbackUIDelegate
@optional
-(long)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(long)callbackAskUserToChooseFromStringList:(id)arg1 context:(int)arg2 forController:(id)arg3;
-(long)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;

@required
-(void)callbackAskCancel;
@end

