/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol RemindersCardStackViewDelegate
@required
-(BOOL)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2;
-(void)cardStackViewDidPresentCard:(id)arg1;
-(void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(int)arg3;
-(void)cardStackView:(id)arg1 didDismissCard:(id)arg2;
-(void)cardStackView:(id)arg1 cardDidMoveFromIndex:(int)arg2 toIndex:(int)arg3;
-(void)cardStackViewDidEndReordering:(id)arg1;
@end

