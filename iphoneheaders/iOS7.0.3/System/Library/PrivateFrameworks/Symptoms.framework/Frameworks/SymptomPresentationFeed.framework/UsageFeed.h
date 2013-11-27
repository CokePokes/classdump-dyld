/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SymptomPresentationFeed/ProcessNetStatsClientDelegate.h>

@class AnalyticsWorkspace, UsageAnalytics, NSMutableArray, ProcessNetStatsClient, NSArray;

@interface UsageFeed : NSObject <ProcessNetStatsClientDelegate> {

	AnalyticsWorkspace* workspace;
	UsageAnalytics* handleAnalytics;
	NSMutableArray* processBaseline;
	ProcessNetStatsClient* procClient;
	id _delegate;
	NSArray* _processFeedData;

}

@property (assign,nonatomic) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * processFeedData;              //@synthesize processFeedData=_processFeedData - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithWorkspace:(id)arg1 ;
-(bool)usageToDateWithOptionsFor:(id)arg1 nameKind:(id)arg2 options:(id)arg3 reply:(/*^block*/ id)arg4 ;
-(bool)setUsageOption:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)newFeedProcessData:(id)arg1 ;
-(bool)_addValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3 ;
-(void)_activateFeederKey:(id)arg1 pollInterval:(float)arg2 ;
-(void)prepProcessDataFractionWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 from:(id)arg3 until:(id)arg4 pollInterval:(float)arg5 ;
-(void)_computeBaselineAsync:(unsigned)arg1 andMetadata:(unsigned)arg2 from:(id)arg3 until:(id)arg4 pollInterval:(float)arg5 ;
-(id)_computeBaselineSync:(unsigned)arg1 andMetadata:(unsigned)arg2 from:(id)arg3 until:(id)arg4 ;
-(id)_composePredicateLineWithName:(id)arg1 keyPath:(id)arg2 wantSweep:(bool*)arg3 ;
-(id)_usagePresentation:(id)arg1 nameKind:(id)arg2 altName:(id)arg3 altNameKind:(id)arg4 source:(unsigned long long*)arg5 since:(id)arg6 ;
-(id)_typicalUsagePresentation:(id)arg1 nameKind:(id)arg2 source:(id)arg3 ;
-(id)_calendarUsagePresentation:(id)arg1 nameKind:(id)arg2 source:(id)arg3 ;
-(void)prepProcessDataFractionWithTag:(unsigned)arg1 from:(id)arg2 until:(id)arg3 pollInterval:(float)arg4 ;
-(bool)usageToDateFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(bool)typicalUsageFor:(id)arg1 nameKind:(id)arg2 intervalKind:(unsigned)arg3 reply:(/*^block*/ id)arg4 ;
-(bool)calendarUsageFor:(id)arg1 nameKind:(id)arg2 dayResolution:(id)arg3 daySlot:(unsigned short)arg4 weekSlot:(unsigned short)arg5 reply:(/*^block*/ id)arg6 ;
-(bool)resetUsageDataFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(id)processFeedData;
-(void)setProcessFeedData:(id)arg1 ;
-(void).cxx_destruct;
@end

