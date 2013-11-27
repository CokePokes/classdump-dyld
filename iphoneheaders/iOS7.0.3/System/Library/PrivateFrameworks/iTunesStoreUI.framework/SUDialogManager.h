/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISSingleton.h>
#import <iTunesStoreUI/SUDialogDelegate.h>

@class NSMutableArray;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate> {

	NSMutableArray* _dialogs;

}

@property (nonatomic,readonly) int numberOfPendingDialogs; 
+(id)sharedInstance;
+(id)newDialogWithError:(id)arg1 ;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(BOOL)presentDialog:(id)arg1 ;
-(int)numberOfPendingDialogs;
-(void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(int)arg2 ;
-(BOOL)presentDialog:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(BOOL)_haveEquivalentDialog:(id)arg1 ;
-(void)_finishDialog:(id)arg1 withButtonIndex:(int)arg2 ;
-(BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dialog:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
-(BOOL)presentDialogForError:(id)arg1 ;
@end

