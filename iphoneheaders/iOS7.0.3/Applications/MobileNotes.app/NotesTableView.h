/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UITableView.h>

@class UIImageView, NotesTextureBackgroundView, NotesBackgroundView;

@interface NotesTableView : UITableView {

	UIImageView* _background;
	NotesTextureBackgroundView* _textureHeaderView;
	NotesTextureBackgroundView* _textureBackgroundView;
	BOOL _isLandscape;
	NotesBackgroundView* _textureScrollingDelegate;

}

@property (__weak) NotesBackgroundView * textureScrollingDelegate;              //@synthesize textureScrollingDelegate=_textureScrollingDelegate - In the implementation block
-(void)setTextureScrollingDelegate:(id)arg1 ;
-(id)textureScrollingDelegate;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void).cxx_destruct;
@end

