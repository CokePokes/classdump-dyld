/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartColumnSceneObject.h>

@interface TSCH3DChartStackedColumnSceneObject : TSCH3DChartColumnSceneObject
+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
+(BOOL)growAnimationSequenceInOrderForChartDeliveryStyle:(unsigned)arg1 ;
+(id)chartSeriesType;
-(BOOL)growNeedsPerElementAlphaBlendingForDeliveryStyle:(unsigned)arg1 ;
-(BOOL)shouldUpdateBlendOpaqueForRotationAnimationElementBlendAnimationClip;
-(BOOL)blendOpaqueForRotationAnimationElementBlendAnimationClip;
-(BOOL)growAnimationSequenceInOrderForChartDeliveryStyle:(unsigned)arg1 ;
-(void)sortElements:(vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> >*)arg1 pipeline:(id)arg2 ;
@end

