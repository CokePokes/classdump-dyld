/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol QLMovieViewControllerDelegate <NSObject>
@required
-(void)movieViewController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
-(void)movieViewController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
-(void)hideOverlayWithDuration:(double)arg1;
-(void)movieViewController:(id)arg1 setMoviePosition:(float)arg2;
-(void)playbackFailedInMovieViewController:(id)arg1;
-(void)willEnterFullScreenWithHostedWindow:(id)arg1;
-(void)didExitFullScreen;
@end

