/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCollectionViewCell.h>
#import <SpringBoard/SBUIBannerView.h>

@class SBBannerContextView, UIView, UIColor;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {

	SBBannerContextView* _contextView;
	UIView* _darkeningOverlayView;

}

@property (nonatomic,copy) UIColor * grabberColor; 
-(id)bannerContext;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)_didSetHighlighted:(BOOL)arg1 ;
-(void)setBannerContext:(id)arg1 ;
-(void)noteDidDismiss;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
@end

