/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/SQLiteEntity.h>

@interface LocationSource : SQLiteEntity
+(id)anyInDatabase:(id)arg1 withURL:(id)arg2 ;
+(id)insertLocationSourceWithURL:(id)arg1 forPass:(id)arg2 type:(int)arg3 inDatabase:(id)arg4 ;
+(id)locationSourcePIDPredicate:(id)arg1 ;
+(id)urlPredicate:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withLocationSourcePID:(id)arg2 ;
+(id)databaseTable;
+(id)foreignKeyColumnForTable:(id)arg1 ;
-(id)initWithLocationURL:(id)arg1 type:(int)arg2 inDatabase:(id)arg3 ;
-(BOOL)deleteFromDatabase;
@end

