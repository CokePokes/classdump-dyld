/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIApplication.h>
#import <SpringBoard/SBPowerDownControllerDelegate.h>
#import <AVFoundation/MCProfileConnectionObserver.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class UIWindow, SBUIController, NSTimer, NSMutableSet, NSMutableArray, NSSet, SBApplication, NSNumberFormatter, NSDate, NSObject, BBDataProviderConnection, SBCardItemsController, NSHashTable;

@interface SpringBoard : UIApplication <SBPowerDownControllerDelegate, MCProfileConnectionObserver, UIApplicationDelegate> {

	SBUIController* _uiController;
	NSTimer* _menuButtonTimer;
	NSTimer* _lockButtonTimer;
	double _headsetButtonDownTime;
	IOHIDEventRef _headsetDownEvent;
	int _headsetClickCount;
	int _ringerSwitchState;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenWasDimOnMenuDown : 1;
	unsigned _waitingForMenuDoubleTapAfterActingOnSingleTap : 1;
	unsigned _screenshotWasTaken : 1;
	unsigned _dontLockOnNextLockUp : 1;
	unsigned _poweringDown : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _isSeekingInMedia : 1;
	int _statusBarOrientationOverride;
	int _mediaSeekDirection;
	unsigned _springBoardRequestsAccelerometerEvents;
	int _activeInterfaceOrientation;
	NSMutableSet* _activeInterfaceOrientationObservers;
	NSMutableArray* _activeInterfaceOrientationOverrideStack;
	BOOL _wantsOrientationEvents;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
	BOOL _proximityEventsEnabled;
	BOOL _smartCoverClosed;
	BOOL _keybagRefetchTransactionIsActive;
	BOOL _menuButtonDown;
	NSSet* _restrictionDisabledApplications;
	SBApplication* _nowPlayingApp;
	SBApplication* _menuButtonInterceptApp;
	BOOL _menuButtonInterceptAppEnabledForever;
	NSMutableArray* _disableNowPlayingHUDAssertionBundleIds;
	NSMutableArray* _appsRegisteredForVolumeEvents;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _percentFormatter;
	NSTimer* _midnightTimer;
	NSDate* _midnightFireDate;
	opaque_pthread_t* _backgroundMIGServerThread;
	opaque_pthread_t* _iconGenerationMIGServerThread;
	NSObject<OS_dispatch_source>* _memoryPressureSource;
	unsigned _memoryPressureStatus;
	NSMutableArray* _blocksAwaitingAvailableMemory;
	BBDataProviderConnection* _bulletinBoardConnection;
	NSObject<OS_dispatch_queue>* _bulletinBoardQueue;
	SBCardItemsController* _cardItemsController;
	CFBooleanRef _hasCameraCapability;
	CFBooleanRef _hasCameraRestriction;
	CFBooleanRef _shouldDelaySleepForHeadsetClick;
	NSHashTable* _volumePressBandits;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldAbsoluteStartTime;
	NSMutableArray* _menuButtonUpBlocks;
	BOOL _didPlayLockSound;
	NSHashTable* _disableActiveOrientationChangeAssertions;
	BOOL _typingActive;

}

