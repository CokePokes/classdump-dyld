/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:40:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@protocol UIAccessibilityElementMockViewDelegateProtocol;
@class UIView, ;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {

	UIView* _view;
	<UIAccessibilityElementMockViewDelegateProtocol>* _delegate;
	int _subviewIndex;

}

@property (nonatomic,retain) UIView * view;                                                            //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) <UIAccessibilityElementMockViewDelegateProtocol> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int subviewIndex;                                                         //@synthesize subviewIndex=_subviewIndex - In the implementation block
-(BOOL)_accessibilityProvidesScannerGroupElements;
-(void)revalidate;
-(int)subviewIndex;
-(void)setSubviewIndex:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)description;
-(id)delegate;
-(id)view;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)setView:(id)arg1 ;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(id)accessibilityIdentifier;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(int)arg1 ;
-(BOOL)accessibilityActivate;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityContainerElements;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityScrollAncestor;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(int)arg1 ;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(id)_accessibilityUserTestingParent;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityUserTestingElementType;
-(int)_accessibilityPageControlIndex;
-(int)_accessibilityPageControlCount;
-(BOOL)_accessibilityIsScannerElement;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(int)accessibilityCompareGeometry:(id)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(BOOL)_accessibilityScrollToVisible;
-(id)accessibilityIdentification;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityIsScannerGroup;
-(int)_accessibilityScannerGroupTraits;
-(NSRange)accessibilityRowRange;
@end

