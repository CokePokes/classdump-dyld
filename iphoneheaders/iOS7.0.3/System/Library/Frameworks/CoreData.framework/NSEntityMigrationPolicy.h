/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NSEntityMigrationPolicy : NSObject
-(BOOL)beginEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)createDestinationInstancesForSourceInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(BOOL)endInstanceCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)createRelationshipsForDestinationInstance:(id)arg1 entityMapping:(id)arg2 manager:(id)arg3 error:(id*)arg4 ;
-(BOOL)endRelationshipCreationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)performCustomValidationForEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(BOOL)endEntityMapping:(id)arg1 manager:(id)arg2 error:(id*)arg3 ;
-(id)_nonNilValueOrDefaultValueForAttribute:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
@end

