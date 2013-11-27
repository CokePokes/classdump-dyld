/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEOVJunction : PBCodable {

	NSMutableArray* _connectingRoads;
	NSMutableArray* _laneConnections;

}

@property (nonatomic,retain) NSMutableArray * connectingRoads;              //@synthesize connectingRoads=_connectingRoads - In the implementation block
@property (nonatomic,retain) NSMutableArray * laneConnections;              //@synthesize laneConnections=_laneConnections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)laneConnections;
-(unsigned)laneConnectionsCount;
-(void)setConnectingRoads:(id)arg1 ;
-(void)setLaneConnections:(id)arg1 ;
-(void)addConnectingRoad:(id)arg1 ;
-(void)addLaneConnections:(id)arg1 ;
-(unsigned)connectingRoadsCount;
-(void)clearConnectingRoads;
-(id)connectingRoadAtIndex:(unsigned)arg1 ;
-(void)clearLaneConnections;
-(id)laneConnectionsAtIndex:(unsigned)arg1 ;
-(id)connectingRoads;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

