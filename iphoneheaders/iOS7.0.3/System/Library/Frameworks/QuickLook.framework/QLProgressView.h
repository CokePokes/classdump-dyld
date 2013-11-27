/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface QLProgressView : UIView {

	int _backgroundColorType;
	UIActivityIndicatorView* _progressIndicator;
	UILabel* _loadingTextLabel;

}

@property (copy) NSString * loadingText; 
@property (assign) int backgroundColorType; 
-(void)setBackgroundColorType:(int)arg1 ;
-(int)backgroundColorType;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)_update;
-(id)loadingText;
-(void)setLoadingText:(id)arg1 ;
@end

