/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface TSUNoCopyDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS92*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
@end

