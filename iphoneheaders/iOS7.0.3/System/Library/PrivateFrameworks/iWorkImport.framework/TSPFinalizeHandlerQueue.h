/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSPFinalizeHandlerQueue : NSObject {

	NSObject<OS_dispatch_queue>* _accessQueue;
	list<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> >* _order;
	hash_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > >* _map;

}
-(BOOL)runFinalizeHandlers;
-(void)addFinalizeHandlers:(vector<void ()(), std::__1::allocator<void ()()> >*)arg1 strongReferencesOrNull:(RepeatedField<unsigned long long>*)arg2 forIdentifier:(long long)arg3 ;
-(void)visitItemForCycleDetection:(FinalizeHandlerItem*)arg1 ;
-(void)runFinalizeHandlerForItem:(FinalizeHandlerItem*)arg1 ;
-(id)init;
-(id).cxx_construct;
-(void)reset;
-(void).cxx_destruct;
@end

