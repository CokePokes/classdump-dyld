/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VGLGPU, NSMutableArray, VGLSharegroup, VGLResourceFactory, VGLFramebuffer, VGLProgram, VGLMesh, VGLTexture, VGLVertexArrayObject, NSMapTable, VGLProgramFactory, NSString, VGLRenderState, EAGLContext;

@interface VGLContext : NSObject {

	VGLGPU* _gpu;
	NSMutableArray* _renderStateStack;
	VGLSharegroup* _sharegroup;
	VGLResourceFactory* _resourceFactory;
	VGLFramebuffer* _framebuffer;
	CGSize _sizeInPixels;
	SCD_Union_VG35 _pixelSpaceMatrix;
	BOOL _depthTest;
	BOOL _stencilTest;
	BOOL _cullFace;
	BOOL _blend;
	BOOL _scissorTest;
	VGLColor _scissorRect;
	int _blendMode;
	int _depthMode;
	float _lineWidth;
	float _clearDepth;
	VGLColor _clearColor;
	unsigned char _clearStencil;
	VGLProgram* _program;
	VGLColor _color;
	BOOL _depthMask;
	BOOL _colorMask;
	unsigned char _stencilMask;
	VGLMesh* _meshForUnitSquare;
	VGLMesh* _meshForUnitTexture;
	VGLMesh* _meshForUnitTextureInverted;
	unsigned _activeTexture;
	VGLTexture* _texture[2][8];
	VGLVertexArrayObject* _VAO;
	unsigned _sFactor;
	unsigned _dFactor;
	unsigned _sAlphaFactor;
	unsigned _dAlphaFactor;
	int _currentFrameNumber;
	float _averageFPS;
	float _fpsStartTime;
	float _framerateSum;
	BOOL _drawFramerateGraph;
	VGLColor _frameRateGraphColor;
	float _framerateGraphSamples[30];
	NSMapTable* _programCache;
	VGLProgramFactory* _programFactory;
	NSString* _programFactoryCohort;
	BOOL _enablePolygonFillOffset;
	CGPoint _polygonOffset;
	VGLRenderState* _simpleRenderState;
	EAGLContext* _eaglContext;
	VGLColor _framerateGraphColor;

}

