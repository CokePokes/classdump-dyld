/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSString, MobileCalDAVDaemonAccount, NSMutableSet, NSURL, DACoreDAVTaskManager, NSSet;

@interface MobileCalDAVAttachmentDownloader : NSObject <DADataclassLockWatcher, CoreDAVTaskDelegate> {

	NSString* _waiterID;
	MobileCalDAVDaemonAccount* _account;
	NSMutableSet* _consumers;
	NSString* _attachmentUUID;
	NSURL* _attachmentURL;
	long long _attachmentSize;
	NSString* _attachmentType;
	NSString* _localFilename;
	NSString* _etag;
	DACoreDAVTaskManager* _taskManager;
	BOOL _waitingForGatekeeper;
	BOOL _holdingGatekeeperLock;

}

@property (readonly) NSString * attachmentUUID;              //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (readonly) NSSet * consumers;                      //@synthesize consumers=_consumers - In the implementation block
+(id)progressQueue;
-(void)cancelDownload;
-(void)dealloc;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)waiterID;
-(void)_didShowProgressDownloadedByteCount:(long long)arg1 ;
-(void)_didFinishDownloadingWithError:(id)arg1 ;
-(void)_reallySaveAttachmentDataToDatabase;
-(void)_saveAttachmentDataToDatabase;
-(id)initWithAttachmentUUID:(id)arg1 forAccount:(id)arg2 ;
-(void)addConsumer:(id)arg1 ;
-(void)removeConsumer:(id)arg1 ;
-(id)attachmentUUID;
-(void)beginDownload;
-(id)consumers;
@end

