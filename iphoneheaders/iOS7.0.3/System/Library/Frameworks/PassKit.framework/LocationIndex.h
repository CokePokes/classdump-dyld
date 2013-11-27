/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/passd-Structs.h>
#import <passd/SQLiteEntity.h>

@interface LocationIndex : SQLiteEntity
+(id)insertIndexedLocationWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4 ;
+(id)locationsByPassUniqueIDWithBoundingBox:(SCD_Struct_Lo6)arg1 inDatabase:(id)arg2 ;
+(id)propertySettersForLocation;
+(id)databaseTable;
+(id)joinClauseForProperty:(id)arg1 ;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 forLocation:(id)arg3 database:(id)arg4 ;
@end

