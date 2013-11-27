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

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying> {

	NSMutableArray* _photoInfos;
	int _photoType;
	NSString* _uid;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType;                            //@synthesize photoType=_photoType - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoInfos;              //@synthesize photoInfos=_photoInfos - In the implementation block
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid;                           //@synthesize uid=_uid - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(id)uid;
-(BOOL)hasUid;
-(void)setPhotoInfos:(id)arg1 ;
-(void)addPhotoInfo:(id)arg1 ;
-(BOOL)hasPhotoType;
-(int)photoType;
-(void)setPhotoType:(int)arg1 ;
-(unsigned)photoInfosCount;
-(void)clearPhotoInfos;
-(id)photoInfoAtIndex:(unsigned)arg1 ;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(id)photoInfos;
-(void)setUid:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

