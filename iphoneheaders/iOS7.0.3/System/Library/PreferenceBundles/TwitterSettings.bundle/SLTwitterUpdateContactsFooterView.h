/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UIProgressView, UILabel;

@interface SLTwitterUpdateContactsFooterView : UIView <PSHeaderFooterView> {

	int _mode;
	UIActivityIndicatorView* _activityIndicator;
	UIProgressView* _progressIndicator;
	UILabel* _footerLabel;

}

@property (assign,nonatomic) int mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressIndicator;                       //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel;                                    //@synthesize footerLabel=_footerLabel - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(id)progressIndicator;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)activityIndicator;
-(id)footerLabel;
-(void).cxx_destruct;
@end

