/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSMutableArray, RadioTrack, NSArray;

@interface RUPreviewSession : NSObject {

	NSMutableDictionary* _radioTracksByAsset;
	NSMutableArray* _sessionObservers;
	id _timeObserver;
	RadioTrack* _currentTrack;
	int _indexOfCurrentTrack;
	NSArray* _tracks;
	double _customTrackPreviewDuration;
	double _interstitialTrackDuration;

}

@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) RadioTrack * currentTrack;                    //@synthesize currentTrack=_currentTrack - In the implementation block
@property (assign,nonatomic) double customTrackPreviewDuration;              //@synthesize customTrackPreviewDuration=_customTrackPreviewDuration - In the implementation block
@property (nonatomic,readonly) int indexOfCurrentTrack;                      //@synthesize indexOfCurrentTrack=_indexOfCurrentTrack - In the implementation block
@property (assign,nonatomic) double interstitialTrackDuration;               //@synthesize interstitialTrackDuration=_interstitialTrackDuration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSArray * tracks;                             //@synthesize tracks=_tracks - In the implementation block
+(id)currentSession;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopWithOptions:(int)arg1 fadeoutDuration:(double)arg2 ;
-(id)tracks;
-(id)initWithTracks:(id)arg1 ;
-(void)removeSessionObserver:(id)arg1 ;
-(void)addSessionObserver:(id)arg1 ;
-(void)getCurrentDurationWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)currentTrack;
-(void)setCustomTrackPreviewDuration:(double)arg1 ;
-(void)_advanceToNextTrack;
-(void)stopWithOptions:(int)arg1 ;
-(id)_newPlayerItemForAsset:(id)arg1 ;
-(void)_didBeginWithTrack:(id)arg1 ;
-(void)_didStopWithOptions:(int)arg1 didFinalTrackPlayToCompletion:(BOOL)arg2 ;
-(void)_didChangeFromTrack:(id)arg1 toTrack:(id)arg2 ;
-(double)customTrackPreviewDuration;
-(int)indexOfCurrentTrack;
-(double)interstitialTrackDuration;
-(void)setInterstitialTrackDuration:(double)arg1 ;
-(void).cxx_destruct;
@end

