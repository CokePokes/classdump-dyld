/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockScreenBuddyViewDelegate.h>

@class NSMutableArray, SBLockScreenViewController, NSDictionary, NSArray, NSTimer, SBActivationInfoViewController, NSString;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate> {

	NSMutableArray* _currentStringsOrdering;
	BOOL _needsTransitionFromFakeLogoToWelcomeStrings;
	BOOL _cyclingLabels;
	BOOL _viewVisible;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _showingBootLogo;
	BOOL _startsWithBlackBackground;
	BOOL _hasResultsFromWifiScan;
	BOOL _shouldResetOrderingOnNextCycle;
	SBLockScreenViewController* _lockScreenViewController;
	NSDictionary* _localizedStrings;
	NSArray* _stringsOrdering;
	unsigned _currentStringIndex;
	NSTimer* _stringCycleTimer;
	SBActivationInfoViewController* _activationInfoViewController;
	NSString* _telephonyPrimaryLanguage;
	NSString* _wifiPrimaryLanguage;

}

@property (nonatomic,readonly) NSString * slideToUnlockText; 
@property (assign,nonatomic) SBLockScreenViewController * lockScreenViewController;                      //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedStrings;                                              //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,copy) NSArray * stringsOrdering;                                                    //@synthesize stringsOrdering=_stringsOrdering - In the implementation block
@property (assign,nonatomic) unsigned currentStringIndex;                                                //@synthesize currentStringIndex=_currentStringIndex - In the implementation block
@property (nonatomic,copy) NSString * wifiPrimaryLanguage;                                               //@synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage - In the implementation block
@property (nonatomic,copy) NSString * telephonyPrimaryLanguage;                                          //@synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage - In the implementation block
@property (nonatomic,retain) NSTimer * stringCycleTimer;                                                 //@synthesize stringCycleTimer=_stringCycleTimer - In the implementation block
@property (nonatomic,retain) SBActivationInfoViewController * activationInfoViewController;              //@synthesize activationInfoViewController=_activationInfoViewController - In the implementation block
@property (assign,getter=isShowingBootLogo,nonatomic) BOOL showingBootLogo;                              //@synthesize showingBootLogo=_showingBootLogo - In the implementation block
@property (assign,nonatomic) BOOL startsWithBlackBackground;                                             //@synthesize startsWithBlackBackground=_startsWithBlackBackground - In the implementation block
@property (assign,nonatomic) BOOL hasResultsFromWifiScan;                                                //@synthesize hasResultsFromWifiScan=_hasResultsFromWifiScan - In the implementation block
@property (assign,nonatomic) BOOL shouldResetOrderingOnNextCycle;                                        //@synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle - In the implementation block
-(void)_updateDisplayedStrings;
-(id)_currentLanguageIdentifier;
-(void)_startWifiScan;
-(void)_closeWifiConnection;
-(id)lockScreenViewController;
-(id)slideToUnlockText;
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)handleTapGestureFromView:(id)arg1 ;
-(void)setLockScreenViewController:(id)arg1 ;
-(void)buddyView:(id)arg1 didChangeToStyle:(unsigned)arg2 ;
-(void)stopCyclingLocalizedStrings;
-(void)_didShowBootSetupLogo:(id)arg1 ;
-(void)_didHideBootSetupLogo:(id)arg1 ;
-(void)setStringsOrdering:(id)arg1 ;
-(void)setLocalizedStrings:(id)arg1 ;
-(void)_fetchLanguageFromTelephony;
-(id)buddyView;
-(id)_currentStringsDictionary;
-(void)_transitionFromFakeBootLogoToWelcomeStrings;
-(void)_resetDisplayedLocalizedStringsImmediately:(BOOL)arg1 ;
-(void)_startCyclingLocalizedStrings;
-(id)stringCycleTimer;
-(void)setStringCycleTimer:(id)arg1 ;
-(BOOL)startsWithBlackBackground;
-(void)_toggleShowsIMEIandICCID:(id)arg1 ;
-(void)_noteLogoVisible:(BOOL)arg1 ;
-(void)_removeAllHiddenReasons;
-(BOOL)isShowingBootLogo;
-(void)_startCyclingLocalizedStringsWithDelay:(double)arg1 ;
-(id)localizedStrings;
-(unsigned)currentStringIndex;
-(id)telephonyPrimaryLanguage;
-(id)wifiPrimaryLanguage;
-(id)stringsOrdering;
-(void)setTelephonyPrimaryLanguage:(id)arg1 ;
-(id)_importantLanguageIdentifiers;
-(void)setWifiPrimaryLanguage:(id)arg1 ;
-(void)setShouldResetOrderingOnNextCycle:(BOOL)arg1 ;
-(void)setCurrentStringIndex:(unsigned)arg1 ;
-(BOOL)shouldResetOrderingOnNextCycle;
-(id)activationInfoViewController;
-(void)setActivationInfoViewController:(id)arg1 ;
-(BOOL)hasResultsFromWifiScan;
-(void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1 ;
-(void)setHasResultsFromWifiScan:(BOOL)arg1 ;
-(void)_wifiScanComplete:(CFArrayRef)arg1 error:(BOOL)arg2 ;
-(void)setShowingBootLogo:(BOOL)arg1 ;
-(void)setStartsWithBlackBackground:(BOOL)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)_cycleTimerDidFire:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

