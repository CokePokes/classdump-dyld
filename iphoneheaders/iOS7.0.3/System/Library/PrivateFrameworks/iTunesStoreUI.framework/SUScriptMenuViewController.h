/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptFunction, WebScriptObject, NSNumber, NSString;

@interface SUScriptMenuViewController : SUScriptViewController {

	SUScriptFunction* _action;

}

@property (retain) WebScriptObject * action; 
@property (retain) id items; 
@property (retain) NSNumber * selectedIndex; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)action;
-(id)title;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)_viewController;
-(id)selectedIndex;
-(void)setSelectedIndex:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(id)itemWithTitle:(id)arg1 userInfo:(id)arg2 ;
@end

