/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ApplePushService/CUTFileCopierDelegate.h>

@class NSMutableArray;

@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate> {

	NSMutableArray* _archivers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)compressPath:(id)arg1 toPath:(id)arg2 ;
@end

