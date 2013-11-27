/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SBBBInfoOperand;

@interface SBBBCompoundInfoOperand : NSObject {

	SBBBInfoOperand* _activeOperand;
	SBBBInfoOperand* _referenceOperand;

}

@property (nonatomic,readonly) SBBBInfoOperand * activeOperand;                          //@synthesize activeOperand=_activeOperand - In the implementation block
@property (nonatomic,readonly) SBBBInfoOperand * referenceOperand;                       //@synthesize referenceOperand=_referenceOperand - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) BOOL sectionOperand; 
+(id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2 ;
-(id)activeOperand;
-(id)referenceOperand;
-(BOOL)isSectionOperand;
-(id)initWithOperand:(id)arg1 operand:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

