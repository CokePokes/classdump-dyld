/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTWidthHeightCache : NSObject {

	vector<TSTWidthHeightCache_Private::WHCCol, std::__1::allocator<TSTWidthHeightCache_Private::WHCCol> >* mFittingColumnWidth;
	vector<TSTWidthHeightCache_Private::WHCRow, std::__1::allocator<TSTWidthHeightCache_Private::WHCRow> >* mFittingRowHeight;
	vector<float, std::__1::allocator<float> >* mModelColumnWidth;
	vector<float, std::__1::allocator<float> >* mModelRowHeight;
	unsigned short mMaxRow;
	unsigned char mMaxCol;
	opaque_pthread_rwlock_t mLock;

}
-(id)initWithNumRows:(unsigned short)arg1 andNumCols:(unsigned short)arg2 ;
-(BOOL)resetModelCache;
-(BOOL)resetModelCacheRange:(SCD_Struct_TS497)arg1 ;
-(float)getModelWidthForColumn:(unsigned char)arg1 ;
-(BOOL)setModelWidth:(float)arg1 forColumn:(unsigned char)arg2 ;
-(float)getModelHeightForRow:(unsigned short)arg1 ;
-(BOOL)setModelHeight:(float)arg1 forRow:(unsigned short)arg2 ;
-(float)getFitWidthForCol:(unsigned char)arg1 ;
-(void)resetColWidthsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2 ;
-(void)resetAllCol;
-(float)getFitHeightForRow:(unsigned short)arg1 ;
-(void)resetRowHeightsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2 ;
-(id)validateChangeDescriptors:(id)arg1 tableModel:(id)arg2 ;
-(BOOL)setFitHeight:(float)arg1 forCellID:(SCD_Struct_TS266)arg2 ;
-(BOOL)setFitWidth:(float)arg1 forCellID:(SCD_Struct_TS266)arg2 ;
-(void)_increaseRowCapacity:(unsigned)arg1 ;
-(void)_increaseColCapacity:(unsigned)arg1 ;
-(BOOL)moveRowsFrom:(SCD_Struct_TS497)arg1 toRow:(unsigned short)arg2 ;
-(BOOL)moveColsFrom:(SCD_Struct_TS497)arg1 toCol:(unsigned char)arg2 ;
-(BOOL)deleteRowsStartingWith:(unsigned short)arg1 andEndingWith:(unsigned short)arg2 ;
-(BOOL)deleteColsStartingWith:(unsigned char)arg1 andEndingWith:(unsigned char)arg2 ;
-(BOOL)insertRows:(unsigned short)arg1 atRow:(unsigned short)arg2 ;
-(BOOL)insertCols:(unsigned short)arg1 atColumn:(unsigned char)arg2 ;
-(void)resetWidthsHeightsForRange:(SCD_Struct_TS497)arg1 ;
-(BOOL)setFitDims:(CGSize)arg1 forCellID:(SCD_Struct_TS266)arg2 ;
-(unsigned long)numModelColumnWidths;
-(unsigned long)numModelRowHeights;
-(id)getListOfInvalidColsInRow:(unsigned short)arg1 ;
-(unsigned)resetAllInvalidColsInRow:(unsigned short)arg1 ;
-(void)resetAllRow;
-(void)resetRowHeightForCell:(SCD_Struct_TS266)arg1 ;
-(void)resetFitHeightForCellID:(SCD_Struct_TS266)arg1 ;
-(void)setNumsRows:(unsigned short)arg1 andNumCols:(unsigned char)arg2 ;
-(BOOL)verifyDims:(CGSize)arg1 forCellID:(SCD_Struct_TS266)arg2 ;
-(void)logInternalState;
-(void)dealloc;
-(id)init;
-(id)description;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

