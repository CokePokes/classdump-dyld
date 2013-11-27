/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;
#import <Message/Message-Structs.h>
@class , NSLock, NSObject, MailAccount, NSString, MFError, NSMutableSet, NSMutableDictionary, NSSet;

@interface MFSecureMIMECompositionManager : NSObject {

	<MFSecureMIMECompositionManagerDelegate>* _delegate;
	NSLock* _lock;
	NSObject<OS_dispatch_queue>* _queue;
	MailAccount* _sendingAccount;
	NSString* _sendingAddress;
	SecIdentityRef _signingIdentity;
	MFError* _signingIdentityError;
	SecIdentityRef _encryptionIdentity;
	MFError* _encryptionIdentityError;
	NSMutableSet* _recipients;
	NSMutableDictionary* _errorsByRecipient;
	NSMutableDictionary* _certificatesByRecipient;
	int _signingPolicy;
	int _encryptionPolicy;
	int _signingStatus;
	int _encryptionStatus;
	unsigned _encryptionStatusSemaphore;
	unsigned _signingStatusSemaphore;
	BOOL _invalidated;

}

@property (assign) <MFSecureMIMECompositionManagerDelegate> * delegate; 
@property (copy) NSString * sendingAddress; 
@property (readonly) MailAccount * sendingAccount; 
@property (readonly) int signingPolicy; 
@property (readonly) int encryptionPolicy; 
@property (readonly) int signingStatus; 
@property (readonly) int encryptionStatus; 
@property (readonly) NSSet * recipients; 
+(SecIdentityRef)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(SecIdentityRef)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3 ;
+(id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(id)compositionSpecification;
-(id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3 ;
-(BOOL)_updateSigningStatus_nts;
-(BOOL)_updateEncryptionStatus_nts;
-(void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(SecIdentityRef)arg4 error:(id)arg5 ;
-(void)_determineEncryptionStatusWithNewRecipients:(id)arg1 ;
-(void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(SecIdentityRef)arg2 error:(id)arg3 ;
-(void)_determineSigningStatusWithSendingAddress:(id)arg1 ;
-(void)_determineEncryptionStatusWithSendingAddress:(id)arg1 ;
-(void)_setSigningIdentityError_nts:(id)arg1 ;
-(void)_setEncryptionIdentityError_nts:(id)arg1 ;
-(BOOL)_shouldAllowSend_nts;
-(BOOL)_shouldSign_nts;
-(BOOL)_shouldEncrypt_nts;
-(id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2 ;
-(void)addRecipients:(id)arg1 ;
-(void)removeRecipients:(id)arg1 ;
-(void)setSendingAddress:(id)arg1 ;
-(id)sendingAddress;
-(id)sendingAccount;
-(int)signingPolicy;
-(int)encryptionPolicy;
-(int)signingStatus;
-(int)encryptionStatus;
-(id)recipients;
-(BOOL)shouldAllowSend;
@end

