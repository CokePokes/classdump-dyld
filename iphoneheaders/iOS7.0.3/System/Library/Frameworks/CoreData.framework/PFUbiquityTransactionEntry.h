/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/NSManagedObject.h>

@class NSURL, NSNumber, NSString, NSDate, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityTransactionEntry : NSManagedObject

@property (assign) int transactionType; 
@property (readonly) NSURL * transactionLogURL; 
@property (nonatomic,@dynamic,retain) NSNumber * transactionTypeNum; 
@property (nonatomic,@dynamic,retain) NSString * localIDStr; 
@property (nonatomic,@dynamic,retain) NSNumber * transactionNumber; 
@property (nonatomic,@dynamic,retain) NSString * globalIDStr; 
@property (nonatomic,@dynamic,retain) NSDate * transactionDate; 
@property (nonatomic,@dynamic,retain) NSString * transactionLogFilename; 
@property (nonatomic,@dynamic,retain) NSString * knowledgeVectorString; 
@property (nonatomic,@dynamic,retain) PFUbiquityPeer * actingPeer; 
@property (nonatomic,@dynamic,retain) PFUbiquityStoreMetadata * storeMetadata; 
+(id)newTransactionEntryForObjectWithCompressedGlobalID:(id)arg1 withTransactionType:(int)arg2 importContext:(id)arg3 ;
+(id)createTransactionEntriesForCompressedObjectIDs:(id)arg1 withTransactionType:(int)arg2 withImportContext:(id)arg3 ;
+(id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4 ;
-(void)setTransactionType:(int)arg1 ;
-(int)transactionType;
-(id)initAndInsertIntoManagedObjectContext:(id)arg1 ;
-(id)transactionLogURL;
@end

