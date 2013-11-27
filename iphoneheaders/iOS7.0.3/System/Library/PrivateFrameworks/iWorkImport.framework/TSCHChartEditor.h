/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableEditor.h>
#import <iWorkImport/TSDStylePresetsInspectorPaneDelegate.h>

@class TSCHSelection, TSCHTextEditing, TSCHChartType, NSMutableDictionary, TSCHChartAxisID, NSDictionary, TSDLayout, TSCHChartDrawableInfo;

@interface TSCHChartEditor : TSDDrawableEditor <TSDStylePresetsInspectorPaneDelegate> {

	TSCHSelection* mSelection;
	TSCHTextEditing* mTextEditor;
	TSCHChartType* mDisplayedChartType;
	NSMutableDictionary* mSubselectionState;
	TSCHChartAxisID* mInspectorAxisID;
	NSDictionary* _selectedDataSetNameIndexesByInfo;

}

@property (nonatomic,retain) TSCHTextEditing * textEditor; 
@property (nonatomic,readonly) TSDLayout * firstLayout; 
@property (nonatomic,copy) TSCHChartAxisID * inspectorAxisID; 
@property (nonatomic,readonly) NSDictionary * chartSubselectionState; 
@property (nonatomic,readonly) NSDictionary * selectedChartTitleIndexesByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedDataSetNameIndexesByInfo;                    //@synthesize selectedDataSetNameIndexesByInfo=_selectedDataSetNameIndexesByInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * selectedLegendsIndexesByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedValueAxisIDsByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedCategoryAxisIDsByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedAxisTitleAxisIDsByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedAxisLabelsAxisIDsByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedAxisSeriesLabelsAxisIDsByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedSeriesIndexesByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedSeriesValueLabelIndexesByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedErrorBarGroupsByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedTrendLineIndexesByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedTrendLineEquationIndexesByInfo; 
@property (nonatomic,readonly) NSDictionary * selectedTrendLineR2IndexesByInfo; 
@property (nonatomic,readonly) BOOL hasSeriesSelection; 
@property (nonatomic,readonly) BOOL hasSeriesValueLabelSelection; 
@property (nonatomic,readonly) BOOL hasChartTitleSelection; 
@property (nonatomic,readonly) BOOL hasChartDataSetNameSelection; 
@property (nonatomic,readonly) BOOL hasAxisTitleSelection; 
@property (nonatomic,readonly) BOOL hasLegendSelection; 
@property (nonatomic,readonly) BOOL hasAxisLabelsSelection; 
@property (nonatomic,readonly) BOOL hasAxisSeriesLabelsSelection; 
@property (nonatomic,readonly) BOOL hasErrorBarSelection; 
@property (nonatomic,readonly) BOOL hasTrendLineSelection; 
@property (nonatomic,readonly) BOOL hasTrendLineEquationSelection; 
@property (nonatomic,readonly) BOOL hasTrendLineR2Selection; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * firstChartInfo; 
@property (assign,nonatomic) TSCHChartType * displayedChartType; 
+(id)keyPathsForValuesAffectingSelectedValueAxisIDsByInfo;
+(id)keyPathsForValuesAffectingSelectedCategoryAxisIDsByInfo;
+(id)keyPathsForValuesAffectingSelectedSeriesIndexesByInfo;
+(id)keyPathsForValuesAffectingSelectedSeriesValueLabelIndexesByInfo;
+(id)keyPathsForValuesAffectingHasSeriesSelection;
+(id)keyPathsForValuesAffectingHasSeriesValueLabelSelection;
+(id)keyPathsForValuesAffectingSelectedAxisTitleAxisIDsByInfo;
+(id)keyPathsForValuesAffectingHasAxisTitleSelection;
+(id)keyPathsForValuesAffectingSelectedAxisLabelsAxisIDsByInfo;
+(id)keyPathsForValuesAffectingHasAxisLabelsSelection;
+(id)keyPathsForValuesAffectingSelectedAxisSeriesLabelsAxisIDsByInfo;
+(id)keyPathsForValuesAffectingHasAxisSeriesLabelsSelection;
+(id)keyPathsForValuesAffectingChartSubselectionState;
+(id)keyPathsForValuesAffectingSelectedChartTitleIndexesByInfo;
+(id)keyPathsForValuesAffectingSelectedChartDataSetNameIndexesByInfo;
+(id)keyPathsForValuesAffectingHasChartTitleSelection;
+(id)keyPathsForValuesAffectingHasChartDataSetNameSelection;
+(id)keyPathsForValuesAffectingselectedLegendsIndexesByInfo;
+(id)keyPathsForValuesAffectingSelectedErrorBarGroupsByInfo;
+(id)keyPathsForValuesAffectingSelectedTrendLineIndexesByInfo;
+(id)keyPathsForValuesAffectingSelectedTrendLineEquationIndexesByInfo;
+(id)keyPathsForValuesAffectingSelectedTrendLineR2IndexesByInfo;
+(id)keyPathsForValuesAffectingHasErrorBarSelection;
+(id)keyPathsForValuesAffectingHasTrendLineSelection;
+(id)keyPathsForValuesAffectingHasTrendLineEquationSelection;
+(id)keyPathsForValuesAffectingHasTrendLineR2Selection;
+(id)keyPathsForValuesAffectingHasLegendSelection;
+(BOOL)automaticallyNotifiesObserversOfSelection;
-(void)setInfos:(id)arg1 ;
-(id)allSelectedPathsForInfo:(id)arg1 ;
-(void)setSeriesType:(id)arg1 ;
-(void)enterChartDataEditor:(id)arg1 ;
-(id)selectedPathsOfType:(id)arg1 forInfo:(id)arg2 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(id)textEditor;
-(void)setTextEditor:(id)arg1 ;
-(void)p_removeSubselectionStateForInfos:(id)arg1 ;
-(void)p_notifyRepsEditorIsDeselectingInfos:(id)arg1 ;
-(void)p_notifyRepsEditorIsSelectingInfos:(id)arg1 ;
-(id)p_layoutForInfo:(id)arg1 ;
-(id)firstChartInfo;
-(int)p_canPerformFormatActions:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)p_isInSubselectionMode;
-(int)p_canPerformSubselectionEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)p_canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(int)p_canPerformShowHideActions:(id)arg1 isEnabled:(BOOL)arg2 showStr:(id)arg3 hideStr:(id)arg4 property:(int)arg5 styleOwner:(id)arg6 ;
-(int)p_canPerformShowHideSeriesActions:(id)arg1 chartDrawableInfo:(id)arg2 isEnabled:(BOOL)arg3 showStr:(id)arg4 hideStr:(id)arg5 property:(int)arg6 ;
-(int)p_canPerformShowHideAxisActions:(id)arg1 chartDrawableInfo:(id)arg2 isEnabled:(BOOL)arg3 showStr:(id)arg4 hideStr:(id)arg5 property:(int)arg6 axisType:(int)arg7 ordinal:(unsigned)arg8 ;
-(void)showOrHideChartDataEditor:(id)arg1 ;
-(int)p_canPerformShowOrHideChartDataEditor:(id)arg1 ;
-(void)strikethrough:(id)arg1 ;
-(void)showOrHideChartTitle:(id)arg1 ;
-(void)showOrHideChartLegend:(id)arg1 ;
-(void)showOrHideChartBorders:(id)arg1 ;
-(id)displayedChartType;
-(void)showOrHideYAxisTitle:(id)arg1 ;
-(void)showOrHideYAxisLabels:(id)arg1 ;
-(void)showOrHideYAxis2Title:(id)arg1 ;
-(void)showOrHideYAxis2Labels:(id)arg1 ;
-(void)showOrHideXAxisTitle:(id)arg1 ;
-(void)showOrHideXAxisLabels:(id)arg1 ;
-(void)showOrHideSeriesNames:(id)arg1 ;
-(int)p_canDoShowOrHideSeriesNames:(id)arg1 ;
-(void)showOrHideSeriesValueLabels:(id)arg1 ;
-(int)p_canDoShowOrHideSeriesValueLabels:(id)arg1 ;
-(void)changeChartTypeForTag:(id)arg1 ;
-(int)p_canPerformChangeChartType:(id)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)deselectAll:(id)arg1 ;
-(void)selectParent:(id)arg1 ;
-(id)selectedSeriesIndexesByInfo;
-(id)p_chartRepsForInfos:(id)arg1 ;
-(void)p_subselectionStateWillChangeForInfo:(id)arg1 ;
-(void)p_subselectionStateChangedForInfo:(id)arg1 ;
-(id)p_pathTypesNotSupportedForSelection;
-(id)p_allNoncompatiblePathTypesForPathType:(id)arg1 info:(id)arg2 ;
-(void)p_sendKVONotificationForSubselectionChangeOfType:(id)arg1 forWillNotDid:(BOOL)arg2 ;
-(void)selectPath:(id)arg1 forInfo:(id)arg2 ;
-(void)deselectPath:(id)arg1 forInfo:(id)arg2 ;
-(void)setSelectionPaths:(id)arg1 forPathType:(id)arg2 info:(id)arg3 ;
-(id)selectedIndexesOfType:(id)arg1 forInfo:(id)arg2 ;
-(id)p_selectedArgumentsByInfoOfType:(id)arg1 ;
-(id)p_selectedIndexesByInfoOfType:(id)arg1 ;
-(void)setSelection:(id)arg1 withFlags:(unsigned)arg2 ;
-(void)clearSelectedPathsForInfo:(id)arg1 ;
-(BOOL)forceCanvasTextEditingToEnd;
-(BOOL)allSelectedChartsMatch;
-(void)p_postSyncCommand:(id)arg1 ;
-(void)p_setAllSeriesProperty:(int)arg1 toValue:(id)arg2 onChart:(id)arg3 groupOpen:(BOOL*)arg4 ;
-(void)p_setInfoObject:(id)arg1 forProperty:(int)arg2 ;
-(void)p_toggleTextProperty:(int)arg1 onValue:(int)arg2 offValue:(int)arg3 ;
-(int)p_calculateNewToggleTextProperty:(int)arg1 onValue:(int)arg2 offValue:(int)arg3 ;
-(void)p_testAndSetSelectedSeriesIntProperty:(int)arg1 toValue:(id)arg2 ;
-(void)p_testAndSetAllSeriesIntProperty:(int)arg1 toValue:(id)arg2 ;
-(void)p_postCommand:(id)arg1 ;
-(void)p_testAndSetAllSeriesFloatProperty:(int)arg1 toValue:(id)arg2 ;
-(void)p_setAllSeriesProperty:(int)arg1 toValue:(id)arg2 ;
-(id)tuplesToSetSeriesType:(id)arg1 selectedSeries:(id)arg2 forInfo:(id)arg3 ;
-(void)p_testAndSetBool:(BOOL)arg1 forAxisID:(id)arg2 withProperty:(int)arg3 ;
-(void)p_testAndSetInt:(int)arg1 forAxisID:(id)arg2 withProperty:(int)arg3 ;
-(void)p_testUserMinMaxProperty:(int)arg1 andSetDouble:(double)arg2 forAxisID:(id)arg3 ;
-(void)p_testAndSetFloat:(float)arg1 forAxisID:(id)arg2 withProperty:(int)arg3 ;
-(id)p_allSelectionPathsForPathType:(id)arg1 info:(id)arg2 ;
-(id)stylePresetKindForInspector;
-(void)stylePresetInspector:(id)arg1 didSelectPreset:(id)arg2 ;
-(id)imageForPreset:(id)arg1 size:(CGSize)arg2 ;
-(id)moreOptionsTitle;
-(id)optionalTopSectionCellArrayForPresetPane:(id)arg1 ;
-(id)firstLayout;
-(void)didBecomeCurrentEditor;
-(void)willResignCurrentEditor;
-(BOOL)shouldEndEditingToBeginEditingRep:(id)arg1 ;
-(BOOL)p_canShowChartDataEditor;
-(id)p_orderedChartTypeArray;
-(BOOL)canSelectPath:(id)arg1 ;
-(void)toggleSelectionOfPath:(id)arg1 forInfo:(id)arg2 ;
-(void)extendSelectionWithPath:(id)arg1 forInfo:(id)arg2 ;
-(id)allSelectedChartsDimensions;
-(id)selectedValueAxisIDsByInfo;
-(id)selectedCategoryAxisIDsByInfo;
-(id)selectedSeriesValueLabelIndexesByInfo;
-(BOOL)hasSeriesSelection;
-(BOOL)hasSeriesValueLabelSelection;
-(id)selectedAxisTitleAxisIDsByInfo;
-(BOOL)hasAxisTitleSelection;
-(id)selectedAxisLabelsAxisIDsByInfo;
-(BOOL)hasAxisLabelsSelection;
-(id)selectedAxisSeriesLabelsAxisIDsByInfo;
-(BOOL)hasAxisSeriesLabelsSelection;
-(id)chartSubselectionState;
-(id)selectedChartTitleIndexesByInfo;
-(id)selectedChartDataSetNameIndexesByInfo;
-(BOOL)hasChartTitleSelection;
-(BOOL)hasChartDataSetNameSelection;
-(id)selectedLegendsIndexesByInfo;
-(id)selectedErrorBarGroupsByInfo;
-(id)selectedTrendLineIndexesByInfo;
-(id)selectedTrendLineEquationIndexesByInfo;
-(id)selectedTrendLineR2IndexesByInfo;
-(BOOL)hasErrorBarSelection;
-(BOOL)hasTrendLineSelection;
-(BOOL)hasTrendLineEquationSelection;
-(BOOL)hasTrendLineR2Selection;
-(BOOL)hasLegendSelection;
-(void)setSelectionWithSearchReference:(id)arg1 ;
-(id)editingSearchReference;
-(float)viewScaleForSelectionWithTargetPointSize:(float)arg1 ;
-(id)topLevelInspectorViewControllers;
-(id)topLevelInspectorAutosaveName;
-(void)forceDataEditingToEnd;
-(void)stylePresetInspector:(id)arg1 didSelectPresetForNonDestructiveApply:(id)arg2 ;
-(unsigned)p_currentChartSegmentIndex:(id)arg1 ;
-(void)setShowChartTitle:(BOOL)arg1 ;
-(void)setChartTitleAlignment:(int)arg1 ;
-(void)setTextProperties:(id)arg1 forSelection:(id)arg2 ;
-(void)setShowChartLegend:(BOOL)arg1 ;
-(void)setShowChartBorder:(BOOL)arg1 ;
-(void)setSymbolType:(int)arg1 useSelection:(BOOL)arg2 ;
-(void)setConnectedLineType:(int)arg1 setShowLine:(BOOL)arg2 useSelection:(BOOL)arg3 ;
-(void)setAxisForSelectedSeries:(int)arg1 ;
-(void)setMultiDataControlType:(int)arg1 ;
-(void)setMultiDataSetNameLocation:(int)arg1 ;
-(void)setChartLabelPosition:(int)arg1 useSelection:(BOOL)arg2 ;
-(void)setChartLabelExplosion:(float)arg1 labelsOn:(BOOL)arg2 ;
-(void)setSeriesPercentNumberFormat:(id)arg1 ;
-(void)setSeriesNumberFormat:(id)arg1 ;
-(void)setSeriesNumberFormatType:(int)arg1 ;
-(void)setSeriesNumberFormat:(id)arg1 withFormatType:(int)arg2 ;
-(void)setShowSeriesLabels:(BOOL)arg1 ;
-(void)setShowNegativeBubbles:(BOOL)arg1 ;
-(void)setBubbleDimensionType:(int)arg1 ;
-(void)setSeriesLabelValueAxis:(int)arg1 ;
-(void)setAllFontsToFamilyNamed:(id)arg1 ;
-(void)multiplyAllFontSizesBy:(float)arg1 ;
-(void)setShowLabels:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowSeriesLabels:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowMajorGridlines:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowMajorTickmarks:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowMinorGridlines:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowMinorTickmarks:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowTitle:(BOOL)arg1 forAxisID:(id)arg2 ;
-(void)setShowLine:(BOOL)arg1 forAxisID:(id)arg2 ;
-(float)depthValueForChart:(id)arg1 ;
-(void)beginDynamic3DChartDepthChangesForChart:(id)arg1 ;
-(void)setDynamic3DChartDepthValue:(float)arg1 forChart:(id)arg2 ;
-(id)endDynamic3DChartDepthChangesForChart:(id)arg1 ;
-(id)localizedValueLabelsTabName;
-(id)chartLayoutsForChartDrawableInfo:(id)arg1 ;
-(void)setNumberOfDecades:(int)arg1 forAxisID:(id)arg2 ;
-(void)setMajorGridCount:(int)arg1 forAxisID:(id)arg2 ;
-(void)setMinorGridCount:(int)arg1 forAxisID:(id)arg2 ;
-(void)setScale:(int)arg1 forAxisID:(id)arg2 ;
-(void)setMaxUserValue:(double)arg1 forAxisID:(id)arg2 ;
-(void)setMinUserValue:(double)arg1 forAxisID:(id)arg2 ;
-(void)setLabelRotation:(float)arg1 forAxisID:(id)arg2 ;
-(void)setNumberFormat:(id)arg1 forAxisID:(id)arg2 ;
-(void)setNumberFormatType:(int)arg1 forAxisID:(id)arg2 ;
-(void)setLabelPosition:(int)arg1 forAxisID:(id)arg2 ;
-(void)setColumnShape:(int)arg1 ;
-(void)setBevelEdges:(BOOL)arg1 ;
-(void)setShowHiddenData:(BOOL)arg1 ;
-(void)setString:(id)arg1 forSelection:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 onSubselectionType:(id)arg3 ;
-(void)setDisplayedChartType:(id)arg1 ;
-(id)inspectorAxisID;
-(void)setInspectorAxisID:(id)arg1 ;
-(id)selectedDataSetNameIndexesByInfo;
-(void)dealloc;
-(id)selection;
-(void)setSelection:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(id)model;
-(void)deleteBackward:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(BOOL)setChartType:(id)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(void)underline:(id)arg1 ;
@end

