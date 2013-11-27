/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOProblemCollectionRequest : PBRequest <NSCopying> {

	NSString* _countryCode;
	NSString* _hwMachine;
	NSString* _inputLanguage;
	NSMutableArray* _requestElements;

}

@property (nonatomic,retain) NSMutableArray * requestElements;              //@synthesize requestElements=_requestElements - In the implementation block
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                          //@synthesize hwMachine=_hwMachine - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                      //@synthesize inputLanguage=_inputLanguage - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRequestElements:(id)arg1 ;
-(unsigned)requestElementsCount;
-(void)clearRequestElements;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)requestElements;
-(void)setCountryCode:(id)arg1 ;
-(void)setInputLanguage:(id)arg1 ;
-(BOOL)hasInputLanguage;
-(id)inputLanguage;
-(void)setHwMachine:(id)arg1 ;
-(BOOL)hasHwMachine;
-(id)hwMachine;
-(void)addRequestElement:(id)arg1 ;
-(id)requestElementAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCountryCode;
-(id)countryCode;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

