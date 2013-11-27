/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReadCoordinatorBase.h>
#import <iWorkImport/TSPReadCoordinator.h>

@protocol OS_dispatch_queue;
@class TSPPasteboard, TSPObjectContext, TSPFinalizeHandlerQueue, NSObject;

@interface TSPPasteboardReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {

	TSPPasteboard* _pasteboard;
	TSPObjectContext* _targetContext;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	unsigned long long _version;
	BOOL _isCrossAppPaste;
	BOOL _isCrossDocumentPaste;
	NSObject<OS_dispatch_queue>* _dataQueue;
	hash_map<long long, TSP::DataInfo, TSP::DataIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DataInfo> > >* _dataInfoMap;

}

@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL isReadingFromDocument; 
-(id)objectForIdentifier:(long long)arg1 ;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3 ;
-(id)initWithPasteboard:(id)arg1 targetContext:(id)arg2 finalizeHandlerQueue:(id)arg3 ;
-(BOOL)isCrossAppPaste;
-(BOOL)isCrossDocumentPaste;
-(void)processMetadata:(id)arg1 ;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(BOOL)arg4 allowUnknownObject:(BOOL)arg5 fromParentObject:(id)arg6 completion:(/*^block*/ id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 fromParentObject:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(BOOL)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(BOOL)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(BOOL)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(void)reader:(id)arg1 didUnarchiveObject:(id)arg2 ;
-(BOOL)isFromPasteboard;
-(id)init;
-(id)context;
-(id).cxx_construct;
-(unsigned long long)version;
-(void).cxx_destruct;
@end

