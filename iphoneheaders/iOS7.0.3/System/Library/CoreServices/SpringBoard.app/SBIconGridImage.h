/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImage.h>

@interface SBIconGridImage : UIImage {

	unsigned _numberOfCells;

}

@property (nonatomic,readonly) unsigned numberOfCells; 
@property (nonatomic,readonly) unsigned numberOfColumns; 
@property (nonatomic,readonly) unsigned numberOfRows; 
+(id)gridImageForNumberOfCells:(unsigned)arg1 withCellImageProviderBlock:(/*^block*/ id)arg2 ;
+(CGRect)rectAtIndex:(unsigned)arg1 maxCount:(unsigned)arg2 ;
+(CGSize)sizeForNumberOfRows:(unsigned)arg1 ;
+(unsigned)numberOfRowsForNumberOfCells:(unsigned)arg1 ;
+(id)_gridImageForNumberOfCells:(unsigned)arg1 withPreviousGridImage:(id)arg2 cellImageProviderBlock:(/*^block*/ id)arg3 ;
+(unsigned)numberOfColumns;
+(CGSize)cellSize;
+(CGSize)cellSpacing;
-(id)gridImageByPatchingWithCellImageProviderBlock:(/*^block*/ id)arg1 ;
-(unsigned)numberOfColumns;
-(unsigned)numberOfRows;
-(unsigned)numberOfCells;
@end

