/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationCalloutController.h>

@class UICalloutView;

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController {

	UICalloutView* _calloutView;
	Class _calloutViewClass;

}
-(void)setCalloutViewClass:(Class)arg1 ;
-(Class)calloutViewClass;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(BOOL)isCalloutExpanded;
-(id)_subtitle;
-(void)_setLeftAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setRightAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDetailAccessoryView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(float)defaultCalloutHeight;
-(BOOL)_isShowingCallout;
-(void)showCalloutForAnnotationView:(id)arg1 animated:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)hideCalloutAnimated:(BOOL)arg1 ;
-(void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(CGPoint)arg3 boundaryRect:(CGRect)arg4 animated:(BOOL)arg5 ;
-(void)dealloc;
-(id)init;
-(void)calloutView:(id)arg1 willMoveToAnchorPoint:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)calloutView:(id)arg1 didMoveToAnchorPoint:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(void)_setTitle:(id)arg1 ;
@end

