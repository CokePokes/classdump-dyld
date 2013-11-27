/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXGroupable.h>

@class AXElementGroup, AXUIElement, NSArray, NSString;

@interface AXElement : NSObject <AXGroupable> {

	BOOL _representsScannerGroup;
	AXUIElement* _uiElement;
	AXElementGroup* _parentGroup;

}

@property (nonatomic,retain) AXUIElement * uiElement;                                                            //@synthesize uiElement=_uiElement - In the implementation block
@property (nonatomic,readonly) AXUIElementRef elementRef; 
@property (nonatomic,readonly) BOOL isSystemWideElement; 
@property (assign,getter=isPassivelyListeningForEvents,nonatomic) BOOL passivelyListeningForEvents; 
@property (nonatomic,readonly) AXElement * currentApplication; 
@property (nonatomic,readonly) AXElement * springBoardApplication; 
@property (nonatomic,readonly) BOOL isScreenLocked; 
@property (nonatomic,readonly) NSArray * visibleElements; 
@property (nonatomic,readonly) AXElement * firstResponder; 
@property (nonatomic,readonly) AXElement * firstElementInApplication; 
@property (nonatomic,readonly) AXElement * firstElementInApplicationForFocus; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) BOOL isSpringBoard; 
@property (nonatomic,readonly) BOOL isAccessibleElement; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * hint; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect visibleFrame; 
@property (nonatomic,readonly) CGRect textCursorFrame; 
@property (nonatomic,readonly) CGPoint centerPoint; 
@property (nonatomic,readonly) CGPoint visiblePoint; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) AXElement * touchContainer; 
@property (nonatomic,readonly) BOOL isKeyboardKey; 
@property (nonatomic,readonly) BOOL isTouchContainer; 
@property (nonatomic,readonly) BOOL hasWebContent; 
@property (nonatomic,readonly) BOOL hasTextEntry; 
@property (nonatomic,readonly) BOOL isMathEquation; 
@property (nonatomic,readonly) unsigned windowContextId; 
@property (nonatomic,readonly) NSArray * variantKeys; 
@property (nonatomic,readonly) BOOL hasVariantKeys; 
@property (nonatomic,readonly) NSArray * textOperations; 
@property (nonatomic,readonly) NSArray * typingCandidates; 
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (nonatomic,readonly) BOOL canPerformEscape; 
@property (nonatomic,readonly) BOOL canPerformZoom; 
@property (nonatomic,readonly) NSArray * supportedGestures; 
@property (nonatomic,readonly) BOOL isScannerElement; 
@property (nonatomic,readonly) BOOL representsScannerGroup;                                                      //@synthesize representsScannerGroup=_representsScannerGroup - In the implementation block
@property (nonatomic,readonly) NSArray * scannerRootGroup; 
@property (nonatomic,retain) AXElement * autoscrollTarget; 
@property (nonatomic,readonly) BOOL isAutoscrolling; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                                       //@synthesize parentGroup=_parentGroup - In the implementation block
+(id)elementWithUIElement:(id)arg1 ;
+(id)elementWithAXUIElement:(AXUIElementRef)arg1 ;
+(id)systemWideElement;
+(id)elementAtCoordinate:(CGPoint)arg1 withVisualPadding:(BOOL)arg2 ;
-(BOOL)performAction:(int)arg1 ;
-(void)setParentGroup:(id)arg1 ;
-(id)parentGroup;
-(id)bundleId;
-(BOOL)zoomIn;
-(BOOL)zoomOut;
-(void)dealloc;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)firstResponder;
-(BOOL)isValid;
-(CGPathRef)path;
-(id)value;
-(NSRange)selectedTextRange;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(id)identifier;
-(id)label;
-(unsigned long long)traits;
-(BOOL)isVisible;
-(CGRect)visibleFrame;
-(BOOL)isGroup;
-(id)language;
-(id)nextElementsWithCount:(unsigned)arg1 ;
-(id)previousElementsWithCount:(unsigned)arg1 ;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(id)uiElement;
-(BOOL)isSystemWideElement;
-(id)elementForAttribute:(int)arg1 ;
-(id)_axElementsForAXUIElements:(id)arg1 ;
-(unsigned)windowContextId;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(BOOL)hasAllTraits:(unsigned long long)arg1 ;
-(BOOL)hasAnyTraits:(unsigned long long)arg1 ;
-(id)touchContainer;
-(float)distanceToPoint:(CGPoint)arg1 ;
-(BOOL)hasWebContent;
-(BOOL)hasTextEntry;
-(BOOL)isKeyboardKey;
-(BOOL)isMathEquation;
-(BOOL)canPerformActivate;
-(BOOL)canPerformEscape;
-(BOOL)canPerformZoom;
-(BOOL)press;
-(CGPoint)visiblePoint;
-(CGPoint)centerPoint;
-(BOOL)performAction:(int)arg1 withValue:(id)arg2 ;
-(id)currentApplication;
-(id)highestAncestorGroup;
-(AXUIElementRef)elementRef;
-(BOOL)isPassivelyListeningForEvents;
-(void)setPassivelyListeningForEvents:(BOOL)arg1 ;
-(id)springBoardApplication;
-(id)visibleElements;
-(id)firstElementInApplication;
-(id)firstElementInApplicationForFocus;
-(BOOL)isSpringBoard;
-(id)elementsMatchingText:(id)arg1 ;
-(BOOL)isAccessibleElement;
-(id)hint;
-(CGRect)textCursorFrame;
-(BOOL)isTouchContainer;
-(id)variantKeys;
-(BOOL)hasVariantKeys;
-(id)textOperations;
-(id)typingCandidates;
-(BOOL)hasOnlyTraits:(unsigned long long)arg1 ;
-(float)distanceToElement:(id)arg1 ;
-(void)scrollToVisible;
-(BOOL)canScrollInAtLeastOneDirection;
-(BOOL)supportsAction:(int)arg1 ;
-(id)supportedGestures;
-(BOOL)longPress;
-(BOOL)isScannerElement;
-(id)scannerRootGroup;
-(id)autoscrollTarget;
-(void)setAutoscrollTarget:(id)arg1 ;
-(void)autoscrollInDirection:(int)arg1 ;
-(void)pauseAutoscrolling;
-(void)increaseAutoscrollSpeed;
-(void)decreaseAutoscrollSpeed;
-(void)scrollToBottom;
-(void)setUiElement:(id)arg1 ;
-(BOOL)representsScannerGroup;
-(void)scrollToTop;
-(BOOL)isScreenLocked;
-(BOOL)isAutoscrolling;
-(BOOL)isMap;
@end

