/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVController : NSObject {

	AVControllerPrivate* _priv;

}
+(BOOL)isNetworkSupportedPath:(id)arg1 ;
+(id)compatibleAudioRouteForRoute:(id)arg1 ;
+(id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3 ;
+(void)setEnableNetworkMode:(BOOL)arg1 ;
+(BOOL)isSupportedMimeType:(id)arg1 ;
+(id)avController;
+(id)avControllerWithQueue:(id)arg1 error:(id*)arg2 ;
+(BOOL)isSupportedFileExtension:(id)arg1 ;
-(id)vibrationPattern;
-(void)setVibrationPattern:(id)arg1 ;
-(void)stepByCount:(int)arg1 ;
-(double)currentTime;
-(int)repeatMode;
-(BOOL)setRepeatMode:(int)arg1 ;
-(void)setCurrentTime:(double)arg1 options:(int)arg2 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)seekToDate:(id)arg1 ;
-(BOOL)muted;
-(BOOL)isCurrentItemReady;
-(void)setEQPreset:(int)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)isValid;
-(void)setLayer:(id)arg1 ;
-(id)currentItem;
-(void)pause;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)initWithQueue:(id)arg1 error:(id*)arg2 ;
-(void)makeCurrentItemReady;
-(CGImageRef)grabCGImageAtTime:(double)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 actualTime:(double*)arg4 ;
-(int)eqPreset;
-(BOOL)okToNotifyFromThisThread;
-(BOOL)activate:(id*)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3 ;
-(BOOL)vibrationEnabled;
-(void)setVibrationEnabled:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 fmpType:(unsigned)arg2 error:(id*)arg3 ;
-(id)_figPlayerNotifications;
-(void)checkQueueSpace;
-(id)addNextFeederItemToQueue;
-(id)queueFeeder;
-(BOOL)playNextItem:(id*)arg1 ;
-(void)feederRangeWasInserted:(id)arg1 ;
-(void)feederRangeWasRemoved:(id)arg1 ;
-(void)feederInvalidatedWithCurrentItemMoved:(id)arg1 ;
-(void)setQueueFeeder:(id)arg1 withIndex:(int)arg2 ;
-(void)applyDesiredRepeatMode;
-(void)continueAfterRepeatGap;
-(BOOL)setRate:(float)arg1 error:(id*)arg2 ;
-(void)dequeueFirstItem;
-(OpaqueFigPlaybackItemRef)currentFPItem;
-(void)cancelContinueAfterRepeatGap;
-(BOOL)shouldBeginPlayingItem:(id)arg1 error:(id*)arg2 ;
-(id)errorWithDescription:(id)arg1 code:(long)arg2 ;
-(id)lkLayer;
-(BOOL)shouldDisplayClosedCaptions;
-(void)setVisualContext:(OpaqueFigVisualContextRef)arg1 ;
-(long)updateActionAtEnd;
-(void)setOutputQTESFilePath:(id)arg1 ;
-(void)setShouldDisplayClosedCaptions:(BOOL)arg1 ;
-(void)setSubtitleRecipient:(id)arg1 ;
-(void)setApplyVideoTrackMatrix;
-(void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(int)arg3 withImageOptions:(id)arg4 ;
-(void)scheduleUpdateTimeMarkerObservations;
-(void)scheduleQueueSpaceCheck;
-(void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1 ;
-(void)updateTimeMarkerObservations;
-(void)removeObserver:(id)arg1 fromTMOArray:(id)arg2 ;
-(void)ensurePlaybackQueueImmed;
-(id)outputQTESFilePath;
-(void)logPerformanceDataForCurrentItem;
-(void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2 ;
-(void)rateDidChangeToRate:(float)arg1 ;
-(void)currentItemHasChanged:(id)arg1 ;
-(void)fpItemNotification:(id)arg1 sender:(id)arg2 ;
-(void)itemHasFinishedPlayingNotification:(id)arg1 ;
-(BOOL)beginRepeatGap;
-(void)fmpEffectiveVolumeDidChange;
-(void)safeSubtitleCommandPosted:(void*)arg1 ;
-(void)setAVItemClass:(Class)arg1 ;
-(id)initForStreaming;
-(AVControllerPrivate*)privateStorage;
-(BOOL)isNewImageAvailableForTime:(const SCD_Struct_AV5*)arg1 willNeverBeAvailable:(BOOL*)arg2 ;
-(long)copyImageForTime:(_CVBuffer*)arg1 time:(const SCD_Struct_AV5*)arg2 ;
-(void)setQueueFeeder:(id)arg1 ;
-(BOOL)havePlayedCurrentItem;
-(unsigned)indexOfCurrentQueueFeederItem;
-(BOOL)setIndexOfCurrentQueueFeederItem:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)resumePlayback:(double)arg1 error:(id*)arg2 ;
-(BOOL)beginInterruption:(id*)arg1 ;
-(BOOL)canBeginInterruption;
-(void)endInterruptionWithStatus:(id)arg1 ;
-(OpaqueFigVisualContextRef)visualContext;
-(void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 ;
-(void)cancelAllCGImageRequests;
-(void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4 ;
-(void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2 ;
-(id)bookmarkGroupIDForAVItem:(id)arg1 ;
-(double)bookmarkTimeForAVItem:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(int*)arg3 ;
-(BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2 ;
-(void)dequeueDeadItem;
-(void)figPlayerNotificationHandler:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(BOOL)play:(id*)arg1 ;
-(float)rate;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)initWithError:(id*)arg1 ;
@end

