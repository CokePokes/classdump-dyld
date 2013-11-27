/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AXBackBoardServerInstanceDelegate;
#import <BackBoard/BackBoard-Structs.h>
@class AXIPCServer, , NSMutableArray;

@interface AXBackBoardServerInstance : NSObject {

	AXIPCServer* _server;
	<AXBackBoardServerInstanceDelegate>* _delegate;
	NSMutableArray* _eventListeners;
	NSMutableArray* _zoomListeners;
	NSMutableArray* _eventTapClients;

}

@property (assign,nonatomic) <AXBackBoardServerInstanceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)backBoardServerInstance;
-(id)_handleEnableEventTap:(id)arg1 ;
-(void)zoomListener:(float)arg1 zoomFrame:(CGRect)arg2 ;
-(id)_handleItemChooserVisible:(id)arg1 ;
-(id)_handleRegisterZoomConflict:(id)arg1 ;
-(id)_handleZoomFocusedChanged:(id)arg1 ;
-(id)_handleZoomAdjustment:(id)arg1 ;
-(id)_handleZoomActivationAnimationDelay:(id)arg1 ;
-(id)_handleZoomDeactivationAnimationDelay:(id)arg1 ;
-(id)_handleZoomAppSwitcherRevealAnimationDelay:(id)arg1 ;
-(id)_handleZoomAppSwitcherWillReveal:(id)arg1 ;
-(id)_handleZoomActivationAnimationWillBegin:(id)arg1 ;
-(id)_handleZoomDeactivationAnimationWillBegin:(id)arg1 ;
-(id)_handleConvertFrameWithContextId:(id)arg1 ;
-(id)_handlePostEvent:(id)arg1 ;
-(id)_handleUserEventOccurred:(id)arg1 ;
-(id)_handleEventListenerRegistration:(id)arg1 ;
-(id)_handleZoomListenerRegistration:(id)arg1 ;
-(id)_handleWakeUpIfNecessary:(id)arg1 ;
-(id)_handleRegisterAssistiveTouchPID:(id)arg1 ;
-(id)_handleRegisterAccessibilityUIPID:(id)arg1 ;
-(id)_handleRegisterSiriViewServicePID:(id)arg1 ;
-(id)_handleLockScreenDimTimerEnabled:(id)arg1 ;
-(id)_handleGetGuidedAccessAvailability:(id)arg1 ;
-(id)_handleIsGuidedAccessSelfLockedToRequestingApp:(id)arg1 ;
-(id)_handleSetGuidedAccessEnabledByRequestingApp:(id)arg1 ;
-(id)_handleInvertColorsChange:(id)arg1 ;
-(id)_handleIsHearingControlEnabled:(id)arg1 ;
-(void)eventListener:(id)arg1 ;
-(id)_gaxBackboard;
-(id)_initServer;
-(void)_initializeHandlers;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

