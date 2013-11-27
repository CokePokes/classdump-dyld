/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionView.h>

@interface WorldClockCollectionView : UICollectionView {

	unsigned _rowCount;

}

@property (assign,nonatomic) unsigned rowCount;              //@synthesize rowCount=_rowCount - In the implementation block
+(unsigned)cellsPerPage;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setRowCount:(unsigned)arg1 ;
-(unsigned)rowCount;
@end

