/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet, NSString;

@interface PFUbiquityToManyConflictDiff : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSString* _relationshipKey;

}

@property (nonatomic,readonly) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * relationshipKey;                    //@synthesize relationshipKey=_relationshipKey - In the implementation block
-(id)insertedObjectIDs;
-(id)deletedObjectIDs;
-(id)initForRelationshipAtKey:(id)arg1 ;
-(void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2 ;
-(id)relationshipKey;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

