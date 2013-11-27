/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/Clock.h>

@protocol WorldClockViewBackgroundHost;
@class WorldClockCity, NSTimeZone, , AnalogClockView, UIButton, UIImageView, UILabel, NSDateFormatter;

@interface WorldClockView : UIView <Clock> {

	int _appearance;
	int _orientation;
	WorldClockCity* _city;
	NSTimeZone* _timeZone;
	<WorldClockViewBackgroundHost>* _backgroundHost;
	AnalogClockView* _analogClock;
	UIButton* _addClockButton;
	UIImageView* _highlightImageView;
	float _highlightAlpha;
	UILabel* _nameLabel;
	UILabel* _dayLabel;
	UILabel* _weatherLabel;
	UIButton* _listButton;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _dayFormatter;
	int _nowInMinutes;

}

@property (assign,nonatomic) int appearance;                                               //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) WorldClockCity * city;                                        //@synthesize city=_city - In the implementation block
@property (assign,getter=isTileHighlighted,nonatomic) BOOL tileHighlighted; 
@property (assign,nonatomic) <WorldClockViewBackgroundHost> * backgroundHost;              //@synthesize backgroundHost=_backgroundHost - In the implementation block
@property (nonatomic,readonly) AnalogClockView * analogClock;                              //@synthesize analogClock=_analogClock - In the implementation block
@property (nonatomic,readonly) UIButton * addClockButton;                                  //@synthesize addClockButton=_addClockButton - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * dayLabel;                                         //@synthesize dayLabel=_dayLabel - In the implementation block
@property (nonatomic,readonly) UILabel * weatherLabel;                                     //@synthesize weatherLabel=_weatherLabel - In the implementation block
@property (nonatomic,readonly) UIButton * listButton;                                      //@synthesize listButton=_listButton - In the implementation block
@property (nonatomic,readonly) int runMode; 
+(id)alphaMatchedImageWithColor:(id)arg1 forImage:(id)arg2 ;
-(void)handleLocaleChange;
-(void)updateAppearanceIfNeeded;
-(void)weatherDataUpdated;
-(id)addClockButton;
-(id)weatherLabel;
-(id)dayLabel;
-(id)listButton;
-(void)updateHighlightWithImage:(id)arg1 ;
-(void)updateFullscreenBackground;
-(int)appearanceOrientationFromCurrentInterfaceOrientation;
-(BOOL)doesAppearanceOrientationMatchInterfaceOrientation;
-(void)setupWorldClockAppearanceTile;
-(void)setupWorldClockAppearanceTileAdd;
-(void)setupWorldClockAppearanceFullScreenPortraitUpdatingOrientationOnly:(BOOL)arg1 ;
-(void)setupWorldClockAppearanceFullScreenLandscapeUpdatingOrientationOnly:(BOOL)arg1 ;
-(void)removeAddButton;
-(void)removeAnalogClock;
-(void)handleMidnightCrossing;
-(void)handleNighttimeChange;
-(void)handleNoonCrossing;
-(void)updateColorThemeForTile;
-(void)updateDay;
-(void)updateColorThemeForFullscreen;
-(void)setupAnalogClockForStyle:(int)arg1 ;
-(void)setupTimeDependentAppearanceProperties;
-(void)setTileHighlighted:(BOOL)arg1 ;
-(void)updateCombinedTime;
-(void)setupAddButton;
-(BOOL)isTileHighlighted;
-(void)setBackgroundHost:(id)arg1 ;
-(id)backgroundHost;
-(id)city;
-(void)setCity:(id)arg1 ;
-(id)nameLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)appearance;
-(void)start;
-(double)updateInterval;
-(void)stop;
-(double)coarseUpdateInterval;
-(void)updateTimeContinuously:(int)arg1 ;
-(int)runMode;
-(id)analogClock;
-(void)updateTime;
-(void)setAppearance:(int)arg1 ;
@end

