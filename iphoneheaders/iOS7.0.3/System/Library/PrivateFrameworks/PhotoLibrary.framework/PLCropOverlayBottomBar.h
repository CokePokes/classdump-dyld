/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class CAMBottomBar, PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView {

	BOOL _playingVideo;
	BOOL _inPopover;
	int _style;
	CAMBottomBar* _cameraBottomBar;
	PLCropOverlayPreviewBottomBar* _previewBottomBar;
	PLCropOverlayWallpaperBottomBar* _wallpaperBottomBar;

}

@property (assign,nonatomic) int style;                                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CAMBottomBar * cameraBottomBar;                                    //@synthesize cameraBottomBar=_cameraBottomBar - In the implementation block
@property (nonatomic,retain) PLCropOverlayPreviewBottomBar * previewBottomBar;                  //@synthesize previewBottomBar=_previewBottomBar - In the implementation block
@property (nonatomic,retain) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;              //@synthesize wallpaperBottomBar=_wallpaperBottomBar - In the implementation block
@property (assign,getter=isPlayingVideo,nonatomic) BOOL playingVideo;                           //@synthesize playingVideo=_playingVideo - In the implementation block
@property (assign,getter=isInPopover,nonatomic) BOOL inPopover;                                 //@synthesize inPopover=_inPopover - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)_updateStyle;
-(void)setStyle:(int)arg1 animated:(BOOL)arg2 ;
-(void)setInPopover:(BOOL)arg1 ;
-(void)setPreviewBottomBar:(id)arg1 ;
-(void)setWallpaperBottomBar:(id)arg1 ;
-(id)cameraBottomBar;
-(void)setCameraBottomBar:(id)arg1 ;
-(id)wallpaperBottomBar;
-(id)previewBottomBar;
-(void)setPlayingVideo:(BOOL)arg1 ;
-(void)togglePlaybackState;
-(BOOL)isPlayingVideo;
-(void)_commonPLCropOverlayBottomBarInitialization;
-(void)_updateBottomBars;
-(void)_updatePreviewBottomBarForPlaybackState;
-(BOOL)_isEditingStyle:(int)arg1 ;
-(BOOL)isInPopover;
@end

