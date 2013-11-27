/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABContactCell.h>

@class UITextField, UIResponder, ABPropertyGroupItem;

@interface ABPropertyNameCell : ABContactCell {

	UITextField* _textField;
	UIResponder* _firstResponderItem;

}

@property (nonatomic,retain) ABPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UITextField * textField;                       //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIResponder * firstResponderItem;              //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setCardGroupItem:(id)arg1 ;
-(void)setPropertyItem:(id)arg1 ;
-(id)propertyItem;
-(id)firstResponderItem;
-(void)textFieldChanged:(id)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(id)textField;
@end

