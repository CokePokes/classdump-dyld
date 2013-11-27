/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@protocol ABStyleProvider;
@class UILabel, UIImageView, ;

@interface ABPersonCellContentView : UIView {

	CGRect _labelViewRect;
	CGRect _valueViewRect;
	UILabel* _label;
	UIImageView* _badge;
	BOOL _editing;
	<ABStyleProvider>* _styleProvider;

}

@property (nonatomic,readonly) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 styleProvider:(id)arg3 whenEditing:(BOOL)arg4 ;
+(CGRect)firstValueFrameForValueViewFrame:(CGRect)arg1 styleProvider:(id)arg2 whenEditing:(BOOL)arg3 ;
+(void)computeLabelViewFrame:(CGRect*)arg1 valueViewFrame:(CGRect*)arg2 forSize:(CGSize)arg3 styleProvider:(id)arg4 whenEditing:(BOOL)arg5 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)layoutLabel;
-(void)setBadgeIcon:(id)arg1 ;
-(CGRect)rectForView:(id)arg1 ;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(float)labelBaselineAdjustment;
-(CGRect)frameForLabel;
-(CGRect)frameForBadge;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)label;
-(void)setLabelText:(id)arg1 ;
@end

