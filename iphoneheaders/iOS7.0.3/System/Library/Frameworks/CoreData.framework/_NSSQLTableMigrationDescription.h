/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSMutableDictionary, NSNumber;

@interface _NSSQLTableMigrationDescription : NSObject {

	NSSQLEntity* _rootEntity;
	NSSQLEntity* _sourceRootEntity;
	int _migrationType;
	NSMutableArray* _addedEntityMigrations;
	NSMutableArray* _removedEntityMigrations;
	NSMutableArray* _copiedEntityMigrations;
	NSMutableArray* _transformedEntityMigrations;
	NSMutableDictionary* _migrationByEntity;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableDictionary* _tempTableNames;
	NSNumber* _hasTransformedTableSchema;

}

@property (readonly) int migrationType;                     //@synthesize migrationType=_migrationType - In the implementation block
@property (readonly) NSSQLEntity * rootEntity;              //@synthesize rootEntity=_rootEntity - In the implementation block
-(id)rootEntity;
-(int)migrationType;
-(id)_addedManyToManys;
-(id)_removedManyToManys;
-(id)_transformedManyToManys;
-(id)_sourceRootEntity;
-(BOOL)_hasTransformedTableSchema;
-(id)_tempNameForTableName:(id)arg1 ;
-(id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(BOOL)arg4 migrationContext:(NSSQLMigrationContext)arg5 ;
-(id)_retainedRemovedSubEntitiesOfEntity:(id)arg1 ;
-(id)initWithRootEntity:(id)arg1 migrationType:(int)arg2 ;
-(void)addEntityMigrationDescription:(id)arg1 ;
-(void)appendStatementsToPrepareForMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(NSSQLMigrationContext)arg2 ;
-(void)dealloc;
@end

