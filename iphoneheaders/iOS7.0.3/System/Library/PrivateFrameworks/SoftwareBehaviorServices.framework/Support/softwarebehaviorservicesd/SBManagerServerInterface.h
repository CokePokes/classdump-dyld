/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBManagerServerInterface
@required
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/ id)arg3;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/ id)arg1;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/ id)arg2;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/ id)arg1;
-(void)setClientType:(int)arg1 withResult:(/*^block*/ id)arg2;
@end

