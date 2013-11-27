/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class GKMatchRequestInternal, NSArray, NSString;

@interface GKMatchRequest : NSObject {

	GKMatchRequestInternal* _internal;
	/*^block*/ id _inviteeResponseHandler;

}

@property (assign,nonatomic,@dynamic) unsigned minPlayers; 
@property (assign,nonatomic,@dynamic) unsigned maxPlayers; 
@property (assign,nonatomic,@dynamic) unsigned playerGroup; 
@property (assign,nonatomic,@dynamic) unsigned playerAttributes; 
@property (nonatomic,@dynamic,retain) NSArray * playersToInvite; 
@property (nonatomic,@dynamic,copy) NSString * inviteMessage; 
@property (assign,nonatomic,@dynamic) unsigned defaultNumberOfPlayers; 
@property (nonatomic,copy) id inviteeResponseHandler;                               //@synthesize inviteeResponseHandler=_inviteeResponseHandler - In the implementation block
@property (retain) GKMatchRequestInternal * internal;                               //@synthesize internal=_internal - In the implementation block
+(unsigned)maxPlayersAllowedForMatchOfType:(unsigned)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(/*^block*/ id)inviteeResponseHandler;
-(BOOL)defaultNumberOfPlayersIsValid;
-(BOOL)isValidWithMax:(unsigned)arg1 ;
-(id)internal;
-(void)removeLocalPlayerFromPlayersToInvite;
-(BOOL)isValidForHosted:(BOOL)arg1 ;
-(BOOL)isTurnBasedValid;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInviteeResponseHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

