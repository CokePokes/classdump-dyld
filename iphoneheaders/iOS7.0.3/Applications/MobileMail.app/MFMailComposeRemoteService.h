/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFMailComposeRemoteService
@required
-(void)setCompositionValues:(id)arg1;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 identifier:(id)arg4;
-(void)commitCompositionValuesWithReply:(/*^block*/ id)arg1;
-(void)framesForAttachmentsWithIdentifiers:(id)arg1 withReply:(/*^block*/ id)arg2;
-(void)autosaveWithReply:(/*^block*/ id)arg1;
-(void)setUICustomizationData:(id)arg1;
-(void)setContentVisible:(BOOL)arg1;
@end

