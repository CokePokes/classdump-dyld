/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufFacetimeiMessage.dylib/libAWDProtobufFacetimeiMessage.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDSMSReceivedMessage : PBCodable {

	unsigned long long _timestamp;
	int _ctError;
	int _fzError;
	NSString* _guid;
	unsigned _hasAttachments;
	unsigned _isFromEmail;
	unsigned _isFromPhoneNumber;
	unsigned _isGroupMessage;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFzError; 
@property (assign,nonatomic) int fzError;                               //@synthesize fzError=_fzError - In the implementation block
@property (assign,nonatomic) BOOL hasCtError; 
@property (assign,nonatomic) int ctError;                               //@synthesize ctError=_ctError - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupMessage; 
@property (assign,nonatomic) unsigned isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromPhoneNumber; 
@property (assign,nonatomic) unsigned isFromPhoneNumber;                //@synthesize isFromPhoneNumber=_isFromPhoneNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromEmail; 
@property (assign,nonatomic) unsigned isFromEmail;                      //@synthesize isFromEmail=_isFromEmail - In the implementation block
@property (assign,nonatomic) BOOL hasHasAttachments; 
@property (assign,nonatomic) unsigned hasAttachments;                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
-(unsigned)hasAttachments;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasFzError;
-(int)fzError;
-(void)setFzError:(int)arg1 ;
-(void)setHasFzError:(BOOL)arg1 ;
-(BOOL)hasIsGroupMessage;
-(unsigned)isGroupMessage;
-(void)setIsGroupMessage:(unsigned)arg1 ;
-(BOOL)hasHasAttachments;
-(void)setHasAttachments:(unsigned)arg1 ;
-(void)setHasIsGroupMessage:(BOOL)arg1 ;
-(void)setHasHasAttachments:(BOOL)arg1 ;
-(BOOL)hasIsFromPhoneNumber;
-(unsigned)isFromPhoneNumber;
-(void)setIsFromPhoneNumber:(unsigned)arg1 ;
-(BOOL)hasIsFromEmail;
-(unsigned)isFromEmail;
-(void)setIsFromEmail:(unsigned)arg1 ;
-(void)setHasIsFromPhoneNumber:(BOOL)arg1 ;
-(void)setHasIsFromEmail:(BOOL)arg1 ;
-(BOOL)hasCtError;
-(int)ctError;
-(void)setCtError:(int)arg1 ;
-(void)setHasCtError:(BOOL)arg1 ;
@end

