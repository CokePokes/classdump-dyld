/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextField, UIView, NSAttributedString, NSString, UIControl;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {

	UILabel* _label;
	UITextField* _textField;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) int keyboardType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) UIControl * textField;                                //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) <UITextFieldDelegate> * textFieldDelegate; 
@property (nonatomic,copy) NSString * value; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)textField;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(id)attributedPlaceholder;
-(void)setTextFieldDelegate:(id)arg1 ;
-(id)textFieldDelegate;
-(void).cxx_destruct;
@end

