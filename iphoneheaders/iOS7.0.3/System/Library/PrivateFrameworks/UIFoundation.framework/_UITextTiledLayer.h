/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface _UITextTiledLayer : CALayer {

	NSMutableArray* _reusableTiles;
	CGRect _gridBounds;
	struct {
		unsigned disableTiling : 1;
		unsigned ditchAllTiles : 1;
		unsigned suspendLayout : 4;
	}  _tcTiledLayerFlags;
	CGSize _tileSize;

}

@property (assign,nonatomic) BOOL usesTiledLayers; 
@property (assign,nonatomic) CGSize tileSize;                   //@synthesize tileSize=_tileSize - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(void)setUsesTiledLayers:(BOOL)arg1 ;
-(BOOL)usesTiledLayers;
-(void)drawDirtyLayer:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)_buildTilesForRect:(CGRect)arg1 ;
-(void)_cullAndAddLayers:(CGRect)arg1 ;
-(void)_hideAndShowTiles:(CGRect)arg1 visibleBounds:(CGRect)arg2 ;
-(void)_validateTiles;
-(void)suspendTiling;
-(void)resumeTiling;
-(void)layoutSublayers;
@end

