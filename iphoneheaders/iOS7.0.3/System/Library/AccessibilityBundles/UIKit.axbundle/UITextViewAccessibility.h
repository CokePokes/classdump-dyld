/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : UITextViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityLinks;
-(void)dealloc;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)webViewDidChange:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(int)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
@end

