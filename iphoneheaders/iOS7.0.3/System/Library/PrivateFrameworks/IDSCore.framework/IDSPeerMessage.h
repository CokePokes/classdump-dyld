/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSNumber, NSString, NSData, NSDictionary;

@interface IDSPeerMessage : IDSMessage <NSCopying> {

	NSNumber* _priority;
	NSString* _encryptionType;
	NSData* _encryptedData;
	NSData* _targetToken;
	NSString* _targetPeerID;
	NSString* _sourcePeerID;
	NSData* _targetSessionToken;
	NSString* _messageID;
	NSDictionary* _additionalDictionary;

}

@property (copy) NSData * targetSessionToken;                      //@synthesize targetSessionToken=_targetSessionToken - In the implementation block
@property (copy) NSString * targetPeerID;                          //@synthesize targetPeerID=_targetPeerID - In the implementation block
@property (copy) NSString * sourcePeerID;                          //@synthesize sourcePeerID=_sourcePeerID - In the implementation block
@property (copy) NSData * targetToken;                             //@synthesize targetToken=_targetToken - In the implementation block
@property (copy) NSString * encryptionType;                        //@synthesize encryptionType=_encryptionType - In the implementation block
@property (copy) NSNumber * priority;                              //@synthesize priority=_priority - In the implementation block
@property (copy) NSData * encryptedData;                           //@synthesize encryptedData=_encryptedData - In the implementation block
@property (copy) NSString * messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (copy) NSDictionary * additionalDictionary;              //@synthesize additionalDictionary=_additionalDictionary - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)priority;
-(void)setPriority:(id)arg1 ;
-(id)targetPeerID;
-(id)sourcePeerID;
-(id)targetToken;
-(id)targetSessionToken;
-(void)setEncryptionType:(id)arg1 ;
-(void)setEncryptedData:(id)arg1 ;
-(void)setTargetToken:(id)arg1 ;
-(void)setSourcePeerID:(id)arg1 ;
-(void)setTargetSessionToken:(id)arg1 ;
-(void)setTargetPeerID:(id)arg1 ;
-(id)initWithHighPriority:(BOOL)arg1 ;
-(void)setAdditionalDictionary:(id)arg1 ;
-(void)setMessageID:(id)arg1 ;
-(id)encryptionType;
-(id)encryptedData;
-(id)additionalDictionary;
-(id)messageBody;
-(id)messageID;
-(id)requiredKeys;
@end

