/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFComposeTypeFactoryDelegate <NSObject>
@optional
-(void)addSignature:(BOOL)arg1;

@required
-(id)sendingEmailAddress;
-(id)bodyField;
-(id)attachmentStore;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1;
-(void)setBccRecipients:(id)arg1;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2;
-(id)sendingAccountProxy;
-(id)accountProxyGenerator;
-(id)bccRecipients;
-(void)setSavedHeaders:(id)arg1;
-(id)addInlinedElementToStore:(id)arg1 onlyIfNecessary:(BOOL)arg2;
-(BOOL)hasAnyHiddenTrailingEmptyQuote;
-(void)setSubject:(id)arg1;
-(id)subject;
-(void)setToRecipients:(id)arg1;
@end

