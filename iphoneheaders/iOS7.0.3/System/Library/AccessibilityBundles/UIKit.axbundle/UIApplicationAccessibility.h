/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIApplicationAccessibility_super.h>

@interface UIApplicationAccessibility : UIApplicationAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_axAllSubviews;
-(void)_accessibilitySetAllowsNotificationsDuringSuspension:(BOOL)arg1 ;
-(BOOL)_accessibilityOverrideStartStopExtraExtras;
-(BOOL)_accessibilityStartStopDictation;
-(void)_accessibilityAVCaptureStarted:(id)arg1 ;
-(void)_accessibilityAVCaptureStopped:(id)arg1 ;
-(void)_accessibilityKeyboardDidHide:(id)arg1 ;
-(void)_accessibilityKeyboardDidShow:(id)arg1 ;
-(id)_axSubviews;
-(id)_accessibilitySummaryElement;
-(id)_accessibilityWindows;
-(id)_accessibilityUIWindowFindWithGlobalPoint:(CGPoint)arg1 ;
-(id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2 ;
-(id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2 forFocus:(BOOL)arg3 ;
-(void)_appendKeyboardWindow:(id)arg1 forModalWindow:(id)arg2 allWindows:(id)arg3 ;
-(id)_accessibilityTypingCandidates;
-(id)_firstStatusBarElement;
-(id)_lastStatusBarElement;
-(id)_accessibilityTitleBarElement;
-(BOOL)_accessibilityDictationIsListening;
-(id)_accessibilityCurrentHardwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareKeyboardLayout;
-(id)_accessibilityCurrentSoftwareLanguage;
-(BOOL)_accessibilityHardwareKeyboardActive;
-(void)_appendWindowsForAccessibilityElements:(id)arg1 withElement:(id)arg2 ;
-(int)_accessibilityApplicationForPosition:(CGPoint)arg1 ;
-(void)_accessibilityFixPhysicalEvent:(id)arg1 ;
-(void)dealloc;
-(BOOL)openURL:(id)arg1 ;
-(void)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityPerformEscape;
-(unsigned)_accessibilityMachPort;
-(id)accessibilityAttributeValue:(int)arg1 ;
-(void)_accessibilityInitialize;
-(void)_loadAllAccessibilityInformation;
-(void)accessibilityDisable;
-(id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2 ;
-(id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2 ;
-(id)_accessibilityTableViewCellWithRowIndex:(int)arg1 andColumn:(int)arg2 ;
-(id)_accessibilityElementsForSearchParameter:(id)arg1 ;
-(id)_accessibilityBundleIdentifier;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityMainWindow;
-(BOOL)_accessibilitySoftwareKeyboardActive;
-(BOOL)_accessibilityElementBelongsToKeyboardWindow:(id)arg1 ;
-(CGRect)_accessibilitySoftwareKeyboardAccessibilityFrame;
-(BOOL)_accessibilityDispatchKeyboardAction:(id)arg1 ;
-(BOOL)accessibilityStartStopToggle;
-(id)_accessibilityFirstElementForFocus;
-(id)_accessibilityResponderElement;
-(BOOL)_accessibilityAllowsNotificationsDuringSuspension;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
@end

