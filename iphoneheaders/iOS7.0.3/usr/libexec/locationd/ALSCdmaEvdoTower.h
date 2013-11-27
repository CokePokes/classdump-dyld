/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation, NSString;

@interface ALSCdmaEvdoTower : PBCodable {

	int _bandclass;
	int _channel;
	ALSLocation* _location;
	int _pnoffset;
	NSString* _sectorid;
	SCD_Struct_CR6 _has;

}

@property (nonatomic,readonly) BOOL hasSectorid; 
@property (nonatomic,retain) NSString * sectorid;                 //@synthesize sectorid=_sectorid - In the implementation block
@property (assign,nonatomic) BOOL hasBandclass; 
@property (assign,nonatomic) int bandclass;                       //@synthesize bandclass=_bandclass - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                         //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                        //@synthesize pnoffset=_pnoffset - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) ALSLocation * location;              //@synthesize location=_location - In the implementation block
-(BOOL)hasBandclass;
-(int)bandclass;
-(BOOL)hasPnoffset;
-(int)pnoffset;
-(void)setBandclass:(int)arg1 ;
-(void)setPnoffset:(int)arg1 ;
-(void)setSectorid:(id)arg1 ;
-(BOOL)hasSectorid;
-(id)sectorid;
-(void)setHasBandclass:(BOOL)arg1 ;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)location;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChannel:(int)arg1 ;
-(int)channel;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
-(BOOL)hasChannel;
-(void)setHasChannel:(BOOL)arg1 ;
@end

