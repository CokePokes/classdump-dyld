/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CKConversationSearcherDelegate
@optional
-(void)searcherWillBeginSearch:(id)arg1;
-(void)searcherDidBeginSearch:(id)arg1;
-(void)searcherWillEndSearch:(id)arg1;
-(void)searcherDidEndSearch:(id)arg1;
-(void)searcher:(id)arg1 willShowSearchResultsTableView:(id)arg2;
-(void)searcher:(id)arg1 didShowSearchResultsTableView:(id)arg2;
-(void)searcher:(id)arg1 willHideSearchResultsTableView:(id)arg2;
-(void)searcher:(id)arg1 didHideSearchResultsTableView:(id)arg2;

@required
-(id)searcherContentsController:(id)arg1;
-(id)searcher:(id)arg1 conversationForChatGUID:(id)arg2;
-(void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3;
@end

