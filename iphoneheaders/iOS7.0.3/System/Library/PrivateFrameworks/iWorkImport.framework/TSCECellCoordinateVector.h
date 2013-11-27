/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_semaphore;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject;

@interface TSCECellCoordinateVector : NSObject {

	vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >* mCellCoordinates;
	NSObject<OS_dispatch_semaphore>* mSem;

}
-(void)saveToArchive:(CellCoordinateVectorArchive*)arg1 ;
-(void)addCellCoordinate:(SCD_Struct_TS266)arg1 ;
-(vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >*)cellCoordinates;
-(void)removeAllCellCoordinates;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(id)initWithArchive:(const CellCoordinateVectorArchive*)arg1 ;
-(void).cxx_destruct;
@end

