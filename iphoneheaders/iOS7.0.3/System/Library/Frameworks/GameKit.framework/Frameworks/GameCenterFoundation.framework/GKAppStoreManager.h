/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GKAppStoreManager : NSObject
+(id)sharedManager;
-(void)loadTellAFriendMessageForGameWithAdamID:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)accountIsLoggedIntoAStore;
-(void)beginObservingKeyBagStatusFor:(id)arg1 withCallback:(/*function pointer*/ void*)arg2 ;
-(void)stopObservingKeyBagStatusFor:(id)arg1 ;
-(void)beginObservingStoreFrontChangesFor:(id)arg1 withSelector:(SEL)arg2 ;
-(void)stopObservingStoreFrontChangesFor:(id)arg1 ;
-(BOOL)uninstallApplicationWithBundleIdentifier:(id)arg1 ;
-(id)unrestrictedInstalledBundleIDs;
-(void)lookupStoreItemsForAdamIDs:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)allowProductionForApplication:(id)arg1 ;
-(BOOL)allowProductionForXPCConnection:(id)arg1 ;
@end

