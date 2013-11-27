/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackBoardServices/BKSProcessAssertion.h>

@interface ProcessAssertion : BKSProcessAssertion {

	unsigned _secondsLeft;
	int _pid;

}

@property (assign,nonatomic) unsigned secondsLeft;              //@synthesize secondsLeft=_secondsLeft - In the implementation block
@property (assign,nonatomic) int pid;                           //@synthesize pid=_pid - In the implementation block
-(unsigned)secondsLeft;
-(void)setSecondsLeft:(unsigned)arg1 ;
-(id)initWithPID:(int)arg1 flags:(unsigned)arg2 reason:(unsigned)arg3 name:(id)arg4 withHandler:(/*^block*/ id)arg5 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
@end

