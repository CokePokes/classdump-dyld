/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@protocol RCSavedRecordingTableViewCellDelegate;
@class RCSavedRecording, UILabel, UIActivityIndicatorView, ;

@interface RCSavedRecordingTableViewCell : UITableViewCell {

	RCSavedRecording* _savedRecording;
	BOOL _active;
	UILabel* _titleLabel;
	UILabel* _dateLabel;
	UILabel* _durationLabel;
	int _playbackState;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _adjustsAccessoryButtonImageDisabledWhenRowHighlighted;
	<RCSavedRecordingTableViewCellDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RCSavedRecordingTableViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RCSavedRecording * savedRecording;                                      //@synthesize savedRecording=_savedRecording - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) int playbackState; 
+(id)_stringFromDate:(id)arg1 includeTime:(BOOL)arg2 includeDay:(BOOL)arg3 ;
-(void)_accessoryButtonTapped:(id)arg1 ;
-(id)_newLabelWithFont:(id)arg1 alignment:(int)arg2 ;
-(void)_savedRecordingDidFinishMakingNotification:(id)arg1 ;
-(void)_togglePlayPause;
-(id)_pauseImage;
-(id)_playImage;
-(int)playbackState;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(BOOL)isActive;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setAccessoryType:(int)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPlaybackState:(int)arg1 ;
-(void)setSavedRecording:(id)arg1 ;
-(id)savedRecording;
-(void).cxx_destruct;
@end

