/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSTFormulaPredicate;

@interface TSTTableFilterRule : NSObject <NSCopying> {

	TSTFormulaPredicate* mPredicate;
	BOOL mDisabled;
	BOOL mDoesNotNeedFormulaRewriteForImport;

}
+(id)ruleWithFormulaPredicate:(id)arg1 ;
+(id)ruleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3 ;
-(void)encodeToArchive:(FilterRuleArchive*)arg1 ;
-(id)initFromArchive:(const FilterRuleArchive*)arg1 ;
-(BOOL)needsFormulaRewriteForImport;
-(unsigned char)columnIndexForFilterRuleInTableModel:(id)arg1 ;
-(BOOL)needsThreshold;
-(id)initWithFormulaPredicate:(id)arg1 ;
-(id)initRuleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3 ;
-(id)p_formatTextPredicate;
-(id)p_formatValuePredicate;
-(id)p_formatDatePredicate;
-(id)p_formatDurationPredicate;
-(void)setDoesNotNeedFormulaRewriteForImport;
-(BOOL)matchesRow:(unsigned short)arg1 withFormulaTableID:(CFUUIDRef)arg2 withCalculationEngine:(id)arg3 ;
-(BOOL)matchesCell:(id)arg1 ;
-(id)localizedTextRepresentation;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)predicate;
-(TSCEFormula*)formula;
@end

