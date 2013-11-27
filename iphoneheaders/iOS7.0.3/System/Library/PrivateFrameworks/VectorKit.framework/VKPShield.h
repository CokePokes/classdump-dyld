/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class VKPGenericShieldStyleInfo, NSString, NSMutableArray;

@interface VKPShield : PBCodable {

	VKPGenericShieldStyleInfo* _genericShieldStyleInfo;
	NSString* _identifier;
	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variants;                                       //@synthesize variants=_variants - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericShieldStyleInfo; 
@property (nonatomic,retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;              //@synthesize genericShieldStyleInfo=_genericShieldStyleInfo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)variants;
-(BOOL)hasGenericShieldStyleInfo;
-(id)genericShieldStyleInfo;
-(void)setVariants:(id)arg1 ;
-(void)setGenericShieldStyleInfo:(id)arg1 ;
-(void)addVariants:(id)arg1 ;
-(unsigned)variantsCount;
-(void)clearVariants;
-(id)variantsAtIndex:(unsigned)arg1 ;
@end

