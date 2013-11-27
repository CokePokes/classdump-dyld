/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLRUCacheDelegate.h>
#import <VectorKit/VKTileSourceClient.h>

@protocol VKTileProviderClient, VKMapLayer;
@class , VKTileSelection, VKTileKeyList, VKTimer, NSMutableSet, NSArray, VKTileCache, VKTileSource, VKStylesheet, VKMapRasterizer, GEOTileKeyList, _VKTileProviderTimerTarget, NSSet;

@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient> {

	<VKTileProviderClient>* _client;
	int _mode;
	VKTileSelection* _tileSelection;
	VKTileKeyList* _keysInView;
	VKTileKeyList* _neighborKeys;
	VKTileKeyList* _prefetchKeys;
	VKTimer* _evaluationTimer;
	VKTimer* _prefetchTimer;
	NSMutableSet* _tilesToRender;
	NSArray* _holes;
	NSMutableSet* _lostTiles;
	NSMutableSet* _neighborTiles;
	unsigned _neighborMode;
	BOOL _fallbackEnabled;
	BOOL _prefetchEnabled;
	VKTileCache* _tilePool;
	VKTileSource* _tilesSources[29];
	VKTileSource* _optionalTileSources[29];
	VKStylesheet* _stylesheet;
	float _loadingProgress;
	BOOL _hasFailedTile;
	BOOL _finishedLoading;
	VKCameraState _lastCameraState;
	CGSize _lastCanvasSize;
	BOOL _tilesChanged;
	VKMapRasterizer* _rasterizer;
	<VKMapLayer>* _debugLayer;
	GEOTileKeyList* _debugLayerKeys;
	int _tileReserveLimit;
	int _tileMaximumLimit;
	BOOL _useSmallTileCache;
	float _lastMidDisplayZoomLevel;
	SCD_Struct_VK61 _sortPoint;
	float _contentScale;
	vector<vk::TileExclusionArea, std::__1::allocator<vk::TileExclusionArea> >* _exclusionAreas;
	BOOL _exclusionAreaVisible;
	_VKTileProviderTimerTarget* _evaluationTarget;
	_VKTileProviderTimerTarget* _prefetchTarget;

}

