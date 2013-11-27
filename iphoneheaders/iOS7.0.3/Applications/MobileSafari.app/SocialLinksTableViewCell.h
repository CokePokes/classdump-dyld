/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImage, UIImageView, WBSAutomaticReadingListItem;

@interface SocialLinksTableViewCell : UITableViewCell {

	UIImage* _posterImage;
	UIImageView* _serviceImageView;
	WBSAutomaticReadingListItem* _item;

}

@property (nonatomic,retain) WBSAutomaticReadingListItem * item;              //@synthesize item=_item - In the implementation block
+(float)heightForItem:(id)arg1 inTableView:(id)arg2 ;
-(id)_serviceImage;
-(CGRect)_serviceImageFrame;
-(void)setItem:(id)arg1 ;
-(void)setPosterImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)item;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

