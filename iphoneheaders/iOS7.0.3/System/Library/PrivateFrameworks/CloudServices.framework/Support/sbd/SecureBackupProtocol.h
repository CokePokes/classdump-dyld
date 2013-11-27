/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Support/sbd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SecureBackupProtocol <NSObject>
@required
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)enableWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)recoverWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)disableWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)cachePassphraseWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)uncachePassphraseWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)backupWithInfo:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)cachePassphraseWithInfoAsync:(id)arg1;
-(void)uncachePassphraseWithInfoAsync:(id)arg1;
@end

