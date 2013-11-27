/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OADTable, ESDContainer, OABWriterState;

@interface OABWTable : NSObject {

	OADTable* mSrcTable;
	ESDContainer* mTgtTable;
	OABWriterState* mState;
	long mRowCount;
	long mColumnCount;
	vector<long, std::__1::allocator<long> >* mpXCoords;
	vector<long, std::__1::allocator<long> >* mpYCoords;

}
-(void)dealloc;
-(id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3 ;
-(void)map;
-(void)mapGlobals;
-(void)mapCoordinates;
-(void)mapCells;
-(void)mapVectors;
@end

