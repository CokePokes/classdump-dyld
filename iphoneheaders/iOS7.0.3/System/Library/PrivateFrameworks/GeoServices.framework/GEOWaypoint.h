/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOLocation, GEOPlaceSearchRequest;

@interface GEOWaypoint : PBCodable <NSCopying> {

	NSMutableArray* _entryPoints;
	GEOLocation* _location;
	GEOPlaceSearchRequest* _placeSearchRequest;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;              //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                  //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * entryPoints;                            //@synthesize entryPoints=_entryPoints - In the implementation block
-(id)initWithPlace:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 includeEntryPoints:(BOOL)arg2 ;
-(id)initWithLocation:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)location;
-(id)dictionaryRepresentation;
-(void)setPlaceSearchRequest:(id)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(id)placeSearchRequest;
-(unsigned)entryPointsCount;
-(id)entryPoints;
-(id)locationForWaypoint;
-(void)setEntryPoints:(id)arg1 ;
-(void)addEntryPoint:(id)arg1 ;
-(void)clearEntryPoints;
-(id)entryPointAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
@end

