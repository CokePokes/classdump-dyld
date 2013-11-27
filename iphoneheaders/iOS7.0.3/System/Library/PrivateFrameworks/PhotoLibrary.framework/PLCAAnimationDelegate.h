/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface PLCAAnimationDelegate : NSObject {

	/*^block*/ id _completion;
	/*^block*/ id _start;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                   //@synthesize start=_start - In the implementation block
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(/*^block*/ id)start;
-(void)setStart:(/*^block*/ id)arg1 ;
@end

