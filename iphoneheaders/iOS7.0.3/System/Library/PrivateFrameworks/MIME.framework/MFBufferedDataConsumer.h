/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MIME/MFGuaranteedCollectingDataConsumer.h>

@class NSMutableData, NSString, NSArray;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {

	NSMutableData* _data;
	int _fd;
	NSString* _path;
	NSArray* _stack;

}
-(void)dealloc;
-(id)init;
-(id)data;
-(void)done;
-(int)appendData:(id)arg1 ;
@end

