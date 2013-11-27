/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration> {

	NSMutableDictionary* mStore;
	NSMutableArray* mKeyOrder;

}

@property (nonatomic,readonly) unsigned count; 
+(id)dictionaryWithMutableDictionaryStore:(id)arg1 ;
+(id)dictionary;
-(id)initWithMutableDictionaryStore:(id)arg1 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

