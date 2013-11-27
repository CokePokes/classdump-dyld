/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellRegionIterating.h>

@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating> {

	set<TSUColumnRowRect, TSTCellRangeRowMajorLess, std::__1::allocator<TSUColumnRowRect> >* mCellRangeSet;
	SCD_Struct_TS266 mCellID;
	SCD_Struct_TS496 mBoundingCellRange;

}
-(SCD_Struct_TS266)getNext;
-(id)initWithCellRegion:(id)arg1 ;
-(void)terminate;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

