/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBBackdropView;

@interface UIKBInputBackdropView : UIView {

	UIKBBackdropView* _inputBackdropFullView;
	UIKBBackdropView* _inputBackdropLeftView;
	UIKBBackdropView* _inputBackdropRightView;
	unsigned _innerCorners;
	BOOL _isTransitioning;
	float _transitionGap;
	float _transitionLeftOffset;

}

@property (nonatomic,retain) UIKBBackdropView * inputBackdropFullView;               //@synthesize inputBackdropFullView=_inputBackdropFullView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropLeftView;               //@synthesize inputBackdropLeftView=_inputBackdropLeftView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropRightView;              //@synthesize inputBackdropRightView=_inputBackdropRightView - In the implementation block
-(void)dealloc;
-(int)textEffectsVisibilityLevel;
-(id)inputBackdropLeftView;
-(id)inputBackdropRightView;
-(id)inputBackdropFullView;
-(void)transitionToStyle:(int)arg1 isSplit:(BOOL)arg2 ;
-(void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2 progress:(float)arg3 innerCorners:(unsigned)arg4 ;
-(void)layoutInputBackdropToFullWithRect:(CGRect)arg1 ;
-(void)layoutInputBackdropToSplitWithLeftViewRect:(CGRect)arg1 andRightViewRect:(CGRect)arg2 innerCorners:(int)arg3 ;
-(void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2 progress:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 primaryBackdrop:(BOOL)arg2 ;
-(void)_setProgress:(float)arg1 boundedBy:(float)arg2 ;
-(void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)setInputBackdropFullView:(id)arg1 ;
-(void)setInputBackdropLeftView:(id)arg1 ;
-(void)setInputBackdropRightView:(id)arg1 ;
@end

