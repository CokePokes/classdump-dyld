/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PUPhotosGridViewController.h>

@class UIBarButtonItem;

@interface PUPhotosSinglePickerViewController : PUPhotosGridViewController {

	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	/*^block*/ id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)_done:(id)arg1 ;
-(/*^block*/ id)completionHandler;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(id)newGridLayout;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

