/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>
#import <iWorkImport/TSCHChartPieWedgeExplosionTracking.h>
#import <iWorkImport/TSCH3DChartAnimationRendering.h>
#import <iWorkImport/TSCH3DGLLayerProvider.h>

@class TSCH3DChartRenderer, TSCH3DChartRepRenderQueue, TSCH3DChartRendererState, TSCH3DChartRepCachedTexture, TSCH3DChartAnimationEngine, TSCH3DScene, TSCH3DChartRepFPSCounter, NSDictionary, TSCH3DGLContext, NSNumber, NSMutableIndexSet, TSCH3DRotateKnob, CALayer, NSMutableArray;

@interface TSCH3DChartRep : TSCHChartRep <TSCHChartPieWedgeExplosionTracking, TSCH3DChartAnimationRendering, TSCH3DGLLayerProvider> {

	TSCH3DChartRenderer* mRenderer3D;
	TSCH3DChartRepRenderQueue* mRenderQueue;
	TSCH3DChartRendererState* mRendererState;
	unsigned mChunkCount;
	TSCH3DChartRepCachedTexture* mCachedTexture;
	BOOL mHasSkippedInitialTexture;
	BOOL mTextureForHiding;
	TSCH3DChartAnimationEngine* mEngine;
	Class mAnimationClass;
	int mAnimationStage;
	int mAnimationFrameCount;
	int mAnimationBuildType;
	TSCH3DScene* mAnimationLayerScene;
	TSCH3DChartRepFPSCounter* mFPSCounter;
	NSDictionary* mBuildAttributes;
	TSCH3DGLContext* mAnimationGLContext;
	NSNumber* mCustomAnimationContentsScale;
	int mRenderMode;
	BOOL mIsInInteractiveMode;
	NSMutableIndexSet* mInteractiveFlags;
	BOOL mMaybeBeginDragging;
	BOOL mMaybeBeginScrolling;
	BOOL mDidChangeDepth;
	CGSize mMinimumInteractiveSize;
	CGRect mCurrentVisibleBoundsRect;
	BOOL mWillChangeAppearance;
	TSCH3DRotateKnob* mRotate3DKnob;
	CGRect mBeginScaleChartBodyLayoutRect;
	BOOL mHasEverRendered;
	int mCGContextDrawingMode;
	BOOL mShouldDelayDestroyFramebuffer;
	CALayer* mRootLayer;
	unsigned mNumberOfInteractiveRotations;
	NSMutableArray* mSelectionKnobsLayers;
	BOOL mDocumentWillClose;
	BOOL mAllowLowResolutionTextures;
	BOOL mIsBackgroundLayoutAndRendering;
	float mOverrideRenderingSamples;
	BOOL mHasInterestInSharegroup;
	BOOL mWillBeRemoved;
	BOOL mAnimationHasEnded;

}

