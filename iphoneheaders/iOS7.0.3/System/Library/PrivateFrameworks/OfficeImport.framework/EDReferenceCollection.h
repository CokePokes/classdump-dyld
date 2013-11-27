/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection {

	bool mCoalesce;

}
+(id)noCoalesceCollection;
+(id)coalesceCollection;
-(id)init;
-(unsigned)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(unsigned)countOfCellsBeingReferenced;
-(id)reverseReferencesByRow:(bool)arg1 ;
-(id)referenceToCellWithIndex:(unsigned)arg1 byRow:(bool)arg2 ;
-(id)initWihNoCoalesce;
-(void)coalesce;
-(bool)coalesceReferenceAtIndex1:(unsigned)arg1 index2:(unsigned)arg2 ;
@end

