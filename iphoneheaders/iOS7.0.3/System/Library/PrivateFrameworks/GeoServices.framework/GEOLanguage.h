/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying> {

	unsigned _identifier;
	NSMutableArray* _languages;

}

@property (assign,nonatomic) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * languages;              //@synthesize languages=_languages - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setLanguages:(id)arg1 ;
-(void)addLanguage:(id)arg1 ;
-(unsigned)languagesCount;
-(void)clearLanguages;
-(id)languageAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)languages;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

