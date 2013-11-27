/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <iTunesStoreUI/SUScriptNavigationItem.h>

@class SUScriptCanvasContext, WebScriptObject, UIImage, NSString;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {

	id _action;
	SUScriptCanvasContext* _canvas;
	BOOL _shouldPerformDefaultAction;
	WebScriptObject* _target;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIEdgeInsets imageEdgeInsets; 
@property (assign,nonatomic) BOOL shouldPerformDefaultAction;              //@synthesize shouldPerformDefaultAction=_shouldPerformDefaultAction - In the implementation block
@property (retain) id action; 
@property (retain) SUScriptCanvasContext * canvas; 
@property (assign) BOOL enabled; 
@property (assign) BOOL loading; 
@property (readonly) id showingConfirmation; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * style; 
@property (assign) int tag; 
@property (retain) NSString * title; 
@property (retain) WebScriptObject * target; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)loading;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)action;
-(id)image;
-(id)style;
-(void)setTag:(int)arg1 ;
-(int)tag;
-(void)setEnabled:(BOOL)arg1 ;
-(id)target;
-(id)title;
-(id)_action;
-(void)setAction:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(UIEdgeInsets)imageEdgeInsets;
-(BOOL)enabled;
-(id)canvas;
-(void)setCanvas:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)buttonItem;
-(id)_initSUScriptButton;
-(id)initWithSystemItemString:(id)arg1 ;
-(id)_boxedNativeButton;
-(id)nativeButtonOfType:(int)arg1 ;
-(id)_nativeButton;
-(void)hideConfirmationAnimated:(BOOL)arg1 ;
-(void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setImageInsetsTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4 ;
-(void)setImageWithURLString:(id)arg1 scale:(id)arg2 ;
-(void)performActionWithArguments:(id)arg1 ;
-(void)setNativeButton:(id)arg1 ;
-(id)showingConfirmation;
-(id)_systemItemString;
-(BOOL)shouldPerformDefaultAction;
-(void)setShouldPerformDefaultAction:(BOOL)arg1 ;
@end

