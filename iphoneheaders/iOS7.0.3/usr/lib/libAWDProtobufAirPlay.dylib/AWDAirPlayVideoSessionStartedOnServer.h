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

@interface AWDAirPlayVideoSessionStartedOnServer : PBCodable {

	unsigned long long _timestamp;
	unsigned _audioOnly;
	unsigned _clientAuthMs;
	unsigned _clientBonjourMs;
	unsigned _clientConnectMs;
	unsigned _clientInfoMs;
	NSString* _clientModel;
	unsigned _clientPostAuthMs;
	unsigned _clientSecureConnectionMs;
	NSString* _clientVersion;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	unsigned _type;
	SCD_Struct_AW11 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                         //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                         //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                         //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                       //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOnly; 
@property (assign,nonatomic) unsigned audioOnly;                             //@synthesize audioOnly=_audioOnly - In the implementation block
@property (assign,nonatomic) BOOL hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                       //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                       //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientInfoMs; 
@property (assign,nonatomic) unsigned clientInfoMs;                          //@synthesize clientInfoMs=_clientInfoMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientSecureConnectionMs; 
@property (assign,nonatomic) unsigned clientSecureConnectionMs;              //@synthesize clientSecureConnectionMs=_clientSecureConnectionMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientAuthMs; 
@property (assign,nonatomic) unsigned clientAuthMs;                          //@synthesize clientAuthMs=_clientAuthMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientPostAuthMs; 
@property (assign,nonatomic) unsigned clientPostAuthMs;                      //@synthesize clientPostAuthMs=_clientPostAuthMs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)type;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setSessionUUID:(id)arg1 ;
-(void)setClientModel:(id)arg1 ;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setClientAuthMs:(unsigned)arg1 ;
-(void)setAudioOnly:(unsigned)arg1 ;
-(void)setClientInfoMs:(unsigned)arg1 ;
-(void)setClientSecureConnectionMs:(unsigned)arg1 ;
-(void)setClientPostAuthMs:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(id)clientVersion;
-(void)setClientVersion:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionUUID;
-(id)sessionUUID;
-(BOOL)hasClientModel;
-(id)clientModel;
-(BOOL)hasClientVersion;
-(BOOL)hasClientBonjourMs;
-(unsigned)clientBonjourMs;
-(BOOL)hasClientConnectMs;
-(unsigned)clientConnectMs;
-(BOOL)hasClientAuthMs;
-(unsigned)clientAuthMs;
-(void)setHasClientBonjourMs:(BOOL)arg1 ;
-(void)setHasClientConnectMs:(BOOL)arg1 ;
-(void)setHasClientAuthMs:(BOOL)arg1 ;
-(BOOL)hasAudioOnly;
-(unsigned)audioOnly;
-(void)setHasAudioOnly:(BOOL)arg1 ;
-(BOOL)hasClientInfoMs;
-(unsigned)clientInfoMs;
-(BOOL)hasClientSecureConnectionMs;
-(unsigned)clientSecureConnectionMs;
-(BOOL)hasClientPostAuthMs;
-(unsigned)clientPostAuthMs;
-(void)setHasClientInfoMs:(BOOL)arg1 ;
-(void)setHasClientSecureConnectionMs:(BOOL)arg1 ;
-(void)setHasClientPostAuthMs:(BOOL)arg1 ;
@end

