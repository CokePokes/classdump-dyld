/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <AccessibilityUIService/AXUIAlertDelegate.h>
#import <AccessibilityUIService/AXUIContentViewControllerDelegate.h>
#import <GuidedAccess/GAXPINViewControllerDelegate.h>
#import <GuidedAccess/GAXInterestAreaViewControllerDelegate.h>
#import <AccessibilityUIService/AXUIService.h>

@class GAXStyleProvider, NSSet, NSString, NSMutableSet, GAXUIIncomingCallAlertStyleProvider, UIImage, NSArray, NSDictionary, GAXPINViewController, NSTimer, NSMutableDictionary, AXIPCClient, AXAccessQueue;

@interface GAXUIServer : NSObject <AXUIAlertDelegate, AXUIContentViewControllerDelegate, GAXPINViewControllerDelegate, GAXInterestAreaViewControllerDelegate, AXUIService> {

	BOOL _shouldHideAllAlerts;
	BOOL _applicationTranslucent;
	GAXStyleProvider* _styleProvider;
	int _mode;
	NSSet* _disabledProfileFeatures;
	NSString* _sessionApplicationIdentifier;
	unsigned _numberOfBannerAlertsShownRecently;
	NSMutableSet* _identifiersOfBannerAlertsAboutToAppear;
	NSMutableSet* _identifiersOfVisibleBannerAlerts;
	NSString* _identifierOfVisibleRegularAlert;
	NSString* _deviceRestrictedAlertIdentifier;
	NSString* _incomingCallAlertIdentifier;
	GAXUIIncomingCallAlertStyleProvider* _incomingCallAlertStyleProvider;
	NSString* _appName;
	UIImage* _appIcon;
	NSArray* _appRestrictionIdentifiers;
	NSDictionary* _statesForAppRestrictions;
	NSDictionary* _textsForAppRestrictions;
	NSDictionary* _detailTextsForAppRestrictions;
	int _lastPasscodeViewDismissalReason;
	GAXPINViewController* _passcodeViewController;
	NSTimer* _passcodeDismissalTimer;
	NSMutableDictionary* _interestAreaPathsForStorageForRotatingView;
	AXIPCClient* _springboardClient;
	AXAccessQueue* _springboardMessageQueue;
	double _lastBannerAlertShownTimeInterval;

}

