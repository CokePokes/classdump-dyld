/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@protocol QLContentView;
@class UIView;

@interface QuickLookDocumentView : UIView {

	UIView<QLContentView>* _contentView;

}
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(void)hideBanner;
-(id)initWithFrame:(CGRect)arg1 quickLookBannerViewDelegate:(id)arg2 ;
-(void)showBanner;
-(void)dealloc;
-(void)layoutSubviews;
@end

