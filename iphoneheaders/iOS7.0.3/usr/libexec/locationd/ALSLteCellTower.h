/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSLteCellTower : PBCodable {

	int _cellID;
	ALSLocation* _location;
	int _mcc;
	int _mnc;
	int _pid;
	int _tacID;
	int _uarfcn;
	SCD_Struct_AL16 _has;

}

@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                             //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasMnc; 
@property (assign,nonatomic) int mnc;                             //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) BOOL hasCellID; 
@property (assign,nonatomic) int cellID;                          //@synthesize cellID=_cellID - In the implementation block
@property (assign,nonatomic) BOOL hasTacID; 
@property (assign,nonatomic) int tacID;                           //@synthesize tacID=_tacID - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) ALSLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                          //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                             //@synthesize pid=_pid - In the implementation block
-(BOOL)hasMcc;
-(int)mcc;
-(int)mnc;
-(int)tacID;
-(BOOL)hasUarfcn;
-(int)uarfcn;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setTacID:(int)arg1 ;
-(BOOL)hasMnc;
-(void)setHasMcc:(BOOL)arg1 ;
-(void)setHasMnc:(BOOL)arg1 ;
-(void)setUarfcn:(int)arg1 ;
-(BOOL)hasCellID;
-(BOOL)hasTacID;
-(void)setHasCellID:(BOOL)arg1 ;
-(void)setHasTacID:(BOOL)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(void)setCellID:(int)arg1 ;
-(int)cellID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)location;
-(id)dictionaryRepresentation;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
-(BOOL)hasPid;
-(void)setHasPid:(BOOL)arg1 ;
@end

