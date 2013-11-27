/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLApplicationCameraViewController.h>

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUApplicationCameraViewController : PLApplicationCameraViewController {

	CAMCameraRollSpec* _spec;
	DeferredFrameworkLoader* _deferredLoader;

}

@property (nonatomic,retain) CAMCameraRollSpec * spec;                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) DeferredFrameworkLoader * deferredLoader;              //@synthesize deferredLoader=_deferredLoader - In the implementation block
-(void)dealloc;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)definesPresentationContext;
-(id)navigationController:(id)arg1 animatorForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2 ;
-(BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1 ;
-(id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3 ;
-(id)newAlbumNavigationControllerForAlbum:(NSObject*)arg1 ;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(NSObject*)arg2 ;
-(id)deferredLoader;
-(void)setDeferredLoader:(id)arg1 ;
-(id)spec;
-(void)setSpec:(id)arg1 ;
@end

