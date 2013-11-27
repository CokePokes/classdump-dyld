/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIImageView, UITableView;

@interface UIKeyboardEmojiPicker : UIKBKeyView <UITableViewDelegate, UITableViewDataSource> {

	UIImageView* _container;
	UITableView* _picker;
	UIImageView* _innerShadow;

}

@property (readonly) UITableView * picker;              //@synthesize picker=_picker - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)containerView;
-(id)container;
-(BOOL)shouldCache;
-(id)picker;
-(id)defaultIndexPath;
@end

