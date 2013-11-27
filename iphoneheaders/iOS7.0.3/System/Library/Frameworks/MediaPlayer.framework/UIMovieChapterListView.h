/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class UIImageView, UITableView;

@interface UIMovieChapterListView : UIView {

	UIImageView* _backgroundImageView;
	unsigned _pinnedRow;
	UITableView* _tableView;
	float _topPadding;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) float topPadding;                       //@synthesize topPadding=_topPadding - In the implementation block
-(void)pinVisibleRow:(unsigned)arg1 ;
-(void)setTopPadding:(float)arg1 ;
-(float)topPadding;
-(id)init;
-(void)layoutSubviews;
-(id)tableView;
-(void).cxx_destruct;
@end

