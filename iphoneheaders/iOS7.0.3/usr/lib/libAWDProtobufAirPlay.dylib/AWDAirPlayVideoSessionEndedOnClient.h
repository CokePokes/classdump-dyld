/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufAirPlay.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufAirPlay.dylib/libAWDProtobufAirPlay.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDAirPlayVideoSessionEndedOnClient : PBCodable {

	double _bandwidthMax;
	double _bandwidthMean;
	double _bandwidthStdDev;
	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _localFairPlayCount;
	unsigned _localNonFairPlayCount;
	unsigned _readyToPlayMs;
	int _reason;
	unsigned _remoteFairPlayCount;
	unsigned _remoteNonFairPlayCount;
	NSString* _sessionUUID;
	unsigned _stallCount;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                   //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasReadyToPlayMs; 
@property (assign,nonatomic) unsigned readyToPlayMs;                       //@synthesize readyToPlayMs=_readyToPlayMs - In the implementation block
@property (assign,nonatomic) BOOL hasStallCount; 
@property (assign,nonatomic) unsigned stallCount;                          //@synthesize stallCount=_stallCount - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidthStdDev; 
@property (assign,nonatomic) double bandwidthStdDev;                       //@synthesize bandwidthStdDev=_bandwidthStdDev - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidthMean; 
@property (assign,nonatomic) double bandwidthMean;                         //@synthesize bandwidthMean=_bandwidthMean - In the implementation block
@property (assign,nonatomic) BOOL hasBandwidthMax; 
@property (assign,nonatomic) double bandwidthMax;                          //@synthesize bandwidthMax=_bandwidthMax - In the implementation block
@property (assign,nonatomic) BOOL hasLocalFairPlayCount; 
@property (assign,nonatomic) unsigned localFairPlayCount;                  //@synthesize localFairPlayCount=_localFairPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNonFairPlayCount; 
@property (assign,nonatomic) unsigned localNonFairPlayCount;               //@synthesize localNonFairPlayCount=_localNonFairPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteFairPlayCount; 
@property (assign,nonatomic) unsigned remoteFairPlayCount;                 //@synthesize remoteFairPlayCount=_remoteFairPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNonFairPlayCount; 
@property (assign,nonatomic) unsigned remoteNonFairPlayCount;              //@synthesize remoteNonFairPlayCount=_remoteNonFairPlayCount - In the implementation block
-(void)setReason:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(void)setSessionUUID:(id)arg1 ;
-(void)setReadyToPlayMs:(unsigned)arg1 ;
-(void)setStallCount:(unsigned)arg1 ;
-(void)setLocalFairPlayCount:(unsigned)arg1 ;
-(void)setLocalNonFairPlayCount:(unsigned)arg1 ;
-(void)setRemoteFairPlayCount:(unsigned)arg1 ;
-(void)setRemoteNonFairPlayCount:(unsigned)arg1 ;
-(void)setBandwidthStdDev:(double)arg1 ;
-(void)setBandwidthMean:(double)arg1 ;
-(void)setBandwidthMax:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionUUID;
-(id)sessionUUID;
-(BOOL)hasReadyToPlayMs;
-(unsigned)readyToPlayMs;
-(BOOL)hasStallCount;
-(unsigned)stallCount;
-(BOOL)hasBandwidthStdDev;
-(double)bandwidthStdDev;
-(BOOL)hasBandwidthMean;
-(double)bandwidthMean;
-(BOOL)hasBandwidthMax;
-(double)bandwidthMax;
-(BOOL)hasLocalFairPlayCount;
-(unsigned)localFairPlayCount;
-(BOOL)hasLocalNonFairPlayCount;
-(unsigned)localNonFairPlayCount;
-(BOOL)hasRemoteFairPlayCount;
-(unsigned)remoteFairPlayCount;
-(BOOL)hasRemoteNonFairPlayCount;
-(unsigned)remoteNonFairPlayCount;
-(void)setHasReadyToPlayMs:(BOOL)arg1 ;
-(void)setHasStallCount:(BOOL)arg1 ;
-(void)setHasBandwidthStdDev:(BOOL)arg1 ;
-(void)setHasBandwidthMean:(BOOL)arg1 ;
-(void)setHasBandwidthMax:(BOOL)arg1 ;
-(void)setHasLocalFairPlayCount:(BOOL)arg1 ;
-(void)setHasLocalNonFairPlayCount:(BOOL)arg1 ;
-(void)setHasRemoteFairPlayCount:(BOOL)arg1 ;
-(void)setHasRemoteNonFairPlayCount:(BOOL)arg1 ;
-(BOOL)hasReason;
-(void)setHasReason:(BOOL)arg1 ;
@end

