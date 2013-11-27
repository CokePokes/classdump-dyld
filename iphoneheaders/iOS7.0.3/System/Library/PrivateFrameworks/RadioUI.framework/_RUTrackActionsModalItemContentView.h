/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/_UIModalItemContentView.h>
#import <RadioUI/RUTrackActioning.h>
#import <MediaPlayerUI/RUTrackActionsDelegate.h>

@protocol RUTrackActionsDelegate;
@class _UIBackdropView, RUTrackActionsView, , NSString, UIImage;

@interface _RUTrackActionsModalItemContentView : _UIModalItemContentView <RUTrackActioning, RUTrackActionsDelegate> {

	_UIBackdropView* _backdropView;
	RUTrackActionsView* _trackActionsView;
	<RUTrackActionsDelegate>* _trackActionsDelegate;

}

@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) int cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) <RUTrackActionsDelegate> * trackActionsDelegate;              //@synthesize trackActionsDelegate=_trackActionsDelegate - In the implementation block
@property (assign,nonatomic) int enabledActions; 
@property (assign,nonatomic) int onActions; 
@property (nonatomic,copy) NSString * songText; 
+(CGSize)artworkSize;
-(id)artworkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)contentSize;
-(void)setModalItem:(id)arg1 ;
-(void)setPresentingViewController:(id)arg1 ;
-(void)setArtworkImage:(id)arg1 ;
-(void)setTrackActionsDelegate:(id)arg1 ;
-(void)setSongText:(id)arg1 ;
-(void)setArtistText:(id)arg1 ;
-(void)setEnabledActions:(int)arg1 ;
-(void)setOnActions:(int)arg1 ;
-(int)actionForButtonIndex:(int)arg1 ;
-(void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3 ;
-(void)trackActioningObjectDidChangeContentSize:(id)arg1 ;
-(id)artistText;
-(int)cancelIndex;
-(int)enabledActions;
-(int)onActions;
-(id)songText;
-(id)trackActionsDelegate;
-(void)_layoutViewHierarchy;
-(void).cxx_destruct;
@end

