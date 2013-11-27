/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <OfficeImport/SFUInputStream.h>

@protocol SFUBufferedInputStream;
@class ;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	<SFUBufferedInputStream>* mInput;
	char* mOutBuffer;
	unsigned long long mOutBufferSize;
	BOOL mReachedEnd;
	BOOL mIsFromZip;
	unsigned long mCalculatedCrc;
	unsigned long mCheckCrc;

}
-(void)dealloc;
-(long long)offset;
-(void)close;
-(unsigned long)readToOwnBuffer:(const char**)arg1 size:(unsigned long)arg2 ;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithInput:(id)arg1 ;
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long)arg4 dataRepresentation:(id)arg5 ;
-(void)setupInflateStream;
-(long long)totalCompressedBytesConsumed;
@end

