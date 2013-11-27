/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAnimationTimeSlice.h>

@class TSCH3DChartRep, TSCH3DAnimationTimeSlice;

@interface TSCH3DChartElementAnimationTimeSlice : TSCH3DAnimationTimeSlice {

	TSCH3DChartRep* mRep;
	TSCH3DAnimationTimeSlice* mDelivery;
	ChartRepRenderIndexSet mBuilt;
	ChartRepRenderIndexSet mActive;
	BOOL mAllowStateMismatch;

}

@property (assign,nonatomic) BOOL allowStateMismatch; 
+(id)timeSliceWithRep:(id)arg1 ;
-(void)clearParent;
-(box<glm::detail::tvec1<float> >)rangeForIndex:(const tvec2<int>*)arg1 ;
-(id)initWithRep:(id)arg1 ;
-(BOOL)allowStateMismatch;
-(void)setAllowStateMismatch:(BOOL)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(void)reset;
-(void).cxx_destruct;
@end

