/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardUI/SBDeviceLockKeypad.h>

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad {

	UIView* _glowView;

}
+(id)keypadImage;
+(id)pressedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)deleteKeyChar;
-(BOOL)cancelKeyChar;
-(CGRect)_rectForKey:(unsigned)arg1 ;
-(float)_yFudge;
@end

