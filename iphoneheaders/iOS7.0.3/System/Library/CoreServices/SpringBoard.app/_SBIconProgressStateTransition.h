/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressStateTransition : _SBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	int _fromState;
	int _toState;
	float _fraction;

}
+(id)newTransitionFromState:(int)arg1 toState:(int)arg2 ;
+(Class)_classForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initWithFromState:(int)arg1 toState:(int)arg2 ;
-(void)_updateView:(id)arg1 ;
-(void)dealloc;
@end

