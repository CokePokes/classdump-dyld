/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface LogDumpUtility : NSObject
+(id)getHomeDirPath;
+(BOOL)createDirectoy:(id)arg1 ;
+(id)getDefaultLogDumpPath;
+(void)AddFileToMarco:(id)arg1 logCategory:(int)arg2 ;
+(id)openLogDump:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 fullFilename:(id*)arg6 ;
+(id)createLogFilename:(int)arg1 logNameType:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 marcoLog:(int)arg5 ;
@end

