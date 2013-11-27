/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLMesh.h>

@class VGLTexture;

@interface VGLSingleTexturedAndLitMesh : VGLMesh {

	VGLTexture* _texture;

}

@property (nonatomic,retain) VGLTexture * texture;              //@synthesize texture=_texture - In the implementation block
-(void)dealloc;
-(id)init;
-(id)texture;
-(void)drawTrianglesWithContext:(id)arg1 ;
-(void)setTexture:(id)arg1 ;
-(id)initWithVertices:(const SCD_Struct_VG164*)arg1 vertexCount:(int)arg2 indices:(const unsigned short*)arg3 indexCount:(int)arg4 ;
-(id)initFromAsciiVertexFile:(id)arg1 indexFile:(id)arg2 ;
@end

