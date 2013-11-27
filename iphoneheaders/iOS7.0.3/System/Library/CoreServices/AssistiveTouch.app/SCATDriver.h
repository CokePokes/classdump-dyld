/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SCATDriverDelegate;
@class SCATFocusContext, , AXTimer, SCATElementManager;

@interface SCATDriver : NSObject {

	SCATFocusContext* _focusContext;
	BOOL _hasIdleTimeExpired;
	<SCATDriverDelegate>* _delegate;
	int _phase;
	AXTimer* _idleTimer;
	int _lastWrapDirection;

}

@property (assign,nonatomic) <SCATDriverDelegate> * delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCATFocusContext * focusContext; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isPaused; 
@property (nonatomic,readonly) BOOL isInactive; 
@property (nonatomic,readonly) SCATElementManager * activeElementManager; 
@property (nonatomic,@dynamic,readonly) int driverType; 
@property (assign,nonatomic) int phase;                                                //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL hasIdleTimeExpired;                                  //@synthesize hasIdleTimeExpired=_hasIdleTimeExpired - In the implementation block
@property (assign,nonatomic) int lastWrapDirection;                                    //@synthesize lastWrapDirection=_lastWrapDirection - In the implementation block
@property (nonatomic,retain) AXTimer * idleTimer;                                      //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,readonly) BOOL isGroupingEnabled; 
-(void)_stepToNextFocusContextInDirection:(int)arg1 ;
-(void)_idleTimerDidFire;
-(BOOL)_canAutomaticallyPauseScanner;
-(void)pauseScanning;
-(BOOL)canBecomeActiveDriver;
-(BOOL)_handleStepNextAction;
-(BOOL)_handleStepPreviousAction;
-(void)beginScanningWithFocusContext:(id)arg1 ;
-(void)setFocusContext:(id)arg1 ;
-(BOOL)hasIdleTimeExpired;
-(id)activeElementManager;
-(BOOL)isActiveScannerDriver;
-(id)focusContext;
-(id)selectActionHandler;
-(BOOL)_canTransitionToPhase:(int)arg1 ;
-(void)_willTransitionToPhase:(int)arg1 ;
-(id)firstFocusContext;
-(void)_didTransitionToPhase:(int)arg1 ;
-(id)_drillOutFocusContextForParentGroupOfFocusContext:(id)arg1 ;
-(int)_nextFocusSourceFromSource:(int)arg1 inDirection:(int)arg2 ;
-(id)_focusContextForSource:(int)arg1 inDirection:(int)arg2 currentContext:(id)arg3 ;
-(id)_focusContextAdjacentToSource:(int)arg1 direction:(int)arg2 fromContext:(id)arg3 checkedSources:(unsigned)arg4 ;
-(BOOL)_shouldFocusToEscapeParentGroup:(id)arg1 elementManager:(id)arg2 ;
-(id)_focusedElementManagerForContext:(id)arg1 ;
-(int)_sourceForFocusContext:(id)arg1 ;
-(id)_focusContextFromPrimaryContext:(id)arg1 inDirection:(int)arg2 didWrap:(BOOL*)arg3 ;
-(id)nextFocusContextFromContext:(id)arg1 inDirection:(int)arg2 didWrap:(BOOL*)arg3 ;
-(void)_didWrapInDirection:(int)arg1 ;
-(void)_willStepToNextFocusContext:(id)arg1 inDirection:(int)arg2 ;
-(void)willDrillIntoGroup;
-(void)willDrillOutOfGroup;
-(BOOL)_handleActivateAction;
-(BOOL)_handleRunAction;
-(BOOL)_handleSelectAction;
-(BOOL)_handleStopAction;
-(void)handleDrillInOnGroup:(id)arg1 elementManager:(id)arg2 ;
-(void)handleDrillOutOnGroup:(id)arg1 elementManager:(id)arg2 ;
-(int)_preferredBehaviorForSelectCount:(unsigned)arg1 focusContext:(id)arg2 ;
-(void)endScanning;
-(void)setLastWrapDirection:(int)arg1 ;
-(BOOL)_fireSelectActionWithCount:(unsigned)arg1 preferrsMenuOnFirstPress:(BOOL)arg2 ;
-(id)scannerManager;
-(int)currentScanDirection;
-(BOOL)isInactive;
-(void)resumeScanning;
-(void)freezeScanning;
-(BOOL)handleInputAction:(int)arg1 ;
-(void)willBecomeScannerDriver;
-(void)didBecomeScannerDriver;
-(void)willFinishAsScannerDriver;
-(void)didFinishAsScannerDriver;
-(void)outputManager:(id)arg1 willSpeakFocusContext:(id)arg2 ;
-(void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2 ;
-(BOOL)actionHandler:(id)arg1 shouldActImmediatelyOnActionCount:(unsigned)arg2 ;
-(void)actionHandlerDidFireAction:(id)arg1 ;
-(id)focusContextForActionHandler:(id)arg1 ;
-(void)actionHandlerDidCancelPendingAction:(id)arg1 ;
-(void)setHasIdleTimeExpired:(BOOL)arg1 ;
-(int)lastWrapDirection;
-(BOOL)isPaused;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(BOOL)isActive;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(BOOL)isGroupingEnabled;
-(void)_cancelIdleTimer;
-(void)_resetIdleTimer;
-(id)initWithDelegate:(id)arg1 ;
-(void)setIdleTimer:(id)arg1 ;
-(id)idleTimer;
@end

