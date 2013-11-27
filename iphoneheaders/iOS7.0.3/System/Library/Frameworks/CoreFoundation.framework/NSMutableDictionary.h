/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSDictionary.h>

@interface NSMutableDictionary : NSDictionary
+(id)MSASDictionaryWithCopyOfDictionary:(id)arg1 ;
+(id)newDictionaryKeyString;
+(id)nonRetainingKeyDictionary;
+(id)nonRetainingDictionary;
+(id)nonRetainingKeyAndValueDictionary;
+(id)nonRetainingDictionary;
+(id)retainingKeyDictionary;
+(id)nonRetainingKeyAndValueDictionary;
+(id)dictionaryWithCapacity:(unsigned)arg1 ;
+(id)dictionaryWithSharedKeySet:(id)arg1 ;
-(id)MSASAddDictionary:(id)arg1 ;
-(id)MSASAddIsGlobalResetSync;
-(id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1 ;
-(id)MSASAddIsLocalChange;
-(id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1 ;
-(id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1 ;
-(id)MSASAddNotInterestingKey;
-(id)MSASAddIsErrorRecovery;
-(void)setObject:(id)arg1 forInt:(int)arg2 ;
-(id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)mf_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)mf_setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)mf_addObject:(id)arg1 forKey:(id)arg2 ;
-(void)mf_fixupRFC2231Values;
-(void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2 ;
-(void)CDVAddObjectsAndKeys:(id)arg1 ;
-(void)_webkit_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_webkit_setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)_webkit_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2 ;
-(void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)_webkit_setUnsignedShort:(unsigned short)arg1 forKey:(id)arg2 ;
-(void)_webkit_setUnsignedInt:(unsigned)arg1 forKey:(id)arg2 ;
-(void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionaryWithRecursion:(id)arg1 ;
-(void)MCFixUpRestrictionsDictionaryForMDMReporting;
-(void)MCDeepCopyEntriesFromDictionary:(id)arg1 ;
-(void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1 ;
-(void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2 ;
-(void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2 ;
-(void)bks_setSafeObject:(id)arg1 forKey:(id)arg2 ;
-(void)_web_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_web_setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)invert;
-(void)__addObject:(id)arg1 forKey:(id)arg2 ;
-(void)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeEntriesWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)addObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)removeEntriesInDictionary:(id)arg1 ;
-(void)removeEntriesPassingTest:(/*^block*/ id)arg1 ;
-(void)removeKeysForObject:(id)arg1 ;
-(void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)replaceObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setEntriesFromDictionary:(id)arg1 ;
-(void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)setObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
@end

