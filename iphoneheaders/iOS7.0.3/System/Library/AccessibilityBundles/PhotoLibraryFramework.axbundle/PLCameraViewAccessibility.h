/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
#import <PhotoLibraryFramework/PLCameraViewAccessibility_super.h>

@interface PLCameraViewAccessibility : PLCameraViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityFaceElements;
-(void)_detectLuminance:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateOverlayControlsAccessibility;
-(void)_accessibilityDetectFaces:(BOOL)arg1 controller:(id)arg2 ;
-(void)initializeFaceAPI;
-(BOOL)_deviceSupportsHardwareFaceDetection;
-(void)_accessibilityDetectFaces:(BOOL)arg1 controller:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(BOOL)markDetectionInProgress;
-(void)performDetectionsWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)getLocalizedStringForFaceLocation:(int)arg1 ;
-(void)updateAccessibleFaceElementsWithFaces:(id)arg1 ;
-(void)_handleFaceOutput:(id)arg1 ;
-(void)markDetectionFinished;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)setCameraMode:(int)arg1 ;
-(void)cameraControllerModeDidChange:(id)arg1 ;
-(void)cameraControllerSessionDidStart:(id)arg1 ;
-(void)cameraControllerSessionDidStop:(id)arg1 ;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1 ;
-(void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 spec:(id)arg2 ;
-(void)viewWillBeDisplayed;
-(void)_resetZoom;
-(BOOL)_shouldHideZoomSliderForMode:(int)arg1 ;
-(void)stopPanorama;
-(void)_toggleCameraButtonWasPressed:(id)arg1 ;
-(void)_reallyToggleCamera;
-(BOOL)_zoomIsAllowed;
-(void)showZoomSlider;
-(void)_filterButtonTapped:(id)arg1 ;
-(void)toggleHDR:(BOOL)arg1 ;
-(void)hideZoomSlider;
-(void)_accessibilityLoadAccessibilityInformation;
@end

