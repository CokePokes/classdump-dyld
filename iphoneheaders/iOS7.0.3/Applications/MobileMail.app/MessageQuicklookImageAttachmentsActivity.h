/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIActivity.h>

@class MessageContentLayer, MFAttachment;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {

	MessageContentLayer* _contentLayer;
	MFAttachment* _attachment;
	unsigned _index;

}
-(id)initWithContentLayer:(id)arg1 attachment:(id)arg2 index:(unsigned)arg3 ;
-(void)dealloc;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)_cleanup;
-(id)activityImage;
-(id)_beforeActivity;
@end

