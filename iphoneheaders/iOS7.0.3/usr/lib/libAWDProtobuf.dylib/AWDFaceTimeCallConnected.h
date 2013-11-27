/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable {

	unsigned long long _timestamp;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	NSString* _guid;
	unsigned _isVideo;
	unsigned _localNetworkConnection;
	unsigned _relayConnectDuration;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                      //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;              //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;               //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                       //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                            //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                       //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                        //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                 //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                              //@synthesize isVideo=_isVideo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(BOOL)hasIsVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(unsigned)connectDuration;
-(void)setConnectDuration:(unsigned)arg1 ;
-(BOOL)hasRemoteNetworkConnection;
-(unsigned)remoteNetworkConnection;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(BOOL)hasLocalNetworkConnection;
-(unsigned)localNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(BOOL)hasConnectionType;
-(BOOL)hasUsesRelay;
-(unsigned)usesRelay;
-(void)setUsesRelay:(unsigned)arg1 ;
-(BOOL)hasCurrentNatType;
-(unsigned)currentNatType;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(BOOL)hasRemoteNatType;
-(unsigned)remoteNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(BOOL)hasRelayConnectDuration;
-(unsigned)relayConnectDuration;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(void)setHasRemoteNetworkConnection:(BOOL)arg1 ;
-(void)setHasLocalNetworkConnection:(BOOL)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(void)setHasUsesRelay:(BOOL)arg1 ;
-(void)setHasCurrentNatType:(BOOL)arg1 ;
-(void)setHasRemoteNatType:(BOOL)arg1 ;
-(void)setHasRelayConnectDuration:(BOOL)arg1 ;
@end

