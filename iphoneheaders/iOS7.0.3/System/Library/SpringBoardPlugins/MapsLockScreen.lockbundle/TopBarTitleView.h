/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSAttributedString, NSString;

@interface TopBarTitleView : UIView {

	BOOL _allowsVeryLowMinimumScale;
	UIView* _clippingView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UILabel* _extraDetailLabel;
	float _availableHeight;
	int _style;
	BOOL _isTitleAttributed;
	BOOL _isDetailAttributed;
	BOOL _isExtraDetailAttributed;
	BOOL _isMini;
	BOOL _isDimmed;
	CGRect _idealBounds;
	CGRect _maxBounds;

}

@property (nonatomic,@dynamic,copy) NSAttributedString * attributedTitleLabelText; 
@property (nonatomic,@dynamic,copy) NSString * titleLabelText; 
@property (nonatomic,@dynamic,copy) NSString * accessibilityTitleLabelText; 
@property (nonatomic,copy) NSAttributedString * attributedDetailLabelText; 
@property (nonatomic,@dynamic,copy) NSString * detailLabelText; 
@property (nonatomic,@dynamic,copy) NSString * accessibilityDetailLabelText; 
@property (nonatomic,copy) NSAttributedString * attributedExtraDetailLabelText; 
@property (nonatomic,readonly) UILabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                           //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,getter=isMini,nonatomic,@dynamic) BOOL mini; 
@property (assign,nonatomic) BOOL allowsVeryLowMinimumScale;                                    //@synthesize allowsVeryLowMinimumScale=_allowsVeryLowMinimumScale - In the implementation block
@property (assign,nonatomic) int style;                                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGRect idealBounds;                                                //@synthesize idealBounds=_idealBounds - In the implementation block
@property (assign,nonatomic) CGRect maxBounds;                                                  //@synthesize maxBounds=_maxBounds - In the implementation block
+(int)titleStyleForActivity:(int)arg1 ;
-(void)setShowsDimmedDisplay:(BOOL)arg1 animation:(id)arg2 ;
-(void)updateEstimatesDisplayGuidanceState:(int)arg1 timeIntervalToDestination:(double)arg2 distanceToDestination:(double)arg3 isCompact:(BOOL)arg4 isDimmed:(BOOL)arg5 destinationDisplayName:(id)arg6 expandedTravelTime:(id)arg7 distanceString:(id)arg8 ;
-(void)setTitleLabelText:(id)arg1 ;
-(id)titleLabelText;
-(void)setDetailLabelText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 titleStyle:(int)arg2 ;
-(void)refreshStyle;
-(void)_repositionLabelsSkipRepositioningIfUnchanged:(BOOL)arg1 ;
-(void)crossFadeLabels;
-(BOOL)isDetailLabelTextEmpty;
-(float)_paddingForLabels;
-(BOOL)isTitleLabelTextEmpty;
-(BOOL)_reduceFrameHeightForMultiLine:(CGRect)arg1 titleFont:(id)arg2 titleFrame:(CGRect*)arg3 detailFrame:(CGRect*)arg4 ;
-(void)_setFramesForSingleLine:(CGRect*)arg1 detailFrame:(CGRect*)arg2 extraDetailFrame:(CGRect*)arg3 ;
-(void)_setFramesForBounds:(CGRect)arg1 ;
-(void)_repositionLabelsOnSameLineForIPad;
-(id)attributedTitleLabelText;
-(id)attributedDetailLabelText;
-(id)detailLabelText;
-(BOOL)allowsVeryLowMinimumScale;
-(void)_updateAfterTextChange;
-(BOOL)isMini;
-(id)attributedExtraDetailLabelText;
-(void)setAccessibilityDetailLabelText:(id)arg1 ;
-(void)setTitle:(id)arg1 detail:(id)arg2 extraDetail:(id)arg3 ;
-(void)setAttributedExtraDetailLabelText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 activity:(int)arg2 ;
-(void)setAvailableHeight:(float)arg1 ;
-(void)setAttributedTitleLabelText:(id)arg1 ;
-(id)accessibilityTitleLabelText;
-(void)setAccessibilityTitleLabelText:(id)arg1 ;
-(void)setAttributedDetailLabelText:(id)arg1 ;
-(id)accessibilityDetailLabelText;
-(void)setAllowsVeryLowMinimumScale:(BOOL)arg1 ;
-(CGRect)idealBounds;
-(void)setIdealBounds:(CGRect)arg1 ;
-(CGRect)maxBounds;
-(void)setMaxBounds:(CGRect)arg1 ;
-(id)newContainingBarButtonItem;
-(id)detailLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(id)titleLabel;
-(id)textColor;
@end

