/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUDatabase.h>

@class NSURL;

@interface TSPDatabase : TSUDatabase {

	NSURL* _packageURL;
	BOOL _incrementalVacuum;
	sqlite3_stmtRef _insertObjectStatement;
	sqlite3_stmtRef _insertDataStateStatement;
	sqlite3_stmtRef _updateDataStateStatement;
	sqlite3_stmtRef _insertRelationshipStatement;
	sqlite3_stmtRef _relationshipTargetsStatement;

}
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)needsUpgradeFromSchemaVersion:(int)arg1 ;
-(BOOL)upgradeFromSchemaVersion:(int)arg1 error:(id*)arg2 ;
-(id)initReadonlyWithPath:(id)arg1 error:(id*)arg2 ;
-(sqlite3_blobRef)openDataStateBlobWithIdentifier:(long long)arg1 error:(id*)arg2 ;
-(id)queryFirstObjectWithStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(id)objectFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)documentVersion:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)lastObjectIdentifier:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)numberOfDatabaseObjects:(unsigned*)arg1 error:(id*)arg2 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)arg1 error:(id*)arg2 ;
-(sqlite3_blobRef)openBlobForObject:(id)arg1 error:(id*)arg2 ;
-(id)queryObjectWithIdentifier:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setDocumentVersion:(SCD_Struct_TS142)arg1 error:(id*)arg2 ;
-(BOOL)setClosedCleanlyToken:(long long)arg1 error:(id*)arg2 ;
-(BOOL)documentVersion:(SCD_Struct_TS142*)arg1 closedCleanlyToken:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)insertObjectWithIdentifier:(long long)arg1 stateIdentifier:(const ObjectStateIdentifier*)arg2 classType:(int)arg3 error:(id*)arg4 ;
-(BOOL)insertDataStateWithSize:(int)arg1 identifier:(long long*)arg2 error:(id*)arg3 ;
-(BOOL)updateDataStateWithIdentifier:(long long)arg1 size:(int)arg2 error:(id*)arg3 ;
-(sqlite3_blobRef)openDataStateBlobWithIdentifier:(long long)arg1 willWrite:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)insertRelationshipWithSourceIdentifier:(long long)arg1 targetIdentifier:(long long)arg2 error:(id*)arg3 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)newRelationshipTargetsForSourceIdentifier:(long long)arg1 error:(id*)arg2 ;
-(BOOL)parseArchive:(Message*)arg1 forObject:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(void).cxx_destruct;
@end

