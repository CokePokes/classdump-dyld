/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface MNStarkLargerHitTargetButtonView : UIView {

	UIButton* _containedButton;

}

@property (nonatomic,readonly) UIButton * containedButton;              //@synthesize containedButton=_containedButton - In the implementation block
-(id)containedButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end

