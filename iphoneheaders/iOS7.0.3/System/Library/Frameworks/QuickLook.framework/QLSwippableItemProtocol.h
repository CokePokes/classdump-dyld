/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol QLSwippableItemProtocol <NSObject>
@property (assign) int index; 
@property (retain) <QLPreviewItem> * previewItem; 
@required
-(id)previewItem;
-(void)setPreviewItem:(id)arg1;
-(void)willStartSwiping;
-(void)didFinishSwiping;
-(int)index;
-(void)setIndex:(int)arg1;
@end

