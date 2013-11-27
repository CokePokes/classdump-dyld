/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <MusicUI/MusicNowPlayingPlaybackControlsViewDelegate.h>
#import <MusicUI/MPPlaybackControlsDelegate.h>
#import <MusicUI/MPURatingControlDelegate.h>
#import <MediaPlayer/MPTransportControlsTarget.h>
#import <MusicUI/RUStationActionsViewControllerDelegate.h>
#import <MediaPlayerUI/RUTrackActionsDelegate.h>
#import <RadioUI/RUTrackDownloadViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIModalItemDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIView, UIViewController, UINavigationItem, MPAVItem, MusicLyricsView, UINavigationBar, MusicNowPlayingPlaybackControlsView, MPURatingControl, UIActionSheet, UIPopoverController, RUStationActionsViewController, UITapGestureRecognizer, MusicNowPlayingTitlesView, RUTrackActionsModalItem, RUTrackActionsViewController, RUTrackDownloadView;

@interface MusicNowPlayingViewController : UIViewController <MusicNowPlayingPlaybackControlsViewDelegate, MPPlaybackControlsDelegate, MPURatingControlDelegate, MPTransportControlsTarget, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, RUTrackDownloadViewDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, UIModalItemDelegate, UIPopoverControllerDelegate> {

	BOOL _canMarqueeText;
	UIView* _contentView;
	UIViewController* _contentViewController;
	UINavigationItem* _effectiveNavigationItem;
	BOOL _hasProperApplicationStateForWantingVideoLayer;
	BOOL _hasVisibilityForWantingVideoLayer;
	UIView* _infoButtonContainerView;
	BOOL _isDetailScrubbing;
	BOOL _isShowingRatings;
	MPAVItem* _item;
	MusicLyricsView* _lyricsView;
	UINavigationBar* _padFakeNavigationBar;
	MusicNowPlayingPlaybackControlsView* _playbackControlsView;
	UINavigationItem* _previousNavigationItem;
	MPURatingControl* _ratingControl;
	UIActionSheet* _repeatActionSheet;
	UIPopoverController* _stationActionsPopoverController;
	RUStationActionsViewController* _stationActionsViewController;
	UIView* _stationActionsPresentationView;
	BOOL _supportsCoverFlow;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MusicNowPlayingTitlesView* _titlesView;
	RUTrackActionsModalItem* _trackActionsModalItem;
	UIPopoverController* _trackActionsPopoverController;
	RUTrackActionsViewController* _trackActionsViewController;
	RUTrackDownloadView* _trackDownloadView;
	BOOL _visuallyEngagedAds;
	BOOL _wantsVideoLayer;

}
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)crossedTimeMakerWithEvent:(id)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(unsigned)repeatTypeForPlaybackControls:(id)arg1 ;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)arg1 ;
-(unsigned)shuffleTypeForPlaybackControls:(id)arg1 ;
-(BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2 ;
-(BOOL)playbackControlsDidTapGeniusButton:(id)arg1 ;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1 ;
-(BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned)arg2 ;
-(BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned)arg2 ;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)arg1 ;
-(void)controlsOverlay:(id)arg1 detailSliderTrackingDidChangeScrubSpeed:(int)arg2 ;
-(unsigned)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)modalItem:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
-(BOOL)MPH_supportsCoverFlow;
-(void)_radioArtworkDidLoadNotification:(id)arg1 ;
-(void)_playbackContentsDidChangeNotification:(id)arg1 ;
-(void)stationActionsViewController:(id)arg1 willBeginAction:(int)arg2 ;
-(void)stationActionsViewController:(id)arg1 didFinishAction:(int)arg2 withObject:(id)arg3 error:(id)arg4 ;
-(void)_itemTitlesDidChangeNotification:(id)arg1 ;
-(void)_statusBarHeightChangedNotification:(id)arg1 ;
-(void)_removeAdViewNotification:(id)arg1 ;
-(void)_cleanupForDeallocationContentView:(id)arg1 contentViewController:(id)arg2 ;
-(void)_popIfNecessary;
-(void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(BOOL)arg1 ;
-(void)_updateWantsVideoLayer;
-(void)_layoutForOrientation:(int)arg1 ;
-(void)_updateForCurrentItemAnimated:(BOOL)arg1 ;
-(void)_updateControlVisibilityForOrientation:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)_displayingActionSheet;
-(void)_setShowingRatings:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_startGeniusPlaylistFromCurrentItem;
-(void)_scaleAndSetModalItemArtworkImageToCurrentArtworkImage;
-(void)_infoButtonAction:(id)arg1 ;
-(void)_addStationFromItem:(id)arg1 usingArtist:(BOOL)arg2 ;
-(void)_prepareToAddStation;
-(void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(BOOL)arg3 canShowAlert:(BOOL)arg4 ;
-(void)_handleTrackAction:(int)arg1 withItem:(id)arg2 ;
-(BOOL)_itemSupportsRatings:(id)arg1 ;
-(void)_updateContentView:(id)arg1 forItem:(id)arg2 ;
-(CGSize)_contentViewSizeForItem:(id)arg1 orientation:(int)arg2 ;
-(void)_flipsideAction:(id)arg1 ;
-(BOOL)_shouldShowTransitionFromItem:(id)arg1 toItem:(id)arg2 isForwards:(BOOL*)arg3 ;
-(id)_createContentViewForItem:(id)arg1 contentViewController:(id*)arg2 ;
-(void)_setWantsVideoLayer:(BOOL)arg1 forItem:(id)arg2 ;
-(void)playbackControls:(id)arg1 didTapRadioNewStationFromItem:(id)arg2 usingArtist:(BOOL)arg3 ;
-(void)playbackControlsDidTapInfoButton:(id)arg1 ;
-(void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3 ;
-(void)trackDownloadViewWillTransition:(id)arg1 ;
-(BOOL)music_supportsMiniPlayer;
-(void)_updateTitles;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
-(void)_tapAction:(id)arg1 ;
-(void).cxx_destruct;
@end

