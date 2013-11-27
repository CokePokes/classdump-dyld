/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PassKit/AVCaptureMetadataOutputObjectsDelegate.h>
#import <PhotoLibrary/PLCameraEffectsRendererDelegate.h>
#import <Celestial/SBSAccelerometerDelegate.h>
#import <PhotoLibrary/AVCaptureFileOutputRecordingDelegate.h>
#import <CoreRecognition/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue, PLCameraControllerDelegate, OS_dispatch_source;
@class AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureStillImageOutput, AVCaptureMovieFileOutput, AVCaptureVideoDataOutput, AVCaptureMetadataOutput, AVCaptureDeviceFormat, NSObject, AVCaptureOutput, AVCaptureVideoPreviewLayer, , NSString, SBSAccelerometer, NSTimer, PLCameraEffectsRenderer, NSArray, NSDictionary, NSMutableArray;

@interface PLCameraController : NSObject <AVCaptureMetadataOutputObjectsDelegate, PLCameraEffectsRendererDelegate, SBSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVCaptureSession* _avCaptureSession;
	AVCaptureDevice* _avCaptureDeviceFront;
	AVCaptureDevice* _avCaptureDeviceBack;
	AVCaptureDevice* _avCaptureDeviceAudio;
	AVCaptureDeviceInput* _avCaptureInputFront;
	AVCaptureDeviceInput* _avCaptureInputBack;
	AVCaptureDeviceInput* _avCaptureInputAudio;
	AVCaptureStillImageOutput* _avCaptureOutputPhoto;
	AVCaptureMovieFileOutput* _avCaptureOutputVideo;
	AVCaptureVideoDataOutput* _avCaptureOutputPanorama;
	AVCaptureVideoDataOutput* _avCaptureOutputEffectPreview;
	AVCaptureMetadataOutput* _avCaptureOutputMetadata;
	AVCaptureDeviceFormat* _mogulFormatBack;
	AVCaptureDeviceFormat* _mogulFormatFront;
	OpaqueFigSampleBufferProcessorRef _panoramaProcessor;
	CAImageQueueRef _panoramaImageQueue;
	CGSize _panoramaPreviewSize;
	float _panoramaPreviewScale;
	NSObject<OS_dispatch_queue>* _avCaptureSessionDispatchQueue;
	NSObject<OS_dispatch_queue>* _avCaptureOutputMetadataQueue;
	AVCaptureDevice* _currentDevice;
	AVCaptureDeviceInput* _currentInput;
	AVCaptureOutput* _currentOutput;
	AVCaptureVideoPreviewLayer* _previewLayer;
	CGRect _cleanAperture;
	BOOL _shouldBeStopped;
	int _cameraMode;
	int _cameraDevice;
	int _flashMode;
	int _captureOrientation;
	BOOL _imageWriterQueueIsAvailable;
	unsigned _ioSurfaceCounter;
	BOOL _hdrEnabled;
	BOOL _hdrCaptureIncludesEV0Image;
	int _hdrEV0PhotoCaptureCount;
	<PLCameraControllerDelegate>* _delegate;
	double _maximumCaptureDuration;
	int _videoCaptureQuality;
	NSString* _videoCapturePath;
	SBSAccelerometer* _accelerometer;
	CGImageRef _lastVideoPreviewFrameImageRef;
	BOOL _lockFocusLock;
	BOOL _lockFocusAfterFocusFinishes;
	BOOL _isFocusingOnFace;
	int _cameraOrientation;
	NSTimer* _idleTimerTimer;
	BOOL _delaySuspend;
	NSTimer* _delaySuspendTimer;
	float _maxVideoZoomFactorRear;
	float _maxVideoZoomFactorFront;
	struct {
		unsigned supportsVideo : 1;
		unsigned supportsFocus : 1;
		unsigned supportsExposure : 1;
		unsigned supportsHDRRear : 1;
		unsigned supportsHDRFront : 1;
		unsigned supportsAvalancheRear : 1;
		unsigned supportsAvalancheFront : 1;
		unsigned supportsMogulRear : 1;
		unsigned supportsMogulFront : 1;
		unsigned supportsLiveEffects : 1;
		unsigned supportsPanorama : 1;
		unsigned supportsVideoStillCapture : 1;
		unsigned supportsPreviewDuringHDR : 1;
		unsigned hasFlash : 1;
		unsigned hasBackCamera : 1;
		unsigned hasFrontCamera : 1;
		unsigned deferStartVideoCapture : 1;
		unsigned inCall : 1;
		unsigned isCapturingPanorama : 1;
		unsigned isProcessingPanorama : 1;
		unsigned focusDisabled : 1;
		unsigned focusWasModified : 1;
		unsigned serverDied : 1;
		unsigned didGetDeviceUnavailableInBackground : 1;
		unsigned didSetLocationData : 1;
		unsigned isChangingMode : 1;
		unsigned flashWillFireAutomatically : 1;
		unsigned isCameraApp : 1;
		unsigned didSendPreviewStartedCallbackToEmptyDelegate : 1;
		unsigned didGetPreviewStartedCallbackAfterResume : 1;
		unsigned logFocusInfo : 1;
		unsigned logPreviewInfo : 1;
		unsigned logCaptureInfo : 1;
		unsigned logFlashInfo : 1;
		unsigned logDebugInfo : 1;
		unsigned logPanoInfo : 1;
		unsigned enable720p60Recording : 1;
		unsigned pptTestDisableAutofocus : 1;
		unsigned isInternalInstall : 1;
		unsigned shouldTearDownPano : 1;
		unsigned convertSampleBufferToJPEG : 1;
		unsigned delegateDidStartSession : 1;
		unsigned delegateWillStartPreview : 1;
		unsigned delegatePreviewDidStart : 1;
		unsigned delegateSessionDidStart : 1;
		unsigned delegateDidStopSession : 1;
		unsigned delegateWillStopSession : 1;
		unsigned delegateSessionDidStop : 1;
		unsigned delegateSessionWasInterrupted : 1;
		unsigned delegateSessionInterruptionEnded : 1;
		unsigned delegateServerDied : 1;
		unsigned delegateCleanApertureDidChange : 1;
		unsigned delegateModeWillChange : 1;
		unsigned delegateModeDidChange : 1;
		unsigned delegateWillTakePhoto : 1;
		unsigned delegateDidTakePhoto : 1;
		unsigned delegateCapturedPhoto : 1;
		unsigned delegateDidChangeCaptureAbility : 1;
		unsigned delegateDidChangePanoramaConfiguration : 1;
		unsigned delegateDidUpdatePanoramaPreview : 1;
		unsigned delegateDidReceivePanoramaIssue : 1;
		unsigned delegateDidStartPanoramaCapture : 1;
		unsigned delegateWillStopPanoramaCapture : 1;
		unsigned delegatePanoramaWillStartProcessing : 1;
		unsigned delegatePanoramaDidStopProcessing : 1;
		unsigned delegateCapturedPanorama : 1;
		unsigned delegateVideoCaptureDidStart : 1;
		unsigned delegateDidStopVideoCapture : 1;
		unsigned delegateVideoCaptureDidStop : 1;
		unsigned delegateWillStartAutofocus : 1;
		unsigned delegateFocusDidStart : 1;
		unsigned delegateFocusDidEnd : 1;
		unsigned delegateFaceMetadataDidChange : 1;
		unsigned delegateVideoZoomFactorDidChange : 1;
		unsigned delegateTorchAvailabilityChanged : 1;
		unsigned delegateHDRSuggestionChanged : 1;
	}  _cameraFlags;
	NSObject<OS_dispatch_queue>* _dispatchTimerQueue;
	NSObject<OS_dispatch_source>* _dispatchTimer;
	BOOL __previewPaused;
	BOOL __previewLayerEnabledForRenderer;
	BOOL __videoDataOutputEnabledForRenderer;
	BOOL _performingTimedCapture;
	BOOL _disableAllPreviewSuspensionDuringCapture;
	BOOL __atomicEffectsAvailable;
	BOOL __configuringCamera;
	BOOL __atomicModeChangeWaitingForPreviewStarted;
	BOOL __atomicModeChangeWaitingForConfigureSession;
	BOOL __wasStillImageStabilzationOnBeforeTimedCapture;
	/*^block*/ id postSessionSetupBlock;
	PLCameraEffectsRenderer* _effectsRenderer;
	NSArray* _supportedCameraModes;
	NSObject<OS_dispatch_queue>* __effectFilterIndexQueue;
	NSDictionary* __effectFilterIndices;
	NSObject<OS_dispatch_queue>* __captureIsolationQueue;
	NSMutableArray* __currentFaceMetadata;

}

