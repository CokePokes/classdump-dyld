/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface BKLaunchdUtilities : NSObject
+(id)labelForPID:(int)arg1 ;
+(void)deleteJobWithLabel:(id)arg1 ;
+(BOOL)createJobWithLabel:(id)arg1 path:(id)arg2 containerPath:(id)arg3 arguments:(id)arg4 environment:(id)arg5 standardOutputPath:(id)arg6 standardErrorPath:(id)arg7 machServices:(id)arg8 threadPriority:(long long)arg9 waitForDebugger:(BOOL)arg10 denyCreatingOtherJobs:(BOOL)arg11 runAtLoad:(BOOL)arg12 disableASLR:(BOOL)arg13 systemApp:(BOOL)arg14 ;
+(id)allJobLabels;
+(void)setPriorityBand:(int)arg1 forJobLabel:(id)arg2 data:(unsigned long long)arg3 ;
+(long long)lastExitStatusForLabel:(id)arg1 ;
+(BOOL)stopJobWithLabel:(id)arg1 ;
+(BOOL)startJobWithLabel:(id)arg1 ;
+(int)pidForLabel:(id)arg1 ;
+(id)machServicesForLabel:(id)arg1 ;
@end

