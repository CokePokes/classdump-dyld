/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCHElementBuilder : NSObject
+(CGRect)clipRectForElementsDrawnByRenderState:(id)arg1 ;
+(CGRect)p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(id)arg1 returningItemCount:(unsigned*)arg2 ;
+(CGRect)elementsRectForElementsDrawnByRenderState:(id)arg1 ;
-(unsigned)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRect:(CGRect*)arg6 outNewStrings:(id*)arg7 ;
-(unsigned)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewElementPaths:(const CGPath*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(CGRect*)arg5 outNewErrorBarDescriptors:(/*function pointer*/ void**)arg6 ;
-(void)trendlineElementForSeries:(id)arg1 forBodyLayout:(id)arg2 outElementBounds:(CGRect*)arg3 outElementClipRect:(CGRect*)arg4 outElementPath:(id*)arg5 ;
-(CGAffineTransform)transformForRenderingTrendlineTextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 outParagraphStyle:(id*)arg5 outNewString:(const _CFAttributedString*)arg6 ;
-(CGAffineTransform)transformForRenderingR2TextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 outParagraphStyle:(id*)arg5 outString:(id*)arg6 ;
-(CGPoint)labelPointForPosition:(unsigned)arg1 rect:(CGRect)arg2 stringSize:(CGSize)arg3 ;
-(CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned)arg2 forGroup:(unsigned)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 ;
-(unsigned)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const CGPath*)arg4 outSelectionKnobLocations:(id*)arg5 ;
-(unsigned)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(BOOL)arg3 outNewLineDescriptors:(/*function pointer*/ void**)arg4 ;
-(BOOL)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(CGAffineTransform*)arg3 outLine:(SCD_Struct_TS459*)arg4 ;
-(void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(BOOL*)arg3 outOffsetInBody:(double*)arg4 ;
-(CGAffineTransform)p_transformForRenderingTrendlineTextNotR2:(BOOL)arg1 forSeries:(id)arg2 forAreaLayout:(id)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outParagraphStyle:(id*)arg6 outString:(const _CFAttributedString*)arg7 ;
@end

