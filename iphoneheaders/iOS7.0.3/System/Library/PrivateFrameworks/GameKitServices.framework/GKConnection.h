/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKConnection : NSObject

@property (assign) id eventDelegate; 
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)isRelayEnabled;
+(id)externalAddressForSelfConnectionData:(id)arg1 ;
+(id)externalAddressForCDXSelfConnectionData:(id)arg1 ;
-(void)connect;
-(id)initWithParticipantID:(id)arg1 ;
-(void)preRelease;
-(OpaqueGCKSessionRef)gckSession;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)setEventDelegate:(id)arg1 ;
-(id)eventDelegate;
-(unsigned)gckPID;
-(void)getLocalConnectionDataWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)convertParticipantID:(id)arg1 toPeerID:(id*)arg2 ;
-(BOOL)convertPeerID:(id)arg1 toParticipantID:(id*)arg2 ;
-(void)setParticipantID:(id)arg1 forPeerID:(id)arg2 ;
-(void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2 ;
-(void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4 ;
-(void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4 ;
-(void)cancelConnectParticipant:(id)arg1 ;
-(id)networkStatisticsDictionaryForGCKStats:(void*)arg1 ;
-(id)networkStatistics;
-(id)getLocalConnectionDataForLocalGaming;
@end

