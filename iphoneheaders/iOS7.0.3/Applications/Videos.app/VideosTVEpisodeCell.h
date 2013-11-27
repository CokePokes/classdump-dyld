/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Videos/VideosTableCell.h>

@class UIButton, UILabel;

@interface VideosTVEpisodeCell : VideosTableCell {

	UIButton* _readMoreButton;
	UILabel* _descriptionLabel;
	UILabel* _dateLabel;
	BOOL _expanded;
	BOOL _animating;
	float _normalHeight;

}
+(id)descriptionForMediaItem:(id)arg1 ;
+(float)expandedHeightForDescription:(id)arg1 withContentWidth:(float)arg2 ;
-(void)_readMoreButtonPressed:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 normalHeight:(float)arg2 ;
-(void)setMediaItem:(id)arg1 hidesArtwork:(BOOL)arg2 hidesUnplayed:(BOOL)arg3 cache:(id)arg4 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(BOOL)isExpanded;
-(void).cxx_destruct;
-(float)artworkWidth;
@end

