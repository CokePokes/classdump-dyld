/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSDictionary;

@interface ASPerAccountPolicyData : NSObject {

	NSString* _accountPersistentUUID;

}

@property (nonatomic,readonly) NSString * policyKey; 
@property (nonatomic,readonly) NSDictionary * policyValues; 
-(void)dealloc;
-(id)description;
-(id)policyKey;
-(id)initWithAccountPersistentUUID:(id)arg1 ;
-(id)policyValues;
-(void)setPolicyKey:(id)arg1 policyValues:(id)arg2 ;
@end

