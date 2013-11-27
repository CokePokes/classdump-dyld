/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVURLAssetInternal, AVAssetCache, NSString, AVAssetResourceLoader, NSURL;

@interface AVURLAsset : AVAsset {

	AVURLAssetInternal* _asset;

}

@property (nonatomic,readonly) AVAssetCache * assetCache; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) NSURL * URL; 
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_UTTypes;
+(id)_figMIMETypes;
+(id)audiovisualMIMETypes;
+(id)_avfValidationPlist;
+(id)audiovisualTypes;
+(BOOL)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
-(void)cancelLoading;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)_absoluteURL;
-(void)_tracksDidChange;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_tracks;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(id)_chapterGroupInfo;
-(unsigned)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_CM5)arg2 toChapters:(id)arg3 fromIndex:(unsigned)arg4 ;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(id)resourceLoader;
-(BOOL)_hasResourceLoaderDelegate;
-(void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(id)arg1 context:(id)arg2 ;
-(void)_handleURLRequest:(id)arg1 ;
-(id)resolvedURL;
-(id)lyrics;
-(id)assetCache;
-(unsigned long long)downloadToken;
-(id)SHA1Digest;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)URL;
-(id)cacheKey;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)availableChapterLocales;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)tracks;
-(void)finalize;
@end

