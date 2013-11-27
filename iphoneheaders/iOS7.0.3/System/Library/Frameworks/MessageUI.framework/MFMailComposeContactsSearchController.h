/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MFContactsSearchConsumer.h>

@protocol MFMailComposeContactsSearchControllerDelegate;
@class , MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {

	<MFMailComposeContactsSearchControllerDelegate>* _delegate;
	MFContactsSearchManager* _manager;
	MFContactsSearchResultsModel* _model;
	NSNumber* _taskID;
	NSNumber* _corecipientSearchTaskID;
	BOOL _foundAnySearchResults;
	unsigned _waitingOnSearchResultsCount;

}

@property (assign,nonatomic) <MFMailComposeContactsSearchControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * taskID;                                                       //@synthesize taskID=_taskID - In the implementation block
-(void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 ;
-(void)findCorecipientsWithRecipients:(id)arg1 ;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)setTaskID:(id)arg1 ;
-(void)searchWithString:(id)arg1 ;
-(void)_finishSearch;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cancelSearch;
-(id)taskID;
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(int)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
@end

