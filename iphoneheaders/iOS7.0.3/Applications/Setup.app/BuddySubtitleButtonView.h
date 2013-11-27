/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddySubtitleView.h>

@class UIButton;

@interface BuddySubtitleButtonView : BuddySubtitleView {

	UIButton* _doneButton;

}

@property (nonatomic,retain) UIButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
-(void)setButtonFontSize:(float)arg1 ;
-(void)setDoneButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setButtonText:(id)arg1 ;
-(id)doneButton;
@end

