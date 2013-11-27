/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject {

	BOOL _wantsArtwork;
	MPMediaQuery* _albumItemsQuery;
	unsigned _tokenID;
	/*^block*/ id _responseBlock;
	NSNumber* _storeLookupID;

}

@property (nonatomic,readonly) MPMediaQuery * albumItemsQuery;              //@synthesize albumItemsQuery=_albumItemsQuery - In the implementation block
@property (nonatomic,readonly) BOOL wantsArtwork;                           //@synthesize wantsArtwork=_wantsArtwork - In the implementation block
@property (nonatomic,readonly) unsigned tokenID;                            //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) id responseBlock;                            //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,readonly) NSNumber * storeLookupID;                    //@synthesize storeLookupID=_storeLookupID - In the implementation block
@property (nonatomic,readonly) NSString * storeLookupIDString; 
+(id)storeLookupIDForAlbumItemsQuery:(id)arg1 ;
-(BOOL)wantsArtwork;
-(id)_specificationForArtworkSizesToRequest;
-(id)lookupRequestForStorePlaylistIdentifier:(id)arg1 ;
-(id)storeLookupIDString;
-(id)initWithAlbumItemsQuery:(id)arg1 tokenID:(int)arg2 wantsArtwork:(BOOL)arg3 responseBlock:(/*^block*/ id)arg4 ;
-(id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1 ;
-(id)newLookupRequest;
-(id)albumItemsQuery;
-(unsigned)tokenID;
-(/*^block*/ id)responseBlock;
-(id)storeLookupID;
-(void).cxx_destruct;
@end

