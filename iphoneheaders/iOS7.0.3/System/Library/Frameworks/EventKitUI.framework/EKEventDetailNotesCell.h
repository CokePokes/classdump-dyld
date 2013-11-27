/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailCell.h>

@class UILabel, UITextView;

@interface EKEventDetailNotesCell : EKEventDetailCell {

	UILabel* _notesTitleView;
	UITextView* _notesView;
	BOOL _isTruncatingNotes;

}

@property (nonatomic,readonly) BOOL isTruncatingNotes;              //@synthesize isTruncatingNotes=_isTruncatingNotes - In the implementation block
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)_notesView;
-(id)_notesTitleView;
-(CGSize)_truncatedNotesViewSize:(float)arg1 ;
-(BOOL)isTruncatingNotes;
-(BOOL)update;
-(void).cxx_destruct;
@end

