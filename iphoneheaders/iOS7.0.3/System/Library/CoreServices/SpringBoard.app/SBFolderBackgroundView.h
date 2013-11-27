/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISettingsKeyObserver.h>
#import <SpringBoard/SBWallpaperObserver.h>

@class SBWallpaperEffectView, UIImageView, SBFolderSettings;

@interface SBFolderBackgroundView : UIView <_UISettingsKeyObserver, SBWallpaperObserver> {

	SBWallpaperEffectView* _backdropView;
	UIImageView* _backgroundImageView;
	SBFolderSettings* _folderSettings;

}
+(CGSize)folderBackgroundSize;
+(float)cornerRadiusToInsetContent;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)_configureBackground;
-(void)willAnimate;
-(void)didAnimate;
-(void)adjustCornerRadiusForMagnificationFraction:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
@end

