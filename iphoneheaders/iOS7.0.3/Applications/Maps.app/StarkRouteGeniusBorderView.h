/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface StarkRouteGeniusBorderView : UIView {

	UIView* _borderTop;
	UIView* _borderLeft;
	UIView* _borderRight;
	UIView* _borderBottom;
	BOOL _borderHidden;
	int _interactionModel;

}

@property (assign,getter=isBorderHidden,nonatomic) BOOL borderHidden;              //@synthesize borderHidden=_borderHidden - In the implementation block
@property (assign,nonatomic) int interactionModel;                                 //@synthesize interactionModel=_interactionModel - In the implementation block
-(void)setInteractionModel:(int)arg1 ;
-(int)interactionModel;
-(BOOL)isBorderHidden;
-(void)setBorderHidden:(BOOL)arg1 ;
-(void)_moveSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

