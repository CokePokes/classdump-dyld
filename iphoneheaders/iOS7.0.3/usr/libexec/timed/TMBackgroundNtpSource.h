/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/timed
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TMBackgroundNtpSource : NSObject {

	BOOL fetchingTime;
	int burstRetryCount;
	int burstRetryAttempts;
	double lastFetchAttempt;
	double schedulingInterval;
	double burstRetryInterval;

}

@property (assign) BOOL fetchingTime; 
@property (assign) double lastFetchAttempt; 
@property (assign) double schedulingInterval; 
@property (assign) double burstRetryInterval; 
@property (assign) int burstRetryAttempts; 
@property (assign) int burstRetryCount; 
-(void)setJob:(id)arg1 forName:(id)arg2 ;
-(void)setLastFetchAttempt:(double)arg1 ;
-(void)setBurstRetryInterval:(double)arg1 ;
-(void)setBurstRetryAttempts:(int)arg1 ;
-(double)lastFetchAttempt;
-(void)setWantedTime:(double)arg1 neededTime:(double)arg2 ;
-(void)setSchedulingInterval:(double)arg1 ;
-(void)setBurstRetryCount:(int)arg1 ;
-(BOOL)fetchingTime;
-(void)_fetchTime;
-(void)fetchTime;
-(void)setFetchingTime:(BOOL)arg1 ;
-(int)burstRetryCount;
-(int)burstRetryAttempts;
-(double)burstRetryInterval;
-(double)intervalRemaining;
-(double)schedulingInterval;
-(void)dealloc;
-(id)init;
@end

