/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/PFUbiquityImportOperation.h>
#import <CoreData/NSManagedObjectContextFaultingDelegate.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, PFUbiquityTransactionLog, PFUbiquitySwitchboardEntry, NSMutableSet, PFUbiquityKnowledgeVector, NSMutableDictionary, PFUbiquityImportContext, NSError;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {

	NSManagedObjectContext* _moc;
	NSPersistentStoreCoordinator* _psc;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquitySwitchboardEntry* _entry;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _updatedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	PFUbiquityKnowledgeVector* _logScore;
	NSMutableDictionary* _resolvedConflicts;
	BOOL _lockedExistingCoord;
	PFUbiquityKnowledgeVector* _initialStoreKnowledgeVector;
	PFUbiquityKnowledgeVector* _updatedStoreKnowledgeVector;
	PFUbiquityImportContext* _importContext;
	BOOL _success;
	BOOL _transactionDidRollback;
	BOOL _wroteKV;
	int _inMemorySequenceNumber;
	NSError* _operationError;
	NSMutableDictionary* _relationshipsToObjectIDsToCheck;

}

@property (readonly) NSManagedObjectContext * moc;                                                 //@synthesize moc=_moc - In the implementation block
@property (readonly) NSPersistentStoreCoordinator * psc;                                           //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionLog * transactionLog;                          //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,readonly) NSMutableSet * insertedObjectIDs;                                   //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * updatedObjectIDs;                                    //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedObjectIDs;                                    //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * resolvedConflicts;                            //@synthesize resolvedConflicts=_resolvedConflicts - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * logScore;                                 //@synthesize logScore=_logScore - In the implementation block
@property (assign) NSObject<_PFUbiquityRecordImportOperationDelegate> * delegate; 
@property (assign) BOOL lockedExistingCoord;                                                       //@synthesize lockedExistingCoord=_lockedExistingCoord - In the implementation block
@property (readonly) PFUbiquityKnowledgeVector * initialStoreKnowledgeVector;                      //@synthesize initialStoreKnowledgeVector=_initialStoreKnowledgeVector - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * updatedStoreKnowledgeVector;              //@synthesize updatedStoreKnowledgeVector=_updatedStoreKnowledgeVector - In the implementation block
@property (nonatomic,retain) PFUbiquityImportContext * importContext;                              //@synthesize importContext=_importContext - In the implementation block
@property (nonatomic,readonly) BOOL transactionDidRollBack;                                        //@synthesize transactionDidRollback=_transactionDidRollback - In the implementation block
@property (nonatomic,readonly) BOOL success;                                                       //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * operationError;                                           //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,readonly) BOOL wroteKV;                                                       //@synthesize wroteKV=_wroteKV - In the implementation block
-(void)setLogScore:(id)arg1 ;
-(id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3 ;
-(id)retainedDelegate;
-(id)moc;
-(id)psc;
-(id)transactionLog;
-(BOOL)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id*)arg4 ;
-(id)importContext;
-(id)initialStoreKnowledgeVector;
-(BOOL)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id*)arg3 ;
-(id)updatedStoreKnowledgeVector;
-(void)respondToStoreTransactionStateChangeNotification:(id)arg1 ;
-(id)insertedObjectIDs;
-(void)notifyDelegateOfError:(id)arg1 ;
-(BOOL)lockedExistingCoord;
-(void)setImportContext:(id)arg1 ;
-(BOOL)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id*)arg6 ;
-(id)updatedObjectIDs;
-(id)deletedObjectIDs;
-(id)logScore;
-(id)resolvedConflicts;
-(void)setLockedExistingCoord:(BOOL)arg1 ;
-(void)setUpdatedStoreKnowledgeVector:(id)arg1 ;
-(BOOL)transactionDidRollBack;
-(BOOL)success;
-(id)operationError;
-(BOOL)wroteKV;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)copy;
-(id)description;
-(id)delegate;
-(void)cancel;
-(void)main;
-(int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
@end

