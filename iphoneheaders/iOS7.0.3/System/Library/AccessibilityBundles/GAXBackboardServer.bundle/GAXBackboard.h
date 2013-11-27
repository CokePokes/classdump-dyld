/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
#import <GAXBackboardServer/GAXAppManagerDelegate.h>
#import <SBAXServer/AXUIClientDelegate.h>
#import <GAXBackboardServer/GAXProfileManagerDelegate.h>
#import <GAXBackboardServer/GAXBackboardServerDelegate.h>
#import <GAXBackboardServer/GAXSpringboardClientDelegate.h>

@class AXAccessQueue, GAXSpringboardClient, AXUIClient, GAXBackboardServer, GAXAppManager, GAXProfileManager, AXTimer, NSMutableArray, NSString, NSMutableSet, NSArray, GAXSettings;

@interface GAXBackboard : NSObject <GAXAppManagerDelegate, AXUIClientDelegate, GAXProfileManagerDelegate, GAXBackboardServerDelegate, GAXSpringboardClientDelegate> {

	BOOL _locked;
	BOOL _shouldStartSessionUponFrontmostAppChanged;
	BOOL _wasEverActiveInCurrentFrontmostApp;
	BOOL _sentCancelEventForSnarfedTouch;
	BOOL _verifyingIntegrity;
	BOOL _launchingCrashedApp;
	BOOL _shouldBlockAllEvents;
	BOOL _passcodeViewVisible;
	AXAccessQueue* _backboardAccessQueue;
	GAXSpringboardClient* _springboardClient;
	AXUIClient* _userInterfaceClient;
	GAXBackboardServer* _backboardServer;
	GAXAppManager* _appManager;
	GAXProfileManager* _profileManager;
	int _desiredModeAfterSuccessfulPasscodeEntry;
	unsigned _passcodeEntryFailedCount;
	AXTimer* _substantialTransitionTimer;
	NSMutableArray* _modeHistory;
	NSString* _eventTapIdentifier;
	NSMutableSet* _allowAllTouchOverrideReasons;
	NSMutableSet* _ignoreAllTouchOverrideReasons;
	unsigned _passcodeWindowContextID;
	unsigned _tripleClickSheetWindowContextID;
	unsigned _voiceOverItemChooserWindowContextID;
	NSArray* _ignoredTouchRegions;
	unsigned _assistiveTouchPort;
	int _activeInterfaceOrientation;
	double _lastLockoutStartedTimeInterval;
	double _lastAlertDisplayedTimeInterval;
	double _lastHomeButtonPressedTimeInterval;
	CGRect _passcodeViewFrame;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInWorkspace,nonatomic,readonly) BOOL inWorkspace; 
