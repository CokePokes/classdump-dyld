/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSTFormulaPredicate, TSWPParagraphStyle, TSTCellStyle;

@interface TSTConditionalStyleRule : NSObject <NSCopying> {

	TSTFormulaPredicate* mPredicate;
	TSWPParagraphStyle* mTextStyle;
	TSTCellStyle* mCellStyle;
	int _predicateType;

}

@property (nonatomic,readonly) TSCEFormula* formula; 
@property (nonatomic,readonly) TSTFormulaPredicate * predicate; 
@property (nonatomic,readonly) int predicateType;                            //@synthesize predicateType=_predicateType - In the implementation block
@property (nonatomic,readonly) TSTCellStyle * cellStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * textStyle; 
+(id)conditionalStyleRuleWithRule:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)copyByRemappingFormulaIDsWithMap:(CFDictionaryRef)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3 ;
-(int)predicateType;
-(id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(SCD_Struct_TS266)arg3 ;
-(id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2 ;
-(id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3 ;
-(BOOL)evaluateFormulaAtCellID:(SCD_Struct_TS266)arg1 withCalcEngine:(id)arg2 withFormulaTableID:(CFUUIDRef)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)textStyle;
-(id)predicate;
-(TSCEFormula*)formula;
-(id)cellStyle;
@end

