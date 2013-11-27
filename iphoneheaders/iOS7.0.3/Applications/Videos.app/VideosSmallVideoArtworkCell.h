/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Videos/Videos-Structs.h>
#import <Videos/VideosArtworkCell.h>

@class UILabel, NSString;

@interface VideosSmallVideoArtworkCell : VideosArtworkCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)prepareForReuse;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setArtworkImage:(id)arg1 ;
-(void).cxx_destruct;
@end

