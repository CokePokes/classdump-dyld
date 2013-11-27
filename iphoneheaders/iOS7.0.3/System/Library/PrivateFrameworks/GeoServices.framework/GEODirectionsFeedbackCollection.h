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

@class NSMutableArray, GEOLocation;

@interface GEODirectionsFeedbackCollection : PBCodable <NSCopying> {

	double _endTimeStamp;
	double _startTimeStamp;
	NSMutableArray* _directionsFeedbacks;
	GEOLocation* _routeCancelledLocation;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,retain) NSMutableArray * directionsFeedbacks;              //@synthesize directionsFeedbacks=_directionsFeedbacks - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteCancelledLocation; 
@property (nonatomic,retain) GEOLocation * routeCancelledLocation;              //@synthesize routeCancelledLocation=_routeCancelledLocation - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimeStamp; 
@property (assign,nonatomic) double startTimeStamp;                             //@synthesize startTimeStamp=_startTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndTimeStamp; 
@property (assign,nonatomic) double endTimeStamp;                               //@synthesize endTimeStamp=_endTimeStamp - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStartTimeStamp:(double)arg1 ;
-(void)addDirectionsFeedback:(id)arg1 ;
-(void)setRouteCancelledLocation:(id)arg1 ;
-(void)setEndTimeStamp:(double)arg1 ;
-(void)setDirectionsFeedbacks:(id)arg1 ;
-(unsigned)directionsFeedbacksCount;
-(void)clearDirectionsFeedbacks;
-(id)directionsFeedbackAtIndex:(unsigned)arg1 ;
-(BOOL)hasRouteCancelledLocation;
-(id)routeCancelledLocation;
-(BOOL)hasStartTimeStamp;
-(double)startTimeStamp;
-(BOOL)hasEndTimeStamp;
-(double)endTimeStamp;
-(void)setHasStartTimeStamp:(BOOL)arg1 ;
-(void)setHasEndTimeStamp:(BOOL)arg1 ;
-(id)directionsFeedbacks;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

