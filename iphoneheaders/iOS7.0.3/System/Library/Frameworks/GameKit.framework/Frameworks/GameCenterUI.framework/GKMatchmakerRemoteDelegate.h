/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GKMatchmakerRemoteDelegate
@required
-(void)setDefaultInvitationMessage:(id)arg1;
-(void)setExistingPlayers:(id)arg1;
-(void)setAutomatchPlayerCount:(int)arg1;
-(void)setPlayer:(id)arg1 responded:(int)arg2;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2;
-(void)setPlayer:(id)arg1 sentData:(id)arg2;
-(void)setInvitesFailedWithError:(id)arg1;
-(void)setAutomatchFailedWithError:(id)arg1;
-(void)inviterCancelled;
-(void)applicationWillEnterForeground;
-(void)setHosted:(BOOL)arg1;
-(void)setMatchRequestInternal:(id)arg1;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
-(void)setAcceptedInviteInternal:(id)arg1;
@end

