/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListItemsController.h>

@class NSMutableDictionary;

@interface PSInternationalLanguageController : PSListItemsController {

	NSMutableDictionary* _cellCache;

}

@property (nonatomic,retain) NSMutableDictionary * cellCache;              //@synthesize cellCache=_cellCache - In the implementation block
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)cancelButtonTapped;
-(void)_removeBlackFrame;
-(void)setCellCache:(id)arg1 ;
-(void)doneButtonTapped;
-(void)updateNavigationItem;
-(id)cellCache;
-(void)generateLanguageCellCache;
@end

