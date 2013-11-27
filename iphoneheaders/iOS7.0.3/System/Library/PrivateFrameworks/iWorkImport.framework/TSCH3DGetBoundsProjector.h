/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DCamera;

@interface TSCH3DGetBoundsProjector : NSObject {

	tmat4x4<float> mModelView;
	tmat4x4<float> mConstantDepthModelView;
	tmat4x4<float> mProjection;
	tmat4x4<float> mMVP;
	TSCH3DCamera* mCamera;
	ChartScenePropertyAccessor* mAccessor;
	BOOL mUseAggressiveBackProjection;

}
-(tvec3<float>)backProjectModelViewPoint:(const tvec3<float>*)arg1 ;
-(void)setCamera:(id)arg1 accessor:(ChartScenePropertyAccessor*)arg2 ;
-(void)resetTransformsForLayoutBounds;
-(void)resetTransformsForRenderBounds;
-(box<glm::detail::tvec3<float> >)projectBounds:(const box<glm::detail::tvec3<float> >*)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)reset;
@end

