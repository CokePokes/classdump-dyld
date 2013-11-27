/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIColor;

@interface SKUICollectionViewCell : UICollectionViewCell {

	UIView* _bottomBorderView;
	int _position;
	UIView* _rightBorderView;
	UIColor* _separatorColor;
	BOOL _showsCellSeparators;

}

@property (assign,nonatomic) BOOL showsCellSeparators;              //@synthesize showsCellSeparators=_showsCellSeparators - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;              //@synthesize separatorColor=_separatorColor - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)separatorColor;
-(void)setSeparatorColor:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setShowsCellSeparators:(BOOL)arg1 ;
-(BOOL)_showsRightBorder;
-(void)_updateBorderVisibility;
-(BOOL)showsCellSeparators;
-(void)_setPosition:(int)arg1 ;
-(void).cxx_destruct;
@end

