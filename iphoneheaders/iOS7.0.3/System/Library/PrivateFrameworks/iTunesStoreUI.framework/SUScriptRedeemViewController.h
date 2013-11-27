/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {

	int _category;
	NSString* _initialCode;

}

@property (nonatomic,copy) NSString * initialCode; 
@property (nonatomic,readonly) int redeemCategoryApps; 
@property (nonatomic,readonly) int redeemCategoryBooks; 
@property (nonatomic,readonly) int redeemCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(void)setInitialCode:(id)arg1 ;
-(void)setRedeemStyle:(int)arg1 ;
-(id)initialCode;
-(int)redeemCategoryApps;
-(int)redeemCategoryBooks;
-(int)redeemCategoryMedia;
@end

