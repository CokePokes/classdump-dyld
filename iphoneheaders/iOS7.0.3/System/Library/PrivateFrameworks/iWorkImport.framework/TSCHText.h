/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUCache, NSMutableDictionary;

@interface TSCHText : NSObject {

	TSUCache* mTSWPTextCache;
	TSUCache* mTSWPColumnCache;
	TSUCache* mNumberWidthCache;
	NSMutableDictionary* mDigitWidthFonts;

}
+(id)sharedText;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)_singletonAlloc;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 wrapWidth:(float)arg4 atPosition:(CGPoint)arg5 viewScale:(float)arg6 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3 outErasableFrame:(CGRect*)arg4 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(CGRect*)arg3 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 atPosition:(CGPoint)arg4 range:(NSRange)arg5 viewScale:(float)arg6 ;
-(CGRect)frameForRange:(NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(CGRect*)arg4 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 wrapWidth:(float)arg4 atPosition:(CGPoint)arg5 range:(NSRange)arg6 viewScale:(float)arg7 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 viewScale:(float)arg4 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 atPosition:(CGPoint)arg4 viewScale:(float)arg5 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(float)arg3 ;
-(CGRect)frameForRange:(NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(float)arg4 outErasableFrame:(CGRect*)arg5 ;
-(CTFontRef)retainedCTFontForParagraphStyle:(id)arg1 ;
-(id)p_wpTextForParagraphStyle:(id)arg1 textBlack:(BOOL)arg2 ;
-(id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(float)arg3 ;
-(id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(BOOL)arg3 wrapWidth:(float)arg4 ;
-(id)p_wpStorageForAttributedString:(CFAttributedStringRef)arg1 paragraphStyle:(id)arg2 ;
-(BOOL)p_styleSupportsEqualDigits:(id)arg1 ;
-(CGSize)p_wpWidthForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2 ;
-(CGSize)measureAttributedString:(CFAttributedStringRef)arg1 paragraphStyle:(id)arg2 outErasableFrame:(CGRect*)arg3 ;
-(CGRect)frameForRange:(NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 ;
-(void)drawAttributedString:(CFAttributedStringRef)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 atPosition:(CGPoint)arg4 range:(NSRange)arg5 viewScale:(float)arg6 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 range:(NSRange)arg4 viewScale:(float)arg5 ;
-(void)clearCaches;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

