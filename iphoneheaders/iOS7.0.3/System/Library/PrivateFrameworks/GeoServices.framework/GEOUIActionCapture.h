/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOUIActionCapture : PBCodable <NSCopying> {

	double _duration;
	int _actionType;
	int _sequenceNumber;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(int)sequenceNumber;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSequenceNumber;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

