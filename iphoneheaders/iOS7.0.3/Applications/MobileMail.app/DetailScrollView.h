/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface DetailScrollView : UIView {

	id _delegate;
	BOOL _scrolling;

}

@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) id delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
-(void)_didEndScrolling;
-(void)_snapBack;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)contentView;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
@end

