/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@interface CloudRecentsMigrator : DataClassMigrator
-(BOOL)migrateABRecentsData;
-(unsigned long long)recentsExportDataSize;
-(id)recentsExportPath;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end

