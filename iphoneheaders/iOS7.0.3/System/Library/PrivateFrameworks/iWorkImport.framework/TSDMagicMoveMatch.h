/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSDMatchingAlgorithmMatch.h>

@class TSDMagicMoveMatchObject, TSDTextureContext, NSString;

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch> {

	TSDMagicMoveMatchObject* _outgoingObject;
	TSDMagicMoveMatchObject* _incomingObject;
	int _matchType;
	float _distance;
	float _zOrderDistance;
	float _attributeMatchPercent;
	TSDTextureContext* _textureContext;
	int _matchCost;
	NSString* _name;

}

@property (nonatomic,readonly) TSDMagicMoveMatchObject * outgoingObject;              //@synthesize outgoingObject=_outgoingObject - In the implementation block
@property (nonatomic,readonly) TSDMagicMoveMatchObject * incomingObject;              //@synthesize incomingObject=_incomingObject - In the implementation block
@property (assign,nonatomic) int matchType;                                           //@synthesize matchType=_matchType - In the implementation block
@property (assign,nonatomic) float distance;                                          //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) float zOrderDistance;                                    //@synthesize zOrderDistance=_zOrderDistance - In the implementation block
@property (assign,nonatomic) float attributeMatchPercent;                             //@synthesize attributeMatchPercent=_attributeMatchPercent - In the implementation block
@property (nonatomic,retain) TSDTextureContext * textureContext;                      //@synthesize textureContext=_textureContext - In the implementation block
@property (nonatomic,readonly) int matchCost;                                         //@synthesize matchCost=_matchCost - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL isTextMatch; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
+(id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(int)arg3 attributeMatchPercent:(float)arg4 textureContext:(id)arg5 ;
-(void)setTextureContext:(id)arg1 ;
-(id)textureContext;
-(id)outgoingObject;
-(id)incomingObject;
-(void)p_updateMagicMoveCost;
-(void)setAttributeMatchPercent:(float)arg1 ;
-(void)setZOrderDistance:(float)arg1 ;
-(int)matchCost;
-(float)attributeMatchPercent;
-(float)zOrderDistance;
-(int)compareToMatch:(id)arg1 ;
-(BOOL)conflictsWithMatch:(id)arg1 ;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;
-(BOOL)isTextMatch;
-(void)setMatchType:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(int)matchType;
@end

