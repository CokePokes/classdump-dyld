/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <MailAttachmentPlugin/MFMailAttachmentPlugin.h>

@interface MFExternPluginView : MFMailAttachmentPlugin
-(id)newFilenameViewWithSettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 arguments:(id)arg2 ;
-(id)labelBackgroundColor;
-(id)_documentIconClosestToSize:(CGSize)arg1 ;
-(id)newFilesizeViewWithSize:(id)arg1 ;
-(BOOL)isScalable;
-(void)prepareUI;
-(void)_handleLongPress:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end

