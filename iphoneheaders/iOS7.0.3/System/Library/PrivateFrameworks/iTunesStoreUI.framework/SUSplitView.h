/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SUSplitView : UIView {

	UIView* _firstView;
	int _layoutType;
	float _minimumPaneSize;
	UIView* _secondView;
	float _splitPosition;
	BOOL _vertical;

}

@property (nonatomic,retain) UIView * firstView;                           //@synthesize firstView=_firstView - In the implementation block
@property (assign,nonatomic) int layoutType;                               //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UIView * secondView;                          //@synthesize secondView=_secondView - In the implementation block
@property (assign,nonatomic) float splitPosition;                          //@synthesize splitPosition=_splitPosition - In the implementation block
@property (assign,getter=isVertical,nonatomic) BOOL vertical;              //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) float minimumPaneSize;                        //@synthesize minimumPaneSize=_minimumPaneSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isVertical;
-(void)setVertical:(BOOL)arg1 ;
-(int)layoutType;
-(float)minimumPaneSize;
-(float)splitPosition;
-(void)setLayoutType:(int)arg1 ;
-(void)setSplitPosition:(float)arg1 ;
-(void)setMinimumPaneSize:(float)arg1 ;
-(void)setFirstView:(id)arg1 ;
-(void)setSecondView:(id)arg1 ;
-(float)_minimumPaneSizeForLayout;
-(id)firstView;
-(id)secondView;
@end

