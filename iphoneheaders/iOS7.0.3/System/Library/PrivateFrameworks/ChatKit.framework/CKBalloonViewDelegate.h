/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CKBalloonViewDelegate <NSObject>
@required
-(BOOL)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
-(void)balloonViewWillResignFirstResponder:(id)arg1;
-(void)balloonViewTouchedDown:(id)arg1 withEvent:(id)arg2;
-(void)balloonViewTapped:(id)arg1 withEvent:(id)arg2;
-(id)menuItemsForBalloonView:(id)arg1;
-(CGRect*)calloutTargetRectForBalloonView:(id)arg1;
-(void)balloonViewDidFinishDataDetectorAction:(id)arg1;
@end

