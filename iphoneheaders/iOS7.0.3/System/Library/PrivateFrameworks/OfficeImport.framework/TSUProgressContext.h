/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject {

	TSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;

}
-(void)dealloc;
-(id)init;
-(void)setProgress:(double)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)reset;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(void)endStage;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
-(id)currentStage;
-(void)setPercentageProgressFromCPProgressContext:(double)arg1 ;
-(double)overallProgress;
-(id)addProgressObserverBlock:(/*^block*/ id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
@end

