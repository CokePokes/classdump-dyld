/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData, NSString;

@interface SFUCryptoKey : NSObject {

	unsigned mIterationCount;
	char* mKey;
	unsigned long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (nonatomic,readonly) NSString * passphrase;              //@synthesize passphrase=_passphrase - In the implementation block
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(id)saltData;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(void)dealloc;
-(id)passphrase;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(int)keyType;
-(unsigned)iterationCount;
-(const char*)keyData;
-(unsigned long)keyLength;
@end

