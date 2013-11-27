/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class CALayer, WAKView;

@interface WAKWindow : WAKResponder {

	CALayer* _hostLayer;
	TileCache* _tileCache;
	CGRect _frozenVisibleRect;
	CALayer* _rootLayer;
	CGSize _screenSize;
	CGSize _availableScreenSize;
	float _screenScale;
	CGRect _frame;
	WAKView* _contentView;
	WAKView* _responderView;
	WAKView* _nextResponder;
	BOOL _visible;
	BOOL _useOrientationDependentFontAntialiasing;
	TCMalloc_SpinLock _exposedScrollViewRectLock;
	CGRect _exposedScrollViewRect;

}

@property (assign,nonatomic) BOOL useOrientationDependentFontAntialiasing;              //@synthesize useOrientationDependentFontAntialiasing=_useOrientationDependentFontAntialiasing - In the implementation block
@property (assign,nonatomic) CGImageRef contentReplacementImage; 
+(void)setOrientationProvider:(id)arg1 ;
+(BOOL)hasLandscapeOrientation;
+(id)currentEvent;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(CGRect)frame;
-(id)description;
-(id)firstResponder;
-(void)sendEvent:(id)arg1 ;
-(BOOL)isKeyWindow;
-(void)makeKeyWindow;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)recursiveDescription;
-(void)setVisible:(BOOL)arg1 ;
-(CGRect)visibleRect;
-(void)layoutTilesNow;
-(void)willRotate;
-(void)didRotate;
-(BOOL)isVisible;
-(void)close;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setCurrentTileScale:(float)arg1 ;
-(void)setZoomedOutTileScale:(float)arg1 ;
-(void)removeAllNonVisibleTiles;
-(void)setTilesOpaque:(BOOL)arg1 ;
-(void)removeAllTiles;
-(void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1 ;
-(void)setTilingDirection:(int)arg1 ;
-(void)setExposedScrollViewRect:(CGRect)arg1 ;
-(void)displayRect:(CGRect)arg1 ;
-(void)removeForegroundTiles;
-(BOOL)makeFirstResponder:(id)arg1 ;
-(void)setAcceleratedDrawingEnabled:(BOOL)arg1 ;
-(CGRect)exposedScrollViewRect;
-(void)sendEventSynchronously:(id)arg1 ;
-(void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2 ;
-(id).cxx_construct;
-(void)setRootLayer:(id)arg1 ;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)setAvailableScreenSize:(CGSize)arg1 ;
-(float)screenScale;
-(void)setScreenScale:(float)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutTilesNowForRect:(CGRect)arg1 ;
-(void)setContentReplacementImage:(CGImageRef)arg1 ;
-(void)layoutTiles;
-(id)rootLayer;
-(void)setTilingMode:(int)arg1 ;
-(BOOL)tilesOpaque;
-(void)setKeepsZoomedOutTiles:(BOOL)arg1 ;
-(BOOL)keepsZoomedOutTiles;
-(void)dumpTiles;
-(float)zoomedOutTileScale;
-(CGSize)screenSize;
-(CGSize)availableScreenSize;
-(TileCache*)tileCache;
-(CGPoint)convertBaseToScreen:(CGPoint)arg1 ;
-(CGPoint)convertScreenToBase:(CGPoint)arg1 ;
-(id)hostLayer;
-(CGRect)extendedVisibleRect;
-(BOOL)useOrientationDependentFontAntialiasing;
-(CGRect)_visibleRectRespectingMasksToBounds:(BOOL)arg1 ;
-(void)freezeVisibleRect;
-(void)unfreezeVisibleRect;
-(id)_newFirstResponderAfterResigning;
-(int)keyViewSelectionDirection;
-(void)setFrame:(CGRect)arg1 display:(BOOL)arg2 ;
-(int)tilingMode;
-(int)tilingDirection;
-(float)currentTileScale;
-(BOOL)hasPendingDraw;
-(CGImageRef)contentReplacementImage;
-(void)setTileBordersVisible:(BOOL)arg1 ;
-(void)setTilePaintCountsVisible:(BOOL)arg1 ;
@end

