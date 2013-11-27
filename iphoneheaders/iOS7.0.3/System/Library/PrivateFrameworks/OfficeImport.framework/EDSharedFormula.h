/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFormula.h>

@class EDReference;

@interface EDSharedFormula : EDFormula {

	unsigned mBaseFormulaIndex;
	int mRowBaseOrOffset;
	int mColumnBaseOrOffset;
	EDReference* mBaseFormulaRange;

}
-(void)dealloc;
-(id)init;
-(void)setRowBaseOrOffset:(int)arg1 ;
-(void)setColumnBaseOrOffset:(int)arg1 ;
-(void)setBaseFormulaIndex:(unsigned)arg1 ;
-(bool)isBaseFormula;
-(int)rowBaseOrOffset;
-(int)columnBaseOrOffset;
-(id)baseFormulaRange;
-(id)initWithFormula:(id)arg1 ;
-(bool)isSharedFormula;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(id)baseFormulaWithRowBlocks:(id)arg1 ;
-(unsigned)baseFormulaIndex;
-(id)warningWithRowBlocks:(id)arg1 ;
-(void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2 ;
@end