@property (nonatomic,readonly) BBDataProviderConnection * bulletinBoardConnection;              //@synthesize bulletinBoardConnection=_bulletinBoardConnection - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * bulletinBoardQueue;                //@synthesize bulletinBoardQueue=_bulletinBoardQueue - In the implementation block
@property (assign,getter=isTypingActive,nonatomic) BOOL typingActive;                           //@synthesize typingActive=_typingActive - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
+(void)migrateSystemLocalNotifications;
+(BOOL)registerAsSystemApp;
+(BOOL)rendersLocally;
-(void)handleOpenURL:(id)arg1 fromApplication:(id)arg2 ;
-(void)localeChanged;
-(void)_proximityChanged:(id)arg1 ;
-(void)languageChanged;
-(void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
-(void)_createLogFile;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1 ;
-(BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)arg1 ;
-(void)loadDebuggingAndDemoPrefs;
-(void)setWantsOrientationEvents:(BOOL)arg1 ;
-(void)updateOrientationAndAccelerometerSettings;
-(void)_startBulletinBoardServer;
-(void)_lockdownActivationChanged:(id)arg1 ;
-(void)_performDeferredLaunchWork;
-(void)updateStackshotSettings;
-(void)noteBacklightControllerUndimming:(id)arg1 ;
-(void)noteBacklightLevelChanged;
-(void)noteBacklightFadeFinished;
-(BOOL)launchedAfterLanguageRestart;
-(void)updateNativeOrientation;
-(void)_iapServerConnectionDiedNotification:(id)arg1 ;
-(void)_nowPlayingAppDidChangeNotification:(id)arg1 ;
-(void)_effectiveSettingsDidChange;
-(void)setupMidnightTimer;
-(void)clearLaunchedAfterLanguageRestart;
-(void)frontDisplayDidChange:(id)arg1 ;
-(void)_relaunchSpringBoardNow;
-(id)_settingLanguageStringForNewLanguage;
-(void)relaunchSpringBoard;
-(void)debuggingAndDemoPrefsWereChanged;
-(void)_testPhoneAlerts;
-(void)_widgetHostingDefaultsDidChange;
-(BOOL)lockScreenCameraSupported;
-(void)clearMenuButtonTimer;
-(void)handleMenuDoubleTap;
-(void)_handleMenuButtonEvent;
-(void)_setMenuButtonTimer:(id)arg1 ;
-(void)cancelMenuButtonRequests;
-(void)_powerDownCancel:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_logMenuButtonHoldTime;
-(void)_logReliabilityInfoForEvent:(IOHIDEventRef)arg1 ;
-(void)_startSeekWithDirection:(id)arg1 ;
-(void)_menuButtonDown:(IOHIDEventRef)arg1 ;
-(void)_menuButtonUp:(IOHIDEventRef)arg1 ;
-(void)_lockButtonDownFromSource:(int)arg1 ;
-(void)_lockButtonUpFromSource:(int)arg1 ;
-(void)_revealSpotlight;
-(void)_smartCoverDidOpen:(IOHIDEventRef)arg1 ;
-(void)_smartCoverDidClose:(IOHIDEventRef)arg1 ;
-(void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)arg1 ;
-(void)_headsetButtonDown:(IOHIDEventRef)arg1 ;
-(void)_headsetButtonUp:(IOHIDEventRef)arg1 ;
-(BOOL)__handleHIDEvent:(IOHIDEventRef)arg1 ;
-(double)_menuHoldTime;
-(void)_menuButtonWasHeld;
-(BOOL)shouldRunFieldTestScript;
-(void)runFieldTestScript;
-(void)_setLockButtonTimer:(id)arg1 ;
-(void)_giveUpOnMenuDoubleTap;
-(void)lockButtonWasHeld;
-(BOOL)caseIsEnabledAndLatched;
-(void)hideSpringBoardStatusBar;
-(void)_rebootNow;
-(void)_powerDownNow;
-(void)_clearPreheatedLockAudio;
-(void)_iapExtendedModeReset;
-(id)simpleRemoteDestinationApp;
-(void)_performDelayedHeadsetClickTimeout;
-(void)_launchMusicPlayerSuspendedAndStartMusic;
-(void)pinPolicyChanged;
-(void)endLaunchTest;
-(void)applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 needsPermission:(BOOL)arg6 additionalActivationFlags:(id)arg7 activationHandler:(/*^block*/ id)arg8 ;
-(BOOL)_URLIsHandledBySpringBoard:(id)arg1 ;
-(BOOL)_requestPermissionToOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 ;
-(void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2 ;
-(void)_openURLCore:(id)arg1 display:(id)arg2 animating:(BOOL)arg3 sender:(id)arg4 additionalActivationFlags:(id)arg5 activationHandler:(/*^block*/ id)arg6 ;
-(void)_sendBanditsVolumeIncreased;
-(void)_sendBanditsVolumeDecreased;
-(void)_adjustMidnightTimerAfterSleep;
-(void)_midnightPassed;
-(void)_caseLatchWantsToAttemptLock;
-(BOOL)allowCaseLatchLockAndUnlock;
-(void)_enqueueWorkspaceEvent:(/*^block*/ id)arg1 withName:(id)arg2 ifSatisfiesCondition:(/*^block*/ id)arg3 cancelingEventsWithNames:(id)arg4 ;
-(void)noteCaseHardwarePresent;
-(void)_updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2 triggeredbyRouteWillChangeToReceiverNotification:(BOOL)arg3 ;
-(void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)arg1 ;
-(void)updateMirroredDisplayOrientation;
-(void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)arg1 ;
-(void)updateNativeOrientationAndMirroredDisplays:(BOOL)arg1 ;
-(int)interfaceOrientationForCurrentDeviceOrientation;
-(void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3 ;
-(int)_currentNonFlatDeviceOrientation;
-(void)updateProximitySettings;
-(void)updateRejectedInputSettings;
-(BOOL)proximityEventsEnabled;
-(void)noteSubstantialTransitionOccured;
-(void)_tearDownNow;
-(void)powerDownRequested:(id)arg1 ;
-(void)powerDownCanceled:(id)arg1 ;
-(void)handleSignal:(int)arg1 ;
-(void)writeLogFile;
-(BOOL)_shouldSwallowGSEvent:(GSEventRef)arg1 ;
-(void)appleIconViewRemoved;
-(BOOL)restartedForLanguageChangeWhileUnlocked;
-(void)_rotateView:(id)arg1 toOrientation:(int)arg2 ;
-(void)wipeDeviceNow;
-(void)showEDGEActivationFailureAlert:(id)arg1 reason:(id)arg2 forMMS:(BOOL)arg3 ;
-(BOOL)iapIsInExtendedMode;
-(BOOL)canShowLockScreenHUDControls;
-(BOOL)canShowLockScreenCameraGrabber;
-(void)setAppDisabledNowPlayingHUD:(BOOL)arg1 bundleIdentifier:(id)arg2 ;
-(void)_keyboardAvailabilityChanged;
-(void)extendButtonTimersForWake;
-(BOOL)isPoweringDown;
-(BOOL)relaunchingForSetupLanguageChange;
-(void)_imagesMounted;
-(BOOL)isDisplayIdentifierRestrictionDisabled:(id)arg1 ;
-(BOOL)isSpringBoardStatusBarHidden;
-(void)showSpringBoardStatusBar;
-(int)currentHomescreenStatusBarStyle;
-(void)setMenuButtonInterceptApp:(id)arg1 forever:(BOOL)arg2 ;
-(id)menuButtonInterceptApp;
-(BOOL)menuButtonInterceptAppEnabledForever;
-(void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(BOOL)arg2 ;
-(id)appsRegisteredForVolumeEvents;
-(void)lockAfterCall;
-(BOOL)smartCoverIsClosed;
-(void)updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2 ;
-(void)noteInterfaceOrientationChanged:(int)arg1 ;
-(void)noteInterfaceOrientationChanged:(int)arg1 force:(BOOL)arg2 ;
-(void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 ;
-(void)noteAlertView:(id)arg1 willChangeInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(int)activeInterfaceOrientationWithoutConsideringAlerts;
-(void)pushTransientActiveInterfaceOrientation:(int)arg1 forReason:(id)arg2 ;
-(void)popTransientActiveInterfaceOrientationForReason:(id)arg1 ;
-(void)reportStatusBarOrientationAs:(int)arg1 ;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(BOOL)isMusicPlayerInNowPlayingView;
-(id)nowPlayingApp;
-(BOOL)isNowPlayingAppPlaying;
-(void)setNowPlayingInfo:(id)arg1 forApplication:(id)arg2 ;
-(id)formattedDecimalStringForNumber:(id)arg1 ;
-(id)formattedPercentStringForNumber:(id)arg1 ;
-(id)_accessibilityFrontMostApplication;
-(id)_accessibilityTopDisplay;
-(BOOL)_accessibilityShouldAllowAppLaunch;
-(BOOL)_accessibilityShouldAllowIconLaunch;
-(BOOL)_accessibilityObjectWithinProximity;
-(BOOL)underMemoryPressure;
-(void)noteKeybagRefetchTransactionIsActive:(BOOL)arg1 ;
-(BOOL)shouldHostWidgetsRemotely;
-(BOOL)_hasVolumeBandits;
-(void)addVolumePressBandit:(id)arg1 ;
-(void)removeVolumePressBandit:(id)arg1 ;
-(void)addDisableActiveInterfaceOrientationChangeAssertion:(id)arg1 ;
-(void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)arg1 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/ id)arg1 ;
-(id)bulletinBoardConnection;
-(id)bulletinBoardQueue;
-(BOOL)isTypingActive;
-(void)setTypingActive:(BOOL)arg1 ;
-(id)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)_runAppSliderDismissTest;
-(void)_runAppSliderBringupTest;
-(void)_runUnlockTest;
-(void)runRotationTest:(int)arg1 ;
-(void)_runNotificationCenterBringupTest;
-(void)_runNotificationCenterDismissTest;
-(void)_runScrollNotificationCenterTest:(id)arg1 ;
-(void)_runControlCenterBringupTest;
-(void)_runControlCenterDismissTest;
-(void)_runScrollIconListTest;
-(void)startLaunchTestNamed:(id)arg1 options:(id)arg2 ;
-(void)startResumeTestNamed:(id)arg1 options:(id)arg2 ;
-(void)_runDisplayAlertTest:(id)arg1 ;
-(void)_runScrollAppSliderTest:(id)arg1 ;
-(void)_workspaceTransactionCompleted:(id)arg1 ;
-(void)_unscatterWillBegin:(id)arg1 ;
-(void)_cameraPreviewStarted;
-(void)_retryLaunchTestWithOptions:(id)arg1 ;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 sender:(id)arg3 publicURLsOnly:(BOOL)arg4 animating:(BOOL)arg5 additionalActivationFlags:(id)arg6 activationHandler:(/*^block*/ id)arg7 ;
-(BOOL)applicationCanOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2 ;
-(BOOL)_accessibilityIsSystemGestureActive;
-(void)powerDown;
-(BOOL)_isDim;
-(void)noteInterfaceOrientationChanged:(int)arg1 duration:(float)arg2 updateMirroredDisplays:(BOOL)arg3 force:(BOOL)arg4 ;
-(void)reboot;
-(void)_updateRingerState:(int)arg1 withVisuals:(BOOL)arg2 updatePreferenceRegister:(BOOL)arg3 ;
-(id)_accessibilityRunningApplications;
-(void)_ringerChanged:(IOHIDEventRef)arg1 ;
-(BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
-(void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)arg1 ;
-(void)addActiveOrientationObserver:(id)arg1 ;
-(void)removeActiveOrientationObserver:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2 ;
-(BOOL)isMenuDoubleTapAllowed;
-(double)_accessibilityActivationAnimationStartDelay;
-(double)_accessibilityDeactivationAnimationStartDelay;
-(void)_accessibilityActivationAnimationWillBegin;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(void)tearDown;
-(void)_localeChanged;
-(void)launchMusicPlayerSuspended;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(int)statusBarOrientation;
-(int)alertInterfaceOrientation;
-(id)init;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)_setStatusBarShowsProgress:(BOOL)arg1 ;
-(void)setProximityEventsEnabled:(BOOL)arg1 ;
-(void)applicationSuspend:(GSEventRef)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(int)activeInterfaceOrientation;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)_keyWindowForScreen:(id)arg1 ;
-(BOOL)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)anotherApplicationFinishedLaunching:(GSEventRef)arg1 ;
-(void)_applicationOpenURL:(id)arg1 event:(GSEventRef)arg2 ;
-(void)applicationSuspended:(GSEventRef)arg1 ;
-(void)applicationExited:(GSEventRef)arg1 ;
-(void)applicationSuspendedSettingsUpdated:(GSEventRef)arg1 ;
-(void)lockDevice:(GSEventRef)arg1 ;
-(void)quitTopApplication:(GSEventRef)arg1 ;
-(void)resetIdleTimerAndUndim;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2 ;
-(void)_setAmbiguousControlCenterActivationMargin:(float)arg1 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(BOOL)handleDoubleHeightStatusBarTap:(int)arg1 ;
-(BOOL)_statusBarOrientationFollowsWindow:(id)arg1 ;
-(void)mediaKeyDown:(GSEventRef)arg1 ;
-(void)mediaKeyUp:(GSEventRef)arg1 ;
-(void)lockButtonDown:(GSEventRef)arg1 ;
-(void)lockButtonUp:(GSEventRef)arg1 ;
-(void)headsetButtonDown:(GSEventRef)arg1 ;
-(void)headsetButtonUp:(GSEventRef)arg1 ;
-(void)headsetAvailabilityChanged:(GSEventRef)arg1 ;
-(void)menuButtonDown:(GSEventRef)arg1 ;
-(void)menuButtonUp:(GSEventRef)arg1 ;
-(void)ringerChanged:(int)arg1 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
-(void)volumeChanged:(GSEventRef)arg1 ;
-(void)accessoryKeyStateChanged:(GSEventRef)arg1 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2 ;
-(void)_overrideDefaultInterfaceOrientationWithOrientation:(int)arg1 ;
-(void)_removeDefaultInterfaceOrientatationOverride;
-(int)_frontMostAppOrientation;
-(BOOL)_alertWindowShouldRotate;
-(int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3 ;
-(double)windowRotationDuration;
-(void)significantTimeChange;
-(void)batteryStatusDidChange:(id)arg1 ;
-(void)setSuspensionAnimationDelay:(double)arg1 ;
-(void)_handleHIDEvent:(IOHIDEventRef)arg1 ;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setHardwareKeyboardLayoutName:(id)arg1 ;
-(void)setExpectsFaceContact:(BOOL)arg1 ;
-(void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 screen:(id)arg3 ;
-(void)applicationDidOrderOutContext:(id)arg1 screen:(id)arg2 ;
-(void)didDismissActionSheet;
-(void)didDismissMiniAlert;
-(void)willDisplayMiniAlert;
-(void)willDismissMiniAlert;
-(void)setHasMiniAlerts:(BOOL)arg1 ;
-(BOOL)isLocked;
-(void)requestDeviceUnlock;
-(BOOL)canShowAlerts;
-(id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_alertSheetStackChanged;
-(BOOL)_volumeChanged:(IOHIDEventRef)arg1 ;
-(void)_significantTimeChange;
-(BOOL)isCameraApp;
@end

