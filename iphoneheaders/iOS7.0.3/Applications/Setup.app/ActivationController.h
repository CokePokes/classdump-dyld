/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Setup/BuddyController.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>
#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@protocol BuddyControllerDelegate;
@class , RUILoader, RUIPage, NSURLRequest, NSURLConnection, NSMutableData, NSString, UILabel, UIActivityIndicatorView, NSTimer, NSMutableArray, NSURL, ActivationFailurePage, UIAlertView;

@interface ActivationController : UIViewController <BuddyController, NSURLConnectionDelegate, RUIObjectModelDelegate> {

	<BuddyControllerDelegate>* _delegate;
	RUILoader* _ruiLoader;
	RUIPage* _loadingPage;
	NSURLRequest* _activationRequest;
	NSURLConnection* _activationConnection;
	NSMutableData* _activationData;
	NSString* _contentType;
	void* _otaAssertion;
	int _activationState;
	UILabel* _statusLabel;
	UILabel* _infoLabel;
	UIActivityIndicatorView* _spinner;
	BOOL _displayTimerElapsed;
	BOOL _nonSilentActivation;
	NSTimer* _displayTimer;
	NSTimer* _ticketAcceptedTimer;
	NSTimer* _waitingForBasebandTimer;
	int _waitingForBasebandFailureCount;
	NSMutableArray* _objectModels;
	BOOL _allowAnyHTTPSCertificate;
	NSURL* _activationURL;
	NSString* _userAgent;
	ActivationFailurePage* _activationFailurePage;
	BOOL _connectionFailed;
	BOOL _connectionOTA;
	NSURL* _agreeURL;
	NSURL* _disagreeURL;
	UIAlertView* _tcConfirmationAlert;
	BOOL _cdmaSelectionActivation;

}

@property (nonatomic,retain) NSURLRequest * activationRequest;              //@synthesize activationRequest=_activationRequest - In the implementation block
@property (nonatomic,retain) NSURL * activationURL;                         //@synthesize activationURL=_activationURL - In the implementation block
@property (nonatomic,copy) NSString * contentType;                          //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSURL * agreeURL;                              //@synthesize agreeURL=_agreeURL - In the implementation block
@property (nonatomic,retain) NSURL * disagreeURL;                           //@synthesize disagreeURL=_disagreeURL - In the implementation block
@property (nonatomic,readonly) BOOL cdmaSelectionActivation;                //@synthesize cdmaSelectionActivation=_cdmaSelectionActivation - In the implementation block
+(BOOL)controllerNeedsToRun;
+(BOOL)isBricked;
-(void)startOver;
-(void)removeFromNavHierarchy;
-(BOOL)cdmaSelectionActivation;
-(void)_activationStateChanged;
-(void)_releaseOTAAssertion;
-(void)_enterState:(int)arg1 ;
-(void)_attemptDismiss;
-(id)_carrierID;
-(void)_clearDisplayTimer;
-(void)_clearWaitingForBasebandTimer;
-(void)setAgreeURL:(id)arg1 ;
-(void)setDisagreeURL:(id)arg1 ;
-(void)_clearTicketAcceptedTimer;
-(void)_sendAck;
-(void)_fetchCloudConfig;
-(void)_checkActivationFailIfBricked:(BOOL)arg1 ;
-(void)_displayTimerTimeout;
-(void)_activateIfNecessary;
-(void)setActivationRequest:(id)arg1 ;
-(id)_newActivationRequest;
-(id)_connectionWithRequest:(id)arg1 outRequest:(id*)arg2 ;
-(void)_waitingForBasebandTimeout;
-(void)_startActivation;
-(void)_checkBasebandStatusBeforeActivation;
-(void)_sanitizeSystemTime;
-(void)_systemTimeUpdated;
-(void)_ticketAcceptedDidTimeout;
-(void)_dismissRemoteUI;
-(id)disagreeURL;
-(void)activationFailurePagePressedRetry:(id)arg1 ;
-(void)activationFailurePagePressedWifi:(id)arg1 ;
-(id)activationRequest;
-(id)activationURL;
-(void)setActivationURL:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_cleanup;
-(id)agreeURL;
-(void)_userAgreedToTCs:(BOOL)arg1 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)_updateStatusLabel;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
-(void)back:(id)arg1 ;
-(void)_activate;
@end

