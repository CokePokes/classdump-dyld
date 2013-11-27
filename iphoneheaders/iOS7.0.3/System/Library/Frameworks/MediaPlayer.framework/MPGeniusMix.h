/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreDownloadManagerObserver.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class MPMediaPlaylist, MPMediaQuery, NSArray, NSString;

@interface MPGeniusMix : NSObject <MPStoreDownloadManagerObserver, NSSecureCoding, NSCopying> {

	MPMediaPlaylist* _playlist;
	MPMediaQuery* _seedTracksQuery;
	NSArray* _representativeArtists;
	NSArray* _representativeImageItems;

}

@property (nonatomic,readonly) float downloadProgress; 
@property (nonatomic,readonly) BOOL isCloudMix; 
@property (nonatomic,readonly) BOOL isDownloading; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MPMediaPlaylist * playlist;                   //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,readonly) NSArray * representativeArtists; 
@property (nonatomic,readonly) MPMediaQuery * seedTracksQuery; 
+(id)mixQueue;
+(id)artworkImageForMediaItem:(id)arg1 scaleMode:(int)arg2 ;
+(id)artworkCacheDirectoryPath;
+(id)artworkImageForMediaItem:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isDownloading;
-(id)playlist;
-(id)initWithMPMediaPlaylist:(id)arg1 ;
-(id)loadRepresentativeImageWithTileLength:(float)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(BOOL)isCloudMix;
-(id)seedTracksQuery;
-(id)_placeholderImageWithTileLength:(float)arg1 ;
-(id)_representativeImageItemsWithMaxCount:(unsigned)arg1 ;
-(unsigned long long)_entityArtworkCacheHashForRepresentativeItems:(id)arg1 ensureItemArtworkFilesExist:(BOOL)arg2 ;
-(id)_cacheDirectoryPath;
-(id)_cachedRepresentativeImagePathWithTileLength:(float)arg1 ;
-(BOOL)_observeMixImageLoadingWithImageDidLoadBlock:(/*^block*/ id)arg1 ;
-(void)_onQueueLoadRepresentativeImageWithTileLength:(float)arg1 ;
-(void)_generateMixImageWithTileLength:(float)arg1 imageDidLoadBlock:(/*^block*/ id)arg2 ;
-(id)_alreadyLoadedRepresentativeImageWithTileLength:(float)arg1 loadCompletionBlock:(/*^block*/ id)arg2 ;
-(id)_placeholderMixImageWithTileLength:(float)arg1 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)cancelDownload;
-(BOOL)canPlayUsingNetworkType:(int)arg1 ;
-(void)downloadMixWithPermissionHandler:(/*^block*/ id)arg1 ;
-(float)downloadProgress;
-(id)representativeArtists;
-(void)preloadRepresentativeImageWithTileLength:(float)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)name;
-(void).cxx_destruct;
@end

