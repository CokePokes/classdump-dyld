/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/AVAudioSessionDelegateMediaPlayerOnly.h>
#import <MediaPlayer/MPAudioDeviceControllerDelegate.h>
#import <MediaPlayer/MPAVErrorResolverDelegate.h>
#import <MediaPlayer/MPAVControllerProtocol.h>

@protocol OS_dispatch_source;
@class MPMediaItem, MPMediaQuery, MPAVPlaylistManager, MPAudioDeviceController, MPQueueFeeder, MPAVErrorResolver, NSDictionary, AVPlayerLayer, MPVideoView, NSArray, NSNotification, NSObject, NSMutableArray, MPAVControllerToAggregateDCommunicator, NSString, NSMutableSet, NSDate, MPAVDestinationBrowser, MPAVItem, MPQueuePlayer, CALayer;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAudioDeviceControllerDelegate, MPAVErrorResolverDelegate, MPAVControllerProtocol> {

	MPAVPlaylistManager* _avPlaylistManager;
	BOOL _forceSynchronousQueueFilling;
	BOOL _managesSystemDownloads;
	int _playbackMode;
	BOOL _valid;
	MPAudioDeviceController* _audioDeviceController;
	MPQueueFeeder* _feeder;
	MPAVErrorResolver* _itemErrorResolver;
	NSDictionary* _pickedRouteDescription;
	AVPlayerLayer* _videoLayer;
	unsigned _videoLayerUsageCount;
	MPVideoView* _videoView;
	unsigned _tickTimerEnabled;
	CFRunLoopTimerRef _tickTimer;
	double _tickInterval;
	CFRunLoopTimerRef _currentItemBookkeepingTimer;
	int _indexChangeDirection;
	unsigned _itemIndexAtDeath;
	int _lastDisconnectReason;
	double _lastKnownTimeBeforeDeath;
	double _lastPlaybackIndexChangeTime;
	double _lastSetTime;
	double _lastSetTimeChangeTime;
	unsigned _hasDelayedCurrentTimeToSet : 1;
	unsigned _forceDelayedCurrentTimeToSet : 1;
	double _delayedCurrentTimeToSet;
	int _delayedCurrentTimeOptions;
	unsigned _lastSetTimeMarker;
	double _temporaryChapterTime;
	unsigned _autoPlayWhenLikelyToKeepUp : 1;
	unsigned _autoplayDisabledForCurrentItem : 1;
	int _eqPreset;
	double _nextFadeOutDuration;
	id _boundaryTimeObserver;
	NSArray* _boundaryTimes;
	unsigned _boundaryTimeIndexLastPosted;
	float _rateBeforeSeek;
	float _inflightSeekRate;
	unsigned _scanLevel;
	int _scanDirection;
	int _resetRateAfterSeekingUpdateDisabled;
	unsigned _seeklessState;
	unsigned _isSeekingOrScrubbing : 1;
	unsigned _resetRateAfterSeeking : 1;
	unsigned _activeRewindHoldingAtStart : 1;
	double _lastSeekableEnd;
	double _whenSawSeekableEnd;
	double _maxSeekableFwd;
	double _seekFwdSlop;
	double _lastSeekableStart;
	double _whenSawSeekableStart;
	double _maxSeekableRev;
	double _seekRevSlop;
	unsigned _canSeekRev : 1;
	unsigned _canSeekFwd : 1;
	unsigned _alwaysPlayWheneverPossible : 1;
	unsigned _stopAtEnd : 1;
	unsigned _didReachEnd : 1;
	unsigned _pausedDuringInterruption : 1;
	unsigned _resumePlaybackWhenActive : 1;
	unsigned _useApplicationAudioSession : 1;
	unsigned _playInBackgroundUserDefaultEnabled : 1;
	unsigned _canPlayFastForward : 1;
	unsigned _canPlayFastReverse : 1;
	unsigned _state;
	unsigned _displayOverridePlaybackState;
	unsigned _bufferingState;
	NSNotification* _delayedPlaybackStateNotification;
	NSObject<OS_dispatch_source>* _stallTimerSource;
	NSMutableArray* _queueFeederStateStack;
	int _feederMode;
	MPAVControllerToAggregateDCommunicator* _aggregateDCommunicator;
	double _itemInitialBookmarkTime;
	float _rateBeforeResignActive;
	int _ubiquitousBookkeepingDisabledCount;
	double _secondsSinceUbiquitousCheckpoint;
	Class _videoViewClass;
	NSString* _audioSessionModeOverride;
	double _lastInterruptionEnd;
	BOOL _shouldEnforceHDCP;
	NSMutableSet* _clientsWantingAirPlayVideo;
	BOOL _currentItemDidLoad;
	BOOL _didResolveError;
	BOOL _disallowsAMRAudio;
	BOOL _disableAirPlayMirroringDuringPlayback;
	NSDate* _itemDidChangeDate;
	unsigned _stallBackgroundTaskIdentifier;
	BOOL _shouldSkipToNextTrackOnResumeFromInterruption;
	BOOL _autoReshufflingDisabled;
	MPAVDestinationBrowser* _destinationBrowser;

}

