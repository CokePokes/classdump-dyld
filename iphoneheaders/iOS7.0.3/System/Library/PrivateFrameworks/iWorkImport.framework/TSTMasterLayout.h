/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore, TSTLayoutDynamicColumnSwapProtocol, TSTLayoutDynamicContentProtocol, TSTLayoutDynamicRowSwapProtocol;
@class TSKChangeNotifier, TSTTableInfo, TSTWPColumnCache, TSTDupContentCache, TSTWidthHeightCache, TSUReadWriteQueue, TSTHiddenRowsColumnsCache, NSMutableArray, NSObject, TSTLayoutTask, NSRecursiveLock, TSURetainedPointerKeyDictionary, NSLock, TSDFill, NSMutableSet, , TSUColor, TSDInfoGeometry, TSDLayoutGeometry, TSTCellRegion, TSTLayoutDynamicResizeInfo, TSWPEditingController, TSTMergeRangeSortedSet, TSTTableModel, TSTLayout, NSIndexSet;

@interface TSTMasterLayout : NSObject <TSKChangeSourceObserver> {

	TSKChangeNotifier* mChangeNotifier;
	int mReferenceCount;
	TSTTableInfo* mTableInfo;
	TSTWPColumnCache* mCellIDToWPColumnCache;
	TSTDupContentCache* mDupContentCache;
	TSTWPColumnCache* mTempWPColumnCache;
	TSTWidthHeightCache* mWidthHeightCache;
	TSUReadWriteQueue* mWHCacheQueue;
	TSTHiddenRowsColumnsCache* mHiddenRowsColumnsCache;
	NSMutableArray* mChangeDescriptors;
	NSObject<OS_dispatch_group>* mLayoutInFlight;
	TSTLayoutTask* mCurrentLayoutTask;
	NSObject<OS_dispatch_semaphore>* mLayoutSemaphore;
	unsigned mMaxConcurrentTasks;
	unsigned mNumCellsPerTask;
	BOOL mHeaderColumnsFrozen;
	BOOL mHeaderRowsFrozen;
	BOOL mHeaderColumnsRepeat;
	BOOL mHeaderRowsRepeat;
	BOOL mTableNameEnabled;
	CGRect mTableNameBounds;
	float mCachedTableNameHeight;
	unsigned short mCachedNumberOfHeaderColumns;
	unsigned mCachedMaxNumberOfColumns;
	unsigned short mCachedNumberOfHeaderRows;
	unsigned short mCachedNumberOfFooterRows;
	unsigned mCachedMaxNumberOfRows;
	TSTTableStrokeDefaultsRef mDefaultStrokes;
	NSMutableArray* mTopRowStrokes;
	NSMutableArray* mBottomRowStrokes;
	NSMutableArray* mLeftColumnStrokes;
	NSMutableArray* mRightColumnStrokes;
	NSRecursiveLock* mStrokesLock;
	TSURetainedPointerKeyDictionary* mParaStyleToHeightCache;
	NSLock* mLock;
	BOOL mBandedFillIsValid;
	BOOL mUseBandedFill;
	TSDFill* mBandedFillObject;
	int mTableEnvironment;
	int mTableRowsBehavior;
	BOOL mTableDefaultFontHeightsAreValid;
	float mTableDefaultFontHeightForArea[4];
	BOOL mInDynamicLayoutMode;
	NSMutableSet* mDynamicLayouts;
	float mDynamicAddOrRemoveColumnElementSize;
	float mDynamicAddOrRemoveRowElementSize;
	BOOL mDynamicBandedFill;
	BOOL mDynamicBandedFillSetting;
	int mDynamicColumnAdjustment;
	<TSTLayoutDynamicColumnSwapProtocol>* mDynamicColumnSwapDelegate;
	float mDynamicColumnTabSize;
	<TSTLayoutDynamicContentProtocol>* mDynamicContentDelegate;
	TSUColor* mDynamicFontColor;
	SCD_Struct_TS496 mDynamicFontColorCellRange;
	SCD_Struct_TS496 mDynamicHidingRowsCols;
	int mDynamicHidingRowsColsDirection;
	SCD_Struct_TS496 mDynamicHidingContent;
	SCD_Struct_TS496 mDynamicHidingText;
	TSDInfoGeometry* mDynamicInfoGeometry;
	BOOL mDynamicRepResize;
	BOOL mDynamicRepressFrozenHeader;
	BOOL mDynamicResizingColumns;
	SCD_Struct_TS496 mDynamicResizingColumnRange;
	float mDynamicResizingColumnAdjustment;
	BOOL mDynamicResizingRows;
	SCD_Struct_TS496 mDynamicResizingRowRange;
	float mDynamicResizingRowAdjustment;
	SCD_Struct_TS496 mDynamicRevealingRowsCols;
	int mDynamicRevealingRowsColsDirection;
	int mDynamicRowAdjustment;
	<TSTLayoutDynamicRowSwapProtocol>* mDynamicRowSwapDelegate;
	float mDynamicRowTabSize;
	TSDLayoutGeometry* mDynamicSavedLayoutGeometry;
	TSTCellRegion* mDynamicSelectionRegion;
	float mDynamicWidthResize;
	float mDynamicHeightResize;
	float mDynamicTableNameResize;
	TSTLayoutDynamicResizeInfo* mDynamicResizeInfo;
	SCD_Struct_TS266 mDynamicSuppressingConditionalStylesCellID;
	BOOL mEmptyFilteredTable;
	TSWPEditingController* mContainedTextEditor;
	TSTMergeRangeSortedSet* mMergeRanges;
	BOOL mProcessHiddenRowsForExport;
	TSKChangeNotifier* _changeNotifier;
	CGSize mMaximumPartitionSize;

}

