/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol GKSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 didFailWithError:(id)arg2;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
-(void)session:(id)arg1 didReceiveConnectionRequestFromPeer:(id)arg2;
-(void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
@end

