/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptNavigationItem, NSArray, SUScriptButton, NSString;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem * backNavigationItem; 
@property (assign) int barStyle; 
@property (readonly) NSArray * navigationItems; 
@property (copy) id translucent; 
@property (readonly) SUScriptNavigationItem * topNavigationItem; 
@property (readonly) int barStyleBlack; 
@property (readonly) int barStyleDefault; 
@property (retain) SUScriptButton * leftButton; 
@property (retain) <SUScriptNavigationItem> * leftItem; 
@property (retain) NSString * prompt; 
@property (retain) SUScriptButton * rightButton; 
@property (retain) <SUScriptNavigationItem> * rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)rightButton;
-(void)setRightButton:(id)arg1 ;
-(id)init;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)navigationItems;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(void)setTranslucent:(id)arg1 ;
-(void)setNavigationItems:(id)arg1 ;
-(id)attributeKeys;
-(void)setLeftButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightButton:(id)arg1 animated:(BOOL)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)initWithNativeNavigationBar:(id)arg1 ;
-(id)_nativeNavigationBar;
-(void)tearDownUserInterface;
-(id)_topNavigationItem;
-(id)leftItem;
-(id)rightItem;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyTopNavigationItem;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4 ;
-(id)backNavigationItem;
-(void)setBackNavigationItem:(id)arg1 ;
-(void)setLeftItem:(id)arg1 ;
-(void)setRightItem:(id)arg1 ;
-(void)setTopNavigationItem:(id)arg1 ;
-(id)topNavigationItem;
-(id)translucent;
-(int)barStyleBlack;
-(int)barStyleDefault;
-(id)leftButton;
-(void)setLeftButton:(id)arg1 ;
@end

