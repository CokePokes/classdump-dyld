/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AOSNotificationiOSActions <NSObject>
@required
-(oneway void)enableLostModeWithInfo:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)disableLostModeUsingCallback:(/*^block*/ id)arg1;
-(oneway void)deviceActivationDidSucceedUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getLockdownShouldDisableDeviceRestoreUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getLockdownShouldDisableDevicePairingUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getFMIPStateUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getFMFDeviceIdUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getFMIPDeviceIdUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getStoreAccountUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getFmipAccountUsingCallback:(/*^block*/ id)arg1;
-(oneway void)getiCloudAccountUsingCallback:(/*^block*/ id)arg1;
-(oneway void)enableFMIPInContext:(int)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)disableFMIPUsingToken:(id)arg1 inContext:(int)arg2 usingCallback:(/*^block*/ id)arg3;
-(oneway void)getActivationLockStateUsingCallback:(/*^block*/ id)arg1;
-(oneway void)enableActivationLockUsingCallback:(/*^block*/ id)arg1;
-(oneway void)disableActivationLockUsingToken:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)didEnterFMFRegion:(id)arg1 atLocation:(id)arg2 usingCallback:(/*^block*/ id)arg3;
-(oneway void)didExitFMFRegion:(id)arg1 atLocation:(id)arg2 usingCallback:(/*^block*/ id)arg3;
-(oneway void)addFMFAccount:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)removeFMFAccountWithUsername:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)retrieveFMFAccountUsingCallback:(/*^block*/ id)arg1;
-(oneway void)vetEmailAccount:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)cancelEmailVetUsingCallback:(/*^block*/ id)arg1;
-(oneway void)startListeningOnTopic:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)stopListeningOnTopic:(id)arg1 usingCallback:(/*^block*/ id)arg2;
-(oneway void)dumpDebugInfo:(id)arg1 usingCallback:(/*^block*/ id)arg2;
@end

