/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardEmojiSplit.h>
#import <UIKit/UIKeyboardEmojiInput.h>

@class UILabel, UIKeyboardEmojiCategory, UIKeyboardEmojiInputController;

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiInput> {

	UILabel* _optionalDescription;
	UIKeyboardEmojiCategory* _category;
	UIKeyboardEmojiInputController* _inputController;

}

@property (retain) UIKeyboardEmojiCategory * category;              //@synthesize category=_category - In the implementation block
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)reloadForCategory:(id)arg1 ;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)charactersForRow:(int)arg1 ;
@end

