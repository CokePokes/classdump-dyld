/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSMutableArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

	NSMutableArray* m_menuOptions;
	CGSize m_preferredSize;

}
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)numberOfItems;
-(CGSize)preferredSize;
-(int)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(id)titleForItemAtIndex:(int)arg1 ;
@end

