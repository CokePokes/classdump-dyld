/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

@interface _UIDictationAttachment : NSTextAttachment {

	NSDictionary* _typingAttributesBeforeInsertion;
	NSRange _attachmentRange;

}

@property (assign,nonatomic) NSRange attachmentRange;                                   //@synthesize attachmentRange=_attachmentRange - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributesBeforeInsertion;              //@synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion - In the implementation block
-(void)dealloc;
-(NSRange)attachmentRange;
-(void)setAttachmentRange:(NSRange)arg1 ;
-(id)typingAttributesBeforeInsertion;
-(void)setTypingAttributesBeforeInsertion:(id)arg1 ;
@end

