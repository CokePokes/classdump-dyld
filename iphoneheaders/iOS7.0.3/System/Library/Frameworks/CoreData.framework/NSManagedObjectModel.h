/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration> {

	id _dataForOptimization;
	id* _optimizationHints;
	id _localizationPolicy;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	struct {
		unsigned _isInUse : 1;
		unsigned _isImmutable : 1;
		unsigned _isOptimizedForEncoding : 1;
		unsigned _reservedEntityDescription : 29;
	}  _managedObjectModelFlags;

}
+(id)_modelPathsFromBundles:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
+(id)mergedModelFromBundles:(id)arg1 ;
-(id)versionHash;
-(id)entitiesForConfiguration:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(id)_entityForName:(id)arg1 ;
-(void)_removeEntity:(id)arg1 ;
-(void)_addEntity:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(void)_flattenProperties;
-(BOOL)_isOptimizedForEncoding;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(id)_localizationPolicy;
-(id)fetchRequestTemplatesByName;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(id)versionIdentifiers;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)_initWithEntities:(id)arg1 ;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(void)setEntities:(id)arg1 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(void)setVersionIdentifiers:(id)arg1 ;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned)arg1 ;
-(BOOL)_isConfiguration:(id)arg1 inStyle:(unsigned)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(id)configurations;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)entityVersionHashesByName;
-(BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
-(void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned)arg2 ;
-(id)_optimizedEncoding:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(BOOL)_hasPrecomputedKeyOrder;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(void)_removeEntityNamed:(id)arg1 ;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(id)_configurationsByName;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(id)_entitiesByVersionHash;
-(id)_versionIdentifiersAsArray;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)isEditable;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)entitiesByName;
-(id)entities;
@end

