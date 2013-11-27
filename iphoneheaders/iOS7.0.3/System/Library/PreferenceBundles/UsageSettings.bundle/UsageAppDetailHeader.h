/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface UsageAppDetailHeader : UIView {

	UILabel* _appNameLabel;
	UILabel* _appVersionLabel;
	UILabel* _appSizeLabel;
	UIImageView* _appIcon;

}
+(float)usageAppDetailHeaderHeight;
-(void)setLabelTextAndIconWithSpecifier:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end

