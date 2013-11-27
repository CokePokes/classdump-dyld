/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <VoiceMemos/RCGLWaveformRendererDelegate.h>
#import <VoiceMemos/RCWaveformSelectionOverlayDelegate.h>

@protocol RCWaveformViewDelegate;
@class UIScrollView, RCGLWaveformRenderer, RCWaveformSelectionOverlay, RCAcousticAnnotationView, NSMutableArray, NSTimer, CADisplayLink, , UIColor;

@interface RCGLWaveformViewController : UIViewController <UIScrollViewDelegate, RCGLWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate> {

	UIScrollView* _scrollView;
	RCGLWaveformRenderer* _rendererController;
	RCWaveformSelectionOverlay* _selectionOverlay;
	RCAcousticAnnotationView* _acousticAnnotationView;
	NSMutableArray* _timeMarkerViews;
	NSTimer* _overlayAutoscrollTimer;
	CADisplayLink* _displayLink;
	SCD_Struct_RC1 _visibleTimeRangeBeforeSelectionTracking;
	BOOL _timeMarkerViewsNeedInitialLayout;
	BOOL _timeMarkerViewsUpdatesDisabled;
	BOOL _scrubbing;
	float _resumingToForegroundAutoscrollRate;
	double _timeBeganAutoscrolling;
	double _autoscrollRate;
	double _autoscrollBaseDuration;
	BOOL _scrubbingEnabled;
	BOOL _screenUpdatesDisabled;
	BOOL _selectedTimeRangeEditingEnabled;
	BOOL _autoscrolling;
	<RCWaveformViewDelegate>* _delegate;
	int _playbackState;
	UIColor* _backgroundColor;
	unsigned _currentTimeDisplayOptions;
	float _selectionVisibleMargin;
	double _currentTime;
	double _duration;
	SCD_Struct_RC1 _visibleTimeRange;
	SCD_Struct_RC1 _selectedTimeRange;

}

@property (assign,nonatomic,__weak) <RCWaveformViewDelegate> * delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <RCWaveformDataSource> * dataSource; 
@property (assign,nonatomic) int playbackState;                                                                          //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                      //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL screenUpdatesDisabled;                                                                 //@synthesize screenUpdatesDisabled=_screenUpdatesDisabled - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                         //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                                                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC1 visibleTimeRange;                                                            //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC1 selectedTimeRange;                                                           //@synthesize selectedTimeRange=_selectedTimeRange - In the implementation block
@property (assign,getter=isSelectedTimeRangeEditingEnabled,nonatomic) BOOL selectedTimeRangeEditingEnabled;              //@synthesize selectedTimeRangeEditingEnabled=_selectedTimeRangeEditingEnabled - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * waveformColor; 
@property (assign,nonatomic) unsigned currentTimeDisplayOptions;                                                         //@synthesize currentTimeDisplayOptions=_currentTimeDisplayOptions - In the implementation block
@property (assign,nonatomic) float selectionVisibleMargin;                                                               //@synthesize selectionVisibleMargin=_selectionVisibleMargin - In the implementation block
@property (getter=isAutoscrolling,nonatomic,readonly) BOOL autoscrolling;                                                //@synthesize autoscrolling=_autoscrolling - In the implementation block
-(double)currentTime;
-(int)playbackState;
-(void)setCurrentTime:(double)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setPlaybackState:(int)arg1 ;
-(void)setScreenUpdatesDisabled:(BOOL)arg1 ;
-(void)setWaveformColor:(id)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(void)setCurrentTimeDisplayOptions:(unsigned)arg1 ;
-(id)_waveformRenderer;
-(SCD_Struct_RC1)visibleTimeRange;
-(void)setVisibleTimeRange:(SCD_Struct_RC1)arg1 ;
-(BOOL)screenUpdatesDisabled;
-(void)beginAutoscrollingAtTime:(double)arg1 atRate:(float)arg2 ;
-(void)setSelectedTimeRangeEditingEnabled:(BOOL)arg1 ;
-(void)stopAutoscrolling;
-(void)setSelectedTimeRange:(SCD_Struct_RC1)arg1 animationDuration:(double)arg2 ;
-(void)setVisibleTimeRange:(SCD_Struct_RC1)arg1 animationDuration:(double)arg2 ;
-(SCD_Struct_RC1)selectedTimeRange;
-(void)waveformRendererContentDidFinishLoading:(id)arg1 ;
-(void)waveformRenderer:(id)arg1 contentWidthDidChange:(float)arg2 ;
-(void)_stopDisplayLink;
-(void)setDataSource:(id)arg1 currentTime:(double)arg2 ;
-(void)_updateWaveformView;
-(void)_updateAnnotationViews;
-(void)_updateCurrentTimeDisplay;
-(void)_updateSelectionOverlayWithAnimationDuration:(double)arg1 ;
-(void)setVisibleTimeRange:(SCD_Struct_RC1)arg1 animationDuration:(double)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_updateVisibleAreaWithAnimationDuration:(double)arg1 ;
-(SCD_Struct_RC1)timeRangeByInsettingVisibleTimeRange:(SCD_Struct_RC1)arg1 inset:(float)arg2 ;
-(SCD_Struct_RC1)_visibleTimeRangeForCurrentSelectionTimeRange;
-(void)_setTimeMarkerViewUpdatesDisabled:(BOOL)arg1 ;
-(void)_setSelectedTimeRange:(SCD_Struct_RC1)arg1 updateVisibleTimeRange:(BOOL)arg2 notifyDelegate:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)_startDisplayLink;
-(void)_scrollViewPanGestureRecognized:(id)arg1 ;
-(void)_autoscrollOverlayIfNecessary;
-(void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
-(CGRect)_frameForTimeMarkerView:(id)arg1 ;
-(void)_displayLinkDidUpdate:(id)arg1 ;
-(void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 ;
-(void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(BOOL)arg2 endTime:(BOOL)arg3 ;
-(SCD_Struct_RC1)waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(SCD_Struct_RC1)arg2 isTracking:(BOOL)arg3 ;
-(float)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2 ;
-(double)waveformSelectionOverlay:(id)arg1 timeForOffset:(float)arg2 ;
-(void)setSelectedTimeRange:(SCD_Struct_RC1)arg1 ;
-(void)setSelectionVisibleMargin:(float)arg1 ;
-(id)waveformColor;
-(CGRect)waveformBoundaryRect;
-(float)currentPlayheadPosition;
-(BOOL)scrubbingEnabled;
-(BOOL)isSelectedTimeRangeEditingEnabled;
-(unsigned)currentTimeDisplayOptions;
-(float)selectionVisibleMargin;
-(BOOL)isAutoscrolling;
-(void).cxx_destruct;
@end

