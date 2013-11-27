/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/_MFResultsGenerator.h>

@class MFConditionLock, MFLibraryMessage;

@interface MFMessageResultsGenerator : _MFResultsGenerator {

	void* _addressBook;
	MFConditionLock* _contextLoadConditionLock;
	BOOL _shouldDownload;
	MFLibraryMessage* _message;

}

@property (nonatomic,retain) MFLibraryMessage * message;              //@synthesize message=_message - In the implementation block
+(id)resultsDictionaryFromMessage:(id)arg1 forKeys:(id)arg2 downloadIfNecessary:(BOOL)arg3 ;
+(id)resultValueFromMessage:(id)arg1 forKey:(id)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(SEL)selectorForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)_messageReference:(id)arg1 ;
-(id)_accountReference:(id)arg1 ;
-(id)_subject:(id)arg1 ;
-(id)_bodySummary:(id)arg1 ;
-(id)_sender:(id)arg1 ;
-(id)_recipientBcc:(id)arg1 ;
-(id)_recipientCc:(id)arg1 ;
-(id)_recipientTo:(id)arg1 ;
-(id)_dateSent:(id)arg1 ;
-(id)_dateReceived:(id)arg1 ;
-(id)_status:(id)arg1 ;
-(id)_outgoing:(id)arg1 ;
-(id)_receivingAddresses:(id)arg1 ;
-(id)_isLocalDraft:(id)arg1 ;
-(id)_rfc822Data:(id)arg1 ;
-(id)_suppressionContexts:(id)arg1 ;
-(id)_convertEmailAddress:(id)arg1 ;
-(id)_convertEmailAddresses:(id)arg1 ;
-(void)dealloc;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
@end

