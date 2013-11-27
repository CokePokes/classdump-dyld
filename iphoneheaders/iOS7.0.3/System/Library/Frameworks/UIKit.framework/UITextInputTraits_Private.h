/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UITextInputTraits_Private <NSObject,UITextInputTraits>
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@optional
-(int)textSelectionBehavior;
-(BOOL)displaySecureTextUsingPlainText;
-(CFCharacterSetRef)textTrimmingSet;
-(BOOL)acceptsSplitKeyboard;
-(int)shortcutConversionType;
-(BOOL)acceptsFloatingKeyboard;
-(BOOL)learnsCorrections;
-(void)setLearnsCorrections:(BOOL)arg1;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1;
-(id)insertionPointColor;
-(void)setInsertionPointColor:(id)arg1;
-(id)selectionBarColor;
-(void)setSelectionBarColor:(id)arg1;
-(id)selectionHighlightColor;
-(void)setSelectionHighlightColor:(id)arg1;
-(id)selectionDragDotImage;
-(void)setSelectionDragDotImage:(id)arg1;
-(unsigned)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned)arg1;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1;
-(void)setTextSelectionBehavior:(int)arg1;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1;
-(BOOL)isSingleLineDocument;
-(void)setIsSingleLineDocument:(BOOL)arg1;
-(BOOL)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(BOOL)arg1;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1;
-(BOOL)returnKeyGoesToNextResponder;
-(void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
-(void)setAcceptsFloatingKeyboard:(BOOL)arg1;
-(void)setAcceptsSplitKeyboard:(BOOL)arg1;
-(void)setDisplaySecureTextUsingPlainText:(BOOL)arg1;
-(void)setShortcutConversionType:(int)arg1;
-(BOOL)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(BOOL)arg1;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1;
-(BOOL)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(BOOL)arg1;
-(BOOL)deferBecomingResponder;
-(void)setDeferBecomingResponder:(BOOL)arg1;
-(BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1;

@required
-(void)takeTraitsFrom:(id)arg1;
@end