@property (nonatomic,readonly) BOOL allowsTouch; 
@property (nonatomic,copy) NSSet * disabledProfileFeatures;                                                     //@synthesize disabledProfileFeatures=_disabledProfileFeatures - In the implementation block
@property (getter=isInWorkspace,nonatomic,readonly) BOOL inWorkspace; 
@property (nonatomic,readonly) float statusBarHeight; 
@property (nonatomic,copy) NSString * appName;                                                                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) UIImage * appIcon;                                                                 //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,copy) NSArray * appRestrictionIdentifiers;                                                 //@synthesize appRestrictionIdentifiers=_appRestrictionIdentifiers - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                                  //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) int mode;                                                                          //@synthesize mode=_mode - In the implementation block
@property (copy) NSString * sessionApplicationIdentifier;                                                       //@synthesize sessionApplicationIdentifier=_sessionApplicationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned numberOfBannerAlertsShownRecently;                                        //@synthesize numberOfBannerAlertsShownRecently=_numberOfBannerAlertsShownRecently - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfBannerAlertsAboutToAppear;                             //@synthesize identifiersOfBannerAlertsAboutToAppear=_identifiersOfBannerAlertsAboutToAppear - In the implementation block
@property (assign,nonatomic) double lastBannerAlertShownTimeInterval;                                           //@synthesize lastBannerAlertShownTimeInterval=_lastBannerAlertShownTimeInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfVisibleBannerAlerts;                                   //@synthesize identifiersOfVisibleBannerAlerts=_identifiersOfVisibleBannerAlerts - In the implementation block
@property (nonatomic,copy) NSString * identifierOfVisibleRegularAlert;                                          //@synthesize identifierOfVisibleRegularAlert=_identifierOfVisibleRegularAlert - In the implementation block
@property (nonatomic,copy) NSString * deviceRestrictedAlertIdentifier;                                          //@synthesize deviceRestrictedAlertIdentifier=_deviceRestrictedAlertIdentifier - In the implementation block
@property (nonatomic,copy) NSString * incomingCallAlertIdentifier;                                              //@synthesize incomingCallAlertIdentifier=_incomingCallAlertIdentifier - In the implementation block
@property (nonatomic,retain) GAXUIIncomingCallAlertStyleProvider * incomingCallAlertStyleProvider;              //@synthesize incomingCallAlertStyleProvider=_incomingCallAlertStyleProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAllAlerts;                                                          //@synthesize shouldHideAllAlerts=_shouldHideAllAlerts - In the implementation block
@property (assign,getter=isApplicationTranslucent,nonatomic) BOOL applicationTranslucent;                       //@synthesize applicationTranslucent=_applicationTranslucent - In the implementation block
@property (nonatomic,copy) NSDictionary * statesForAppRestrictions;                                             //@synthesize statesForAppRestrictions=_statesForAppRestrictions - In the implementation block
@property (nonatomic,copy) NSDictionary * textsForAppRestrictions;                                              //@synthesize textsForAppRestrictions=_textsForAppRestrictions - In the implementation block
@property (nonatomic,copy) NSDictionary * detailTextsForAppRestrictions;                                        //@synthesize detailTextsForAppRestrictions=_detailTextsForAppRestrictions - In the implementation block
@property (assign,nonatomic) int lastPasscodeViewDismissalReason;                                               //@synthesize lastPasscodeViewDismissalReason=_lastPasscodeViewDismissalReason - In the implementation block
@property (nonatomic,retain) GAXPINViewController * passcodeViewController;                                     //@synthesize passcodeViewController=_passcodeViewController - In the implementation block
@property (nonatomic,retain) NSTimer * passcodeDismissalTimer;                                                  //@synthesize passcodeDismissalTimer=_passcodeDismissalTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestAreaPathsForStorageForRotatingView;                  //@synthesize interestAreaPathsForStorageForRotatingView=_interestAreaPathsForStorageForRotatingView - In the implementation block
@property (nonatomic,retain) AXIPCClient * springboardClient;                                                   //@synthesize springboardClient=_springboardClient - In the implementation block
@property (nonatomic,retain) AXAccessQueue * springboardMessageQueue;                                           //@synthesize springboardMessageQueue=_springboardMessageQueue - In the implementation block
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned)arg1 ;
-(BOOL)isInWorkspace;
-(void)setSpringboardMessageQueue:(id)arg1 ;
-(void)_sendMessageToSpringBoard:(id)arg1 replyMessage:(id*)arg2 description:(id)arg3 ;
-(id)springboardMessageQueue;
-(void)setSpringboardClient:(id)arg1 ;
-(id)springboardClient;
-(id)disabledProfileFeatures;
-(void)interestAreaViewController:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(void)interestAreaViewController:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2 ;
-(void)suspendFrontmostApplication;
-(void)transitionToMode:(int)arg1 ;
-(id)containedViewsInFrontmostApplicationForFingerPath:(id)arg1 ;
-(id)appRestrictionIdentifiers;
-(id)iconForAppRestrictionWithIdentifier:(id)arg1 ;
-(id)textForAppRestrictionWithIdentifier:(id)arg1 ;
-(id)detailTextForAppRestrictionWithIdentifier:(id)arg1 ;
-(int)appRestrictionStateForIdentifier:(id)arg1 ;
-(void)setFeatureEnabled:(BOOL)arg1 withIdentifier:(id)arg2 ;
-(void)setAppRestrictionState:(int)arg1 withIdentifier:(id)arg2 ;
-(BOOL)isApplicationTranslucent;
-(void)pinViewController:(id)arg1 pincodeIsVisible:(BOOL)arg2 ;
-(void)pinViewController:(id)arg1 wasDismissedWithReason:(int)arg2 ;
-(BOOL)shouldShowCancelButtonForPINViewController:(id)arg1 ;
-(BOOL)pinViewController:(id)arg1 passcodeIsCorrect:(id)arg2 ;
-(void)pinViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2 ;
-(void)setNumberOfBannerAlertsShownRecently:(unsigned)arg1 ;
-(void)_presentPasscodeViewControllerForSetup:(BOOL)arg1 parentViewController:(id)arg2 ;
-(void)_showAlertWithText:(id)arg1 asBanner:(BOOL)arg2 isUrgent:(BOOL)arg3 ;
-(id)interestAreaPathsForStorageForRotatingView;
-(id)_unarchivedPathMappingWithData:(id)arg1 ;
-(void)_applyInterestAreaPathsForStorage:(id)arg1 toInterestAreaViewController:(id)arg2 ;
-(void)_adjustContentsGeometryOfInterestAreaViewWithController:(id)arg1 ;
-(int)lastPasscodeViewDismissalReason;
-(void)_disableTelephonyIfNeededForMode:(int)arg1 ;
-(void)setApplicationTranslucent:(BOOL)arg1 ;
-(void)_restoreTelephony;
-(void)_rotateDeviceToCurrentOrientation;
-(void)_notifyClientOfUpdatedActiveInterfaceOrientation;
-(id)incomingCallAlertStyleProvider;
-(void)setPasscodeDismissalTimer:(id)arg1 ;
-(id)passcodeViewController;
-(void)_dismissPasscodeViewAnimated:(BOOL)arg1 ;
-(id)passcodeDismissalTimer;
-(id)_archivedInterestAreaPathsInScreenCoordinatesForInterestAreaViewController:(id)arg1 ;
-(id)sessionApplicationIdentifier;
-(void)_incomingCallWasBlockedWithSourceAddress:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)incomingCallAlertIdentifier;
-(BOOL)_isSpringBoardFrontmost;
-(void)setLastPasscodeViewDismissalReason:(int)arg1 ;
-(void)setShouldHideAllAlerts:(BOOL)arg1 ;
-(BOOL)allowsTouch;
-(void)_clearPasscodeDismissalTimer;
-(id)identifiersOfVisibleBannerAlerts;
-(id)identifierOfVisibleRegularAlert;
-(unsigned)numberOfBannerAlertsShownRecently;
-(void)_showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 asBanner:(BOOL)arg4 isUrgent:(BOOL)arg5 duration:(double)arg6 alertIdentifier:(id*)arg7 ;
-(BOOL)shouldHideAllAlerts;
-(id)deviceRestrictedAlertIdentifier;
-(double)lastBannerAlertShownTimeInterval;
-(double)_minimumDelayForShowingAdditionalBannerAlert;
-(void)setLastBannerAlertShownTimeInterval:(double)arg1 ;
-(id)identifiersOfBannerAlertsAboutToAppear;
-(id)statesForAppRestrictions;
-(id)textsForAppRestrictions;
-(id)detailTextsForAppRestrictions;
-(void)_timerDismissPasscode:(id)arg1 ;
-(void)setIdentifiersOfBannerAlertsAboutToAppear:(id)arg1 ;
-(void)setIdentifiersOfVisibleBannerAlerts:(id)arg1 ;
-(void)setIdentifierOfVisibleRegularAlert:(id)arg1 ;
-(void)setDeviceRestrictedAlertIdentifier:(id)arg1 ;
-(void)setIncomingCallAlertIdentifier:(id)arg1 ;
-(void)setIncomingCallAlertStyleProvider:(id)arg1 ;
-(void)setAppRestrictionIdentifiers:(id)arg1 ;
-(void)setStatesForAppRestrictions:(id)arg1 ;
-(void)setTextsForAppRestrictions:(id)arg1 ;
-(void)setDetailTextsForAppRestrictions:(id)arg1 ;
-(void)setPasscodeViewController:(id)arg1 ;
-(void)setInterestAreaPathsForStorageForRotatingView:(id)arg1 ;
-(void)_validateOverrides;
-(void)setSessionApplicationIdentifier:(id)arg1 ;
-(void)setDisabledProfileFeatures:(id)arg1 ;
-(void)_reestablishSpringboardClient;
-(void)_setupOverrides;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)appName;
-(void)dealloc;
-(id)init;
-(float)statusBarHeight;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)serviceWasFullyInitialized;
-(BOOL)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg1 ;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned)arg2 completion:(/*^block*/ id)arg3 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 error:(id*)arg3 ;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned)arg1 ;
-(float)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(float)desiredWindowLevelForAlertWithIdentifier:(id)arg1 ;
-(id)styleProviderForAlertWithIdentifier:(id)arg1 ;
-(void)alertWithIdentifierDidAppear:(id)arg1 ;
-(void)alertWithIdentifierDidDisappear:(id)arg1 ;
-(id)appIcon;
-(void)setAppIcon:(id)arg1 ;
-(void)setAppName:(id)arg1 ;
@end

