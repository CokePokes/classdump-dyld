/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowTableViewCell.h>

@class UIImageView, UIView;

@interface PTSImagePreviewRowTableViewCell : PTSRowTableViewCell {

	UIImageView* _imageViewOnLight;
	UIImageView* _imageViewOnDark;
	UIView* _lightBackground;
	UIView* _darkBackground;

}
+(float)cellHeightForRow:(id)arg1 ;
+(void)_getCellHeight:(float*)arg1 leftFrame:(CGRect*)arg2 rightFrame:(CGRect*)arg3 forImage:(id)arg4 inBounds:(CGRect)arg5 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateDisplayedValue;
-(void).cxx_destruct;
@end

