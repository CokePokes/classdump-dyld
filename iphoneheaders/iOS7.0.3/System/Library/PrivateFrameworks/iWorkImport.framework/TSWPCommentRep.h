/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeRep.h>

@class TSDFloatingCommentControlKnob, TSDFloatingCommentDeleteKnob, CALayer;

@interface TSWPCommentRep : TSWPShapeRep {

	BOOL _shouldShowNavigationKnobs;
	TSDFloatingCommentControlKnob* _previousKnob;
	TSDFloatingCommentControlKnob* _nextKnob;
	TSDFloatingCommentDeleteKnob* _deleteKnob;
	BOOL _didNavigate;
	CALayer* _headerLayer;
	CALayer* _dateLayer;
	CALayer* _authorLayer;
	BOOL _needsAuthorOrDateUpdate;

}
-(void)didEndZooming;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)didUpdateLayer:(id)arg1 ;
-(BOOL)shouldShowKnobs;
-(void)viewScaleDidChange;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)addKnobsToArray:(id)arg1 ;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg1 ;
-(void)invalidateComments;
-(void)invalidateAnnotationColor;
-(void)screenScaleDidChange;
-(id)additionalLayersOverLayer;
-(void)recursivelyDrawChildrenInContext:(CGContextRef)arg1 ;
-(unsigned long long)enabledKnobMask;
-(id)newSelectionKnobForType:(int)arg1 tag:(unsigned)arg2 ;
-(float)selectionHighlightWidth;
-(BOOL)forcesPlacementOnTop;
-(void)dynamicOperationDidBegin;
-(BOOL)providesGuidesWhileAligning;
-(BOOL)exclusivelyProvidesGuidesWhileAligning;
-(BOOL)shouldHideSelectionHighlightDueToRectangularPath;
-(BOOL)shouldShowSmartShapeKnobs;
-(BOOL)canMakePathEditable;
-(BOOL)canBeUsedForImageMask;
-(BOOL)p_shouldDraw;
-(void)p_deleteComment;
-(void)p_previousAnnotation;
-(void)p_nextAnnotation;
-(id)p_imageForString:(id)arg1 ofSize:(CGSize)arg2 baselineOffsetFromBottom:(float)arg3 backgroundColor:(CGColorRef)arg4 foregroundColor:(CGColorRef)arg5 useSystemFontWeight:(BOOL)arg6 ;
-(void)willBeginEditingContainedRep;
-(void)willEndEditingContainedRep;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

