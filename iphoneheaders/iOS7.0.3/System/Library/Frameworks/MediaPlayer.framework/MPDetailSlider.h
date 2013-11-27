/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UISlider.h>
#import <MediaPlayer/MPDetailedScrubbing.h>
#import <MediaPlayer/MPDetailScrubControllerDelegate.h>

@class UILabel, MPDetailScrubController, NSTimer, UIView, UIImageView, NSString;

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate> {

	UILabel* _currentTimeInverseLabel;
	UILabel* _currentTimeLabel;
	MPDetailScrubController* _scrubController;
	BOOL _allowsScrubbing;
	BOOL _autoscrubActive;
	NSTimer* _autoscrubTimer;
	double _availableDuration;
	BOOL _canCommit;
	double _currentTime;
	id _delegate;
	UIView* _downloadingTrackOverlay;
	double _duration;
	UIImageView* _glowDetailScrubImageView;
	BOOL _isTracking;
	float _minTimeLabelWidth;
	float _maxTrackWidth;
	CGPoint _previousLocationInView;
	int _style;
	UIEdgeInsets _timeLabelInsets;
	int _timeLabelStyle;
	UIImageView* _thumbImageView;
	float _trackInset;
	float _detailScrubbingVerticalRange;

}

@property (assign,nonatomic,__weak) <MPDetailSliderDelegate> * delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsScrubbing;                                           //@synthesize allowsScrubbing=_allowsScrubbing - In the implementation block
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) float detailScrubbingVerticalRange;                             //@synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) double duration;                                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double availableDuration;                                       //@synthesize availableDuration=_availableDuration - In the implementation block
@property (nonatomic,readonly) BOOL detailScrubbingAvailableForCurrentDuration; 
@property (assign,nonatomic) int timeLabelStyle;                                             //@synthesize timeLabelStyle=_timeLabelStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets timeLabelInsets;                                   //@synthesize timeLabelInsets=_timeLabelInsets - In the implementation block
@property (assign,nonatomic) float minTimeLabelWidth;                                        //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (nonatomic,readonly) NSString * localizedScrubSpeedText; 
+(Class)labelClass;
+(float)defaultHeight;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(BOOL)allowsDetailScrubbing;
-(id)localizedScrubSpeedText;
-(void)setAvailableDuration:(double)arg1 ;
-(BOOL)detailScrubbingAvailableForCurrentDuration;
-(void)setTimeLabelStyle:(int)arg1 ;
-(void)cancelTracking;
-(void)setValue:(float)arg1 duration:(double)arg2 ;
-(void)_setupControlsForStyle;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 maxTrackWidth:(float)arg3 ;
-(CGRect)thumbHitRect;
-(float)timeLabelVerticalOffsetForStyle:(int)arg1 ;
-(id)timeLabelFontForStyle:(int)arg1 ;
-(id)timeLabelTextColorForStyle:(int)arg1 ;
-(CGSize)timeLabelShadowOffsetForStyle:(int)arg1 ;
-(id)timeLabelShadowColorForStyle:(int)arg1 ;
-(id)_stringForCurrentTime:(double)arg1 ;
-(float)timeLabelHorizontalOffsetForStyle:(int)arg1 ;
-(id)_stringForInverseCurrentTime:(double)arg1 ;
-(void)_updateTrackInset;
-(void)_setValueWhileTracking:(float)arg1 duration:(double)arg2 ;
-(void)_updateForAvailableDuraton;
-(void)_updateTimeDisplayForTime:(double)arg1 ;
-(void)_commitValue;
-(void)_autoscrubTick:(id)arg1 ;
-(void)_resetScrubInfo;
-(void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2 ;
-(BOOL)allowsScrubbing;
-(id)_modernThumbImageWithColor:(id)arg1 height:(float)arg2 includeShadow:(BOOL)arg3 ;
-(id)_colorSliceImageWithColor:(id)arg1 height:(float)arg2 ;
-(id)_stringForTime:(double)arg1 ;
-(CGRect)thumbViewRect;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailScrubController:(id)arg1 didChangeScrubSpeed:(int)arg2 ;
-(void)setAllowsScrubbing:(BOOL)arg1 ;
-(void)setMinTimeLabelWidth:(float)arg1 ;
-(void)setTimeLabelInsets:(UIEdgeInsets)arg1 ;
-(double)availableDuration;
-(float)detailScrubbingVerticalRange;
-(void)setDetailScrubbingVerticalRange:(float)arg1 ;
-(UIEdgeInsets)timeLabelInsets;
-(int)timeLabelStyle;
-(float)minTimeLabelWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isTracking;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(id)currentThumbImage;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

