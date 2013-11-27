/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSNumber, NSData, NSString;

@interface SSMachineDataRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountID;
	NSData* _actionData;
	NSString* _actionName;
	BOOL _waitsForPurchaseOperations;

}

@property (copy) NSNumber * accountIdentifier; 
@property (copy) NSData * actionData; 
@property (copy) NSString * actionName; 
@property (assign) BOOL waitsForPurchaseOperations; 
-(id)initWithURLResponse:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setActionName:(id)arg1 ;
-(id)accountIdentifier;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)actionData;
-(id)actionName;
-(void)setActionData:(id)arg1 ;
-(void)setWaitsForPurchaseOperations:(BOOL)arg1 ;
-(BOOL)waitsForPurchaseOperations;
@end

