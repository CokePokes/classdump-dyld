/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, AVController, SBUISound, NSTimer, NSHashTable, NSMutableArray;

@interface SBSoundController : NSObject {

	NSMutableDictionary* _soundsBySystemSoundIDs;
	AVController* _avController;
	SBUISound* _avControllerSound;
	NSTimer* _avControllerMaxDurationTimer;
	id _avControllerObserver;
	NSMutableDictionary* _soundsByToneIdentifiers;
	NSMutableDictionary* _toneAlertsByToneIdentifiers;
	NSHashTable* _observers;
	unsigned _pendingCallbacks;
	NSMutableArray* _pendedCallbacks;

}
+(id)sharedInstance;
-(BOOL)stopAllSounds;
-(BOOL)handleVolumeButtonDownEvent;
-(void)_ringerStateChanged:(id)arg1 ;
-(BOOL)_playRingtone:(id)arg1 ;
-(BOOL)_playAVItem:(id)arg1 forSound:(id)arg2 ;
-(BOOL)_playToneAlert:(id)arg1 ;
-(void)_soundDidStartPlaying:(id)arg1 ;
-(void)_cleanupSystemSound:(unsigned long)arg1 andKill:(BOOL)arg2 ;
-(void)_killAVController;
-(void)_stopToneAlertForSound:(id)arg1 ;
-(void)_beginPendingCallbacksBlock;
-(void)_endPendingCallbacksBlock;
-(void)_soundDidFinishPlaying:(id)arg1 ;
-(void)_enqueueCallback:(/*^block*/ id)arg1 ;
-(BOOL)isPlayingAnySound;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(BOOL)_playSystemSound:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isPlaying:(id)arg1 ;
-(BOOL)playSound:(id)arg1 environments:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)stopSound:(id)arg1 ;
@end

