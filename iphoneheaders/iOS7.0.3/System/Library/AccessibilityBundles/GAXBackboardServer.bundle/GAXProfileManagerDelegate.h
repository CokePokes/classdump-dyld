/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GAXProfileManagerDelegate <NSObject>
@required
-(void)profileManager:(id)arg1 didRestrictDevice:(BOOL)arg2;
-(id)profileManagerSessionAppID:(id)arg1;
-(void)didExitSingleAppModeWithProfileManager:(id)arg1;
-(void)didExitAppSelfLockModeWithProfileManager:(id)arg1;
-(void)didEnterAppSelfLockModeWithProfileManager:(id)arg1;
-(void)didEnterSingleAppModeWithProfileManager:(id)arg1;
-(void)appDidChangeForSingleAppModeWithProfileManager:(id)arg1;
@end