@property (nonatomic,readonly) BOOL allowsMotion; 
@property (nonatomic,readonly) BOOL allowsTripleClickSheet; 
@property (nonatomic,retain) GAXBackboardServer * backboardServer;                               //@synthesize backboardServer=_backboardServer - In the implementation block
@property (nonatomic,retain) GAXSpringboardClient * springboardClient;                           //@synthesize springboardClient=_springboardClient - In the implementation block
@property (nonatomic,retain) AXUIClient * userInterfaceClient;                                   //@synthesize userInterfaceClient=_userInterfaceClient - In the implementation block
@property (nonatomic,retain) GAXAppManager * appManager;                                         //@synthesize appManager=_appManager - In the implementation block
@property (nonatomic,retain) GAXProfileManager * profileManager;                                 //@synthesize profileManager=_profileManager - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                                        //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL shouldStartSessionUponFrontmostAppChanged;                     //@synthesize shouldStartSessionUponFrontmostAppChanged=_shouldStartSessionUponFrontmostAppChanged - In the implementation block
@property (assign,nonatomic) int desiredModeAfterSuccessfulPasscodeEntry;                        //@synthesize desiredModeAfterSuccessfulPasscodeEntry=_desiredModeAfterSuccessfulPasscodeEntry - In the implementation block
@property (assign,nonatomic) unsigned passcodeEntryFailedCount;                                  //@synthesize passcodeEntryFailedCount=_passcodeEntryFailedCount - In the implementation block
@property (assign,nonatomic) double lastLockoutStartedTimeInterval;                              //@synthesize lastLockoutStartedTimeInterval=_lastLockoutStartedTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL wasEverActiveInCurrentFrontmostApp;                            //@synthesize wasEverActiveInCurrentFrontmostApp=_wasEverActiveInCurrentFrontmostApp - In the implementation block
@property (nonatomic,retain) AXTimer * substantialTransitionTimer;                               //@synthesize substantialTransitionTimer=_substantialTransitionTimer - In the implementation block
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSMutableArray * modeHistory;                                       //@synthesize modeHistory=_modeHistory - In the implementation block
@property (assign,getter=isVerifyingIntegrity,nonatomic) BOOL verifyingIntegrity;                //@synthesize verifyingIntegrity=_verifyingIntegrity - In the implementation block
@property (assign,getter=isLaunchingCrashedApp,nonatomic) BOOL launchingCrashedApp;              //@synthesize launchingCrashedApp=_launchingCrashedApp - In the implementation block
@property (nonatomic,copy) NSString * eventTapIdentifier;                                        //@synthesize eventTapIdentifier=_eventTapIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldBlockAllEvents;                                          //@synthesize shouldBlockAllEvents=_shouldBlockAllEvents - In the implementation block
@property (nonatomic,retain) NSMutableSet * allowAllTouchOverrideReasons;                        //@synthesize allowAllTouchOverrideReasons=_allowAllTouchOverrideReasons - In the implementation block
@property (nonatomic,retain) NSMutableSet * ignoreAllTouchOverrideReasons;                       //@synthesize ignoreAllTouchOverrideReasons=_ignoreAllTouchOverrideReasons - In the implementation block
@property (assign,getter=isPasscodeViewVisible,nonatomic) BOOL passcodeViewVisible;              //@synthesize passcodeViewVisible=_passcodeViewVisible - In the implementation block
@property (assign,nonatomic) CGRect passcodeViewFrame;                                           //@synthesize passcodeViewFrame=_passcodeViewFrame - In the implementation block
@property (assign,nonatomic) unsigned passcodeWindowContextID;                                   //@synthesize passcodeWindowContextID=_passcodeWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned tripleClickSheetWindowContextID;                           //@synthesize tripleClickSheetWindowContextID=_tripleClickSheetWindowContextID - In the implementation block
@property (assign,nonatomic) unsigned voiceOverItemChooserWindowContextID;                       //@synthesize voiceOverItemChooserWindowContextID=_voiceOverItemChooserWindowContextID - In the implementation block
@property (nonatomic,retain) NSArray * ignoredTouchRegions;                                      //@synthesize ignoredTouchRegions=_ignoredTouchRegions - In the implementation block
@property (assign,nonatomic) unsigned assistiveTouchPort;                                        //@synthesize assistiveTouchPort=_assistiveTouchPort - In the implementation block
@property (assign,nonatomic) double lastAlertDisplayedTimeInterval;                              //@synthesize lastAlertDisplayedTimeInterval=_lastAlertDisplayedTimeInterval - In the implementation block
@property (assign,nonatomic) double lastHomeButtonPressedTimeInterval;                           //@synthesize lastHomeButtonPressedTimeInterval=_lastHomeButtonPressedTimeInterval - In the implementation block
@property (assign,nonatomic) int activeInterfaceOrientation;                                     //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL sentCancelEventForSnarfedTouch;                                //@synthesize sentCancelEventForSnarfedTouch=_sentCancelEventForSnarfedTouch - In the implementation block
@property (nonatomic,retain) AXAccessQueue * backboardAccessQueue;                               //@synthesize backboardAccessQueue=_backboardAccessQueue - In the implementation block
@property (nonatomic,readonly) GAXSettings * settings; 
+(id)sharedInstance;
-(BOOL)allowsMotion;
-(BOOL)isTouchEventSwallowed:(id)arg1 ;
-(BOOL)allowsTripleClickSheet;
-(unsigned)availabilityForExternalRequestWithSpringboardParameters:(id)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 fromAppWithIdentifier:(id)arg2 ;
-(BOOL)isSelfLockedToAppWithIdentifier:(id)arg1 ;
-(BOOL)isInWorkspace;
-(id)profileManager;
-(void)setModeHistory:(id)arg1 ;
-(id)modeHistory;
-(BOOL)_hasPasscode;
-(void)_enableEventTap;
-(id)backboardServer;
-(void)setAppManager:(id)arg1 ;
-(id)_passcode;
-(void)_setPasscode:(id)arg1 ;
-(void)backboardServer:(id)arg1 clientWentInvalid:(id)arg2 ;
-(void)backboardServer:(id)arg1 passcodeDidChange:(id)arg2 ;
-(void)backboardServer:(id)arg1 frontmostAppDidChangeWithServiceName:(id)arg2 pid:(int)arg3 ;
-(void)deviceWasUnlockedWithBackboardServer:(id)arg1 ;
-(void)deviceWasLockedWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 tripleClickSheetDidShow:(unsigned)arg2 ;
-(void)backboardServer:(id)arg1 voiceOverItemChooserDidShow:(unsigned)arg2 ;
-(int)activeAppInterfaceOrientationWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 didFinishLaunchingApplicationWithConfiguration:(int)arg2 errorMessage:(id)arg3 ;
-(void)systemDidRestartDueToLowBatteryWithBackboardServer:(id)arg1 ;
-(void)backboardServer:(id)arg1 requestedToAllowAllTouch:(BOOL)arg2 forOverrideReason:(int)arg3 ;
-(void)backboardServer:(id)arg1 requestedToIgnoreAllTouch:(BOOL)arg2 forOverrideReason:(int)arg3 ;
-(int)backboardServer:(id)arg1 restrictionStateForIdentifier:(id)arg2 ;
-(void)profileManager:(id)arg1 didRestrictDevice:(BOOL)arg2 ;
-(id)profileManagerSessionAppID:(id)arg1 ;
-(void)didExitSingleAppModeWithProfileManager:(id)arg1 ;
-(void)didExitAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)didEnterAppSelfLockModeWithProfileManager:(id)arg1 ;
-(void)didEnterSingleAppModeWithProfileManager:(id)arg1 ;
-(void)appDidChangeForSingleAppModeWithProfileManager:(id)arg1 ;
-(void)springboardClientWentInvalid:(id)arg1 ;
-(void)setBackboardAccessQueue:(id)arg1 ;
-(void)setSpringboardClient:(id)arg1 ;
-(void)setUserInterfaceClient:(id)arg1 ;
-(void)setBackboardServer:(id)arg1 ;
-(void)_clearSavedActiveAppIDAfterRelaunchIfNeeeded;
-(id)backboardAccessQueue;
-(void)setProfileManager:(id)arg1 ;
-(void)_prepareGuidedAccessAfterConnectingToSpringboard:(BOOL)arg1 ;
-(void)_handleToggleServerModeNotification:(id)arg1 ;
-(void)_handleAssistiveTouchEnabledNotification:(id)arg1 ;
-(id)springboardClient;
-(void)_transitionToMode:(int)arg1 requireUserUnlock:(BOOL)arg2 ;
-(void)_resetOverrideTouchReasons;
-(BOOL)_isRunningInStoreDemoMode;
-(void)setLaunchingCrashedApp:(BOOL)arg1 ;
-(void)_updateSessionAppWithIdentifier:(id)arg1 ;
-(void)_verifyIntegrityWithDelay:(double)arg1 shouldForceRelaunch:(BOOL)arg2 forReason:(id)arg3 ;
-(void)_updateSessionAppForSingleAppMode;
-(void)setAllowAllTouchOverrideReasons:(id)arg1 ;
-(void)setIgnoreAllTouchOverrideReasons:(id)arg1 ;
-(id)userInterfaceClient;
-(void)setEventTapIdentifier:(id)arg1 ;
-(void)setIgnoredTouchRegions:(id)arg1 ;
-(id)substantialTransitionTimer;
-(void)setSubstantialTransitionTimer:(id)arg1 ;
-(id)eventTapIdentifier;
-(BOOL)shouldBlockAllEvents;
-(BOOL)_isAllowingAllTouchByOverride;
-(BOOL)_isIgnoringAllTouchByOverride;
-(id)allowAllTouchOverrideReasons;
-(id)ignoreAllTouchOverrideReasons;
-(double)lastAlertDisplayedTimeInterval;
-(void)setLastAlertDisplayedTimeInterval:(double)arg1 ;
-(void)setWasEverActiveInCurrentFrontmostApp:(BOOL)arg1 ;
-(void)_applyDeniedStatesForRestrictions;
-(BOOL)shouldStartSessionUponFrontmostAppChanged;
-(void)_transitionToMode:(int)arg1 ;
-(void)setShouldStartSessionUponFrontmostAppChanged:(BOOL)arg1 ;
-(void)_notifyOfStateChangeWithComponents:(unsigned)arg1 destinations:(unsigned)arg2 ;
-(void)setTripleClickSheetWindowContextID:(unsigned)arg1 ;
-(void)setVoiceOverItemChooserWindowContextID:(unsigned)arg1 ;
-(void)_didFinishTryingToLaunchSessionAppWithConfiguration:(int)arg1 error:(id)arg2 ;
-(void)_overrideIgnoreAllTouch:(BOOL)arg1 forReason:(int)arg2 asynchronously:(BOOL)arg3 ;
-(void)setVerifyingIntegrity:(BOOL)arg1 ;
-(void)_overrideAllowAllTouch:(BOOL)arg1 forReason:(int)arg2 asynchronously:(BOOL)arg3 ;
-(void)setPasscodeViewFrame:(CGRect)arg1 ;
-(void)setPasscodeWindowContextID:(unsigned)arg1 ;
-(void)setPasscodeViewVisible:(BOOL)arg1 ;
-(void)setLastLockoutStartedTimeInterval:(double)arg1 ;
-(unsigned)passcodeEntryFailedCount;
-(void)setPasscodeEntryFailedCount:(unsigned)arg1 ;
-(double)_remainingLockoutDuration;
-(void)_showAlertWithTextType:(int)arg1 asBanner:(BOOL)arg2 isUrgent:(BOOL)arg3 ;
-(int)desiredModeAfterSuccessfulPasscodeEntry;
-(void)setDesiredModeAfterSuccessfulPasscodeEntry:(int)arg1 ;
-(id)_unarchivedIgnoredTouchRegionsWithDataArray:(id)arg1 ;
-(void)setLastHomeButtonPressedTimeInterval:(double)arg1 ;
-(double)lastHomeButtonPressedTimeInterval;
-(BOOL)isPasscodeViewVisible;
-(unsigned)passcodeWindowContextID;
-(BOOL)_touchEventIsForAccessibilityFeatures:(id)arg1 ;
-(BOOL)_isTouchEventSwallowed:(id)arg1 ;
-(id)ignoredTouchRegions;
-(BOOL)sentCancelEventForSnarfedTouch;
-(void)setSentCancelEventForSnarfedTouch:(BOOL)arg1 ;
-(unsigned)assistiveTouchPort;
-(void)setAssistiveTouchPort:(unsigned)arg1 ;
-(unsigned)tripleClickSheetWindowContextID;
-(BOOL)_touchEvent:(id)arg1 isForWindowWithContextID:(unsigned)arg2 ;
-(unsigned)voiceOverItemChooserWindowContextID;
-(BOOL)_touchEventIsForAssistiveTouch:(id)arg1 ;
-(BOOL)_touchEventIsForTripleClickSheet:(id)arg1 ;
-(BOOL)_touchEventIsForVoiceOverItemChooser:(id)arg1 ;
-(void)_handleServerModeChangeRequestWithType:(int)arg1 ;
-(void)_updateSessionAppWithIdentifier:(id)arg1 notifyUserInterfaceServer:(BOOL)arg2 sessionAppIdentifierDidChange:(BOOL*)arg3 ;
-(void)setShouldBlockAllEvents:(BOOL)arg1 ;
-(BOOL)_sessionAppIsFrontmost;
-(BOOL)_isPasscodeStale;
-(void)_didFinishTransitioningFromWorkspaceToSession;
-(void)_didFinishTransitioningFromWorkspaceToApplication;
-(void)_disableEventTap;
-(unsigned)_availabilityForRequestType:(int)arg1 springboardParameters:(id)arg2 ;
-(id)_errorMessageForAvailability:(unsigned)arg1 ;
-(BOOL)_shouldAllowDirectInactiveToActiveTransition;
-(int)_previousModeIgnoringWorkspace:(BOOL)arg1 ;
-(void)_applyChangedStatesForRestrictions;
-(void)_applyAllowedStatesForRestrictions;
-(void)_clearChangedStatesForRestrictions;
-(double)lastLockoutStartedTimeInterval;
-(BOOL)isVerifyingIntegrity;
-(BOOL)_sessionAppIsFrontmostAllowingRemoteMessageSend:(BOOL)arg1 shouldManuallyCheckWhetherAppIsWebAndForegroundRunning:(BOOL*)arg2 ;
-(void)_launchSessionAppWithIdentifier:(id)arg1 forProfileConfiguration:(int)arg2 ;
-(BOOL)isLaunchingCrashedApp;
-(void)_handleSubstationalTransition;
-(void)_handleTelephonyCallStatusChangedNotificationWithCall:(CTCallRef)arg1 ;
-(void)frontmostAppDidBecomeInvalidWithAppManager:(id)arg1 ;
-(BOOL)wasEverActiveInCurrentFrontmostApp;
-(CGRect)passcodeViewFrame;
-(void)_performValidation;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned)arg3 error:(id*)arg4 ;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned)arg2 ;
-(BOOL)userInterfaceClient:(id)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(int)activeInterfaceOrientation;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)settings;
-(void)setActiveInterfaceOrientation:(int)arg1 ;
-(id)appManager;
-(BOOL)_handleEvent:(id)arg1 ;
@end

