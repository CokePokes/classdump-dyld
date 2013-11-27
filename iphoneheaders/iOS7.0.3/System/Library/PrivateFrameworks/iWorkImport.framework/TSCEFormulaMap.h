/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaMap : NSObject {

	hash_map<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > >, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > > > >* mOwnerToFormulasMap;
	int mCount;

}
-(void)addFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 atCellCoordinate:(SCD_Struct_TS266)arg3 ;
-(id)formulaEnumerator;
-(int)count;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