@property (nonatomic,readonly) AVCaptureSession * currentSession;                                                                                                                      //@synthesize avCaptureSession=_avCaptureSession - In the implementation block
@property (nonatomic,readonly) AVCaptureStillImageOutput * imageOutput;                                                                                                                //@synthesize avCaptureOutputPhoto=_avCaptureOutputPhoto - In the implementation block
@property (assign,nonatomic) AVCaptureDevice * currentDevice;                                                                                                                          //@synthesize currentDevice=_currentDevice - In the implementation block
@property (assign,nonatomic) AVCaptureDeviceInput * currentInput;                                                                                                                      //@synthesize currentInput=_currentInput - In the implementation block
@property (assign,nonatomic) AVCaptureOutput * currentOutput;                                                                                                                          //@synthesize currentOutput=_currentOutput - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;                                                                                                              //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) int previewOrientation; 
@property (nonatomic,readonly) float panoramaPreviewScale;                                                                                                                             //@synthesize panoramaPreviewScale=_panoramaPreviewScale - In the implementation block
@property (nonatomic,readonly) CGSize panoramaPreviewSize;                                                                                                                             //@synthesize panoramaPreviewSize=_panoramaPreviewSize - In the implementation block
@property (assign,nonatomic) int captureOrientation;                                                                                                                                   //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (assign,nonatomic) int cameraMode; 
@property (assign,nonatomic) int flashMode; 
@property (assign,nonatomic) int cameraDevice; 
@property (assign,nonatomic) BOOL convertSampleBufferToJPEG; 
@property (assign,nonatomic) BOOL isCameraApp; 
@property (nonatomic,readonly) BOOL supportsHDR; 
@property (assign,getter=isHDREnabled,nonatomic) BOOL HDREnabled;                                                                                                                      //@synthesize hdrEnabled=_hdrEnabled - In the implementation block
@property (nonatomic,readonly) CGRect cleanAperture;                                                                                                                                   //@synthesize cleanAperture=_cleanAperture - In the implementation block
@property (nonatomic,copy) id postSessionSetupBlock; 
@property (nonatomic,readonly) int cameraOrientation; 
@property (retain) PLCameraEffectsRenderer * effectsRenderer;                                                                                                                          //@synthesize effectsRenderer=_effectsRenderer - In the implementation block
@property (nonatomic,readonly) NSArray * activeFilters; 
@property (nonatomic,copy) NSArray * supportedCameraModes;                                                                                                                             //@synthesize supportedCameraModes=_supportedCameraModes - In the implementation block
@property (assign,nonatomic) float videoZoomFactor; 
@property (assign,nonatomic) BOOL performingTimedCapture;                                                                                                                              //@synthesize performingTimedCapture=_performingTimedCapture - In the implementation block
@property (assign,nonatomic) BOOL disableAllPreviewSuspensionDuringCapture;                                                                                                            //@synthesize disableAllPreviewSuspensionDuringCapture=_disableAllPreviewSuspensionDuringCapture - In the implementation block
@property (assign,setter=_setEffectsAvailable:,nonatomic) BOOL _effectsAvailable; 
@property (setter=_setAtomicEffectsAvailable:) BOOL _atomicEffectsAvailable;                                                                                                           //@synthesize _atomicEffectsAvailable=__atomicEffectsAvailable - In the implementation block
@property (readonly) NSObject<OS_dispatch_queue> * _effectFilterIndexQueue;                                                                                                            //@synthesize _effectFilterIndexQueue=__effectFilterIndexQueue - In the implementation block
@property (setter=_setEffectFilterIndices:,nonatomic,retain) NSDictionary * _effectFilterIndices;                                                                                      //@synthesize _effectFilterIndices=__effectFilterIndices - In the implementation block
@property (setter=_setConfiguringCamera:,getter=_isConfiguringCamera) BOOL _configuringCamera;                                                                                         //@synthesize _configuringCamera=__configuringCamera - In the implementation block
@property (readonly) NSObject<OS_dispatch_queue> * _captureIsolationQueue;                                                                                                             //@synthesize _captureIsolationQueue=__captureIsolationQueue - In the implementation block
@property (assign,setter=_setModeChangeWaitingForPreviewStarted:,getter=_isModeChangeWaitingForPreviewStarted,nonatomic) BOOL _modeChangeWaitingForPreviewStarted; 
@property (setter=_setAtomicModeChangeWaitingForPreviewStarted:,getter=_isAtomicModeChangeWaitingForPreviewStarted) BOOL _atomicModeChangeWaitingForPreviewStarted;                    //@synthesize _atomicModeChangeWaitingForPreviewStarted=__atomicModeChangeWaitingForPreviewStarted - In the implementation block
@property (assign,setter=_setModeChangeWaitingForConfigureSession:,getter=_isModeChangeWaitingForConfigureSession,nonatomic) BOOL _modeChangeWaitingForConfigureSession; 
@property (setter=_setAtomicModeChangeWaitingForConfigureSession:,getter=_isAtomicModeChangeWaitingForConfigureSession) BOOL _atomicModeChangeWaitingForConfigureSession;              //@synthesize _atomicModeChangeWaitingForConfigureSession=__atomicModeChangeWaitingForConfigureSession - In the implementation block
@property (nonatomic,readonly) BOOL _wasStillImageStabilzationOnBeforeTimedCapture;                                                                                                    //@synthesize _wasStillImageStabilzationOnBeforeTimedCapture=__wasStillImageStabilzationOnBeforeTimedCapture - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _currentFaceMetadata;                                                                                                                  //@synthesize _currentFaceMetadata=__currentFaceMetadata - In the implementation block
@property (assign,setter=_setPreviewPaused:,getter=_isPreviewPaused,nonatomic) BOOL _previewPaused;                                                                                    //@synthesize _previewPaused=__previewPaused - In the implementation block
@property (assign,setter=_setPreviewLayerEnabledForRenderer:,nonatomic) BOOL _previewLayerEnabledForRenderer;                                                                          //@synthesize _previewLayerEnabledForRenderer=__previewLayerEnabledForRenderer - In the implementation block
@property (assign,setter=_setVideoDataOutputEnabledForRenderer:,nonatomic) BOOL _videoDataOutputEnabledForRenderer;                                                                    //@synthesize _videoDataOutputEnabledForRenderer=__videoDataOutputEnabledForRenderer - In the implementation block
+(id)sharedInstance;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(CGRect)faceRectangle;
-(BOOL)hasFlash;
-(int)flashMode;
-(void)setFlashMode:(int)arg1 ;
-(float)videoZoomFactor;
-(void)setVideoZoomFactor:(float)arg1 ;
-(void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2 ;
-(void)cancelVideoZoomRamp;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(BOOL)isReady;
-(void)_applicationSuspended:(id)arg1 ;
-(void)_serverDied:(id)arg1 ;
-(void)dealloc;
-(id)currentDevice;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)startVideoCapture;
-(void)stopVideoCapture;
-(int)cameraDevice;
-(void)setCameraDevice:(int)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)startPreview;
-(void)pausePreview;
-(void)stopPreview;
-(double)mogulFrameRate;
-(void)_synchronizeHDRSettings;
-(void)_callStateDidChange:(id)arg1 ;
-(void)_updateCallStatus;
-(void)_updateSupportedCameraModes;
-(void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2 ;
-(void)_setPreviewLayerEnabledForRenderer:(BOOL)arg1 ;
-(void)_setVideoDataOutputEnabledForRenderer:(BOOL)arg1 ;
-(void)_debug_teardownDispatchTimer;
-(void)_destroyCamera;
-(void)_setLocationEnabled:(BOOL)arg1 ;
-(void)setPostSessionSetupBlock:(/*^block*/ id)arg1 ;
-(void)_teardownDelaySuspendTimer;
-(void)_inCallStatusChanged:(BOOL)arg1 ;
-(BOOL)_isVideoMode:(int)arg1 ;
-(void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2 ;
-(void)_imageWriterQueueAvailabilityChanged;
-(void)_updateEffectsRendererMirroring;
-(BOOL)_safeSetCameraMode:(int)arg1 cameraDevice:(int)arg2 ;
-(id)currentOutput;
-(void)_setConfiguringCamera:(BOOL)arg1 ;
-(id)_videoModeSessionPreset;
-(BOOL)canCapturePhotoDuringRecording;
-(BOOL)supportsAvalancheForDevice:(int)arg1 ;
-(void)_setEffectsAvailable:(BOOL)arg1 ;
-(void)_setupPanoramaForDevice:(id)arg1 output:(id)arg2 options:(out const _CFDictionary*)arg3 ;
-(id)_currentVideoConnection;
-(void)_cleanupPanoramaOnSessionQueue:(BOOL)arg1 ;
-(void)_setFaceDetectionEnabled:(BOOL)arg1 forCaptureDevice:(id)arg2 captureOutput:(id)arg3 ;
-(void)setCurrentOutput:(id)arg1 ;
-(void)setCurrentInput:(id)arg1 ;
-(void)_updateEffectsVideoDataOutputEnabled;
-(void)_updatePreviewLayerEnabled;
-(void)_setModeChangeWaitingForPreviewStarted:(BOOL)arg1 ;
-(void)_setModeChangeWaitingForConfigureSession:(BOOL)arg1 ;
-(BOOL)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2 ;
-(void)_updateEffectsRendererFilterIndexForceStateChange:(BOOL)arg1 renderNotifyBlock:(/*^block*/ id)arg2 ;
-(id)effectsRenderer;
-(void)setCameraMode:(int)arg1 ;
-(void)enqueueBlockInCaptureSessionQueue:(/*^block*/ id)arg1 ;
-(void)_notifyControllerModeDidChange;
-(BOOL)_isModeChangeWaitingForPreviewStarted;
-(BOOL)_isModeChangeWaitingForConfigureSession;
-(void)enqueueBlockOnMainQueue:(/*^block*/ id)arg1 ;
-(BOOL)_isAtomicModeChangeWaitingForPreviewStarted;
-(void)_setAtomicModeChangeWaitingForPreviewStarted:(BOOL)arg1 ;
-(BOOL)_isAtomicModeChangeWaitingForConfigureSession;
-(void)_setAtomicModeChangeWaitingForConfigureSession:(BOOL)arg1 ;
-(int)cameraMode;
-(void)_jankyPreviewStartedWorkaround;
-(void)_previewStarted;
-(id)_debug_dispatchTimerQueue;
-(void)_debug_checkIris;
-(void)_debug_waitForIrisToOpen;
-(id)_mogulFormatFromDevice:(id)arg1 ;
-(BOOL)supportsLiveEffects;
-(void)_setEffectsRenderer:(id)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)_sessionStopped:(id)arg1 ;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(void)_wasInterrupted:(id)arg1 ;
-(void)_interruptionEnded:(id)arg1 ;
-(void)_movieFileRecordingCompleted:(id)arg1 ;
-(void)_inputPortFormatDescriptionDidChange:(id)arg1 ;
-(void)_focusHasChanged:(id)arg1 ;
-(/*^block*/ id)postSessionSetupBlock;
-(void)_setDelaySuspend:(BOOL)arg1 ;
-(void)_forceDelaySuspendTimeout;
-(void)_debug_cancelWaitForIris;
-(void)executeBlockOnMainQueue:(/*^block*/ id)arg1 ;
-(void)_tearDownCamera;
-(void)setEffectFilterIndices:(id)arg1 forceStateChange:(BOOL)arg2 ;
-(BOOL)_setupCamera;
-(id)previewLayer;
-(void)_startPreview:(/*^block*/ id)arg1 ;
-(id)currentInput;
-(void)_setOrientationEventsEnabled:(BOOL)arg1 ;
-(BOOL)_modeUsesCompassHeading;
-(void)_delayIdleTimerByTimeInterval:(double)arg1 ;
-(void)_setFlashMode:(int)arg1 force:(BOOL)arg2 ;
-(BOOL)isCapturingPanorama;
-(void)stopPanoramaCapture;
-(void)_resetIdleTimer;
-(BOOL)isCapturingVideo;
-(void)_recoverFromServerError;
-(BOOL)_isCountingHDREV0Captures;
-(int)captureOrientation;
-(void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2 ;
-(void)performAutofocusAfterCapture;
-(BOOL)isChangingModes;
-(BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1 ;
-(BOOL)isFocusing;
-(BOOL)isExposing;
-(void)_setOrientation;
-(BOOL)supportsPreviewDuringHDR;
-(BOOL)isHDREnabled;
-(void)_setOrientationForConnection:(id)arg1 ;
-(id)activeFilters;
-(id)_captureIsolationQueue;
-(IOSurfaceRef)_newFilteredSurfaceFromSurface:(IOSurfaceRef)arg1 filters:(id)arg2 ;
-(void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 ;
-(void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1 ;
-(void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id*)arg2 ;
-(void)setFaceDetectionEnabled:(BOOL)arg1 ;
-(BOOL)hasInheritedForegroundState;
-(BOOL)canCaptureVideo;
-(void)_setVideoCapturePath:(id)arg1 ;
-(id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1 ;
-(void)lockFocusForRecording;
-(double)minimumVideoCaptureDuration;
-(BOOL)canCapturePanorama;
-(void)lockFocusAndExposureForPano;
-(void)_panoramaDidStop;
-(BOOL)_isConfiguringCamera;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_panoramaDidReceiveIssueWithPanoramaString:(CFStringRef)arg1 ;
-(void)_cancelDelayedFocusRequests;
-(BOOL)_lockCurrentDeviceForConfiguration;
-(void)_unlockCurrentDeviceForConfiguration;
-(void)_autofocus:(BOOL)arg1 autoExpose:(BOOL)arg2 ;
-(BOOL)performingTimedCapture;
-(void)_autofocusAfterCapture;
-(BOOL)flashWillFire;
-(void)_lockFocus:(BOOL)arg1 lockExposure:(BOOL)arg2 lockWhiteBalance:(BOOL)arg3 ;
-(void)userInitiatedLockFocus;
-(void)_commonFocusFinished;
-(void)_focusOperationFinished;
-(void)_autofocusOperationFinished;
-(void)_lockedFocusOperationFinished;
-(void)_faceMetadataDidChange:(id)arg1 ;
-(void)_focusStarted;
-(void)_focusCompleted;
-(void)_exposureStarted;
-(void)_exposureCompleted;
-(void)_whiteBalanceStarted;
-(void)_whiteBalanceCompleted;
-(void)_flashStateChanged;
-(void)_torchLevelChanged;
-(void)_updateTorchAvailability;
-(void)_faceRectangleChanged;
-(void)_willTakePhoto;
-(void)_didTakePhoto;
-(BOOL)supportsHDRForDevice:(int)arg1 ;
-(BOOL)supportsHDR;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2 ;
-(float)minimumZoomFactorForDevice:(int)arg1 ;
-(float)maximumZoomFactorForDevice:(int)arg1 ;
-(float)_limitZoomFactor:(float)arg1 forDevice:(id)arg2 ;
-(BOOL)supportsVideoCapture;
-(BOOL)supportsPanorama;
-(void)_setSupportedCameraModes:(id)arg1 ;
-(unsigned)_activeFilterIndex;
-(BOOL)_effectsAvailable;
-(unsigned)effectFilterIndexForMode:(int)arg1 ;
-(id)_effectFilterIndexQueue;
-(id)_effectFilterIndices;
-(unsigned)_sanitizeEffectFilterIndex:(unsigned)arg1 forMode:(int)arg2 ;
-(void)_setEffectFilterIndices:(id)arg1 ;
-(void)_notifyEffectFilterIndexChanged;
-(BOOL)_atomicEffectsAvailable;
-(void)_setAtomicEffectsAvailable:(BOOL)arg1 ;
-(void)_setPerformingTimedCapture:(BOOL)arg1 ;
-(void)lockFocusForTimedCapture;
-(void)_setPreviewPaused:(BOOL)arg1 ;
-(BOOL)_isPreviewPaused;
-(BOOL)_previewLayerEnabledForRenderer;
-(BOOL)_videoDataOutputEnabledForRenderer;
-(void)cameraEffectsRendererDidStartPreview:(id)arg1 ;
-(void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2 ;
-(void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2 ;
-(void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2 ;
-(void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2 ;
-(BOOL)inCall;
-(void)captureIOSurface;
-(void)releaseIOSurface;
-(void)_setDefaultPrewarmDate:(id)arg1 ;
-(BOOL)hasFrontCamera;
-(BOOL)hasRearCamera;
-(void)setConvertSampleBufferToJPEG:(BOOL)arg1 ;
-(BOOL)convertSampleBufferToJPEG;
-(BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
-(void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2 effectFilterIndices:(id)arg3 ;
-(void)startPreview:(/*^block*/ id)arg1 ;
-(int)previewOrientation;
-(void)setPreviewOrientation:(int)arg1 ;
-(BOOL)isPreviewMirrored;
-(void)_clearPreviewLayer;
-(BOOL)canCapturePhoto;
-(BOOL)imageWriterQueueIsAvailable;
-(void)capturePhoto;
-(id)videoCapturePath;
-(void)setVideoCaptureQuality:(int)arg1 ;
-(void)setVideoCaptureMaximumDuration:(double)arg1 ;
-(void)setPanoramaImageQueueLayer:(id)arg1 ;
-(void)startPanoramaCapture;
-(void)panoramaProcessorOutputCallbackWithStatus:(long)arg1 buffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setPanoramaCaptureDirection:(int)arg1 ;
-(void)_panoramaDidReceiveStatusNotificationString:(CFStringRef)arg1 ;
-(void)_panoramaDidReceiveWarningNotificationString:(CFStringRef)arg1 ;
-(void)_panoramaDidReceiveErrorNotificationString:(CFStringRef)arg1 ;
-(void)_panoShouldEnd;
-(BOOL)isFocusAllowed;
-(BOOL)canFocusAtPoint;
-(void)focusAtAdjustedPoint:(CGPoint)arg1 ;
-(void)smoothFocusAtCenter;
-(int)currentFocusMode;
-(void)restartAutoFocus;
-(void)_pptTestSetAutofocusDisabled:(BOOL)arg1 ;
-(BOOL)canLockFocus;
-(BOOL)isFocusLockSupported;
-(BOOL)isExposureLockSupported;
-(void)setFocusDisabled:(BOOL)arg1 ;
-(BOOL)isFocusingOnFace;
-(BOOL)isTorchOn;
-(BOOL)isTorchDisabled;
-(void)setHDREnabled:(BOOL)arg1 ;
-(int)cameraOrientation;
-(void)setEffectFilterIndex:(unsigned)arg1 forMode:(int)arg2 ;
-(id)effectFilterIndices;
-(double)currentMinFrameDuration;
-(double)currentMaxFrameDuration;
-(void)startTimedCapture;
-(void)continueTimedCapture;
-(void)finishTimedCapture;
-(id)recentFaceMetadata;
-(void)resumePreview;
-(id)currentSession;
-(void)setCurrentDevice:(id)arg1 ;
-(id)imageOutput;
-(float)panoramaPreviewScale;
-(CGSize)panoramaPreviewSize;
-(CGRect)cleanAperture;
-(void)setCaptureOrientation:(int)arg1 ;
-(id)supportedCameraModes;
-(BOOL)disableAllPreviewSuspensionDuringCapture;
-(void)setDisableAllPreviewSuspensionDuringCapture:(BOOL)arg1 ;
-(BOOL)_wasStillImageStabilzationOnBeforeTimedCapture;
-(id)_currentFaceMetadata;
-(BOOL)isCameraApp;
-(void)setIsCameraApp:(BOOL)arg1 ;
-(void)autofocus;
@end

