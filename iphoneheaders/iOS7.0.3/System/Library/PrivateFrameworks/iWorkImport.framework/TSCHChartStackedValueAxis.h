/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartValueAxis.h>

@interface TSCHChartStackedValueAxis : TSCHChartValueAxis
-(void)updateModelMinMaxInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForSeries:(id)arg1 index:(unsigned)arg2 min:(double)arg3 max:(double)arg4 ;
-(double*)unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange)arg2 min:(double)arg3 max:(double)arg4 ;
-(id)p_orthogonalAxisForSeries:(id)arg1 ;
@end

