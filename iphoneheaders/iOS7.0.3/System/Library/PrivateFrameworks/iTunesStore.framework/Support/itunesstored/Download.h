/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity <NSCopying> {

	NSArray* _assets;
	SSDownloadPolicy* _downloadPolicy;

}

@property (nonatomic,copy) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) SSDownloadPolicy * downloadPolicy;              //@synthesize downloadPolicy=_downloadPolicy - In the implementation block
+(Class)databaseEntityClass;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(id)initWithExternalManifestDictionary:(id)arg1 ;
-(id)initWithClientXPCDownload:(id)arg1 ;
-(id)initWithMicroPaymentDownload:(id)arg1 clientID:(id)arg2 ;
-(BOOL)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setAssetsWithExternalAssets:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id*)arg2 ;
-(id)assetForAssetIdentifier:(long long)arg1 ;
-(void)removeAssetsWithAssetType:(id)arg1 ;
-(id)initWithStoreDownload:(id)arg1 ;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)assets;
-(void)setAssets:(id)arg1 ;
-(id)downloadPolicy;
-(void)unionNetworkConstraints:(id)arg1 ;
@end

