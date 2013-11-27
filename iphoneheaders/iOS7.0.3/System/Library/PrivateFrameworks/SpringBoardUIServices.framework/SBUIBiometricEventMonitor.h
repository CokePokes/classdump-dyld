/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/BiometricKitDelegate.h>

@protocol SBUIBiometricEventMonitorDelegate;
@class BiometricKit, , NSHashTable, NSCountedSet;

@interface SBUIBiometricEventMonitor : NSObject <BiometricKitDelegate> {

	BiometricKit* _biometricKit;
	<SBUIBiometricEventMonitorDelegate>* _delegate;
	NSHashTable* _observers;
	unsigned _lastEvent;
	NSCountedSet* _matchingDisabledRequesters;
	NSCountedSet* _activePasscodeViews;
	BOOL _matchingEnabled;
	BOOL _screenIsOff;
	BOOL _deviceLocked;
	BOOL _lockScreenTopmost;

}

@property (assign,nonatomic) <SBUIBiometricEventMonitorDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)statusMessage:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)enableMatchingForPasscodeView:(id)arg1 ;
-(void)disableMatchingForPasscodeView:(id)arg1 ;
-(void)_setMatchingEnabled:(BOOL)arg1 ;
-(void)_profileSettingsChanged:(id)arg1 ;
-(void)_reevaluateMatching;
-(void)_startMatching;
-(void)_stopMatching;
-(void)_updateHandlersForEvent:(unsigned)arg1 ;
-(void)matchResult:(id)arg1 ;
-(BOOL)hasEnrolledIdentities;
-(id)stringForEvent:(unsigned)arg1 ;
-(BOOL)isMatchingEnabled;
-(void)setMatchingDisabled:(BOOL)arg1 requester:(id)arg2 ;
-(void)setLockScreenTopmost:(BOOL)arg1 ;
-(void)_setDeviceLocked:(BOOL)arg1 ;
-(void)noteScreenWillTurnOff;
-(void)noteScreenDidTurnOff;
-(void)noteScreenWillTurnOn;
-(void)_deviceWillWake;
@end