@property (nonatomic,readonly) VGLGPU * gpu;                                      //@synthesize gpu=_gpu - In the implementation block
@property (nonatomic,readonly) VGLSharegroup * sharegroup;                        //@synthesize sharegroup=_sharegroup - In the implementation block
@property (nonatomic,readonly) EAGLContext * eaglContext;                         //@synthesize eaglContext=_eaglContext - In the implementation block
@property (nonatomic,retain) VGLFramebuffer * targetFramebuffer; 
@property (assign,nonatomic) BOOL drawFramerateGraph;                             //@synthesize drawFramerateGraph=_drawFramerateGraph - In the implementation block
@property (assign,nonatomic) VGLColor framerateGraphColor;                        //@synthesize framerateGraphColor=_framerateGraphColor - In the implementation block
@property (nonatomic,readonly) ? pixelSpaceMatrix;                                //@synthesize pixelSpaceMatrix=_pixelSpaceMatrix - In the implementation block
@property (assign,nonatomic) BOOL depthTest;                                      //@synthesize depthTest=_depthTest - In the implementation block
@property (assign,nonatomic) BOOL stencilTest;                                    //@synthesize stencilTest=_stencilTest - In the implementation block
@property (assign,nonatomic) BOOL cullFace;                                       //@synthesize cullFace=_cullFace - In the implementation block
@property (assign,nonatomic) int blendMode;                                       //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) int depthMode;                                       //@synthesize depthMode=_depthMode - In the implementation block
@property (assign,nonatomic) BOOL scissorTest;                                    //@synthesize scissorTest=_scissorTest - In the implementation block
@property (assign,nonatomic) VGLColor scissorRect;                                //@synthesize scissorRect=_scissorRect - In the implementation block
@property (assign,nonatomic) BOOL enablePolygonFillOffset;                        //@synthesize enablePolygonFillOffset=_enablePolygonFillOffset - In the implementation block
@property (assign,nonatomic) CGPoint polygonOffset;                               //@synthesize polygonOffset=_polygonOffset - In the implementation block
@property (assign,nonatomic) float lineWidth;                                     //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) float clearDepth;                                    //@synthesize clearDepth=_clearDepth - In the implementation block
@property (assign,nonatomic) VGLColor clearColor;                                 //@synthesize clearColor=_clearColor - In the implementation block
@property (assign,nonatomic) unsigned char clearStencil;                          //@synthesize clearStencil=_clearStencil - In the implementation block
@property (assign,nonatomic) BOOL depthMask;                                      //@synthesize depthMask=_depthMask - In the implementation block
@property (assign,nonatomic) BOOL colorMask;                                      //@synthesize colorMask=_colorMask - In the implementation block
@property (assign,nonatomic) unsigned char stencilMask;                           //@synthesize stencilMask=_stencilMask - In the implementation block
@property (nonatomic,retain) VGLTexture * texture2D0; 
@property (nonatomic,retain) VGLTexture * texture2D1; 
@property (nonatomic,retain) VGLTexture * texture2D2; 
@property (nonatomic,retain) VGLTexture * texture2D3; 
@property (nonatomic,retain) VGLTexture * texture2D4; 
@property (nonatomic,retain) VGLTexture * texture2D5; 
@property (nonatomic,retain) VGLTexture * texture2D6; 
@property (nonatomic,retain) VGLTexture * texture2D7; 
@property (nonatomic,retain) VGLProgram * program;                                //@synthesize program=_program - In the implementation block
@property (nonatomic,retain) VGLVertexArrayObject * VAO;                          //@synthesize VAO=_VAO - In the implementation block
@property (nonatomic,readonly) VGLMesh * meshForUnitTexture; 
@property (nonatomic,readonly) VGLMesh * meshForUnitTextureInverted; 
@property (assign,nonatomic) unsigned activeTexture;                              //@synthesize activeTexture=_activeTexture - In the implementation block
-(id)sharegroup;
-(void)dealloc;
-(VGLColor)clearColor;
-(id)description;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)perform:(/*^block*/ id)arg1 ;
-(void)endFrame;
-(void)present;
-(id).cxx_construct;
-(void)reset;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(id)targetFramebuffer;
-(void)startFrame;
-(void)setTargetFramebuffer:(id)arg1 ;
-(void)updatePixelSpaceMatrix;
-(id)programWithClass:(Class)arg1 ;
-(id)newTextureResource;
-(void)bindSimpleRenderState;
-(void)clearBufferColor:(BOOL)arg1 stencil:(BOOL)arg2 depth:(BOOL)arg3 ;
-(void)drawLineLoopDim:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)setClearStencil:(unsigned char)arg1 ;
-(void)setClearDepth:(float)arg1 ;
-(void)setClearColor:(VGLColor)arg1 ;
-(void)setStencilTest:(BOOL)arg1 ;
-(void)setDepthTest:(BOOL)arg1 ;
-(void)setProgram:(id)arg1 ;
-(id)meshForUnitTexture;
-(void)setColorMaskRed:(BOOL)arg1 green:(BOOL)arg2 blue:(BOOL)arg3 alpha:(BOOL)arg4 ;
-(void)setStencilOpFail:(int)arg1 zFail:(int)arg2 zPass:(int)arg3 ;
-(void)setStencilFunc:(int)arg1 ref:(unsigned char)arg2 mask:(unsigned char)arg3 ;
-(BOOL)_push:(void*)arg1 ;
-(void)_pop:(void*)arg1 ;
-(float)averageFPS;
-(void)setDrawFramerateGraph:(BOOL)arg1 ;
-(void)setFramerateGraphColor:(VGLColor)arg1 ;
-(void)bindRenderState:(id)arg1 ;
-(void)setTexture2D0:(id)arg1 ;
-(void)setTexture2D1:(id)arg1 ;
-(void)setVAO:(id)arg1 ;
-(void)drawCrossCX:(float)arg1 cy:(float)arg2 sz:(float)arg3 ;
-(void)drawRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 ;
-(void)fillRectX:(float)arg1 y:(float)arg2 w:(float)arg3 h:(float)arg4 ;
-(void)drawUnitSquare;
-(void)drawUnitSquareMesh;
-(void)setDepthMask:(BOOL)arg1 ;
-(void)pushRenderState;
-(void)popRenderState;
-(void)drawLineStripDim:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)setTexture2D2:(id)arg1 ;
-(id)program;
-(BOOL)stencilTest;
-(void)setCullFace:(BOOL)arg1 ;
-(BOOL)depthTest;
-(int)depthMode;
-(BOOL)depthMask;
-(BOOL)cullFace;
-(BOOL)enablePolygonFillOffset;
-(CGPoint)polygonOffset;
-(BOOL)scissorTest;
-(void)setDepthMode:(int)arg1 ;
-(void)setEnablePolygonFillOffset:(BOOL)arg1 ;
-(void)setPolygonOffset:(CGPoint)arg1 ;
-(void)setScissorTest:(BOOL)arg1 ;
-(unsigned char)stencilMask;
-(void)setStencilMask:(unsigned char)arg1 ;
-(void)setProgramFactoryCohort:(id)arg1 ;
-(void)_forceBlendMode:(int)arg1 ;
-(id)renderState;
-(void)_blendFuncWithSFactor:(unsigned)arg1 dFactor:(unsigned)arg2 sAlphaFactor:(unsigned)arg3 dAlphaFactor:(unsigned)arg4 ;
-(void)setActiveTexture:(unsigned)arg1 ;
-(void)_setTexture:(id)arg1 target:(int)arg2 unit:(int)arg3 ;
-(void)updatePixelSpaceMatrixWithSize:(CGSize)arg1 ;
-(void)_drawArrayMode:(unsigned)arg1 dim:(int)arg2 nv:(int)arg3 pv:(float*)arg4 ;
-(void)_drawArrayMode:(unsigned)arg1 dim:(int)arg2 nv:(int)arg3 pv:(float*)arg4 pt:(float*)arg5 ;
-(void)drawLineX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4 ;
-(void)drawLinesDim:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)_drawCircleWithMode:(unsigned)arg1 X:(float)arg2 Y:(float)arg3 radius:(float)arg4 ;
-(void)drawRectangle:(VGLColor)arg1 ;
-(void)drawTriangleFan:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)drawFramerateGraphMethod;
-(/*function pointer*/ void*)pixelSpaceMatrix;
-(id)initWithGPU:(id)arg1 sharegroup:(id)arg2 ;
-(BOOL)renderbufferStorage:(unsigned)arg1 fromCanvas:(id)arg2 ;
-(void)setColorMask:(BOOL)arg1 ;
-(void)resetAlphaChannel:(unsigned char)arg1 ;
-(void)setTexture2D3:(id)arg1 ;
-(void)setTexture2D4:(id)arg1 ;
-(void)setTexture2D5:(id)arg1 ;
-(void)setTexture2D6:(id)arg1 ;
-(void)setTexture2D7:(id)arg1 ;
-(id)texture2D0;
-(id)texture2D1;
-(id)texture2D2;
-(id)texture2D3;
-(id)texture2D4;
-(id)texture2D5;
-(id)texture2D6;
-(id)texture2D7;
-(void)setScissorRect:(VGLColor)arg1 ;
-(void)beginCumulativeStencil;
-(void)captureStencilExclusion;
-(void)captureStencilInclusion;
-(void)stencilToExclusion;
-(void)stencilToInclusion;
-(void)doneStenciling;
-(void)drawAsteriskCX:(float)arg1 cy:(float)arg2 sz:(float)arg3 ;
-(void)drawPointsDim:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)drawSegment3DP0:(SCD_Struct_VG29)arg1 p1:(SCD_Struct_VG29)arg2 ;
-(void)drawTriangleStrip:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)drawTriangles:(int)arg1 nv:(int)arg2 pv:(float*)arg3 ;
-(void)drawUnitCircle;
-(void)drawCircleX:(float)arg1 Y:(float)arg2 radius:(float)arg3 ;
-(void)fillUnitCircle;
-(void)fillCircleX:(float)arg1 Y:(float)arg2 radius:(float)arg3 ;
-(void)drawUnit;
-(void)fillRectangle:(VGLColor)arg1 ;
-(void)drawRectAtZ:(float)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5 ;
-(void)fillRectAtZ:(float)arg1 x:(float)arg2 y:(float)arg3 w:(float)arg4 h:(float)arg5 ;
-(void)drawTexture:(CGRect)arg1 ;
-(id)meshForUnitTextureInverted;
-(BOOL)checkForError;
-(void)dumpCounts;
-(BOOL)isCurrentContext;
-(id)newOcclusionResource:(int)arg1 ;
-(id)newVAO;
-(id)newBuffer;
-(id)newFramebuffer;
-(id)newRenderbuffer;
-(id)programFactoryCohort;
-(id)gpu;
-(id)eaglContext;
-(BOOL)drawFramerateGraph;
-(VGLColor)framerateGraphColor;
-(VGLColor)scissorRect;
-(float)clearDepth;
-(unsigned char)clearStencil;
-(unsigned)activeTexture;
-(BOOL)colorMask;
-(id)VAO;
@end

