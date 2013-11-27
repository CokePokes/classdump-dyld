/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <Social/SLComposeViewControllerServiceProtocol.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol SLSheetViewHostProtocol;
@class SLSheetContentView, NSMutableDictionary, SLSheetMasklayer, UIAlertView, NSURL, NSObject, SLSheetPreviewImageSource, UIView, UIViewController, UIImage, NSMutableArray, NSString, SLSheetRootViewController, SLSheetNavigationController;

@interface SLComposeServiceViewController : UIViewController <SLComposeViewControllerServiceProtocol, UITextViewDelegate, UINavigationControllerDelegate> {

	SLSheetContentView* _contentView;
	NSMutableDictionary* _previewOffsets;
	SLSheetMasklayer* _vignetteLayer;
	UIAlertView* _alertView;
	NSURL* _alertViewTargetURL;
	NSObject<SLSheetViewHostProtocol>* _hostProxy;
	BOOL _reassembleSheet;
	BOOL _isShowingLocationDeniedAlert;
	BOOL _isPresentingActionViewController;
	SLSheetPreviewImageSource* _previewImageSource;
	int _currentBarMetrics;
	UIView* _maskView;
	BOOL _didCallPresentSheet;
	BOOL _triggerPresentationAnimationOnKeyboard;
	BOOL _hasPresentedSheet;
	BOOL _isPerformationRotation;
	CGRect _sheetFrameStartingRotation;
	UIViewController* _viewControllerForTrackingSheetSize;
	UIViewController* _autoCompletionViewControllerForTrackingSheetSize;
	BOOL _wasPresented;
	BOOL _preventSheetPositionChanges;
	BOOL _suppressKeyboard;
	UIImage* _serviceIconImage;
	int* _keyboardType;
	NSMutableArray* _attachments;
	int _previewDisplayFormat;
	unsigned long _maxImageAttachmentSize;
	NSString* _placeholderText;
	SLSheetRootViewController* _sheetRootViewController;
	SLSheetNavigationController* _navigationController;
	NSMutableArray* _constraints;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * serviceIconImage;                                       //@synthesize serviceIconImage=_serviceIconImage - In the implementation block
@property (assign,nonatomic) int* keyboardType;                                                //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,retain) SLSheetContentView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NSMutableArray * attachments;                                     //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) int previewDisplayFormat;                                         //@synthesize previewDisplayFormat=_previewDisplayFormat - In the implementation block
@property (retain) NSObject<SLSheetViewHostProtocol> * hostProxy; 
@property (assign,nonatomic) unsigned long maxImageAttachmentSize;                             //@synthesize maxImageAttachmentSize=_maxImageAttachmentSize - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) NSString * placeholderText;                                       //@synthesize placeholderText=_placeholderText - In the implementation block
@property (readonly) BOOL wasPresented;                                                        //@synthesize wasPresented=_wasPresented - In the implementation block
@property (nonatomic,retain) SLSheetRootViewController * sheetRootViewController;              //@synthesize sheetRootViewController=_sheetRootViewController - In the implementation block
@property (nonatomic,retain) SLSheetNavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) BOOL preventSheetPositionChanges;                                 //@synthesize preventSheetPositionChanges=_preventSheetPositionChanges - In the implementation block
@property (assign,nonatomic) BOOL suppressKeyboard;                                            //@synthesize suppressKeyboard=_suppressKeyboard - In the implementation block
@property (readonly) UIView * sheetView; 
@property (retain) NSMutableArray * constraints;                                               //@synthesize constraints=_constraints - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)setAttachments:(id)arg1 ;
-(void)presentSettingsAlertWithTitle:(id)arg1 message:(id)arg2 targetURL:(id)arg3 ;
-(BOOL)validateText:(id)arg1 ;
-(void)previewImageForAttachment:(id)arg1 resultBlock:(/*^block*/ id)arg2 ;
-(BOOL)canAddContent;
-(void)updateAttachment:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(int)previewDisplayFormat;
-(void)popActionViewController;
-(void)showLocationDeniedAlertWithTitle:(id)arg1 settingsURL:(id)arg2 ;
-(BOOL)validateSheetContent;
-(id)URLAttachments;
-(void)sheetPresentationAnimationDidFinish;
-(void)registerHostProxy;
-(BOOL)wasPresented;
-(void)setMaxImageAttachmentSize:(unsigned long)arg1 ;
-(void)presentAutoCompletionViewController:(id)arg1 ;
-(void)dismissAutoCompletionViewController;
-(void)setServiceIconImage:(id)arg1 ;
-(void)postButtonTapped:(id)arg1 ;
-(void)setPostButtonEnabled:(BOOL)arg1 ;
-(void)networkActivityIndicatorNotification:(id)arg1 ;
-(BOOL)preventSheetPositionChanges;
-(CGRect)sheetFrameForViewController:(id)arg1 orientation:(int)arg2 ;
-(void)setSheetFrame:(CGRect)arg1 ;
-(void)_positionVignetteForSheetFrame:(CGRect)arg1 ;
-(void)_positionSheetViewForViewController:(id)arg1 ;
-(id)sheetRootViewController;
-(void)_presentSheet;
-(BOOL)suppressKeyboard;
-(BOOL)validateAttachments;
-(void)downsampleImageAttachment:(id)arg1 ;
-(void)removeAttachmentsOfType:(int)arg1 ;
-(unsigned long)maxImageAttachmentSize;
-(id)previewViewForDisplayFormat:(int)arg1 attachments:(id)arg2 ;
-(id)previewImageSource;
-(void)animateCardSendOrientation:(int)arg1 ;
-(void)hideKeyboardAnimated:(BOOL)arg1 ;
-(void)animateSheetCancelWithDuration:(double)arg1 ;
-(id)hostProxy;
-(void)positionSheetView;
-(void)_positionSheetViewAnimatedForViewController:(id)arg1 ;
-(void)setPreventSheetPositionChanges:(BOOL)arg1 ;
-(void)_setViewControllerForTrackingSheetSize:(id)arg1 ;
-(void)showKeyboardAnimated:(BOOL)arg1 ;
-(void)_animateVignetteMaskFromSheetFrame:(CGRect)arg1 toSheetFrame:(CGRect)arg2 duration:(double)arg3 ;
-(void)_animateCardSendFinished;
-(void)animateSheetPresentationWithDuration:(double)arg1 ;
-(void)_animateSheetPresentationFinished;
-(void)_animateSheetCancelFinished;
-(void)updateKeyboardSize;
-(void)_presentedViewControllerContentSizeDidChange;
-(CGRect)sheetFrameForViewController:(id)arg1 orientation:(int)arg2 topSpaceProportion:(float)arg3 topSpaceOffset:(float)arg4 ;
-(CGSize)intrinsicSheetSizeForOrientation:(int)arg1 ;
-(float)_sheetMinBottomMarginForInterfaceOrientation:(int)arg1 ;
-(int)barMetricsForInterfaceOrientation:(int)arg1 ;
-(void)updateSheetForBarMetrics:(int)arg1 ;
-(void)_updateBarMetricsIfNeeded;
-(void)setSheetRootViewController:(id)arg1 ;
-(void)setSuppressKeyboard:(BOOL)arg1 ;
-(int)previewDisplayFormatForAttachments:(id)arg1 ;
-(void)setPreviewDisplayFormat:(int)arg1 ;
-(void)_adjustIntrinsicSheetSizeForDisplayFormatIfNeeded;
-(int)barMetricsForSheetSize:(CGSize)arg1 ;
-(void)showKeyboardWithAnimationTime:(double)arg1 ;
-(void)hideKeyboardWithAnimationTime:(double)arg1 ;
-(void)setPreviewOffset:(UIOffset)arg1 forBarMetrics:(int)arg2 ;
-(void)didSendWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)userTappedSheetAction:(id)arg1 ;
-(void)setConstraints:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)navigationController;
-(id)constraints;
-(int*)keyboardType;
-(void)setKeyboardType:(int*)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)updateViewConstraints;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)cancel;
-(void)removeAllImages;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)sheetView;
-(void)send;
-(void)_willAppearInRemoteViewController;
-(void)_hostApplicationWillEnterForeground;
-(void)setInitialText:(id)arg1 ;
-(void)addAttachment:(id)arg1 ;
-(id)attachments;
-(id)placeholderText;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setHostProxy:(id)arg1 ;
-(void)createPreviewIfNeeded;
-(void)pushActionViewController:(id)arg1 ;
-(void)reloadSheetActions;
-(id)sheetActions;
-(id)serviceIconImage;
-(void)failWithError:(id)arg1 ;
-(void)setNavigationController:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)keyboardDidChange:(id)arg1 ;
-(void).cxx_destruct;
-(void)removeAllURLs;
@end

