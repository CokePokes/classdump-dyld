/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicCarDisplayUI/MSSectionedTableViewController.h>

@interface MSSongsTableViewController : MSSectionedTableViewController {

	BOOL _shouldShowAlbumAndArtistSubtitle;
	BOOL _shouldShowShuffleAction;

}

@property (assign,nonatomic) BOOL shouldShowAlbumAndArtistSubtitle;              //@synthesize shouldShowAlbumAndArtistSubtitle=_shouldShowAlbumAndArtistSubtitle - In the implementation block
@property (assign,nonatomic) BOOL shouldShowShuffleAction;                       //@synthesize shouldShowShuffleAction=_shouldShowShuffleAction - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(void)setShouldShowShuffleAction:(BOOL)arg1 ;
-(void)setShouldShowAlbumAndArtistSubtitle:(BOOL)arg1 ;
-(unsigned)countOfActions;
-(BOOL)shouldShowAlbumAndArtistSubtitle;
-(BOOL)shouldShowShuffleAction;
@end

