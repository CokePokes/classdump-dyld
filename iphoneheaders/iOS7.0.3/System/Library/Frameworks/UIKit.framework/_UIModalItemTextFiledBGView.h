/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

@class UIColor, UIView;

@interface _UIModalItemTextFiledBGView : _UITextFieldRoundedRectBackgroundViewNeue {

	int _textFieldsCount;
	UIColor* _backgroundColor;
	UIColor* _separatorsColor;
	UIView* _separatorView;

}

@property (assign,nonatomic) int textFieldsCount;                    //@synthesize textFieldsCount=_textFieldsCount - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorsColor;              //@synthesize separatorsColor=_separatorsColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(void)setSeparatorsColor:(id)arg1 ;
-(void)setTextFieldsCount:(int)arg1 ;
-(id)separatorsColor;
-(int)textFieldsCount;
@end

