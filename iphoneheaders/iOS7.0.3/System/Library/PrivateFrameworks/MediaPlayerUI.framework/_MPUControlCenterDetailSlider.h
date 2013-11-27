/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <SpringBoardUI/SBUIControlCenterSlider.h>
#import <MediaPlayer/MPDetailedScrubbing.h>
#import <MediaPlayerUI/_MPUSliderScrubForwarding.h>

@class MPDetailScrubController;

@interface _MPUControlCenterDetailSlider : SBUIControlCenterSlider <MPDetailedScrubbing, _MPUSliderScrubForwarding> {

	MPDetailScrubController* _scrubController;

}

@property (assign,nonatomic,__weak) MPDetailScrubController * scrubController;              //@synthesize scrubController=_scrubController - In the implementation block
-(CGRect)thumbHitRect;
-(CGRect)thumbViewRect;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setScrubController:(id)arg1 ;
-(id)scrubController;
-(void).cxx_destruct;
@end

