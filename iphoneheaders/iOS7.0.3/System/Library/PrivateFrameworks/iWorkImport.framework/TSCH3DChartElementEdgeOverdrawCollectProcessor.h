/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartElementEdgeOverdraw, TSCH3DResource, TSCH3DShaderEffectsStates, TSCH3DShaderEffects;

@interface TSCH3DChartElementEdgeOverdrawCollectProcessor : TSCH3DRetargetRenderProcessor <TSCHUnretainedParent> {

	TSCH3DChartElementEdgeOverdraw* mParent;
	TSCH3DResource* mVertices;
	TSCH3DResource* mNormals;
	TSCH3DResource* mDiffuseTexcoords;
	TSCH3DShaderEffectsStates* mEffectsStates;
	TSCH3DShaderEffects* mEffects;
	tmat4x4<float> mCurrentModelView;

}

@property (assign,nonatomic) TSCH3DChartElementEdgeOverdraw * parent; 
@property (nonatomic,retain) TSCH3DResource * vertices; 
@property (nonatomic,retain) TSCH3DResource * normals; 
@property (nonatomic,retain) TSCH3DResource * diffuseTexcoords; 
@property (assign,nonatomic) tmat4x4<float> currentModelView; 
-(void)clearParent;
-(int)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecs*)arg3 ;
-(int)texture:(id)arg1 attributes:(const TextureAttributes*)arg2 ;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(void)setNormals:(id)arg1 ;
-(void)setDiffuseTexcoords:(id)arg1 ;
-(void)beginLineRendering;
-(void)setupEdgeOverdrawRenderState;
-(id)p_lineRenderSetting;
-(id)normals;
-(id)diffuseTexcoords;
-(tmat4x4<float>)currentModelView;
-(void)setCurrentModelView:(tmat4x4<float>)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)setVertices:(id)arg1 ;
-(id)vertices;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

