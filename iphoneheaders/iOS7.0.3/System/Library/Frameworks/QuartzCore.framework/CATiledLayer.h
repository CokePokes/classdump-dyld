/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CATiledLayer : CALayer

@property (assign) CGColorRef fillColor; 
@property (assign) float maximumTileScale; 
@property (getter=isDrawingEnabled) BOOL drawingEnabled; 
@property (assign) unsigned long levelsOfDetail; 
@property (assign) unsigned long levelsOfDetailBias; 
@property (assign) CGSize tileSize; 
+(id)displayDisableFadeOptions;
+(id)displayUncollectableOptions;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(double)fadeDuration;
+(BOOL)shouldDrawOnMainThread;
+(unsigned)prefetchedTiles;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_CA26)arg1 levelOfDetail:(int)arg2 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_CA26)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)displayInMapRect:(SCD_Struct_CA26)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)_canDisplayConcurrently;
-(BOOL)isDrawingEnabled;
-(unsigned long)levelsOfDetail;
-(unsigned long)levelsOfDetailBias;
-(float)maximumTileScale;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(BOOL)canDrawRect:(CGRect)arg1 levelOfDetail:(int)arg2 ;
-(void)setMaximumTileScale:(float)arg1 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)invalidateContents;
-(void)setTileSize:(CGSize)arg1 ;
-(void)_dealloc;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)_display;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(CGSize)tileSize;
-(void)setLevelsOfDetail:(unsigned long)arg1 ;
-(void)setLevelsOfDetailBias:(unsigned long)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
-(void)displayInRect:(CGRect)arg1 levelOfDetail:(int)arg2 options:(id)arg3 ;
@end

