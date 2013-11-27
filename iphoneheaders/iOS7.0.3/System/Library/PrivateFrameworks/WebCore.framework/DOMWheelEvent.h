/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/DOMMouseEvent.h>

@interface DOMWheelEvent : DOMMouseEvent

@property (readonly) int wheelDeltaX; 
@property (readonly) int wheelDeltaY; 
@property (readonly) int wheelDelta; 
@property (readonly) BOOL isHorizontal; 
-(BOOL)isHorizontal;
-(int)wheelDeltaX;
-(int)wheelDeltaY;
-(unsigned)deltaMode;
-(int)wheelDelta;
-(BOOL)webkitDirectionInvertedFromDevice;
-(void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(BOOL)arg8 altKey:(BOOL)arg9 shiftKey:(BOOL)arg10 metaKey:(BOOL)arg11 ;
@end

