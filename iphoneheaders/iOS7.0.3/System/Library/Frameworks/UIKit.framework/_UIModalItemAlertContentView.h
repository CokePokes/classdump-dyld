/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIModalItemContentView.h>

@class _UIModalItemTextFiledBGView, UITableView, UIView, UIScrollView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView {

	_UIModalItemTextFiledBGView* _textFieldBGView;
	BOOL _alertViewIsSetup;
	UITableView* _otherTableView;
	UIView* _2ButtonsSeparators;
	UIView* _tableViewTopSeparator;
	UIScrollView* _labelsScrollView;
	BOOL _itemWantsVerticalButtons;
	BOOL _itemNeedsTwoTableViews;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)layout;
-(void)_reloadButtons;
-(void)setEnableFirstOtherButton:(BOOL)arg1 ;
-(void)_prepareViewIfNeeded;
@end

