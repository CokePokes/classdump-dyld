/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>
#import <iWorkImport/TSKAVPlayerControllerDelegate.h>
#import <iWorkImport/TSDAudioHUDControllerDelegate.h>

@protocol TSDAudioHUDController;
@class TSKAVPlayerController, CALayer, , TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate> {

	TSKAVPlayerController* mPlayerController;
	CALayer* mPlayPauseButtonLayer;
	CALayer* mAudioImageLayer;
	float mDynamicVolume;
	BOOL mIsChangingDynamicVolume;
	<TSDAudioHUDController>* mAudioHUDController;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (nonatomic,readonly) TSKAVPlayerController * playerController; 
@property (nonatomic,readonly) <TSDAudioHUDController> * audioHUDController; 
@property (nonatomic,readonly) float volume; 
-(void)willBeginZooming;
-(void)didEndZooming;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)willBeRemoved;
-(void)willUpdateLayer:(id)arg1 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowKnobs;
-(CGRect)boundsForStandardKnobs;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)shouldShowSizesInRulers;
-(BOOL)shouldShowDragHUD;
-(void)addKnobsToArray:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)willBeginReadMode;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)providesGuidesWhileAligning;
-(BOOL)exclusivelyProvidesGuidesWhileAligning;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldAllowReplacementFromPaste;
-(id)movieInfo;
-(void)p_updateRepeatMode;
-(void)p_updateVolume;
-(void)p_updateStartTime;
-(void)p_updateEndTime;
-(BOOL)p_shouldPlayerControllerExistThroughoutSelection;
-(void)p_setupPlayerControllerIfNecessary;
-(id)playerController;
-(void)p_teardownPlayerController;
-(BOOL)canResetMediaSize;
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeUpdateToValue:(float)arg1 ;
-(void)dynamicVolumeChangeDidEnd;
-(BOOL)p_shouldShowPlayPauseLayers;
-(BOOL)p_isPlaying;
-(void)p_updateButtonForPlaying:(BOOL)arg1 pressed:(BOOL)arg2 ;
-(void)p_teardownAudioHUD;
-(BOOL)hitPlayPauseButtonWithPoint:(CGPoint)arg1 ;
-(void)p_updateAudioHUDWithFrame:(CGRect)arg1 ;
-(BOOL)p_isEditingAnimations;
-(void)setupPlayerControllerForAudioHUDController:(id)arg1 ;
-(void)updatePlayButtonForPoint:(CGPoint)arg1 ;
-(BOOL)shouldAllowReplacementFromDrop;
-(id)textureWithContext:(id)arg1 ;
-(id)audioHUDController;
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(Class)layerClass;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isDraggable;
-(float)volume;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

