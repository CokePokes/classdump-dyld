/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIWebRotatingNodePopoverDelegate.h>

@protocol WebOpenPanelResultListener, UIWebFileUploadPanelDelegate;
@class UIActionSheet, UIImagePickerController, UIFallbackCompatibleViewController, UIViewController, UIWebRotatingNodePopover, DOMNode, NSArray, UIWebDocumentView, NSObject, ;

@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIWebRotatingNodePopoverDelegate> {

	UIActionSheet* _selectPickerTypeSheet;
	UIImagePickerController* _imagePicker;
	UIFallbackCompatibleViewController* _rootViewController;
	UIViewController* _fallbackViewController;
	UIWebRotatingNodePopover* _fileUploadPopover;
	BOOL _documentViewPresentedViewController;
	CGPoint _interactionPoint;
	DOMNode* _interactionElement;
	BOOL _allowMultipleFiles;
	BOOL _isUsingCamera;
	NSArray* _mimeTypes;
	UIWebDocumentView* _documentView;
	NSObject<WebOpenPanelResultListener>* _resultListener;
	<UIWebFileUploadPanelDelegate>* _delegate;

}

@property (assign,nonatomic) <UIWebFileUploadPanelDelegate> * delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * mimeTypes;                                                  //@synthesize mimeTypes=_mimeTypes - In the implementation block
@property (assign,nonatomic) UIWebDocumentView * documentView;                                   //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,retain) NSObject<WebOpenPanelResultListener> * resultListener;              //@synthesize resultListener=_resultListener - In the implementation block
@property (assign,nonatomic) BOOL allowMultipleFiles;                                            //@synthesize allowMultipleFiles=_allowMultipleFiles - In the implementation block
@property (assign,nonatomic) BOOL isUsingCamera;                                                 //@synthesize isUsingCamera=_isUsingCamera - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheetCancel:(id)arg1 ;
-(id)documentView;
-(void)dismiss;
-(id)initWithResultListener:(id)arg1 mimeTypes:(id)arg2 allowMultipleFiles:(BOOL)arg3 documentView:(id)arg4 ;
-(void)present;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)setDocumentView:(id)arg1 ;
-(void)popoverWasDismissed:(id)arg1 ;
-(void)setMimeTypes:(id)arg1 ;
-(void)setResultListener:(id)arg1 ;
-(void)setAllowMultipleFiles:(BOOL)arg1 ;
-(void)setIsUsingCamera:(BOOL)arg1 ;
-(void)_dispatchDidDismiss;
-(id)mimeTypes;
-(BOOL)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2 ;
-(id)_mediaTypesForPickerSourceType:(int)arg1 ;
-(id)_photoPickerWithSourceType:(int)arg1 ;
-(void)_ensureInteractionElement;
-(void)_cancel;
-(void)_showPhotoPickerWithSourceType:(int)arg1 ;
-(void)_showMediaSourceSelectionSheet;
-(void)_dismissDisplayAnimated:(BOOL)arg1 ;
-(id)_filePathForMediaURL:(id)arg1 ;
-(float)_compressionQuality;
-(void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned)arg2 processedResults:(id)arg3 processedImageCount:(unsigned)arg4 processedVideoCount:(unsigned)arg5 successBlock:(/*^block*/ id)arg6 failureBlock:(/*^block*/ id)arg7 ;
-(id)_displayStringForPhotos:(unsigned)arg1 videos:(unsigned)arg2 ;
-(void)_temporaryFilePathForOriginalImage:(id)arg1 successBlock:(/*^block*/ id)arg2 failureBlock:(/*^block*/ id)arg3 ;
-(void)_filePathFromMediaInfo:(id)arg1 successBlock:(/*^block*/ id)arg2 failureBlock:(/*^block*/ id)arg3 ;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(id)_thumbnailSizedImageForImage:(id)arg1 ;
-(void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(void)_processMediaInfoDictionaries:(id)arg1 successBlock:(/*^block*/ id)arg2 failureBlock:(/*^block*/ id)arg3 ;
-(void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(id)resultListener;
-(BOOL)allowMultipleFiles;
-(BOOL)isUsingCamera;
@end

