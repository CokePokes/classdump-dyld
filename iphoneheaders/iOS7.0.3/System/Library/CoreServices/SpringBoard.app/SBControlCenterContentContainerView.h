/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBControlCenterObserver.h>

@class _UIBackdropView, SBControlCenterContentView;

@interface SBControlCenterContentContainerView : UIView <SBControlCenterObserver> {

	_UIBackdropView* _backdropView;
	SBControlCenterContentView* _contentView;
	float _contentHeight;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;                        //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) SBControlCenterContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign) float contentHeight;                                             //@synthesize contentHeight=_contentHeight - In the implementation block
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(float)contentHeight;
-(void)setContentHeight:(float)arg1 ;
@end

