/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol FaceTimePushHandlerListener <NSObject>
@optional
-(void)handler:(id)arg1 sessionInitated:(id)arg2 topic:(id)arg3 myID:(id)arg4 peerID:(id)arg5 peerDisplayID:(id)arg6 peerCN:(id)arg7 peerPushToken:(id)arg8 peerNATType:(id)arg9 peerBlob:(id)arg10 peerNatIP:(id)arg11 clientInfo:(id)arg12 serviceData:(id)arg13;
-(void)handler:(id)arg1 sessionAccepted:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerCN:(id)arg5 peerPushToken:(id)arg6 peerNATType:(id)arg7 peerBlob:(id)arg8 peerNatIP:(id)arg9 relayType:(id)arg10 relayConnectionID:(id)arg11 relayTransactionIDAlloc:(id)arg12 relayTokenAllocReq:(id)arg13 myRelayIP:(id)arg14 myRelayPort:(id)arg15 peerRelayIP:(id)arg16 peerRelayPort:(id)arg17 clientInfo:(id)arg18 serviceData:(id)arg19;
-(void)handler:(id)arg1 sessionRejected:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 reason:(id)arg6 clientInfo:(id)arg7 serviceData:(id)arg8;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7;
-(void)handler:(id)arg1 sessionCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7;
-(void)handler:(id)arg1 relayInitiated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 relayTokenAllocReq:(id)arg9 myRelayIP:(id)arg10 myRelayPort:(id)arg11 peerRelayIP:(id)arg12 peerRelayPort:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15;
-(void)handler:(id)arg1 relayUpdated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDChannelBind:(id)arg8 relayTokenChannelBind:(id)arg9 relayBlob:(id)arg10 peerRelayNATIP:(id)arg11 peerRelayNATPort:(id)arg12 clientInfo:(id)arg13 serviceData:(id)arg14;
-(void)handler:(id)arg1 relayCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 relayType:(id)arg5 relayTokenAllocReq:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 myRelayIP:(id)arg9 myRelayPort:(id)arg10 peerRelayIP:(id)arg11 peerRelayPort:(id)arg12 reason:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15;
@end

