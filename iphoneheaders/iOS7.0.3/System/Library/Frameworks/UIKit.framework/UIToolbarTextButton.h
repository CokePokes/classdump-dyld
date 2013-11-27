/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIToolbarButton.h>

@class NSString, NSSet;

@interface UIToolbarTextButton : UIToolbarButton {

	NSString* _title;
	NSString* _pressedTitle;
	NSSet* _possibleTitles;

}
-(void)dealloc;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(id)_scriptingInfo;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setWantsLetterpressTitle;
-(void)_setPressed:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(int)arg4 withStyle:(int)arg5 withTitleWidth:(float)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8 ;
@end

