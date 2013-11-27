/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface NSMutableSet : NSSet
+(id)nonRetainingSet;
+(id)setWithCapacity:(unsigned)arg1 ;
-(void)pl_addObjectIfNotNil:(id)arg1 ;
-(void)minusPathSet:(id)arg1 ;
-(id)mf_uniquedObject:(id)arg1 ;
-(void)CDVAddItemParserMappingWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(Class)classForCoder;
-(void)setSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)removeObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsPassingTest:(/*^block*/ id)arg1 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(void)setArray:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
@end

