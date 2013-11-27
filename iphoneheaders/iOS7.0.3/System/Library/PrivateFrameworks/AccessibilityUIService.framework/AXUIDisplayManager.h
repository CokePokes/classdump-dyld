/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AXUIAlertStyleProvider, AXUIServiceManager, NSMutableDictionary, NSString;

@interface AXUIDisplayManager : NSObject {

	AXUIAlertStyleProvider* _defaultAlertStyleProvider;
	int _activeInterfaceOrientation;
	unsigned _numberOfAttemptsToInitializeActiveInterfaceOrientation;
	AXUIServiceManager* _serviceManager;
	NSMutableDictionary* _alertQueues;
	NSMutableDictionary* _visibleAlertContexts;
	NSMutableDictionary* _activeWindows;
	NSMutableDictionary* _passiveWindows;
	NSMutableDictionary* _activeContentViewControllers;
	NSMutableDictionary* _passiveContentViewControllers;
	NSString* _systemServerActionHandlerIdentifier;

}

@property (nonatomic,retain) AXUIAlertStyleProvider * defaultAlertStyleProvider;                           //@synthesize defaultAlertStyleProvider=_defaultAlertStyleProvider - In the implementation block
@property (assign,nonatomic) int activeInterfaceOrientation;                                               //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (assign,nonatomic) unsigned numberOfAttemptsToInitializeActiveInterfaceOrientation;              //@synthesize numberOfAttemptsToInitializeActiveInterfaceOrientation=_numberOfAttemptsToInitializeActiveInterfaceOrientation - In the implementation block
@property (assign,nonatomic) AXUIServiceManager * serviceManager;                                          //@synthesize serviceManager=_serviceManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * alertQueues;                                            //@synthesize alertQueues=_alertQueues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * visibleAlertContexts;                                   //@synthesize visibleAlertContexts=_visibleAlertContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeWindows;                                          //@synthesize activeWindows=_activeWindows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passiveWindows;                                         //@synthesize passiveWindows=_passiveWindows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeContentViewControllers;                           //@synthesize activeContentViewControllers=_activeContentViewControllers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passiveContentViewControllers;                          //@synthesize passiveContentViewControllers=_passiveContentViewControllers - In the implementation block
@property (nonatomic,copy) NSString * systemServerActionHandlerIdentifier;                                 //@synthesize systemServerActionHandlerIdentifier=_systemServerActionHandlerIdentifier - In the implementation block
+(id)sharedDisplayManager;
-(void)dealloc;
-(id)init;
-(int)activeInterfaceOrientation;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(id)initWithServiceManager:(id)arg1 ;
-(void)_resetServiceManager;
-(void)setDefaultAlertStyleProvider:(id)arg1 ;
-(void)setServiceManager:(id)arg1 ;
-(void)_attemptToInitializeActiveInterfaceOrientation;
-(void)_activeInterfaceOrientationDidChange:(int)arg1 duration:(double)arg2 ;
-(void)setSystemServerActionHandlerIdentifier:(id)arg1 ;
-(id)systemServerActionHandlerIdentifier;
-(void)setAlertQueues:(id)arg1 ;
-(void)setVisibleAlertContexts:(id)arg1 ;
-(void)setActiveWindows:(id)arg1 ;
-(void)setPassiveWindows:(id)arg1 ;
-(void)setActiveContentViewControllers:(id)arg1 ;
-(void)setPassiveContentViewControllers:(id)arg1 ;
-(id)serviceManager;
-(id)activeContentViewControllers;
-(id)passiveContentViewControllers;
-(void)setContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 forService:(id)arg3 context:(void*)arg4 completion:(/*^block*/ id)arg5 ;
-(id)_windowWithUserInteractionEnabled:(BOOL)arg1 windowLevel:(float)arg2 createIfNeeded:(BOOL)arg3 ;
-(void)_removeContentViewController:(id)arg1 forService:(id)arg2 ;
-(void)_addContentViewController:(id)arg1 toWindow:(id)arg2 forService:(id)arg3 context:(void*)arg4 completion:(/*^block*/ id)arg5 ;
-(id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned)arg4 priority:(unsigned)arg5 duration:(double)arg6 forService:(id)arg7 ;
-(id)_transactionIdentifierForDisplayingAlertWithContext:(id)arg1 service:(id)arg2 ;
-(void)_showOrEnqueueAlertWithContext:(id)arg1 ;
-(id)visibleAlertContexts;
-(void)_hideAlertWithContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(id)alertQueues;
-(void)_didHideOrDequeueAlertWithContext:(id)arg1 ;
-(id)activeWindows;
-(id)passiveWindows;
-(void)_rotateWindow:(id)arg1 toInterfaceOrientation:(int)arg2 duration:(double)arg3 force:(BOOL)arg4 ;
-(id)_transactionIdentifierForDisplayingContentViewController:(id)arg1 service:(id)arg2 ;
-(id)defaultAlertStyleProvider;
-(void)_handleNextAlertForType:(unsigned)arg1 ;
-(BOOL)_hasVisibleAlertWithType:(unsigned)arg1 ;
-(void)_showAlertWithContext:(id)arg1 ;
-(void)setActiveInterfaceOrientation:(int)arg1 ;
-(unsigned)numberOfAttemptsToInitializeActiveInterfaceOrientation;
-(void)setNumberOfAttemptsToInitializeActiveInterfaceOrientation:(unsigned)arg1 ;
-(BOOL)_serviceWantsToPreventAutorotation:(id)arg1 ;
-(double)_originalDurationForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 withAdjustedDuration:(double)arg3 ;
-(id)contentViewControllerWithUserInteractionEnabled:(BOOL)arg1 forService:(id)arg2 ;
-(void)setContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 forService:(id)arg3 ;
-(id)showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 type:(unsigned)arg4 forService:(id)arg5 ;
-(void)hideAlertWithIdentifier:(id)arg1 forService:(id)arg2 ;
@end

