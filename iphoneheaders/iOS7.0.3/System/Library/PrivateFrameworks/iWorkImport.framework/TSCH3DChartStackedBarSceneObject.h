/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
+(BOOL)isHorizontalChart;
+(BOOL)isStacked;
+(id)chartSeriesType;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS339)arg2 ;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 dataSpaceValue:(float)arg2 ;
@end

