/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MNGuidanceManeuverView, MNSignStyle, UIImage;

@interface MNSimpleSignView : UIView {

	UIImageView* _backgroundView;
	MNGuidanceManeuverView* _maneuverView;
	UIEdgeInsets _maneuverViewEdgeInsets;
	UIImageView* _shieldView;
	MNSignStyle* _style;

}

@property (assign,nonatomic) UIEdgeInsets maneuverViewEdgeInsets;                  //@synthesize maneuverViewEdgeInsets=_maneuverViewEdgeInsets - In the implementation block
@property (nonatomic,readonly) MNGuidanceManeuverView * maneuverView; 
@property (nonatomic,@dynamic,retain) UIImage * shieldImage; 
@property (nonatomic,retain) MNSignStyle * style;                                  //@synthesize style=_style - In the implementation block
-(id)maneuverView;
-(id)shieldImage;
-(void)setManeuverViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setShieldImage:(id)arg1 ;
-(void)updateStyleForTheme;
-(id)shieldImageView;
-(UIEdgeInsets)maneuverViewEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStyle:(id)arg1 ;
-(id)style;
@end

