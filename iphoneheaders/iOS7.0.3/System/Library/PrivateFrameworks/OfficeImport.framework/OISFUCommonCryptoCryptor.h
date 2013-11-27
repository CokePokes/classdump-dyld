/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OISFUCryptor.h>

@class OISFUCryptoKey;

@interface OISFUCommonCryptoCryptor : OISFUCryptor {

	int mOperation;
	OISFUCryptoKey* mKey;
	CCCryptorRef mCryptor;
	unsigned long mBlockSize;
	BOOL mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long)arg4 ;
-(BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long)arg3 bytesRead:(unsigned*)arg4 error:(id*)arg5 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5 ;
@end

