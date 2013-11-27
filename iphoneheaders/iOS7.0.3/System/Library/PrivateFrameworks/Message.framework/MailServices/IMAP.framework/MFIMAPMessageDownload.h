/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/MFIMAPCompoundDownload.h>

@class MFMessage, MFMimePart, MFBufferedDataConsumer;

@interface MFIMAPMessageDownload : MFIMAPCompoundDownload {

	MFMessage* _message;
	MFMimePart* _topLevelPart;
	MFBufferedDataConsumer* _headerConsumer;
	MFBufferedDataConsumer* _textConsumer;
	unsigned _allowsPartialDownloads : 1;
	unsigned _usingPartialDownloads : 1;
	unsigned _startedFetch : 1;
	unsigned _fetchingMessageContents : 1;
	unsigned _fetchingBodyText : 1;
	unsigned _doneAddingSubdownloads : 1;
	unsigned _fetchBodyData : 1;

}
-(void)dealloc;
-(id)data;
-(id)message;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(void)setAllowsPartialDownloads:(BOOL)arg1 ;
-(BOOL)allowsPartialDownloads;
-(BOOL)partial;
-(void)setTopLevelPart:(id)arg1 ;
-(void)setFetchBodyData:(BOOL)arg1 ;
-(BOOL)fetchBodyData;
-(id)topLevelPart;
-(BOOL)isComplete;
-(id)initWithMessage:(id)arg1 ;
@end

