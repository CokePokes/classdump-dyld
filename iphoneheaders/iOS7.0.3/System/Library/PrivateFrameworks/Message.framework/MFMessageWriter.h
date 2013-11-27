/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary;

@interface MFMessageWriter : NSObject {

	Class _messageClassToInstantiate;
	unsigned _allows8BitMimeParts : 1;
	unsigned _allowsBinaryMimeParts : 1;
	unsigned _writeSizeDispositionParameter : 1;
	unsigned _allowsQuotedPrintable : 1;
	id _delegate;
	NSDictionary* _compositionSpecification;

}

@property (assign,nonatomic) id delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)initWithCompositionSpecification:(id)arg1 ;
-(void)setAllowsQuotedPrintable:(BOOL)arg1 ;
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5 ;
-(void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3 ;
-(id)createMessageWithString:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2 ;
-(id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3 ;
-(BOOL)allows8BitMimeParts;
-(void)setAllows8BitMimeParts:(BOOL)arg1 ;
-(BOOL)allowsBinaryMimeParts;
-(void)setAllowsBinaryMimeParts:(BOOL)arg1 ;
-(BOOL)allowsQuotedPrintable;
-(void)setWriteSizeDispositionParameter:(BOOL)arg1 ;
-(void)setMessageClassToInstantiate:(Class)arg1 ;
-(id)compositionSpecification;
@end

