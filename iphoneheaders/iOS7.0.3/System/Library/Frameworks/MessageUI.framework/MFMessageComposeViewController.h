/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@protocol MFMessageComposeViewControllerDelegate;
@class , NSArray, NSString, NSMutableArray;

@interface MFMessageComposeViewController : UINavigationController {

	<MFMessageComposeViewControllerDelegate>* _messageComposeDelegate;
	NSArray* _recipients;
	NSString* _body;
	NSString* _subject;
	NSMutableArray* _mutableAttachmentURLs;
	unsigned _currentAttachedVideoCount;
	unsigned _currentAttachedAudioCount;
	unsigned _currentAttachedImageCount;
	NSMutableArray* _temporaryAttachmentURLs;
	NSArray* _attachments;

}

@property (assign,nonatomic) <MFMessageComposeViewControllerDelegate> * messageComposeDelegate;              //@synthesize messageComposeDelegate=_messageComposeDelegate - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * body;                                                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSArray * attachments;                                                        //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic) unsigned currentAttachedVideoCount;                                             //@synthesize currentAttachedVideoCount=_currentAttachedVideoCount - In the implementation block
@property (assign,nonatomic) unsigned currentAttachedAudioCount;                                             //@synthesize currentAttachedAudioCount=_currentAttachedAudioCount - In the implementation block
@property (assign,nonatomic) unsigned currentAttachedImageCount;                                             //@synthesize currentAttachedImageCount=_currentAttachedImageCount - In the implementation block
@property (nonatomic,copy) NSMutableArray * mutableAttachmentURLs;                                           //@synthesize mutableAttachmentURLs=_mutableAttachmentURLs - In the implementation block
@property (nonatomic,copy) NSMutableArray * temporaryAttachmentURLs;                                         //@synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs - In the implementation block
+(BOOL)_canSendText;
+(void)_updateServiceAvailability;
+(void)_serviceAvailabilityChanged:(id)arg1 ;
+(void)_setupAccountMonitor;
+(BOOL)canSendSubject;
+(BOOL)canSendAttachments;
+(void)_startListeningForAvailabilityNotifications;
+(void)initialize;
+(BOOL)canSendText;
+(BOOL)isMMSEnabled;
+(BOOL)isiMessageEnabled;
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(void)disableUserAttachments;
-(void)setCurrentAttachedVideoCount:(unsigned)arg1 ;
-(void)setCurrentAttachedAudioCount:(unsigned)arg1 ;
-(void)setCurrentAttachedImageCount:(unsigned)arg1 ;
-(id)_MIMETypeForURL:(id)arg1 ;
-(BOOL)_isVideoMIMEType:(id)arg1 ;
-(BOOL)_isAudioMIMEType:(id)arg1 ;
-(BOOL)_isImageMIMEType:(id)arg1 ;
-(id)mutableAttachmentURLs;
-(id)_contentTypeForMIMEType:(id)arg1 ;
-(void)_updateAttachmentCountForAttachmentURL:(id)arg1 ;
-(id)_buildAttachmentInfoForAttachmentURL:(id)arg1 andAlternameFilename:(id)arg2 ;
-(id)temporaryAttachmentURLs;
-(BOOL)canAddAttachmentURL:(id)arg1 ;
-(BOOL)addAttachmentData:(id)arg1 withAlternateFilename:(id)arg2 ;
-(void)_setCanEditRecipients:(BOOL)arg1 ;
-(id)messageComposeDelegate;
-(void)setMutableAttachmentURLs:(id)arg1 ;
-(unsigned)currentAttachedVideoCount;
-(unsigned)currentAttachedAudioCount;
-(unsigned)currentAttachedImageCount;
-(void)setTemporaryAttachmentURLs:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)setModalPresentationStyle:(int)arg1 ;
-(id)body;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(void)setMessageComposeDelegate:(id)arg1 ;
-(void)setBody:(id)arg1 ;
-(BOOL)addAttachmentURL:(id)arg1 withAlternateFilename:(id)arg2 ;
-(BOOL)addAttachmentData:(id)arg1 typeIdentifier:(id)arg2 filename:(id)arg3 ;
-(id)attachmentURLs;
-(id)attachments;
-(id)recipients;
-(void)smsComposeControllerCancelled:(id)arg1 ;
-(void)smsComposeControllerSendStarted:(id)arg1 ;
-(void)setRecipients:(id)arg1 ;
@end

