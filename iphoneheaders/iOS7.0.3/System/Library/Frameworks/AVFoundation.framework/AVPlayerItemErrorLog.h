/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {

	AVPlayerItemErrorLogInternal* _playerItemErrorLog;

}

@property (nonatomic,readonly) NSArray * events; 
-(id)initWithLogArray:(id)arg1 ;
-(id)_errorLogArray;
-(id)extendedLogData;
-(unsigned)extendedLogDataStringEncoding;
-(id)events;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end

