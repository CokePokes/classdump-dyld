/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PUPhotoSharingManagerDelegate;
@class PLVideoRemaker, PLManagedAsset, PLProgressView, NSTimer, UIActivity, ;

@interface PUPhotoSharingManager : NSObject {

	PLVideoRemaker* _remaker;
	BOOL _remakingWasCancelled;
	PLManagedAsset* _currentVideo;
	PLProgressView* _publishingProgressView;
	NSTimer* _publishingProgressTimer;
	UIActivity* _activity;
	<PUPhotoSharingManagerDelegate>* _delegate;

}

@property (nonatomic,retain) UIActivity * activity;                                   //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) <PUPhotoSharingManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)activity;
-(void)setActivity:(id)arg1 ;
-(void)_publishingAgentDidCancel:(id)arg1 ;
-(void)_publishingAgentDidStartRemaking:(id)arg1 ;
-(void)_publishingAgentDidEndRemaking:(id)arg1 ;
-(void)_publishingAgentDidFinishPublishing:(id)arg1 ;
-(void)_publishingAgentsDidForceCancel:(id)arg1 ;
-(id)_currentPublishingAgent;
-(void)_updatePublishingProgressView:(id)arg1 ;
-(void)_publishingDidFinish;
-(void).cxx_destruct;
@end

