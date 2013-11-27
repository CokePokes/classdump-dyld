/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface EDReference : NSObject <NSCopying> {

	EDAreaReference mAreaReference;

}
+(id)reference;
+(id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
+(id)referenceWithAreaReference:(EDAreaReference*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id).cxx_construct;
-(int)firstRow;
-(int)lastRow;
-(int)firstColumn;
-(int)lastColumn;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(unsigned)countOfCellsBeingReferenced;
-(bool)isCellReference;
-(bool)isValidAreaReference;
-(bool)containsRow:(int)arg1 column:(int)arg2 ;
-(void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(void)setFirstRow:(int)arg1 ;
-(void)setLastRow:(int)arg1 ;
-(void)unionWithReference:(id)arg1 ;
-(void)unionWithRow:(int)arg1 column:(int)arg2 ;
-(id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(id)initWithAreaReference:(EDAreaReference*)arg1 ;
-(BOOL)isEqualToReference:(id)arg1 ;
-(bool)isValidCellReference;
-(EDAreaReference)areaReference;
-(bool)isRowReference;
-(bool)isColumnReference;
-(bool)fullyAdjacentToReference:(id)arg1 ;
@end

