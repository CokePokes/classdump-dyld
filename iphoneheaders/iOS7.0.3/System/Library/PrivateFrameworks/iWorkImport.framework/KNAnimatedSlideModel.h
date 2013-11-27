/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNAnimatedSlideView, NSArray, KNPlaybackSession, NSMutableArray, TSUNoCopyDictionary, NSDictionary;

@interface KNAnimatedSlideModel : NSObject {

	KNAnimatedSlideView* mASV;
	NSArray* mBuilds;
	NSArray* mBuildChunks;
	KNPlaybackSession* mSession;
	NSMutableArray* mBuildEvents;
	TSUNoCopyDictionary* mInfoToAnimatedBuildMap;
	NSDictionary* mInfoMap;
	NSArray* mInfos;
	NSMutableArray* mAnimatedBuilds;

}

@property (nonatomic,readonly) NSArray * infos; 
@property (nonatomic,readonly) NSArray * animatedBuilds; 
@property (nonatomic,readonly) NSDictionary * infoMap; 
@property (nonatomic,readonly) NSArray * renderers; 
-(id)renderers;
-(id)infos;
-(id)initWithBuilds:(id)arg1 buildChunks:(id)arg2 infos:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5 ;
-(id)finalActionEffectForDrawable:(id)arg1 ;
-(id)animatedBuildForInfo:(id)arg1 aroundEvent:(int)arg2 isAtEndOfBuild:(BOOL*)arg3 ;
-(id)createInfoToBuildMap:(id)arg1 ;
-(id)p_convertToBuildEvents:(id)arg1 ;
-(void)p_insertInitialMovies;
-(Class)effectClassFromBuild:(id)arg1 duration:(double)arg2 ;
-(int)p_eventNumberForInfo:(id)arg1 key:(id)arg2 defaultResult:(int)arg3 ;
-(id)animatedBuilds;
-(id)animatedBuildForInfo:(id)arg1 atEvent:(int)arg2 ;
-(id)actionEffectForDrawable:(id)arg1 atBeginningOfEvent:(int)arg2 ;
-(void)enumerateAnimatedBuildsAndTimeRangesAtIndex:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)info:(id)arg1 isVisibleDuringEvent:(int)arg2 ;
-(int)inEventForInfo:(id)arg1 ;
-(int)outEventForInfo:(id)arg1 ;
-(id)buildChunksForEventRange:(NSRange)arg1 ;
-(double)durationForEventIndexes:(id)arg1 ;
-(NSRange)eventRangeForInfos:(id)arg1 ;
-(id)firstAnimatedBuildForInfo:(id)arg1 ;
-(id)lastAnimatedBuildForInfo:(id)arg1 ;
-(id)previousAnimatedBuildForInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(id)previousBuildInForInfo:(id)arg1 priorToBuild:(id)arg2 ;
-(id)p_createBuildAnimationRecords:(id)arg1 info:(id)arg2 event:(int)arg3 start:(double)arg4 eventStart:(double)arg5 animateAtEndOfPreviousBuild:(BOOL)arg6 previousAnimatedBuild:(id)arg7 movieDrawables:(id)arg8 ;
-(void)p_updatePreviousAndFinalAttributes;
-(id)p_createMovieBuild:(id)arg1 stageIndex:(int)arg2 buildChunk:(id)arg3 startTime:(double)arg4 eventStartTime:(double)arg5 event:(int)arg6 animateAtEndOfPreviousBuild:(BOOL)arg7 ;
-(id)p_animatedBuildForInfo:(id)arg1 event:(int)arg2 buildIn:(BOOL)arg3 ;
-(BOOL)p_determineVisiblityOfInfo:(id)arg1 inOverloadedEvent:(int)arg2 duringEvent:(int)arg3 ;
-(id)p_createInfoListFromRendererList:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(id)eventsAtIndex:(unsigned)arg1 ;
-(id)infoMap;
@end

