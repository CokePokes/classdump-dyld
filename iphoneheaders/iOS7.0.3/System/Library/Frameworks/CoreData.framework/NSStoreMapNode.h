/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSPersistentStoreMap, NSManagedObjectID, NSMutableDictionary, NSString;

@interface NSStoreMapNode : NSObject {

	NSPersistentStoreMap* _map;
	NSManagedObjectID* _objectID;
	NSMutableDictionary* _relatedNodes;
	NSString* _entityName;
	unsigned _version;

}
+(void)initialize;
-(id)configurationName;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(void)_setMap:(id)arg1 ;
-(void)setDestinations:(id)arg1 forRelationship:(id)arg2 ;
-(id)destinationsForRelationship:(id)arg1 ;
-(id)_relatedNodes;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)key;
-(id)objectID;
-(id)entity;
-(id)initWithObjectID:(id)arg1 ;
@end

