/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSDShapeEditor.h>

@class NSSet;

@interface TSDConnectionLineEditor : TSDShapeEditor {

	NSSet* mSelectedObjectsSupportingConnectionLineAttributes;

}
+(id)commandForSettingConnectionLineLayout:(id)arg1 toType:(int)arg2 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)selectedObjectsSupportingConnectionLineAttributes;
-(void)toggleLineType:(id)arg1 ;
-(void)setConnectionLineType:(int)arg1 ;
-(float)p_outsetOnLeft:(BOOL)arg1 ;
-(void)p_didChangeConnectionOutset:(float)arg1 onLeft:(BOOL)arg2 ;
-(float)leftOutset;
-(float)rightOutset;
-(void)beginChangingConnectionOutset;
-(void)didChangeConnectionLeftOutset:(float)arg1 ;
-(void)didChangeConnectionRightOutset:(float)arg1 ;
-(void)endChangingConnectionOutset;
-(void)dealloc;
-(void)canvasDidLayout;
@end

