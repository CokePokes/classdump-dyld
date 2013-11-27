/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SBFLockScreenDateView, SBLegibilityView, UILabel, _UILegibilityLabel, SBFakeStatusBarView, SBFLockScreenSimpleDateFormatter, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView {

	UIView* _wallpaperView;
	SBFLockScreenDateView* _dateView;
	SBLegibilityView* _cameraView;
	UILabel* _slideToUnlockView;
	_UILegibilityLabel* _slideToUnlockLegibilityLabel;
	SBFakeStatusBarView* _statusBar;
	SBFLockScreenSimpleDateFormatter* _dateFormatter;
	_UILegibilitySettings* _legibilitySettings;

}
+(id)preview;
-(id)_legibilityPrototypeSettings;
-(void)_layoutSlideToUnlockView;
-(id)initWithFrame:(CGRect)arg1 legibilitySettings:(id)arg2 ;
-(void)_setupWallpaperView;
-(void)_setupDateView;
-(void)_setupSlideToUnlockView;
-(void)_setupCameraView;
-(void)_setupStatusBar;
-(void)_layoutStatusBar;
-(void)_layoutCameraView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
@end