@property (assign,nonatomic) int mode;                                                     //@synthesize mode=_mode - In the implementation block
@property (assign,getter=isFallbackEnabled,nonatomic) BOOL fallbackEnabled;                //@synthesize fallbackEnabled=_fallbackEnabled - In the implementation block
@property (assign,nonatomic) unsigned neighborMode;                                        //@synthesize neighborMode=_neighborMode - In the implementation block
@property (assign,getter=isPrefetchEnabled,nonatomic) BOOL prefetchEnabled;                //@synthesize prefetchEnabled=_prefetchEnabled - In the implementation block
@property (assign,nonatomic) BOOL useSmallTileCache;                                       //@synthesize useSmallTileCache=_useSmallTileCache - In the implementation block
@property (assign,nonatomic) <VKTileProviderClient> * client;                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) VKStylesheet * stylesheet;                                    //@synthesize stylesheet=_stylesheet - In the implementation block
@property (assign,nonatomic) float contentScale;                                           //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) VKTileKeyList * keysInView;                                 //@synthesize keysInView=_keysInView - In the implementation block
@property (nonatomic,readonly) VKTileKeyList * neighborKeys;                               //@synthesize neighborKeys=_neighborKeys - In the implementation block
@property (nonatomic,readonly) NSSet * tilesToRender;                                      //@synthesize tilesToRender=_tilesToRender - In the implementation block
@property (nonatomic,readonly) NSSet * neighborTiles;                                      //@synthesize neighborTiles=_neighborTiles - In the implementation block
@property (nonatomic,readonly) float loadingProgress;                                      //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (getter=isFinishedLoading,nonatomic,readonly) BOOL finishedLoading;              //@synthesize finishedLoading=_finishedLoading - In the implementation block
@property (nonatomic,readonly) BOOL hasFailedTile;                                         //@synthesize hasFailedTile=_hasFailedTile - In the implementation block
@property (nonatomic,readonly) NSArray * visibleTileSets; 
@property (nonatomic,retain) <VKMapLayer> * debugLayer;                                    //@synthesize debugLayer=_debugLayer - In the implementation block
@property (nonatomic,readonly) GEOTileKeyList * debugLayerKeys;                            //@synthesize debugLayerKeys=_debugLayerKeys - In the implementation block
@property (assign,nonatomic) double lodBias; 
-(void)dealloc;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)timerFired:(id)arg1 ;
-(id).cxx_construct;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(id)visibleTileSets;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(void)clearScene;
-(id)detailedDescription;
-(unsigned)neighborMode;
-(void)setNeighborMode:(unsigned)arg1 ;
-(void)flushCaches;
-(BOOL)isPrefetchEnabled;
-(void)setPrefetchEnabled:(BOOL)arg1 ;
-(void)setTileSource:(id)arg1 forMapLayer:(unsigned)arg2 optional:(BOOL)arg3 ;
-(void)removeTileSourceForMapLayer:(unsigned)arg1 ;
-(void)updateWithContext:(id)arg1 ;
-(double)lodBias;
-(void)setLodBias:(double)arg1 ;
-(void)setFallbackEnabled:(BOOL)arg1 ;
-(void)setUseSmallTileCache:(BOOL)arg1 ;
-(void)requireRasterization:(id)arg1 ;
-(void)setClient:(id)arg1 ;
-(id)tilesToRender;
-(void)foreachActiveLayer:(/*^block*/ id)arg1 ;
-(id)neighborTiles;
-(BOOL)isFinishedLoading;
-(BOOL)hasFailedTile;
-(float)loadingProgress;
-(void)quiesce;
-(BOOL)tileExclusionAreaVisible;
-(id)keysInView;
-(id)neighborKeys;
-(id)debugLayerKeys;
-(void)setTileExclusionAreas:(const vector<vk::TileExclusionArea, std::__1::allocator<vk::TileExclusionArea> >*)arg1 ;
-(id)sourceForLayer:(id)arg1 ;
-(void)setDebugLayer:(id)arg1 ;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const VKCacheKey*)arg3 ;
-(void)configureTileSelection;
-(void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned)arg2 ;
-(BOOL)canRenderTile:(id)arg1 ;
-(void)describeTilesFromList:(id)arg1 output:(id)arg2 ;
-(void)foreachOptionalLayer:(/*^block*/ id)arg1 ;
-(void)prepareTileForRendering:(id)arg1 ;
-(BOOL)hasRequiredTileData:(id)arg1 ;
-(void)releaseTileForRendering:(id)arg1 ;
-(BOOL)tileMatters:(id)arg1 ;
-(BOOL)inFailedState:(id)arg1 ;
-(void)releaseNeighborTileForRendering:(id)arg1 ;
-(void)tileSourcesDidChange;
-(void)invalidateTilesFromTileSource:(id)arg1 ;
-(void)_resizeCache;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(void)_fetchAvailableTiles:(BOOL)arg1 ;
-(void)_prefetchTiles;
-(void)releaseFallbackTileForRendering:(id)arg1 ;
-(BOOL)releaseParentFallbackTileForTile:(id)arg1 ;
-(void)releaseChildrenFallbackTilesForTile:(id)arg1 context:(id)arg2 ;
-(BOOL)evaluateSelectedTileForRendering:(id)arg1 ;
-(BOOL)evaluateNeighborTileForRendering:(id)arg1 ;
-(void)_ensureTimers;
-(void)retireRenderTiles:(id)arg1 ;
-(void)_fillHoles:(id)arg1 context:(id)arg2 ;
-(void)retireNeighborTiles:(id)arg1 ;
-(id)selectTiles:(int*)arg1 needRasterization:(BOOL*)arg2 ;
-(void)_pushTimers;
-(unsigned)layerForSource:(id)arg1 ;
-(void)changeTileForKey:(const VKTileKey*)arg1 toState:(unsigned)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned)arg5 ;
-(void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned)arg3 ;
-(BOOL)tileSourceMayUseNetwork:(id)arg1 ;
-(void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const VKTileKey*)arg3 ;
-(void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const VKTileKey*)arg2 ;
-(void)tileSource:(id)arg1 didFailToLoadTileForKey:(const VKTileKey*)arg2 error:(id)arg3 ;
-(void)tileSource:(id)arg1 invalidateKey:(const VKTileKey*)arg2 ;
-(void)tileSource:(id)arg1 invalidateKeys:(id)arg2 ;
-(BOOL)tileSource:(id)arg1 keyIsNeeded:(const VKTileKey*)arg2 ;
-(void)tileSource:(id)arg1 dirtyTilesWithinRect:(const SCD_Struct_VK47*)arg2 level:(int)arg3 ;
-(void)dirtyTilesFromTileSource:(id)arg1 ;
-(void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const VKTileKey*)arg3 ;
-(BOOL)isFallbackEnabled;
-(BOOL)useSmallTileCache;
-(id)debugLayer;
-(id)client;
-(void).cxx_destruct;
-(id)initWithClient:(id)arg1 ;
@end

