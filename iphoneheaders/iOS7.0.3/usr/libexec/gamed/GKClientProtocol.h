/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GKClientProtocol <NSObject>
@required
-(oneway void)setLocalPlayer:(id)arg1 authenticated:(BOOL)arg2 reply:(/*^block*/ id)arg3;
-(oneway void)beginNetworkActivity;
-(oneway void)endNetworkActivity;
-(oneway void)resetNetworkActivity;
-(oneway void)receivedChallengeSelected:(id)arg1;
-(oneway void)completedChallengeSelected:(id)arg1;
-(oneway void)challengeReceived:(id)arg1;
-(oneway void)challengeCompleted:(id)arg1;
-(oneway void)setBadgeCount:(unsigned)arg1 forType:(unsigned)arg2;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(oneway void)setPreferencesValues:(id)arg1;
-(oneway void)setCurrentGame:(id)arg1 sandboxed:(BOOL)arg2 reply:(/*^block*/ id)arg3;
-(oneway void)respondedToNearbyInvite:(id)arg1;
-(oneway void)scoreSelected:(id)arg1;
-(oneway void)achievementSelected:(id)arg1;
-(oneway void)setLogBits:(unsigned)arg1;
@end

