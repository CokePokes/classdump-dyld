/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding>
+(id)attributedStringWithFormatAndAttributes:(id)arg1 ;
+(id)attributedStringWithFormatAndAttributes:(id)arg1 ;
+(id)scrcStringWithFormat:(id)arg1 ;
+(id)scrcStringWithLiteralString:(id)arg1 ;
+(id)scrcStringWithString:(id)arg1 ;
+(id)scrcString;
+(id)scrcPauseString;
+(id)scrcSpaceString;
+(id)scrcStringWithString:(id)arg1 treePosition:(id)arg2 ;
+(id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2 ;
+(id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2 ;
+(id)_scrcStringWithFormat:(id)arg1 args:(void*)arg2 ;
+(id)attributedStringWithAttachment:(id)arg1 ;
+(id)_documentTypeForFileType:(id)arg1 ;
+(id)textUnfilteredTypes;
+(id)textUnfilteredFileTypes;
+(id)textUnfilteredPasteboardTypes;
+(id)textTypes;
+(id)textFileTypes;
+(id)textPasteboardTypes;
+(id)writableTextFileTypesForDocumentTypes;
+(void)_setAttributedDictionaryClass:(Class)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(BOOL)containsAttribute:(id)arg1 ;
-(id)MP_attributedStringByAddingAttributes:(id)arg1 toOccurrencesOfSubstring:(id)arg2 options:(unsigned)arg3 ;
-(id)dd_attributedSubstringFromRange:(NSRange)arg1 ;
-(id)_ui_secureStringWithPointSize:(float)arg1 ;
-(int)_ui_resolvedTextAlignment;
-(id)_ui_attributedStringWithOriginalFontAttributes;
-(id)_ui_fontsInRange:(NSRange)arg1 ;
-(id)_ui_synthesizeAttributedSubstringFromRange:(NSRange)arg1 usingDefaultAttributes:(id)arg2 ;
-(BOOL)scrcContainsPause;
-(id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2 ;
-(id)scrcStringByAppendingAttributedString:(id)arg1 ;
-(NSRange)_scrcRangeOfVanillaFormatSpecifier;
-(NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned)arg1 ;
-(BOOL)_scrcHasPauseCommaAtIndex:(unsigned)arg1 ;
-(id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)drawWithRect:(CGRect)arg1 options:(int)arg2 context:(id)arg3 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(int)arg2 context:(id)arg3 ;
-(id)_ui_attributedSubstringFromRange:(NSRange)arg1 scaledByScaleFactor:(float)arg2 ;
-(id)_ui_attributedSubstringFromRange:(NSRange)arg1 withTrackingAdjustment:(float)arg2 ;
-(CGSize)size;
-(void)drawInRect:(CGRect)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 ;
-(id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)dataFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned)arg2 completeRow:(BOOL*)arg3 ;
-(NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)_isStringDrawingTextStorage;
-(unsigned)_lineBreakBeforeIndex:(unsigned)arg1 withinRange:(NSRange)arg2 usesAlternativeBreaker:(BOOL)arg3 ;
-(unsigned)lineBreakByHyphenatingBeforeIndex:(unsigned)arg1 withinRange:(NSRange)arg2 ;
-(NSRange)doubleClickAtIndex:(unsigned)arg1 inRange:(NSRange)arg2 ;
-(id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(NSRange)arg1 ;
-(id)fileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 error:(id*)arg3 ;
-(id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)defaultLanguage;
-(NSRange)doubleClickAtIndex:(unsigned)arg1 ;
-(unsigned)lineBreakBeforeIndex:(unsigned)arg1 withinRange:(NSRange)arg2 ;
-(unsigned)nextWordFromIndex:(unsigned)arg1 forward:(BOOL)arg2 ;
-(id)_RTFWithSelector:(SEL)arg1 range:(NSRange)arg2 documentAttributes:(id)arg3 ;
-(id)RTFDFileWrapperFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)docFormatFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(void)_readDocumentFragment:(id)arg1 fromRange:(NSRange)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4 ;
-(id)_documentFromRange:(NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4 ;
-(id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)initWithURL:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithPath:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3 ;
-(id)_initWithDOMRange:(id)arg1 ;
-(id)fontAttributesInRange:(NSRange)arg1 ;
-(id)rulerAttributesInRange:(NSRange)arg1 ;
-(BOOL)_atStartOfTextTable:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)_atEndOfTextTable:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned)arg2 ;
-(int)itemNumberInTextList:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)RTFDFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(BOOL)containsAttachments;
-(id)RTFFromRange:(NSRange)arg1 documentAttributes:(id)arg2 ;
-(id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2 ;
-(id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2 ;
-(BOOL)attribute:(id)arg1 existsInRange:(NSRange)arg2 ;
-(id)trimmedString;
-(id)_UIKBStringWideAttributeValueForKey:(id)arg1 ;
-(id)_createAttributedSubstringWithRange:(NSRange)arg1 ;
-(unsigned long)_cfTypeID;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 replacingCharactersInRanges:(const NSRange*)arg2 numberOfRanges:(int)arg3 withString:(id)arg4 ;
-(id)attributedStringByWeaklyAddingAttributes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
-(Class)classForCoder;
-(void)enumerateAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)enumerateAttributesInRange:(NSRange)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(BOOL)isEqualToAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
@end

