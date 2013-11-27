/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUGridTableViewCell.h>

@class UIButton, UISlider, UIImageView, UIGestureRecognizer;

@interface SUDownloadCell : SUGridTableViewCell {

	UIButton* _accessoryButton;
	UISlider* _progressBar;
	UIImageView* _editView;
	UIGestureRecognizer* _tapRecognizer;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_accessoryButtonAction:(id)arg1 ;
-(BOOL)handleTap;
-(void)setConfiguration:(id)arg1 ;
-(void)setEditState:(int)arg1 ;
-(void)reloadForStatusChange;
-(void)_reloadAccessoryButton;
-(void)_reloadProgressBar;
-(void)_reloadEditView;
-(BOOL)_isDownloadResumable:(id)arg1 ;
-(id)_parentGridView;
-(void)_tapGesture:(id)arg1 ;
@end

