/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, UILabel, NSString;

@interface SKUIGiftDateTableViewCell : UITableViewCell {

	UIView* _bottomBorderView;
	BOOL _checked;
	UIImageView* _checkmarkView;
	UILabel* _dateLabel;
	UILabel* _labelLabel;
	UILabel* _placeholderLabel;
	UIView* _topBorderView;

}

@property (assign,getter=isChecked,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * placeholder; 
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)placeholder;
-(BOOL)isChecked;
-(void)setDateString:(id)arg1 ;
-(id)_labelColor;
-(id)dateString;
-(void).cxx_destruct;
-(id)_newLabel;
@end

