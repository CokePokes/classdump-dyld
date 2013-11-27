/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class BlurView, NSArray, UIColor, UIView;

@interface FloatingControlsView : UIView {

	BlurView* _blurView;
	NSArray* _items;
	NSArray* _nextItems;
	UIColor* _blurDisabledBackgroundColor;
	float _horizontalInset;
	UIView* _borderLine;
	float _borderLineHeight;

}

@property (nonatomic,retain) NSArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * nextItems;              //@synthesize nextItems=_nextItems - In the implementation block
-(void)setBlurDisabledBackgroundColor:(id)arg1 ;
-(void)updateItemsAnimated;
-(CGSize)suggestedSize;
-(void)removeFloatingControl:(id)arg1 ;
-(void)addFloatingControl:(id)arg1 ;
-(id)nextItems;
-(void)setNextItems:(id)arg1 ;
-(id)framesForItems:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStyle:(int)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)transitionToPrivateStyle:(int)arg1 ;
@end

