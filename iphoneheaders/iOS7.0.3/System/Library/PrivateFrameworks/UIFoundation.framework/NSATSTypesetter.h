/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTypesetter.h>

@class NSAttributedString, NSLayoutManager, NSArray, NSTextContainer, NSParagraphStyle;

@interface NSATSTypesetter : NSTypesetter {

	NSAttributedString* attributedString;
	NSRange paragraphGlyphRange;
	NSRange paragraphSeparatorGlyphRange;
	float lineFragmentPadding;
	NSLayoutManager* layoutManager;
	NSArray* textContainers;
	NSTextContainer* currentTextContainer;
	unsigned currentTextContainerIndex;
	CGSize currentTextContainerSize;
	NSParagraphStyle* currentParagraphStyle;
	void** _atsReserved[8];
	id _private;

}
+(id)sharedInstance;
+(void)initialize;
+(id)sharedTypesetter;
+(BOOL)_allowsScreenFontKerning;
-(oneway void)release;
-(void)dealloc;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(float)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned)arg2 ;
-(unsigned)actionForControlCharacterAtIndex:(unsigned)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned)arg3 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned)arg2 maxNumberOfLineFragments:(unsigned)arg3 nextGlyphIndex:(unsigned*)arg4 ;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(const char*)_bidiLevels;
-(CTTypesetterRef)_ctTypesetter;
-(void)_doBidiProcessing;
-(int)_baseWritingDirection;
-(BOOL)_baselineRenderingMode;
-(void)beginLineWithGlyphAtIndex:(unsigned)arg1 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)_flushCachedObjects;
-(void)beginParagraph;
-(void)endParagraph;
-(BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned*)arg1 characterIndex:(unsigned*)arg2 atPoint:(CGPoint*)arg3 renderingContext:(id*)arg4 ;
-(BOOL)_forceWordWrapping;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(void)_setBaselineRenderingMode:(BOOL)arg1 ;
-(id)_getATSTypesetterGuts;
-(BOOL)_usesScreenFonts;
-(unsigned)_sweepDirectionForGlyphAtIndex:(long)arg1 ;
-(unsigned)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned)arg1 ;
-(BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned)arg1 ;
-(float)hyphenationFactorForGlyphAtIndex:(unsigned)arg1 ;
-(CGRect)boundingBoxForControlGlyphAtIndex:(unsigned)arg1 forTextContainer:(id)arg2 proposedLineFragment:(CGRect)arg3 glyphPosition:(CGPoint)arg4 characterIndex:(unsigned)arg5 ;
-(unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)arg1 ;
-(SCD_Struct_NS2*)_allocateAuxData;
-(/*function pointer*/ void**)_lineFragmentRectForProposedRectArgs;
@end