@property (assign,nonatomic) BOOL shouldSkipToNextTrackOnResumeFromInterruption;                                           //@synthesize shouldSkipToNextTrackOnResumeFromInterruption=_shouldSkipToNextTrackOnResumeFromInterruption - In the implementation block
@property (nonatomic,readonly) MPQueueFeeder * feeder;                                                                     //@synthesize feeder=_feeder - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@property (assign,nonatomic) BOOL closedCaptioningEnabled; 
@property (assign,nonatomic) double nextFadeOutDuration;                                                                   //@synthesize nextFadeOutDuration=_nextFadeOutDuration - In the implementation block
@property (assign,nonatomic) unsigned repeatType; 
@property (getter=isShuffled,nonatomic,readonly) BOOL shuffled; 
@property (assign,nonatomic) unsigned shuffleType; 
@property (nonatomic,readonly) BOOL hasVolumeControl; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) NSString * routeNameForVolumeControl; 
@property (nonatomic,readonly) unsigned activeRepeatType; 
@property (nonatomic,readonly) unsigned activeShuffleType; 
@property (assign,nonatomic) BOOL autoReshufflingDisabled;                                                                 //@synthesize autoReshufflingDisabled=_autoReshufflingDisabled - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) double currentMonotonousTime; 
@property (nonatomic,readonly) double durationOfCurrentItemIfAvailable; 
@property (nonatomic,readonly) double playableDurationOfCurrentItemIfAvailable; 
@property (nonatomic,readonly) unsigned numberOfItems; 
@property (nonatomic,readonly) unsigned bufferingState;                                                                    //@synthesize bufferingState=_bufferingState - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isRewindHoldingAtStart,nonatomic,readonly) BOOL rewindHoldingAtStart; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) BOOL alwaysPlayWheneverPossible; 
@property (assign,nonatomic) int feederMode;                                                                               //@synthesize feederMode=_feederMode - In the implementation block
@property (getter=isFullScreenVideoMode,nonatomic,readonly) BOOL fullScreenVideoMode; 
@property (assign,nonatomic) int playbackMode; 
@property (assign,nonatomic) BOOL stopAtEnd; 
@property (nonatomic,readonly) MPAudioDeviceController * audioDeviceController;                                            //@synthesize audioDeviceController=_audioDeviceController - In the implementation block
@property (assign,nonatomic) BOOL useApplicationAudioSession; 
@property (nonatomic,readonly) MPAVDestinationBrowser * destinationBrowser;                                                //@synthesize destinationBrowser=_destinationBrowser - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentItemReady; 
@property (assign,nonatomic) BOOL ubiquitousBookkeepingEnabled; 
@property (nonatomic,readonly) BOOL isExternalPlaybackActive; 
@property (assign,nonatomic) BOOL disableAirPlayMirroringDuringPlayback; 
@property (nonatomic,readonly) MPQueuePlayer * avPlayer; 
@property (assign,nonatomic) BOOL shouldEnforceHDCP;                                                                       //@synthesize shouldEnforceHDCP=_shouldEnforceHDCP - In the implementation block
@property (nonatomic,retain) NSString * audioSessionModeOverride;                                                          //@synthesize audioSessionModeOverride=_audioSessionModeOverride - In the implementation block
@property (assign,nonatomic) int EQPreset;                                                                                 //@synthesize eqPreset=_eqPreset - In the implementation block
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) CALayer * videoLayer; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) int externalPlaybackType; 
@property (assign,nonatomic) BOOL usesAudioOnlyModeForExternalPlayback; 
@property (assign,setter=setDestinationIsTVOut:,getter=destinationIsTVOut,nonatomic) BOOL destinationIsTVOut; 
@property (nonatomic,readonly) BOOL showPlaybackStateOverlaysOnTVOut; 
@property (assign,nonatomic) unsigned state;                                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL currentItemIsRental; 
@property (assign,nonatomic) BOOL managesSystemDownloads;                                                                  //@synthesize managesSystemDownloads=_managesSystemDownloads - In the implementation block
@property (assign,nonatomic) BOOL forceSynchronousQueueFilling;                                                            //@synthesize forceSynchronousQueueFilling=_forceSynchronousQueueFilling - In the implementation block
@property (nonatomic,readonly) id _playerAVAudioSession; 
@property (assign,nonatomic) BOOL disallowsAMRAudio; 
@property (nonatomic,readonly) MPMediaItem * currentMediaItem; 
@property (nonatomic,readonly) MPMediaQuery * currentMediaQuery; 
@property (assign,nonatomic) unsigned displayOverridePlaybackState;                                                        //@synthesize displayOverridePlaybackState=_displayOverridePlaybackState - In the implementation block
+(BOOL)outputSupportsAC3;
+(BOOL)isNetworkSupportedPath:(id)arg1 ;
+(id)_itemKeysToObserve;
+(id)_controllerKeysToObserve;
+(id)_playerKeysToObserve;
+(id)sharedInstance;
+(void)initialize;
-(BOOL)showPlaybackStateOverlaysOnTVOut;
-(id)videoView;
-(id)feeder;
-(double)currentTime;
-(unsigned)displayOverridePlaybackState;
-(unsigned)activeRepeatType;
-(unsigned)activeShuffleType;
-(void)play;
-(void)setStopAtEnd:(BOOL)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(unsigned)bufferingState;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(id)avPlayer;
-(BOOL)isExternalPlaybackActive;
-(void)endPlayback;
-(void)beginSeek:(int)arg1 ;
-(void)endSeek;
-(void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ;
-(void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3 ;
-(int)playbackMode;
-(void)setPlaybackMode:(int)arg1 ;
-(void)beginUsingVideoLayer;
-(void)changePlaybackIndexBy:(int)arg1 ;
-(void)setCurrentTime:(double)arg1 options:(int)arg2 ;
-(id)audioSessionModeOverride;
-(BOOL)disallowsAMRAudio;
-(double)timeOfPlayableEnd;
-(double)timeOfPlayableStart;
-(double)timeOfSeekableEnd;
-(double)timeOfSeekableStart;
-(void)setAudioSessionModeOverride:(id)arg1 ;
-(void)setDisplayOverridePlaybackState:(unsigned)arg1 ;
-(void)setDisallowsAMRAudio:(BOOL)arg1 ;
-(void)setShouldEnforceHDCP:(BOOL)arg1 ;
-(BOOL)shouldEnforceHDCP;
-(void)setPlaybackIndex:(int)arg1 ;
-(void)switchToFeeder:(id)arg1 mode:(int)arg2 index:(unsigned)arg3 play:(BOOL)arg4 ;
-(void)setUseApplicationAudioSession:(BOOL)arg1 ;
-(void)setNextFadeOutDuration:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)endUsingVideoLayer;
-(BOOL)useApplicationAudioSession;
-(void)setForceSynchronousQueueFilling:(BOOL)arg1 ;
-(void)_setVideoViewClass:(Class)arg1 ;
-(BOOL)closedCaptioningEnabled;
-(void)setClosedCaptioningEnabled:(BOOL)arg1 ;
-(BOOL)isLiveStreaming;
-(double)durationOfCurrentItemIfAvailable;
-(double)playableDurationOfCurrentItemIfAvailable;
-(BOOL)stopAtEnd;
-(BOOL)muted;
-(void)disableAutoplayForCurrentItem;
-(id)audioDeviceController;
-(BOOL)isPlaying;
-(void)togglePlayback;
-(void)enableAutoplayForCurrentItem;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(void)setDestinationIsTVOut:(BOOL)arg1 ;
-(BOOL)isCurrentItemReady;
-(void)notifyAVPlayerItemWillChange:(id)arg1 ;
-(void)notifyAVPlayerItemDidChange:(id)arg1 ;
-(void)setUbiquitousBookkeepingEnabled:(BOOL)arg1 ;
-(void)setAutoclearingDisplayOverridePlaybackState:(unsigned)arg1 ;
-(void)feederChangedContents:(id)arg1 ;
-(void)reloadFeederWithStartQueueIndex:(unsigned)arg1 ;
-(unsigned)repeatType;
-(unsigned)shuffleType;
-(void)contentsDidChangeByRemovingRange:(NSRange)arg1 ;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)arg1 ;
-(void)contentInvalidated;
-(void)ensureFeederIsClass:(Class)arg1 ;
-(void)setRepeatType:(unsigned)arg1 ;
-(void)setShuffleType:(unsigned)arg1 ;
-(void)_resetInternalState;
-(void)_itemTimeMarkersAvailableNotification:(id)arg1 ;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(void)_itemHeartbeatIsInvalidNotification:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationSuspendedEventsOnly:(id)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_cancelStallTimer;
-(void)_cancelUpdateCurrentItemBookkeepingTimer;
-(void)_unregisterForAVItemNotifications:(id)arg1 ;
-(void)_unregisterForAVPlaylistManagerObservation:(id)arg1 ;
-(BOOL)currentItemIsRental;
-(id)_playerAVAudioSession;
-(void)_updateScanningRate;
-(id)_avPlaylistManager;
-(void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)arg1 withItemIndex:(int)arg2 ;
-(unsigned)_updateSubsequenceFocus;
-(void)updateBookkeepingNow;
-(void)setPlaybackIndex:(int)arg1 selectionDirection:(int)arg2 ;
-(void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingAds:(BOOL)arg4 ;
-(BOOL)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(BOOL)arg3 allowSkippingAds:(BOOL)arg4 error:(id*)arg5 ;
-(void)_delayedPlaybackIndexChange;
-(BOOL)_changeChapterTimeMarkerIndexBy:(int)arg1 ;
-(unsigned)_playbackIndexForDelta:(int)arg1 fromIndex:(unsigned)arg2 ignoreElapsedTime:(BOOL)arg3 ;
-(void)_endSeekAndChangeRate:(BOOL)arg1 ;
-(void)_switchToFeeder:(id)arg1 mode:(int)arg2 index:(unsigned)arg3 play:(BOOL)arg4 configureFeederBlock:(/*^block*/ id)arg5 ;
-(void)_setAVControllerQueueFeeder:(id)arg1 startQueueIndex:(unsigned)arg2 ;
-(void)_disconnectAVPlaylistManagerWithReason:(int)arg1 ;
-(void)pauseWithFadeout:(float)arg1 ;
-(void)skipToSeekableEnd;
-(void)_delayedSetCurrentTime;
-(BOOL)_canPlayItem:(id)arg1 ;
-(void)_rateDidChange:(id)arg1 ;
-(void)playItemAtIndex:(unsigned)arg1 forceRestart:(BOOL)arg2 ;
-(void)_attemptAutoPlay;
-(BOOL)alwaysPlayWheneverPossible;
-(void)endTickTimer;
-(BOOL)allowsExternalPlayback;
-(BOOL)_showsPlayingWhenInState:(unsigned)arg1 ;
-(unsigned)_displayPlaybackState;
-(BOOL)_setRate:(float)arg1 forScanning:(BOOL)arg2 ;
-(void)applyRepeatSettings;
-(void)applyShuffleSettings;
-(void)_setActionAtEndAttributeForState:(unsigned)arg1 ;
-(void)ensureHasAVPlaylistManager;
-(void)finalizeBookkeepingNow;
-(void)_setVideoLayerAttachedToPlayer:(BOOL)arg1 force:(BOOL)arg2 pauseIfNecessary:(BOOL)arg3 ;
-(void)_clearVideoLayer;
-(int)externalPlaybackType;
-(id)externalPlaybackVideoGravity;
-(void)setFeederMode:(int)arg1 ;
-(void)setExternalPlaybackVideoGravity:(id)arg1 ;
-(void)_clearSeekingIntervalsForStreaming;
-(id)_pickedRouteDescription;
-(void)setManagesSystemDownloads:(BOOL)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(BOOL)arg1 ;
-(int)feederMode;
-(void)_resetQueue:(BOOL)arg1 useVideoLayer:(BOOL)arg2 ;
-(BOOL)usesAudioOnlyModeForExternalPlayback;
-(double)currentTimeForBookmarking;
-(void)_setItemErrorResolver:(id)arg1 ;
-(void)_playbackFailedWithError:(id)arg1 canResolve:(BOOL)arg2 ;
-(void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)arg1 ;
-(void)_registerForAVItemNotifications:(id)arg1 ;
-(void)_reloadTimeMarkerObservationsForItem:(id)arg1 ;
-(BOOL)_isChangingQueueContents;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)_itemFailedToPlayToEnd:(id)arg1 ;
-(void)_streamLikelyToKeepUp:(id)arg1 ;
-(void)_streamBufferFull:(id)arg1 ;
-(void)airPlayVideoEnded;
-(void)_delayedUpdateScanningRate;
-(void)_verifyDisplayProtection;
-(void)_setValid:(BOOL)arg1 ;
-(void)_setBufferingState:(unsigned)arg1 ;
-(BOOL)canPlayFastReverse;
-(void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1 ;
-(void)_delayedUpdateTimeMarker;
-(void)_prepareToPlayItem:(id)arg1 ;
-(void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(BOOL)arg1 ;
-(void)_clearLastSetTimeIfPlayerTimeIsValid;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1 ;
-(void)_checkForBoundaryTimeCrossing;
-(id)_extractImageFromMetadata:(id)arg1 ;
-(void)_itemWillChange:(id)arg1 ;
-(void)_itemDidChange:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(BOOL)_isDownloadingCloudOrOtherItem:(id)arg1 ;
-(BOOL)_isCloudItem:(id)arg1 ;
-(void)_streamRanDry:(id)arg1 ;
-(void)_streamUnlikelyToKeepUp:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)_timedMetadataAvailable:(id)arg1 ;
-(void)_tracksDidChange:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(void)_pausePlaybackIfNecessary;
-(void)_pauseTickTimer;
-(void)_pauseBookkeepingTimer;
-(BOOL)_itemIsRestricted:(id)arg1 ;
-(void)_resumeTickTimer;
-(void)_resumeBookkeepingTimer;
-(void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;
-(unsigned)_currentIndexInBoundaryCMTimes:(id)arg1 ;
-(BOOL)_connectAVPlaylistManager;
-(void)_registerForAVPlaylistManagerObservation:(id)arg1 ;
-(void)_configureAVPlaylistManager:(id)arg1 ;
-(int)EQPreset;
-(BOOL)_isDownloadingCloudItem:(id)arg1 ;
-(id)embeddedDataTimesForItem:(id)arg1 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_timeHasJumpedNotification:(id)arg1 ;
-(void)_itemAssetIsLoadedNotification:(id)arg1 ;
-(void)_playerFailedToQueueNotification:(id)arg1 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(BOOL)shouldHaveNoActionAtEndForState:(unsigned)arg1 ;
-(void)_delayedPostPlaybackStateChangedNotification;
-(void)autoclearDisplayOverride;
-(void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned)arg1 newState:(unsigned)arg2 delayable:(BOOL)arg3 ;
-(void)_scheduleUpdateCurrentItemBookkeepingTimer;
-(void)_clearResetRateAfterSeeking;
-(unsigned)_seeklessStateForState:(unsigned)arg1 ;
-(void)_configureUpdateCurrentItemBookkeepingTimer;
-(id)videoLayer;
-(void)_updateSeekingIntervalsForStreaming;
-(void)setRateForScanning:(float)arg1 ;
-(BOOL)destinationIsTVOut;
-(BOOL)_isVideoLayerAttachedToPlayer;
-(void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned)arg3 ;
-(void)beginInterruption;
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(int)arg3 ;
-(BOOL)shouldDisplayAsPlaying;
-(id)currentMediaItem;
-(id)currentMediaQuery;
-(BOOL)fadeOutForQuit;
-(BOOL)isSeekingOrScrubbing;
-(BOOL)isRewindHoldingAtStart;
-(double)currentMonotonousTime;
-(void)disconnectPlaylistManagerForTeardown;
-(void)playItemAtIndex:(unsigned)arg1 ;
-(void)playChapterTimeMarkerAtIndex:(unsigned)arg1 ;
-(BOOL)forceRestartPlaybackIfNecessary;
-(void)beginTickTimerWithInterval:(double)arg1 ;
-(BOOL)isTickTimerEnabled;
-(void)setClient:(id)arg1 wantsToAllowAirPlayVideo:(BOOL)arg2 ;
-(BOOL)isShuffled;
-(void)setAlwaysPlayWheneverPossible:(BOOL)arg1 ;
-(BOOL)disableAirPlayMirroringDuringPlayback;
-(void)setDisableAirPlayMirroringDuringPlayback:(BOOL)arg1 ;
-(void)setEQPreset:(int)arg1 ;
-(BOOL)hasVolumeControl;
-(id)routeNameForVolumeControl;
-(BOOL)isFullScreenVideoMode;
-(void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)arg1 ;
-(void)switchToAudioPlayback:(BOOL)arg1 forItem:(id)arg2 ;
-(void)switchToVideoPlayback:(BOOL)arg1 forItem:(id)arg2 ;
-(void)saveCurrentFeederState;
-(void)restorePreviousFeederState;
-(void)ensureFeederIsSubclass:(Class)arg1 ;
-(BOOL)canSeekBackwards;
-(BOOL)canSeekForwards;
-(BOOL)canSkipToSeekableEnd;
-(void)skipToSeekableStart;
-(BOOL)ubiquitousBookkeepingEnabled;
-(void)_updateCurrentItemBookkeepingForTimerCallback;
-(void)_updateProgress:(CFRunLoopTimerRef)arg1 ;
-(id)destinationBrowser;
-(BOOL)forceSynchronousQueueFilling;
-(BOOL)managesSystemDownloads;
-(double)nextFadeOutDuration;
-(BOOL)shouldSkipToNextTrackOnResumeFromInterruption;
-(void)setShouldSkipToNextTrackOnResumeFromInterruption:(BOOL)arg1 ;
-(BOOL)autoReshufflingDisabled;
-(void)setAutoReshufflingDisabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)state;
-(void)applicationWillTerminate;
-(BOOL)isValid;
-(void)setState:(unsigned)arg1 ;
-(id)currentItem;
-(void)setActive:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned)numberOfItems;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_setState:(unsigned)arg1 ;
-(void)pause;
-(float)rate;
-(void).cxx_destruct;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)setRate:(float)arg1 ;
@end

