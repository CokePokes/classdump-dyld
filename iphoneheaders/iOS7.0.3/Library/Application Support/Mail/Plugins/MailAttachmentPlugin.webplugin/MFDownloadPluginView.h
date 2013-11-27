/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <MailAttachmentPlugin/MFMailAttachmentPlugin.h>
#import <MessageUI/MFMailAttachmentDownloadProgressDisplay.h>

@class UIImageView, NSString;

@interface MFDownloadPluginView : MFMailAttachmentPlugin <MFMailAttachmentDownloadProgressDisplay> {

	UIImageView* _spinny;
	NSString* _totalString;
	unsigned _totalSize;
	unsigned _shouldDrawCutout : 1;
	unsigned _shouldUseHiResArtwork : 1;

}
-(void)_resize;
-(void)startSpinny;
-(id)initWithFrame:(CGRect)arg1 arguments:(id)arg2 ;
-(id)newImageWithSettings:(id)arg1 ;
-(void)stopSpinny;
-(id)newFilenameViewWithSettings:(id)arg1 textColor:(id)arg2 maxWidth:(float)arg3 ;
-(BOOL)isScalable;
-(void)prepareUI;
-(void)downloadProgressDidStart;
-(void)downloadProgressDidUpdatePercentageComplete:(float)arg1 ;
-(void)downloadProgressDidCancel;
-(void)downloadProgressDidEnd;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end

