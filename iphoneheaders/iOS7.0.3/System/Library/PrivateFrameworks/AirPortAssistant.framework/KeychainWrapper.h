/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSLock;

@interface KeychainWrapper : NSObject {

	NSString* _accountName;
	NSString* _serviceName;
	NSLock* _lock;

}

@property (nonatomic,copy) NSString * accountName;              //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSLock * lock;                     //@synthesize lock=_lock - In the implementation block
+(id)keychainWrapperWithMACAddress:(id)arg1 ;
+(id)keychainPasswordForMACAddress:(id)arg1 ;
+(void)removeKeychainPasswordForMACAddress:(id)arg1 ;
-(id)serviceName;
-(void)dealloc;
-(id)lock;
-(long)addGenericPassword:(id)arg1 withLabel:(id)arg2 andDescription:(id)arg3 ;
-(void)removeGenericPassword;
-(id)initWithAccountName:(id)arg1 serviceName:(id)arg2 ;
-(void)setAccountName:(id)arg1 ;
-(void)setLock:(id)arg1 ;
-(id)genericPassword;
-(id)accountName;
-(id)genericPasswordQuery;
-(id)getPasswordFromQuery:(id)arg1 ;
-(id)getGenericPassword;
-(void)setServiceName:(id)arg1 ;
@end

