/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VideoConferenceDelegate
@optional
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 withUserInfo:(id)arg4 error:(id)arg5;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 callMetadata:(id)arg4;
-(void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2;
-(void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
-(void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
-(void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
-(void)videoConference:(id)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(id)arg3;
-(void)videoConference:(id)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
-(void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
-(void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(BOOL)arg3;
-(void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2;
-(void)videoConference:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned long)arg3;
-(void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned long)arg3;

@required
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(id)arg4;
@end

