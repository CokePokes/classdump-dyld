/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel;

@interface WADeleteConfirmationButton : UIButton {

	UILabel* _titleLabel;
	float _idealWidth;

}

@property (assign,nonatomic) float idealWidth;              //@synthesize idealWidth=_idealWidth - In the implementation block
+(id)confirmationButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 backgroundColor:(id)arg4 ;
-(void)setIdealWidth:(float)arg1 ;
-(float)idealWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

