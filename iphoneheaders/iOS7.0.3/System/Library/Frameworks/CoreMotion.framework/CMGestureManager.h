/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
-(/*^block*/ id)gestureHandler;
-(void)dealloc;
-(id)init;
-(void)setGestureHandler:(/*^block*/ id)arg1 ;
-(id)initWithPriority:(int)arg1 ;
@end