@property (assign,nonatomic) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) TSTWPColumnCache * cellIDToWPColumnCache; 
@property (nonatomic,readonly) TSTDupContentCache * dupContentCache; 
@property (nonatomic,readonly) TSTWPColumnCache * tempWPColumnCache; 
@property (nonatomic,readonly) TSUReadWriteQueue * whCacheQueue; 
@property (nonatomic,readonly) TSTWidthHeightCache * widthHeightCache; 
@property (nonatomic,readonly) TSTHiddenRowsColumnsCache * hiddenRowsColumnsCache; 
@property (assign,nonatomic) unsigned maxConcurrentTasks; 
@property (assign,nonatomic) unsigned numCellsPerTask; 
@property (nonatomic,readonly) BOOL useBandedFill; 
@property (nonatomic,readonly) TSDFill * bandedFillObject; 
@property (assign,nonatomic) int tableEnvironment; 
@property (nonatomic,readonly) int tableRowsBehavior; 
@property (nonatomic,readonly) BOOL inDynamicLayoutMode; 
@property (nonatomic,readonly) NSMutableSet * dynamicLayouts; 
@property (nonatomic,readonly) TSTLayout * dynamicLayout; 
@property (nonatomic,readonly) float dynamicAddOrRemoveColumnElementSize; 
@property (nonatomic,readonly) float dynamicAddOrRemoveRowElementSize; 
@property (nonatomic,readonly) BOOL dynamicBandedFill; 
@property (nonatomic,readonly) BOOL dynamicBandedFillSetting; 
@property (nonatomic,readonly) int dynamicColumnAdjustment; 
@property (nonatomic,readonly) <TSTLayoutDynamicColumnSwapProtocol> * dynamicColumnSwapDelegate; 
@property (nonatomic,readonly) float dynamicColumnTabSize; 
@property (nonatomic,readonly) <TSTLayoutDynamicContentProtocol> * dynamicContentDelegate; 
@property (nonatomic,readonly) TSUColor * dynamicFontColor; 
@property (nonatomic,readonly) SCD_Struct_TS497 dynamicFontColorCellRange; 
@property (assign,nonatomic) BOOL dynamicRepResize; 
@property (nonatomic,readonly) TSDInfoGeometry * dynamicInfoGeometry; 
@property (assign,nonatomic) float dynamicWidthResize; 
@property (assign,nonatomic) float dynamicHeightResize; 
@property (nonatomic,readonly) BOOL dynamicResizingColumns; 
@property (nonatomic,readonly) SCD_Struct_TS497 dynamicResizingColumnRange; 
@property (nonatomic,readonly) float dynamicResizingColumnAdjustment; 
@property (nonatomic,readonly) BOOL dynamicResizingRows; 
@property (nonatomic,readonly) SCD_Struct_TS497 dynamicResizingRowRange; 
@property (nonatomic,readonly) float dynamicResizingRowAdjustment; 
@property (nonatomic,readonly) int dynamicRowAdjustment; 
@property (nonatomic,readonly) <TSTLayoutDynamicRowSwapProtocol> * dynamicRowSwapDelegate; 
@property (nonatomic,readonly) float dynamicRowTabSize; 
@property (nonatomic,copy) TSDLayoutGeometry * dynamicSavedLayoutGeometry; 
@property (nonatomic,readonly) TSTCellRegion * dynamicSelectionRegion; 
@property (nonatomic,readonly) float dynamicTableNameResize; 
@property (nonatomic,readonly) SCD_Struct_TS266 dynamicSuppressingConditionalStylesCellID; 
@property (nonatomic,readonly) BOOL emptyFilteredTable; 
@property (assign,nonatomic) TSWPEditingController * containedTextEditor; 
@property (nonatomic,readonly) NSMutableArray * changeDescriptors; 
@property (nonatomic,readonly) BOOL isGrouped; 
@property (assign,nonatomic) TSTMergeRangeSortedSet * mergeRanges; 
@property (assign,nonatomic) TSKChangeNotifier * changeNotifier;                                              //@synthesize changeNotifier=_changeNotifier - In the implementation block
@property (assign,nonatomic) BOOL processHiddenRowsForExport; 
@property (assign,nonatomic) CGSize maximumPartitionSize; 
@property (nonatomic,readonly) NSIndexSet * visibleRowIndices; 
@property (nonatomic,readonly) NSIndexSet * visibleColumnIndices; 
+(CGSize)tableNameTextSize:(id)arg1 ;
+(float)effectiveTableNameHeightForModel:(id)arg1 ;
+(id)tableNameTextEngine:(id)arg1 ;
-(id)changeNotifier;
-(void)setChangeNotifier:(id)arg1 ;
-(id)tableModel;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(int)tableAreaForCellID:(SCD_Struct_TS266)arg1 ;
-(float)tableNameHeight;
-(BOOL)useBandedFill;
-(id)bandedFillObject;
-(void)setTableInfo:(id)arg1 ;
-(BOOL)emptyFilteredTable;
-(void)calculateRawTableSize:(CGSize*)arg1 andStrokeDelta:(CGSize*)arg2 ;
-(CGAffineTransform)transformForTargetSize:(CGSize)arg1 withRawTableSize:(CGSize)arg2 andStrokeDelta:(CGSize)arg3 ;
-(float)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg1 ;
-(void)invalidateTableNameHeight;
-(void)invalidateDynamicResizeInfo;
-(id)dupContentCache;
-(id)cellIDToWPColumnCache;
-(id)tableInfo;
-(id)newLayoutHint;
-(void)setDynamicHeightResize:(float)arg1 ;
-(void)setDynamicWidthResize:(float)arg1 ;
-(void)captureDynamicResizeInfo;
-(void)updateDynamicInfoGeometry:(id)arg1 ;
-(float)dynamicHeightResize;
-(void)updateDynamicTableNameSize:(float)arg1 ;
-(int)tableRowsBehavior;
-(BOOL)isDynamicallyChangingInfoGeometry;
-(id)dynamicInfoGeometry;
-(void)validateLayoutHint:(id)arg1 ;
-(void)addChangeDescriptor:(id)arg1 ;
-(BOOL)isDynamicallyColumnTabResizing;
-(float)dynamicColumnTabSize;
-(BOOL)isDynamicallyRowTabResizing;
-(float)dynamicRowTabSize;
-(BOOL)isDynamicallyRepressingFrozenHeaders;
-(BOOL)inDynamicLayoutMode;
-(BOOL)dynamicRepResize;
-(BOOL)isDynamicallyChangingContent;
-(id)dynamicContentDelegate;
-(BOOL)cell:(id*)arg1 forCellID:(SCD_Struct_TS266)arg2 ;
-(SCD_Struct_TS266)modelCellIDForLayoutCellID:(SCD_Struct_TS266)arg1 ;
-(BOOL)isDynamicallyChangingRowOrColumnCount;
-(UIEdgeInsets)paddingForCellID:(SCD_Struct_TS266)arg1 ;
-(int)tableEnvironment;
-(void)addChangeDescriptorWithType:(int)arg1 andCellRange:(SCD_Struct_TS497)arg2 ;
-(id)widthHeightCache;
-(float)calculatedTableNameHeight;
-(BOOL)isDynamicallyResizingTableName;
-(float)dynamicTableNameResize;
-(id)hiddenRowsColumnsCache;
-(BOOL)isDynamicallyResizing:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(UIEdgeInsets)defaultPaddingForCellID:(SCD_Struct_TS266)arg1 ;
-(id)newTextEngineForCell:(id)arg1 atCellID:(SCD_Struct_TS266)arg2 ;
-(float)fontHeightOfParagraphStyle:(id)arg1 ;
-(void)clearModelHeightWidthCacheForCellRange:(SCD_Struct_TS497)arg1 ;
-(void)validateDynamicResizeInfo;
-(void)invalidateBandedFill;
-(BOOL)isDynamicallySettingBandedFill;
-(BOOL)dynamicBandedFill;
-(BOOL)dynamicBandedFillSetting;
-(void)measureTextForLayoutState:(id)arg1 ;
-(void)setDynamicRepResize:(BOOL)arg1 ;
-(id)dynamicLayouts;
-(void)setDynamicSavedLayoutGeometry:(id)arg1 ;
-(BOOL)updateDynamicChangeRowOrColumnCount:(int)arg1 count:(int)arg2 newlyAddedElementSize:(float)arg3 ;
-(void)p_cancelDynamicRowColCountChanges;
-(void)updateDynamicHidingRowsCols:(int)arg1 hidingCellRange:(SCD_Struct_TS497)arg2 ;
-(void)cancelDynamicModeChanges;
-(void)beginDynamicMode:(id)arg1 ;
-(void)endDynamicMode;
-(BOOL)isDynamicallySwappingRows;
-(id)dynamicRowSwapDelegate;
-(BOOL)isDynamicallySwappingColumns;
-(id)dynamicColumnSwapDelegate;
-(BOOL)isDynamicallyChangingRowCount;
-(BOOL)isDynamicallyRevealingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(BOOL)isDynamicallyHidingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2 ;
-(BOOL)processHiddenRowsForExport;
-(id)visibleRowIndices;
-(id)visibleColumnIndices;
-(BOOL)isDynamicallyChangingColumnCount;
-(id)dynamicLayout;
-(void)addChangeDescriptorWithType:(int)arg1 andCellRange:(SCD_Struct_TS497)arg2 andStrokeRange:(SCD_Struct_TS497)arg3 ;
-(BOOL)isGrouped;
-(id)dynamicSavedLayoutGeometry;
-(void)p_processChange:(id)arg1 forChangeSource:(id)arg2 ;
-(id)changeDescriptors;
-(void)validateBandedFill;
-(void)validateTableRowsBehavior;
-(void)validateChangeDescriptorQueue;
-(void)invalidateDefaultFontHeights;
-(void)validateRowVisibility:(id)arg1 ;
-(void)validateMasterLayoutForChangeDescriptors:(id)arg1 ;
-(void)validateDefaultFontHeights;
-(id)regionForStrokeValidationFromChangeDescriptors:(id)arg1 ;
-(id)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2 ;
-(void)validateStrokesForRegion:(id)arg1 regionAlreadyValidated:(id)arg2 ;
-(void)processLayoutTask:(id)arg1 ;
-(void)waitForLayoutToComplete;
-(void)updateWHCForMergeRanges;
-(UIEdgeInsets)edgeInsetsFromPadding:(id)arg1 ;
-(void)queueCellForValidation:(SCD_Struct_TS497)arg1 cell:(id)arg2 mergeRange:(SCD_Struct_TS497)arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(BOOL)arg7 layoutCacheFlags:(int)arg8 ;
-(void)p_validateFittingInfoForCellID:(SCD_Struct_TS266)arg1 inMergeRange:(SCD_Struct_TS497)arg2 ;
-(SCD_Struct_TS266)p_validateFittingInfoForEmptyCellsBetween:(SCD_Struct_TS266)arg1 andCellID:(SCD_Struct_TS266)arg2 inRange:(SCD_Struct_TS497)arg3 ;
-(void)validateFittingInfoForCell:(id)arg1 cellID:(SCD_Struct_TS266)arg2 mergeRange:(SCD_Struct_TS497)arg3 setFitting:(BOOL)arg4 ;
-(void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(SCD_Struct_TS266)arg1 andEndCellID:(SCD_Struct_TS266)arg2 ;
-(void)validateFittingInfoWithCellRange:(SCD_Struct_TS497)arg1 ;
-(SCD_Struct_TS266)layoutCellIDForModelCellID:(SCD_Struct_TS266)arg1 ;
-(id)containedTextEditor;
-(unsigned)numCellsPerTask;
-(id)whCacheQueue;
-(id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(SCD_Struct_TS266)arg2 ;
-(BOOL)isDynamicallyChangingFontColorOfCellID:(SCD_Struct_TS266)arg1 ;
-(id)dynamicFontColor;
-(void)setProcessHiddenRowsForExport:(BOOL)arg1 ;
-(BOOL)hintIsValid:(id)arg1 ;
-(void)resetModelHeightWidthCache;
-(id)tableNameTextEngine;
-(CGSize)tableNameTextSize;
-(BOOL)shouldRowUseBandedFill:(unsigned short)arg1 ;
-(void)addDynamicLayoutBeginIfNecessary:(id)arg1 ;
-(void)removeDynamicLayoutEndIfNecessary:(id)arg1 ;
-(BOOL)isDynamicallyResizing:(int)arg1 ;
-(BOOL)isDynamicallyResizingCellID:(SCD_Struct_TS266)arg1 ;
-(BOOL)isDynamicallyHidingRowsCols;
-(BOOL)isDynamicallyHidingRowsColsCellID:(SCD_Struct_TS266)arg1 ;
-(BOOL)isDynamicallyHidingContentOfCellID:(SCD_Struct_TS266)arg1 ;
-(BOOL)isDynamicallyHidingTextOfCellID:(SCD_Struct_TS266)arg1 ;
-(void)updateDynamicResize:(int)arg1 resizingRange:(SCD_Struct_TS497)arg2 resizeAdjustment:(float)arg3 ;
-(BOOL)isDynamicallyRevealingRowsCols;
-(void)updateDynamicSelectionRegion:(id)arg1 ;
-(BOOL)isDynamicallyChangingSelection;
-(void)updateDynamicColumnTabSize:(float)arg1 ;
-(void)updateDynamicRowTabSize:(float)arg1 ;
-(void)updateDynamicBandedFill:(BOOL)arg1 setting:(BOOL)arg2 ;
-(void)updateDynamicRepressFrozenHeader:(BOOL)arg1 ;
-(void)updateDynamicHidingContent:(SCD_Struct_TS497)arg1 ;
-(void)updateDynamicHidingText:(SCD_Struct_TS497)arg1 ;
-(void)updateDynamicRevealingRowsCols:(int)arg1 revealingCellRange:(SCD_Struct_TS497)arg2 ;
-(void)updateDynamicContentDelegate:(id)arg1 ;
-(void)updateDynamicFontColor:(id)arg1 andRange:(SCD_Struct_TS497)arg2 ;
-(void)updateDynamicRowSwapDelegate:(id)arg1 ;
-(void)updateDynamicColumnSwapDelegate:(id)arg1 ;
-(void)updateDynamicSuppressingConditionalStylesCellID:(SCD_Struct_TS266)arg1 ;
-(void)updateDynamicResizeInfo:(id)arg1 ;
-(id)adjustedDynamicSavedLayoutGeometry;
-(void)validateFittingWidthsForRegion:(id)arg1 ;
-(id)validateCellForDrawing:(SCD_Struct_TS266)arg1 cell:(id)arg2 contents:(id)arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned)arg8 pageCount:(unsigned)arg9 ;
-(void)setMaxConcurrentTasks:(unsigned)arg1 ;
-(id)tempWPColumnCache;
-(void)setTableEnvironment:(int)arg1 ;
-(unsigned)maxConcurrentTasks;
-(void)setNumCellsPerTask:(unsigned)arg1 ;
-(float)dynamicAddOrRemoveColumnElementSize;
-(float)dynamicAddOrRemoveRowElementSize;
-(int)dynamicColumnAdjustment;
-(SCD_Struct_TS497)dynamicFontColorCellRange;
-(float)dynamicWidthResize;
-(BOOL)dynamicResizingColumns;
-(float)dynamicResizingColumnAdjustment;
-(SCD_Struct_TS497)dynamicResizingColumnRange;
-(BOOL)dynamicResizingRows;
-(float)dynamicResizingRowAdjustment;
-(SCD_Struct_TS497)dynamicResizingRowRange;
-(int)dynamicRowAdjustment;
-(id)dynamicSelectionRegion;
-(SCD_Struct_TS266)dynamicSuppressingConditionalStylesCellID;
-(void)setContainedTextEditor:(id)arg1 ;
-(id)mergeRanges;
-(void)setMergeRanges:(id)arg1 ;
-(CGSize)maximumPartitionSize;
-(void)setMaximumPartitionSize:(CGSize)arg1 ;
-(void)validate;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
@end

