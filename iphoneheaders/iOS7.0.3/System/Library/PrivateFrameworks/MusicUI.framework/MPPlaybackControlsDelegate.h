/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MPPlaybackControlsDelegate <NSObject>
@optional
-(BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)arg1;
-(unsigned)repeatTypeForPlaybackControls:(id)arg1;
-(void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)arg1;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1;
-(unsigned)shuffleTypeForPlaybackControls:(id)arg1;
-(BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
-(BOOL)playbackControlsDidTapGeniusButton:(id)arg1;
-(void)controlsOverlay:(id)arg1 didClickMailPodcastLinkButtonForItem:(id)arg2;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
-(BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned)arg2;
-(void)controlsOverlayDidClickFastForwardButton:(id)arg1;
-(void)controlsOverlay:(id)arg1 didTapRadioButtonForItem:(id)arg2;
-(void)controlsOverlay:(id)arg1 didTapRadioHistoryButtonForItem:(id)arg2;
-(void)controlsOverlay:(id)arg1 didTapRadioShareButtonForItem:(id)arg2;
-(void)controlsOverlay:(id)arg1 didTapTrackInfoButtonForItem:(id)arg2;
-(void)controlsOverlayDidClickRewindButton:(id)arg1;
-(BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned)arg2;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1;
-(void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)arg1;
-(void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(int)arg2;
-(BOOL)hideGeniusButtonForPlaybackControls:(id)arg1;
-(BOOL)controlsOverlay:(id)arg1 shouldDisableFastFowardAndRewindButtonForItem:(id)arg2;
-(BOOL)controlsOverlay:(id)arg1 shouldDisablePlaybackSpeedButtonForItem:(id)arg2;
-(BOOL)controlsOverlay:(id)arg1 shouldDisableMailPodcastLinkButtonForItem:(id)arg2;
-(BOOL)controlsOverlay:(id)arg1 shouldHideMailPodcastLinkButtonForItem:(id)arg2;
-(BOOL)controlsOverlay:(id)arg1 shouldHideRadioButtonForItem:(id)arg2;
-(unsigned)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
@end

