/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCHChartValueAxis.h>

@interface TSCHChartLogAxis : TSCHChartValueAxis
-(double)interceptForAxis:(id)arg1 ;
-(double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3 ;
-(id)userMin;
-(id)userMax;
-(double)validateUserMinForDouble:(double)arg1 ;
-(double)validateUserMaxForDouble:(double)arg1 ;
-(id)p_orthogonalAxis;
@end

