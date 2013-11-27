/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class CKMediaObject, CKAttachmentView;

@interface CKAttachmentBalloonView : CKColoredBalloonView {

	CKMediaObject* _mediaObject;
	CKAttachmentView* _attachmentView;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                    //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,retain) CKAttachmentView * attachmentView;              //@synthesize attachmentView=_attachmentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(BOOL)color;
-(void)setColor:(BOOL)arg1 ;
-(void)prepareForDisplay;
-(void)setFilled:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMessagePart:(id)arg1 ;
-(id)mediaObject;
-(void)setAttachmentView:(id)arg1 ;
-(void)updateViews;
-(void)transferUpdated:(id)arg1 ;
-(void)setMediaObject:(id)arg1 ;
-(BOOL)isFilled;
-(id)attachmentView;
@end

