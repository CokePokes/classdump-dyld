/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Message/Message-Structs.h>
#import <MIME/MFCollectingDataConsumer.h>

@class NSArray;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {

	long _SecCMSError;
	SecCmsMessageStrRef _message;
	SecCmsDigestContextStrRef _digest;
	NSArray* _signers;
	SecCmsSignedDataStrRef _signedData;
	SecCmsEnvelopedDataStrRef _envelopedData;
	BOOL _isEncrypted;

}

@property (setter=ecCMSError,nonatomic,readonly) long lastSecCMSError;              //@synthesize SecCMSError=_SecCMSError - In the implementation block
@property (nonatomic,readonly) NSArray * signers;                                   //@synthesize signers=_signers - In the implementation block
-(void)dealloc;
-(id)data;
-(void)done;
-(int)appendData:(id)arg1 ;
-(id)signedData;
-(id)initWithPartData:(id)arg1 error:(id*)arg2 ;
-(long)lastSecCMSError;
-(id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2 ;
-(id)signers;
-(BOOL)isContentEncrypted;
-(BOOL)isContentSigned;
@end

