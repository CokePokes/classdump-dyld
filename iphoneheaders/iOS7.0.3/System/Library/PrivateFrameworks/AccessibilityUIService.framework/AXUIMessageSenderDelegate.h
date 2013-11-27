/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AXUIMessageSenderDelegate <NSObject>
@optional
-(void)messageSender:(id)arg1 willSendXPCMessage:(id)arg2 context:(void*)arg3;
-(void*)messageSender:(id)arg1 extractCustomDataFromXPCReply:(id)arg2 numberOfKeyValuePairsForCustomData:(unsigned*)arg3;
-(void)messageSender:(id)arg1 processCustomDataFromXPCReply:(void*)arg2;

@required
-(void)messageSender:(id)arg1 accessXPCConnectionForMessageWithContext:(void*)arg2 usingBlock:(/*^block*/ id)arg3;
@end

