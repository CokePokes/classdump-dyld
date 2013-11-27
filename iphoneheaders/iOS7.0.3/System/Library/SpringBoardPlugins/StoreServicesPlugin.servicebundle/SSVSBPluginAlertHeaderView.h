/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServicesPlugin/StoreServicesPlugin-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface SSVSBPluginAlertHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(id)title;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void).cxx_destruct;
@end

