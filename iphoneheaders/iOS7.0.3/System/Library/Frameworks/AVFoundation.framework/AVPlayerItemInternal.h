/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AVPlayerItemDelegate, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPlayerItem, , AVPlayerConnection, NSObject, AVPropertyStorage, NSError, NSURL, AVAsset, NSArray, NSMutableArray, NSDate, AVAudioMix, AVVideoComposition, AVCustomVideoCompositorSession, NSDictionary, NSMutableDictionary, NSString;

@interface AVPlayerItemInternal : NSObject {

	AVWeakReference* weakReference;
	AVPlayerItem* previousItem;
	AVPlayerItem* nextItem;
	OpaqueFigPlaybackItemRef figPlaybackItem;
	OpaqueFigCPEProtectorRef figCPEProtector;
	OpaqueCMTimebaseRef figTimebase;
	<AVPlayerItemDelegate>* delegate;
	AVWeakReference* playerReference;
	AVPlayerConnection* playerConnection;
	BOOL isCurrentPlayerItem;
	NSObject<OS_dispatch_queue>* stateDispatchQueue;
	AVPropertyStorage* propertyStorage;
	int status;
	NSError* error;
	NSURL* URL;
	AVAsset* asset;
	NSArray* automaticallyLoadedAssetKeys;
	AVAsset* assetWithFigPlaybackItem;
	NSArray* trackIDsForAssetWithFigPlaybackItem;
	NSObject<OS_dispatch_queue>* syncLayersQ;
	NSMutableArray* syncLayers;
	NSArray* timedMetadata;
	SCD_Struct_CM4 initialTime;
	SCD_Struct_CM4 initialToleranceBefore;
	SCD_Struct_CM4 initialToleranceAfter;
	SCD_Struct_CM4 forwardPlaybackEndTime;
	SCD_Struct_CM4 reversePlaybackEndTime;
	NSDate* initialDate;
	NSDate* initialEstimatedDate;
	BOOL initialLimitReadAhead;
	int initialPlaybackLikelyToKeepUpTrigger;
	BOOL initialAlwaysMonitorsPlayability;
	BOOL initialWillNeverSeekBackwardsHint;
	BOOL initialContinuesPlayingDuringPrerollForSeek;
	BOOL initialContinuesPlayingDuringPrerollForRateChange;
	double initialBufferingTargetMinimum;
	double initialBufferingTargetMaximum;
	CFStringRef initialFigTimePitchAlgorithm;
	BOOL savesDownloadedDataToDiskWhenDone;
	BOOL nonForcedSubtitlesEnabled;
	BOOL networkUsuallyExceedsMaxBitRate;
	BOOL allowProgressiveSwitchUp;
	float maximumBitRate;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	BOOL seekingWaitsForVideoCompositionRendering;
	NSArray* textStyleRules;
	NSDictionary* gaplessInfo;
	int initialVariantIndex;
	NSDictionary* audibleDRMInfo;
	NSDictionary* rampInOutInfo;
	float soundCheckVolumeNormalization;
	float volumeAdjustment;
	NSMutableArray* handlersToCallWhenReadyForEnqueueing;
	NSMutableDictionary* mediaOptionsSelectedByClient;
	BOOL haveInitialSamples;
	BOOL haveCPEProtector;
	BOOL didSetAssetToAssetWithFigPlaybackItem;
	BOOL didBecomeReadyForBasicInspection;
	BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
	BOOL didBecomeReadyForInspectionOfTracks;
	BOOL didBecomeReadyForInspectionOfPresentationSize;
	BOOL didBecomeReadyForInspectionOfDuration;
	BOOL didInformObserversAboutAvailabilityOfTracks;
	BOOL didFireKVOForAssetForNonStreamingItem;
	BOOL didApplyInitialAudioMix;
	BOOL wasInitializedWithURL;
	BOOL needTimedMetadataNotification;
	BOOL externalSubtitlesEnabled;
	BOOL externalProtectionRequested;
	BOOL requiresAccessLog;
	int eqPreset;
	OpaqueFigSimpleMutexRef seekIDMutex;
	int nextSeekIDToGenerate;
	int pendingSeekID;
	/*^block*/ id seekCompletionHandler;
	NSString* dataYouTubeID;
	NSArray* itemOutputs;
	NSMutableArray* itemVideoOutputs;
	NSMutableArray* itemLegibleOutputs;
	NSString* serviceIdentifier;
	NSString* mediaKind;
	unsigned restrictions;

}
@end

