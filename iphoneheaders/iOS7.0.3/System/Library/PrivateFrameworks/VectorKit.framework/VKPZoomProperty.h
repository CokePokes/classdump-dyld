/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ProtocolBuffer/PBCodable.h>

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable {

	float _maxZ;
	float _minZ;
	VKPStyleProperties* _properties;

}

@property (assign,nonatomic) float minZ;                                   //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) float maxZ;                                   //@synthesize maxZ=_maxZ - In the implementation block
@property (nonatomic,retain) VKPStyleProperties * properties;              //@synthesize properties=_properties - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)minZ;
-(void)setMinZ:(float)arg1 ;
-(float)maxZ;
-(void)setMaxZ:(float)arg1 ;
-(void)applyTo:(id)arg1 zoom:(float)arg2 ;
@end

