/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <EventKitUI/EKCurrentTimeMarkerViewUpdating.h>

@protocol EKDayTimeViewDelegate;
@class UIView, EKCurrentTimeMarkerView, UIColor, ;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating> {

	UIView* _topContentView;
	UIView* _bottomContentView;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	BOOL _useLightText;
	double _highlightedHour;
	int _orientation;
	float _hourSize;
	float _designatorSize;
	EKCurrentTimeMarkerView* _timeMarker;
	UIView* _timeMarkerExtension;
	BOOL _showsTimeMarker;
	BOOL _showsTimeMarkerExtension;
	BOOL _usesLightText;
	UIColor* _timeColor;
	float _hoursToPad;
	float _hourHeight;
	float _timeWidth;
	<EKDayTimeViewDelegate>* _delegate;
	NSRange _hoursToRender;

}

@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL showsRightBorder; 
@property (assign,nonatomic) BOOL showsTimeMarker;                                   //@synthesize showsTimeMarker=_showsTimeMarker - In the implementation block
@property (assign,nonatomic) BOOL showsTimeMarkerExtension;                          //@synthesize showsTimeMarkerExtension=_showsTimeMarkerExtension - In the implementation block
@property (assign,nonatomic) BOOL usesLightText;                                     //@synthesize usesLightText=_usesLightText - In the implementation block
@property (assign,nonatomic) double highlightedHour; 
@property (assign,nonatomic) float hoursToPad;                                       //@synthesize hoursToPad=_hoursToPad - In the implementation block
@property (nonatomic,retain) UIColor * timeColor;                                    //@synthesize timeColor=_timeColor - In the implementation block
@property (nonatomic,readonly) EKCurrentTimeMarkerView * timeMarker; 
@property (assign,nonatomic) NSRange hoursToRender;                                  //@synthesize hoursToRender=_hoursToRender - In the implementation block
@property (nonatomic,readonly) float hourHeight;                                     //@synthesize hourHeight=_hourHeight - In the implementation block
@property (nonatomic,readonly) float timeWidth;                                      //@synthesize timeWidth=_timeWidth - In the implementation block
@property (nonatomic,readonly) float defaultHeight; 
@property (assign,nonatomic,__weak) <EKDayTimeViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)defaultHeightForOrientation:(int)arg1 ;
+(float)timeWidthForOrientation:(int)arg1 ;
+(float)timeInsetForOrientation:(int)arg1 ;
+(float)hourHeightForOrientation:(int)arg1 ;
+(void)setVerticalPadding:(float)arg1 ;
+(float)hourSizeForOrientation:(int)arg1 ;
+(void)_calculateWidthForOrientation:(int)arg1 ;
+(float)_hourWidthForOrientation:(int)arg1 ;
+(void)_invalidateWidth;
+(float)designatorSizeForOrientation:(int)arg1 ;
+(float)timeVerticalInsetForOrientation:(int)arg1 ;
+(float)verticalPadding;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)_localeChanged;
-(void)setUsesLightText:(BOOL)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)updateMarkerPosition;
-(BOOL)showsTimeMarker;
-(void)setShowsRightBorder:(BOOL)arg1 ;
-(float)_positionOfSecond:(int)arg1 ;
-(id)timeColor;
-(NSRange)hoursToRender;
-(void)setHoursToRender:(NSRange)arg1 ;
-(void)setHighlightedHour:(double)arg1 ;
-(double)highlightedHour;
-(float)timeWidth;
-(float)hourHeight;
-(BOOL)showsRightBorder;
-(void)drawRect:(CGRect)arg1 forContentView:(id)arg2 withHourRange:(NSRange)arg3 ;
-(void)setShowsTimeMarkerExtension:(BOOL)arg1 ;
-(BOOL)showsTimeMarkerExtension;
-(BOOL)usesLightText;
-(float)hoursToPad;
-(void)setHoursToPad:(float)arg1 ;
-(float)topPadding;
-(id)timeMarker;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(float)defaultHeight;
-(void)setTimeColor:(id)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void).cxx_destruct;
@end

