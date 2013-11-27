/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UICollectionViewCell.h>

@protocol SBCollectionViewCellDelegate;
@class ;

@interface SBCollectionViewCell : UICollectionViewCell {

	<SBCollectionViewCellDelegate>* _delegate;
	BOOL _performSetHighlighted;
	BOOL _protectDelayedUnhighlights;

}

@property (assign,nonatomic) <SBCollectionViewCellDelegate> * delegate; 
@property (assign,nonatomic) BOOL protectDelayedUnhighlights;                        //@synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights - In the implementation block
-(void)setProtectDelayedUnhighlights:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 afterDelay:(double)arg2 ;
-(void)_didSetHighlighted:(BOOL)arg1 ;
-(void)_performSetHighlighted;
-(BOOL)protectDelayedUnhighlights;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
@end