@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,readonly) TSCH3DScene * renderingScene; 
@property (nonatomic,readonly) Class renderCycleClass; 
@property (nonatomic,readonly) NSDictionary * buildAttributes; 
@property (nonatomic,readonly) int animationBuildType; 
@property (assign,nonatomic) BOOL textureForHiding; 
@property (nonatomic,retain) TSCH3DGLContext * animationGLContext; 
@property (nonatomic,readonly) TSCH3DChartAnimationEngine * engine; 
@property (nonatomic,readonly) TSCH3DChartRenderer * renderer3D; 
@property (nonatomic,readonly) Class animationClass; 
@property (nonatomic,retain) TSCH3DChartRepCachedTexture * cachedTexture; 
@property (nonatomic,retain) NSNumber * customAnimationContentsScale; 
+(id)chartRep3DFromLayer:(id)arg1 ;
+(id)sharegroupTokensOfInterest;
+(BOOL)canRenderUsingOpenGL;
+(id)p_allFillProperties;
-(void)willBeginZooming;
-(void)didEndZooming;
-(id)deliveryTimeSlice;
-(id)layoutScene;
-(Class)animationClass;
-(id)animationFilter;
-(id)buildAttributes;
-(int)animationBuildType;
-(BOOL)isLastChunkStageForFinalElements:(BOOL)arg1 ;
-(id)GLLayer;
-(id)GLLayerWithFrame:(CGRect)arg1 ;
-(CGRect)pixelAlignBodyCanvasBounds:(const CGRect*)arg1 ;
-(id)update3DRendererWithSceneAreaLayoutItem:(id)arg1 ;
-(void)processChanges:(id)arg1 ;
-(void)addRepToRenderQueueInFront:(BOOL)arg1 ;
-(id)rendererState;
-(float)renderingSamples;
-(id)renderingScene;
-(void)invalidateLayerCache;
-(BOOL)processMultipassRendering;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)cancelMultipassRendering;
-(void)knobTrackingDidBegin:(id)arg1 ;
-(void)dynamically3DRotatingWithTracker:(id)arg1 ;
-(void)knobTrackingDidEnd:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)cachedTexture;
-(void)p_addInterestForSharegroups;
-(void)p_removeInterestForSharegroupsIfNecessary;
-(id)p_sharegroupTokensOfInterest;
-(BOOL)p_hasInteractiveFlag:(unsigned)arg1 ;
-(id)p_renderQueue;
-(void)clearRenderers;
-(id)p_repSharegroupToken;
-(id)layoutItem;
-(tvec2<float>)normalizedPointFromNaturalPoint:(CGPoint)arg1 ;
-(tvec2<float>)normalizedPointFromUnscaledPoint:(CGPoint)arg1 ;
-(id)GLLayerNoCreate;
-(void)p_clearInteractiveFlag:(unsigned)arg1 ;
-(void)p_clearInteractiveFlagsBeforeRemoval;
-(BOOL)p_threadSafeExitInteractiveMode;
-(void)p_clearCachedTexture;
-(BOOL)p_isBackgroundLayoutThread;
-(BOOL)p_shouldDelayDestroyFramebuffer;
-(void)willBeRemoved;
-(void)p_cancelEndInteractiveModeCallback;
-(void)chartWillChangeAppearance;
-(BOOL)p_needInteractiveMode;
-(BOOL)p_canEndInteractiveMode;
-(void)p_endInteractiveMode;
-(void)chartDidChangeAppearance;
-(CGRect)canvasBoundsFromBodyCanvasBounds:(const CGRect*)arg1 ;
-(CGRect)bodyCanvasBoundsFromCanvasBounds:(const CGRect*)arg1 ;
-(BOOL)renderLegendIntoSeparateLayer;
-(CGRect)p_visibleRectInRepLayer;
-(CGRect)p_validateVisibleRect:(CGRect)arg1 ;
-(void)p_setInteractiveFlag:(unsigned)arg1 ;
-(void)p_beginInteractiveMode;
-(void)p_createBackgroundLayoutLayer;
-(void)willUpdateLayer:(id)arg1 ;
-(id)customAnimationContentsScale;
-(id)p_pixelAlignmentLayer;
-(void)didUpdateLayer:(id)arg1 ;
-(void)p_calculateGLLayerFrame;
-(CGRect)layerFrameInScaledCanvas;
-(void)setNeedsDisplayIfNecessaryUpdateGLLayerPixelAlignment:(BOOL)arg1 ;
-(void)p_pixelAlignLegendLayer:(id)arg1 basedOnUnalignedParentLayer:(id)arg2 ;
-(ChartProjectedBoundsConverter*)p_chart3DLayoutBoundsConverter;
-(BOOL)p_isDrawingInCGContext;
-(id)p_lazyRenderer3D;
-(void)p_setupForRendering;
-(void)p_updateLayerTree;
-(float)p_layerContentsScale;
-(void)p_updateRendererLayoutForCurrentLayer;
-(void)p_recreateGLLayer;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(id)p_animationScene;
-(BOOL)p_isThumbnailOrInsertionIconCanvas:(id)arg1 ;
-(void)p_updateVisibleBoundsRect;
-(void)p_calculateSelectionKnobsLayersForSelectionPaths:(id)arg1 ;
-(BOOL)p_canRender;
-(BOOL)p_shouldRender;
-(void)p_lowQualityRenderWithGLContext:(id)arg1 visible:(CGRect)arg2 renderer:(id)arg3 ;
-(id)p_chart3DLayout;
-(void)p_updateElementSceneObjectPropertiesForScene:(id)arg1 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(void)p_endInteractiveModeAfterDelay:(double)arg1 ;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowLegendHighlight;
-(BOOL)shouldShowKnobs;
-(void)editorIsSelectingInfos:(id)arg1 ;
-(BOOL)p_shouldShowRotate3DKnobWithInfoCount:(unsigned)arg1 ;
-(void)p_set3DRotateKnobVisible:(BOOL)arg1 ;
-(void)editorIsDeselectingInfo;
-(void)clearDragHighlightAndPreviewState;
-(void)showHitFeedbackForSelectionPath:(id)arg1 ;
-(void)p_removeRepFromRenderQueue;
-(void)dynamicDragDidBegin;
-(void)dynamicDragDidEnd;
-(void)beginDragInsertFromPalette;
-(void)endDragInsertFromPalette;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)viewScaleDidChange;
-(void)viewScrollDidChange;
-(void)viewScrollingEnded;
-(CGRect)boundsForStandardKnobs;
-(void)setCachedTexture:(id)arg1 ;
-(void)p_setupForAnimationRendering;
-(void)p_animationFlushResources;
-(void)setTextureStage:(unsigned)arg1 ;
-(void)p_setChartChunkStage:(int)arg1 ;
-(void)p_updateChunkCount;
-(id)p_animationLayoutScene;
-(id)p_renderSeparateAnimationLayers:(id)arg1 intersectedBodyCanvasBounds:(const CGRect*)arg2 ;
-(void)setCustomAnimationContentsScale:(id)arg1 ;
-(void)p_addSeparateRenderedLayersToAnimationLayer:(id)arg1 intersectedBodyCanvasBounds:(const CGRect*)arg2 ;
-(void)p_addLegendLayerToAnimationLayer:(id)arg1 ;
-(void)p_updateChunkCountIfNecessary;
-(int)p_effectiveStageFromTextureStage:(int)arg1 isFinalElements:(BOOL)arg2 ;
-(int)p_lastTextureStage;
-(BOOL)isLastChunkStageForFinalElements:(BOOL)arg1 chunkStage:(int)arg2 ;
-(BOOL)isLastAbsoluteChunkStageForFinalElements:(BOOL)arg1 chunkStage:(int)arg2 ;
-(int)p_absoluteStageFromTextureStage:(int)arg1 isFinalElements:(BOOL)arg2 ;
-(void)p_setAnimationLevelOfDetailGeometryForScene:(id)arg1 ;
-(CGPoint)p_scaledIntegralOffsetFromFractionInFrame:(CGPoint*)arg1 ;
-(void)markTextureDirty;
-(CGRect)scaledVisibleCanvasBounds;
-(id)p_renderLegendTextureWithBounds:(const CGRect*)arg1 returningBodyCanvasBounds:(CGRect*)arg2 ;
-(void)p_renderTextureWithBounds:(const CGRect*)arg1 finalTexture:(BOOL)arg2 enumerationBlock:(/*^block*/ id)arg3 ;
-(id)p_generateCachedAnimationTextureForFinalElements:(BOOL)arg1 includesChart:(BOOL)arg2 ;
-(BOOL)p_hasCachedTextureForFinalElements:(BOOL)arg1 ;
-(void)p_calculateOverrideRenderingSamplesForPrintingOrPdfRendering;
-(void)p_checkPresenterDisplayForAnimationSession:(id)arg1 ;
-(BOOL)p_isValidTextureStageForFinalElements:(BOOL)arg1 ;
-(void)p_cacheRenderAnimationTextureForFinalElements:(BOOL)arg1 ;
-(void)p_invalidateSubselectinoKnobsLayers;
-(void)p_updateGLLayerPixelAlignment;
-(id)knobForDynamicStyleChangeKey:(id)arg1 ;
-(void)addChartKnobsToArray:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)p_wedgeExplosionTracker;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)invalidateSubselectionKnobs;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)tswpTextEditingDidEndEditing:(id)arg1 ;
-(void)p_invalidateLayoutLabelsBoundsClass:(Class)arg1 ;
-(void)willAnimateIntoCDE;
-(void)didAnimateFromCDE;
-(void)protected_dynamicStyleChangeWillBegin:(id)arg1 ;
-(void)protected_dynamicStyleChangeDidEnd:(id)arg1 ;
-(void)animationWillBeginForChunkStage:(int)arg1 ;
-(void)animationDidEndForChunkStage:(int)arg1 ;
-(void)setAnimationType:(int)arg1 chunkStage:(int)arg2 buildType:(int)arg3 textureDeliveryStyle:(unsigned)arg4 attributes:(id)arg5 ;
-(id)animationLayerWithFrame:(CGRect)arg1 scale:(float)arg2 colorSpace:(CGColorSpaceRef)arg3 returningDrawingFrame:(CGRect*)arg4 TSDGLLayer:(id*)arg5 ;
-(void)renderAnimationFrame:(float)arg1 drawingFrame:(CGRect)arg2 chunkStage:(int)arg3 ;
-(tvec2<float>)normalizedPointFromTouchPoint:(const tvec2<float>*)arg1 ;
-(void)p_applicationWillResignActive:(id)arg1 ;
-(void)p_documentWillClose:(id)arg1 ;
-(void)p_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)shouldApplyFractionalTranslationInRootForLegendLayer;
-(BOOL)shouldUseLegendLayerForLayerBasedRep;
-(BOOL)directlyManagesLayerContent;
-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(void)willLayoutAndRenderInBackground;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(Class)renderCycleClass;
-(BOOL)canRenderIntoGLLayer;
-(void)renderIntoGLLayerWithGLContext:(id)arg1 ;
-(BOOL)canDrawInBackgroundDuringScroll;
-(BOOL)canDrawInParallel;
-(BOOL)shouldShowSizesInRulers;
-(BOOL)shouldShowDragHUD;
-(void)animationFrameDidEndForGLLayer;
-(BOOL)isLastAbsoluteChunkStageForFinalElements:(BOOL)arg1 ;
-(void)setTextureAnimationInfo:(id)arg1 ;
-(BOOL)p_shouldSkipInitialTextureRequestForFinalElements:(BOOL)arg1 ;
-(id)textureForContext:(id)arg1 ;
-(BOOL)rotationKnobHitByNaturalPoint:(CGPoint)arg1 ;
-(void)dynamicChange3DDepthDidBegin;
-(id)dynamicChange3DDepthDidEndOutInfoGeometryRect:(CGRect*)arg1 ;
-(void)dynamically3DSetNewDepth:(float)arg1 ;
-(id)renderer3D;
-(BOOL)textureForHiding;
-(void)setTextureForHiding:(BOOL)arg1 ;
-(id)animationGLContext;
-(void)setAnimationGLContext:(id)arg1 ;
-(BOOL)isPieChart;
-(CGPoint)effectivePointForDragPoint:(CGPoint)arg1 startingFrom:(CGPoint)arg2 forSeries:(unsigned)arg3 ;
-(float)newExplosionValueForFinalDragPoint:(CGPoint)arg1 startingFrom:(CGPoint)arg2 forSeries:(unsigned)arg3 knob:(id)arg4 ;
-(BOOL)pieWedgeHitByUnscaledPoint:(CGPoint)arg1 seriesIndex:(unsigned)arg2 distanceFromCenter:(CGPoint*)arg3 ;
-(void)explosionsDidUpdateForNewSeriesIndexedExplosions:(id)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(BOOL)isOpaque;
-(Class)layerClass;
-(id).cxx_construct;
-(id)engine;
-(CGRect)clipRect;
-(void)invalidateLayoutCache;
-(int)tilingMode;
@end

