/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/SFUOutputStream.h>

@protocol SFUOutputStream;
@class , OISFUCryptor;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {

	<SFUOutputStream>* mBaseStream;
	OISFUCryptor* mCryptor;
	BOOL mIsClosed;
	BOOL mComputeCrc32;
	unsigned mCrc32;

}
+(unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2 ;
-(unsigned)crc32;
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3 ;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(id)inputStream;
-(id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 ;
@end

