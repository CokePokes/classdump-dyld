/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, MicroPaymentClient, NSSet, NSData, NSDate, NSNumber;

@interface MicroPayment : NSManagedObject {

	NSString* _temporaryIdentifier;
	BOOL _transientFailed;

}

@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (assign,getter=isTransientFailed,nonatomic) BOOL transientFailed;                  //@synthesize transientFailed=_transientFailed - In the implementation block
@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,@dynamic,retain) NSString * actionParams; 
@property (nonatomic,@dynamic,retain) NSString * applicationUsername; 
@property (nonatomic,@dynamic,retain) MicroPaymentClient * client; 
@property (nonatomic,@dynamic,retain) NSSet * downloads; 
@property (nonatomic,@dynamic,retain) NSData * errorData; 
@property (nonatomic,@dynamic,retain) NSDate * insertDate; 
@property (nonatomic,@dynamic,retain) NSDate * originalPurchaseDate; 
@property (nonatomic,@dynamic,retain) NSString * originalTransactionIdentifier; 
@property (nonatomic,@dynamic,retain) NSString * productIdentifier; 
@property (nonatomic,@dynamic,retain) NSDate * purchaseDate; 
@property (nonatomic,@dynamic,retain) NSNumber * quantity; 
@property (nonatomic,@dynamic,retain) NSData * receiptData; 
@property (nonatomic,@dynamic,retain) NSData * requestData; 
@property (nonatomic,@dynamic,retain) NSNumber * state; 
@property (nonatomic,@dynamic,retain) NSString * transactionIdentifier; 
@property (nonatomic,@dynamic,retain) NSNumber * userDSID; 
+(id)paymentEntityFromContext:(id)arg1 ;
+(BOOL)responseIsValid:(id)arg1 ;
-(BOOL)isEqualToResponse:(id)arg1 compareAllFields:(BOOL)arg2 ;
-(void)mergeValuesFromResponse:(id)arg1 ;
-(int)_clientStateForServerState:(int)arg1 ;
-(id)_temporaryIdentifier;
-(void)_updateDownloadsFromResponse:(id)arg1 ;
-(int)_serverStateForClientState:(int)arg1 ;
-(id)copyPaymentTransaction;
-(void)setValuesWithPaymentTransaction:(id)arg1 ;
-(BOOL)isTransientFailed;
-(void)setTransientFailed:(BOOL)arg1 ;
-(BOOL)isReady;
-(void)setFailedWithError:(id)arg1 ;
-(id)matchingIdentifier;
-(void)dealloc;
-(void)awakeFromInsert;
-(void)setTransactionIdentifier:(id)arg1 ;
@end

