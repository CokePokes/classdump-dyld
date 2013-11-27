/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject {

	TSTLayout* mLayout;
	TSTLayoutSpace* mSpace;
	TSTLayoutSpace* mFrozenHeaderColumnsSpace;
	TSTLayoutSpace* mFrozenHeaderRowsSpace;
	TSTLayoutSpace* mFrozenHeaderCornerSpace;
	TSTLayoutSpace* mRepeatHeaderColumnsSpace;
	TSTLayoutSpace* mRepeatHeaderRowsSpace;
	TSTLayoutSpace* mRepeatHeaderCornerSpace;

}

@property (assign,nonatomic) TSTLayout * layout; 
@property (nonatomic,retain) TSTLayoutSpace * space; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderCornerSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderCornerSpace; 
-(id)initWithLayout:(id)arg1 ;
-(int)validateLayoutSpaces;
-(void)invalidateTableOffsets;
-(void)invalidateCoordinates;
-(id)frozenHeaderColumnsSpace;
-(id)frozenHeaderRowsSpace;
-(id)frozenHeaderCornerSpace;
-(id)repeatHeaderColumnsSpace;
-(id)repeatHeaderRowsSpace;
-(id)repeatHeaderCornerSpace;
-(void)performActionOnEachLayoutSpace:(/*^block*/ id)arg1 ;
-(void)setRepeatHeaderColumnsSpace:(id)arg1 ;
-(void)setRepeatHeaderRowsSpace:(id)arg1 ;
-(void)setRepeatHeaderCornerSpace:(id)arg1 ;
-(BOOL)performActionOnRepeatLayoutSpaces:(/*^block*/ id)arg1 ;
-(void)setFrozenHeaderColumnsSpace:(id)arg1 ;
-(void)setFrozenHeaderRowsSpace:(id)arg1 ;
-(void)setFrozenHeaderCornerSpace:(id)arg1 ;
-(BOOL)performActionOnFrozenLayoutSpaces:(/*^block*/ id)arg1 ;
-(id)getSpaceContainingCellID:(SCD_Struct_TS266)arg1 ;
-(void)dealloc;
-(id)description;
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(void)setSpace:(id)arg1 ;
-(id)space;
@end

