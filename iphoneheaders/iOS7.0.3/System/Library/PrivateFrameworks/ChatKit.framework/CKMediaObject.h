/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPreviewDispatchCachePolicyDelegate.h>
#import <Message/QLPreviewItem.h>

@protocol CKFileTransfer;
@class NSURL, NSString, , NSData, NSDictionary;

@interface CKMediaObject : NSObject <CKPreviewDispatchCachePolicyDelegate, QLPreviewItem> {

	<CKFileTransfer>* _transfer;

}

@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,retain) <CKFileTransfer> * transfer;                      //@synthesize transfer=_transfer - In the implementation block
@property (nonatomic,readonly) NSString * transferGUID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,readonly) NSString * mimeType; 
@property (nonatomic,readonly) NSString * UTIType; 
@property (nonatomic,readonly) int mediaType; 
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
+(id)fallbackFilenamePrefix;
+(id)UTITypes;
+(BOOL)isPreviewable;
+(id)previewDispatchCache;
+(id)iconCache;
-(void)dealloc;
-(id)description;
-(id)data;
-(id)title;
-(id)subtitle;
-(id)mimeType;
-(id)previewItemURL;
-(id)fileURL;
-(Class)balloonViewClass;
-(id)transfer;
-(BOOL)shouldShowViewer;
-(id)transferGUID;
-(id)pasteboardItem;
-(BOOL)shouldBeQuickLooked;
-(id)UTIType;
-(void)setTransfer:(id)arg1 ;
-(id)transcoderUserInfo;
-(id)initWithTransfer:(id)arg1 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 ;
-(BOOL)isPreviewable;
-(CGSize)bbSize;
-(id)generateThumbnail;
-(id)previewForOrientation:(BOOL)arg1 ;
-(id)fileSizeString;
-(id)downloadProgressImage;
-(id)downloadProgressString;
-(id)previewDispatchCache;
-(id)generatePreviewFromThumbnail:(id)arg1 forOrientation:(BOOL)arg2 ;
-(BOOL)previewDispatchCache:(id)arg1 shouldReplaceCachedPreview:(id)arg2 withPreview:(id)arg3 ;
-(id)bbPreviewFillToSize:(CGSize)arg1 ;
-(void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3 ;
-(Class)previewBalloonViewClass;
-(BOOL)shouldShowDisclosure;
-(id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2 ;
-(void)_sampleImageEdges:(id)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned*)arg3 otherPixels:(unsigned*)arg4 ;
-(id)PNGDataFromImage:(id)arg1 ;
-(id)filename;
-(id)fileManager;
-(int)mediaType;
-(id)icon;
@end

