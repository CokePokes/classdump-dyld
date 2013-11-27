/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>
#import <ChatKit/CKAnimationTimerObserver.h>

@class CKAnimatedImage, NSArray, UIImageView;

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver> {

	CKAnimatedImage* _animatedImage;
	NSArray* _frames;
	UIImageView* _tailMask;

}

@property (nonatomic,retain) CKAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,copy) NSArray * frames;                               //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UIImageView * tailMask;                       //@synthesize tailMask=_tailMask - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)description;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(void)setHasTail:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(id)overlayColor;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(id)animatedImage;
-(void)setTailMask:(id)arg1 ;
-(id)tailMask;
-(void)updateAnimationTimerObserving;
-(void)setAnimatedImage:(id)arg1 ;
-(id)frames;
-(void)setFrames:(id)arg1 ;
-(void)animationTimerFired:(unsigned)arg1 ;
@end

