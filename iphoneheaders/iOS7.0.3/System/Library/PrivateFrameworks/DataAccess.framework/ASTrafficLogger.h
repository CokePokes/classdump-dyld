/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject {

	NSFileHandle* _lookasideFileHandle;
	NSString* _lookasideFilePath;
	BOOL _isOutgoingTraffic;
	BOOL _didFlushLogs;

}

@property (assign,nonatomic) BOOL isOutgoingTraffic;              //@synthesize isOutgoingTraffic=_isOutgoingTraffic - In the implementation block
+(id)_logQueue;
-(void)dealloc;
-(void)_moveLogFileContentsAtPath:(id)arg1 ;
-(void)_openLookasideFile;
-(BOOL)isOutgoingTraffic;
-(void)setIsOutgoingTraffic:(BOOL)arg1 ;
-(void)logWBXMLData:(id)arg1 ;
-(void)flushLogs;
-(void)logPlainTextData:(id)arg1 ;
@end

