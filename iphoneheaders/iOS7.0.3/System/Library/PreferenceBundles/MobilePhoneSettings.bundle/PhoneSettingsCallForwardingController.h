/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <MobilePhoneSettings/PhoneSettingsListController.h>

@class NSArray;

@interface PhoneSettingsCallForwardingController : PhoneSettingsListController {

	NSArray* unconditionalSpecifiers;
	NSArray* customSpecifiers;
	NSArray* switcherSpecifiers;
	int _interfaceState;
	int _previousState;
	BOOL _isSettingForwardingStateFromStoredNumber;
	int groupResponseRegister;

}
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id)callForwardingEnabled:(id)arg1 ;
-(id)callForwardingNumber:(id)arg1 ;
-(void)updateCellStates;
-(void)_callForwardingChanged:(id)arg1 ;
-(BOOL)_shouldDisplayExtendedInterface;
-(void)_callForwardingForMobileBusyChanged:(id)arg1 ;
-(void)_callForwardingForNoReplyChanged:(id)arg1 ;
-(void)_callForwardingForNotReachableChanged:(id)arg1 ;
-(void)reRequestCallForwardingStateIfNecessary;
-(id)_createUnconditionalForwardingSpecifiers;
-(id)_createSwitcherSpecifiers;
-(id)_createCustomForwardingSpecifiers;
-(void)unconditionalForwardingAction:(id)arg1 ;
-(void)customForwardingAction:(id)arg1 ;
-(void)setCallForwardingNumber:(id)arg1 specifier:(id)arg2 ;
-(id)_getCustomForwardingLabelTranslationFromDictionary:(id)arg1 reasonKey:(id)arg2 defaultValue:(id)arg3 ;
-(id)_labelForForwardingReason:(CFStringRef)arg1 ;
-(void)setCallForwardingNumberForNoReply:(id)arg1 specifier:(id)arg2 ;
-(id)callForwardingNumberForNoReply:(id)arg1 ;
-(void)setCallForwardingNumberForMobileBusy:(id)arg1 specifier:(id)arg2 ;
-(id)callForwardingNumberForMobileBusy:(id)arg1 ;
-(void)setCallForwardingNumberForNotReachable:(id)arg1 specifier:(id)arg2 ;
-(id)callForwardingNumberForNotReachable:(id)arg1 ;
-(id)_cellforSpecifierID:(id)arg1 ;
-(void)_setMasterSwitchEnabled:(BOOL)arg1 ;
-(void)_setUnconditionalCellEnabled:(BOOL)arg1 ;
-(void)_requestTransitionToUnconditionalState;
-(void)_requestTransitionToCustomState;
-(void)_requestTransitionToOffState;
-(void)_transitionToSimpleForwardingState;
-(void)_setMasterSwitchLoading:(BOOL)arg1 ;
-(void)_setNumberFieldsEnabled:(BOOL)arg1 ;
-(void)_setSwitcherFieldsEnabled:(BOOL)arg1 ;
-(void)_transitionToUnconditionalForwardingState;
-(void)_transitionToCustomForwardingState;
-(void)_popupCallForwardingErrorAlertView;
-(unsigned)callForwardingEnabledForReason:(id)arg1 ;
-(void)_transitionToOffState;
-(void)_failTransitionToOff;
-(void)_failTransitionToCustom;
-(void)_discoveryStateDone;
-(void)_failTransitionToUnconditional;
-(void)masterSwitchSetAction:(id)arg1 ;
-(void)setCallForwardingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)specifiers;
-(void)reloadSpecifiers;
@end

