/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface SSUpdatesDatabaseSchema : NSObject
+(id)databasePath;
+(void)createSchemaInDatabase:(id)arg1 withName:(id)arg2 ;
+(BOOL)databaseRequiresMigration:(id)arg1 ;
+(void)_migrate7000to7001InDatabase:(id)arg1 ;
@end

