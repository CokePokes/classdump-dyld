/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SCATModernMenuGestureFreehandSheetDelegate <NSObject>
@required
-(float)curvatureForFreehandSheet:(id)arg1;
-(void)freehandSheet:(id)arg1 didHighlightBendRight:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightBendLeft:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightStraighten:(BOOL)arg2;
-(void)bendRightForFreehandSheet:(id)arg1;
-(void)bendLeftForFreehandSheet:(id)arg1;
-(void)straightenForFreehandSheet:(id)arg1;
-(void)stopForFreehandSheet:(id)arg1;
-(void)freehandSheet:(id)arg1 didHighlightRotateCCW:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotateCW:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotateCW90:(BOOL)arg2;
-(void)rotateCounterclockwiseForFreehandSheet:(id)arg1;
-(void)rotateClockwiseForFreehandSheet:(id)arg1;
-(void)rotate90CounterclockwiseForFreehandSheet:(id)arg1;
-(void)rotate90ClockwiseForFreehandSheet:(id)arg1;
-(BOOL)isTouchOnForFreehandSheet:(id)arg1;
-(BOOL)isAutoPressOnForFreehandSheet:(id)arg1;
-(BOOL)isAutoLiftOnForFreehandSheet:(id)arg1;
-(float)angleForFreehandSheet:(id)arg1;
-(void)moveForFreehandSheet:(id)arg1;
-(void)rotateForFreehandSheet:(id)arg1;
-(void)bendForFreehandSheet:(id)arg1;
-(void)toggleTouchForFreehandSheet:(id)arg1;
-(void)autoPressToggledForFreehandSheet:(id)arg1;
-(void)autoLiftToggledForFreehandSheet:(id)arg1;
-(void)moveToolbarForFreehandSheet:(id)arg1;
-(void)didPopFreehandSheet:(id)arg1;
-(void)freehandSheet:(id)arg1 didHighlightMove:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotate:(BOOL)arg2;
-(void)freehandSheet:(id)arg1 didHighlightBend:(BOOL)arg2;
-(void)increaseVelocityForFreehandSheet:(id)arg1;
-(void)decreaseVelocityForFreehandSheet:(id)arg1;
@end

