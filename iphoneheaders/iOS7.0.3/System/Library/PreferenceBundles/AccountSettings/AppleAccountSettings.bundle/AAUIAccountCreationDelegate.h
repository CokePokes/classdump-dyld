/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AAUIAccountCreationDelegate
@required
-(void)accountCreationWillBeginWithAppleID:(id)arg1 password:(id)arg2;
-(void)accountCreationDidFailWithError:(id)arg1;
-(void)accountCreationDidSucceedWithAppleID:(id)arg1 password:(id)arg2 emailChoice:(id)arg3;
-(void)accountCreationWasCanceled;
@end

