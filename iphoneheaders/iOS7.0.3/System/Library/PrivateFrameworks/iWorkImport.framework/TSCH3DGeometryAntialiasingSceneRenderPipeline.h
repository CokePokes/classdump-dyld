/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>
#import <iWorkImport/TSCH3DMultipassRenderPipeline.h>

@class TSCH3DScene, TSCH3DGLFramebuffer, TSCH3DChartElementEdgeOverdrawSceneObject;

@interface TSCH3DGeometryAntialiasingSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline> {

	TSCH3DScene* mOverdraw;
	TSCH3DGLFramebuffer* mRenderingFBO;
	TSCH3DChartElementEdgeOverdrawSceneObject* mGeometry;
	int mPass;

}

@property (nonatomic,retain) TSCH3DScene * overdraw; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * renderingFBO; 
-(void)setFramebuffer:(id)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(id)renderingFBOResource;
-(void)setScene:(id)arg1 ;
-(void)resetMultipassRendering;
-(BOOL)multipassRenderingIsDone;
-(void)skipLowQualityPass;
-(BOOL)updatesTargetFramebuffer;
-(void)setOverdraw:(id)arg1 ;
-(id)overdraw;
-(void)setRenderingFBO:(id)arg1 ;
-(id)renderingFBO;
-(BOOL)render;
-(void)dealloc;
-(void)releaseResources;
@end

