/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class NSData, VKStylesheet, VGLTexture;

@interface VKRasterTile : VKTile {

	NSData* _data;
	VKStylesheet* _stylesheet;
	VGLTexture* _texture;
	int _genericTileType;
	BOOL _hasGenericTileType;

}

@property (nonatomic,retain) VGLTexture * texture;                   //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) BOOL hasGenericTileType;              //@synthesize hasGenericTileType=_hasGenericTileType - In the implementation block
@property (nonatomic,readonly) int genericTileType;                  //@synthesize genericTileType=_genericTileType - In the implementation block
-(void)dealloc;
-(id)texture;
-(BOOL)hasGenericTileType;
-(int)genericTileType;
-(id)initWithKey:(const VKTileKey*)arg1 imageData:(id)arg2 stylesheet:(id)arg3 ;
-(id)initWithKey:(const VKTileKey*)arg1 imageData:(id)arg2 stylesheet:(id)arg3 genericTileType:(int)arg4 ;
-(void)buildTexture;
-(void)setTexture:(id)arg1 ;
@end

