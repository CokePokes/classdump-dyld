/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSManagedObject, NSManagedObjectContext, NSString, NSURL, RadioTrack, NSArray, NSData, NSDictionary;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol> {

	NSManagedObjectContext* _context;
	NSManagedObject* _managedObject;

}

@property (assign,nonatomic) long long stationID; 
@property (nonatomic,copy) NSString * stationHash; 
@property (nonatomic,readonly) int stationType; 
@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long adamID; 
@property (assign,nonatomic) int sortOrder; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * stationDescription; 
@property (nonatomic,copy) NSURL * artworkURL; 
@property (nonatomic,copy) NSString * coreSeedName; 
@property (assign,nonatomic) RadioTrack * currentPlayingTrack; 
@property (nonatomic,readonly) long long currentPlayingTrackID; 
@property (assign,nonatomic) double currentPlayingTrackTime; 
@property (assign,nonatomic) id seedTracks; 
@property (assign,nonatomic) int songMixType; 
@property (nonatomic,readonly) NSArray * tracksForPlayback; 
@property (assign,nonatomic) BOOL tracksForPlaybackNeedRefresh; 
@property (assign,nonatomic) BOOL editEnabled; 
@property (assign,nonatomic) NSArray * editableFields; 
@property (assign,nonatomic) BOOL likesEnabled; 
@property (assign,nonatomic) BOOL skipEnabled; 
@property (assign,nonatomic) int skipFrequency; 
@property (nonatomic,copy) NSString * skipIdentifier; 
@property (assign,nonatomic) double skipInterval; 
@property (nonatomic,copy) NSArray * skipTimestamps; 
@property (assign,nonatomic) BOOL virtualPlayEnabled; 
@property (assign,getter=isFeatured,nonatomic) BOOL featured; 
@property (assign,getter=isGatewayVideoAdEnabled,nonatomic) BOOL gatewayVideoAdEnabled; 
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored; 
@property (assign,nonatomic) NSData * adData; 
@property (assign,nonatomic) unsigned impressionThreshold; 
@property (assign,getter=isPremiumPlacement,nonatomic) BOOL premiumPlacement; 
@property (getter=isPreview,nonatomic,readonly) BOOL preview; 
@property (nonatomic,retain) NSURL * streamURL; 
@property (nonatomic,retain) NSURL * streamCertificateURL; 
@property (nonatomic,retain) NSURL * streamKeyURL; 
@property (assign,getter=isSharingEnabled,nonatomic) BOOL sharingEnabled; 
@property (assign,getter=isShared,nonatomic) BOOL shared; 
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed; 
@property (assign,nonatomic) int subscriberCount; 
@property (nonatomic,copy) NSString * shareToken; 
@property (nonatomic,copy) NSDictionary * debugDictionary; 
@property (nonatomic,readonly) NSDictionary * feedbackDictionaryRepresentation; 
@property (nonatomic,copy) NSData * additionalReferencedTrackDescriptors; 
@property (nonatomic,copy) NSData * artworkURLData; 
@property (assign,nonatomic) SCD_Struct_Ra0 currentPlayingTrackDescriptor; 
@property (nonatomic,copy) NSData * orderedTrackDescriptorsForPlayback; 
@property (nonatomic,readonly) NSData * trackDescriptorsForPlayback; 
@property (nonatomic,copy) NSDictionary * trackDescriptorsForPlaybackByExpirationDate; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSManagedObject * managedObject;                                      //@synthesize managedObject=_managedObject - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                                     //@synthesize context=_context - In the implementation block
-(void)setSortOrder:(int)arg1 ;
-(BOOL)isSubscribed;
-(int)sortOrder;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isShared;
-(long long)adamID;
-(long long)stationID;
-(id)stationHash;
-(id)streamURL;
-(id)artworkURL;
-(id)tracksForPlayback;
-(id)stationDescription;
-(int)stationType;
-(id)adData;
-(id)currentPlayingTrack;
-(double)skipInterval;
-(BOOL)isGatewayVideoAdEnabled;
-(double)currentPlayingTrackTime;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)context;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(void)setShared:(BOOL)arg1 ;
-(long long)persistentID;
-(id)managedObject;
-(id)debugDictionary;
-(BOOL)isFeatured;
-(BOOL)isSponsored;
-(id)trackDescriptorsForPlayback;
-(id)orderedTrackDescriptorsForPlayback;
-(id)trackDescriptorsForPlaybackByExpirationDate;
-(int)songMixType;
-(id)seedTracks;
-(id)additionalReferencedTrackDescriptors;
-(id)artworkURLData;
-(id)coreSeedName;
-(SCD_Struct_Ra0)currentPlayingTrackDescriptor;
-(id)editableFields;
-(BOOL)editEnabled;
-(id)feedbackDictionaryRepresentation;
-(unsigned)impressionThreshold;
-(BOOL)isPremiumPlacement;
-(BOOL)isPreview;
-(BOOL)isSharingEnabled;
-(BOOL)likesEnabled;
-(void)setAdditionalReferencedTrackDescriptors:(id)arg1 ;
-(void)setAdData:(id)arg1 ;
-(void)setArtworkURL:(id)arg1 ;
-(void)setArtworkURLData:(id)arg1 ;
-(void)setCoreSeedName:(id)arg1 ;
-(void)setCurrentPlayingTrackDescriptor:(SCD_Struct_Ra0)arg1 ;
-(void)setCurrentPlayingTrackTime:(double)arg1 ;
-(void)setDebugDictionary:(id)arg1 ;
-(void)setEditEnabled:(BOOL)arg1 ;
-(void)setEditableFields:(id)arg1 ;
-(void)setFeatured:(BOOL)arg1 ;
-(void)setGatewayVideoAdEnabled:(BOOL)arg1 ;
-(void)setImpressionThreshold:(unsigned)arg1 ;
-(void)setLikesEnabled:(BOOL)arg1 ;
-(void)setOrderedTrackDescriptorsForPlayback:(id)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setPremiumPlacement:(BOOL)arg1 ;
-(void)setSeedTracks:(id)arg1 ;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(void)setShareToken:(id)arg1 ;
-(void)setSkipEnabled:(BOOL)arg1 ;
-(void)setSkipFrequency:(int)arg1 ;
-(void)setSkipIdentifier:(id)arg1 ;
-(void)setSkipInterval:(double)arg1 ;
-(void)setSkipTimestamps:(id)arg1 ;
-(void)setSongMixType:(int)arg1 ;
-(void)setSponsored:(BOOL)arg1 ;
-(void)setStationDescription:(id)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setStationHash:(id)arg1 ;
-(void)setStreamURL:(id)arg1 ;
-(void)setStreamCertificateURL:(id)arg1 ;
-(void)setStreamKeyURL:(id)arg1 ;
-(void)setSubscriberCount:(int)arg1 ;
-(void)setTrackDescriptorsForPlaybackByExpirationDate:(id)arg1 ;
-(void)setTracksForPlaybackNeedRefresh:(BOOL)arg1 ;
-(void)setVirtualPlayEnabled:(BOOL)arg1 ;
-(id)shareToken;
-(BOOL)skipEnabled;
-(int)skipFrequency;
-(id)skipIdentifier;
-(id)skipTimestamps;
-(id)streamCertificateURL;
-(id)streamKeyURL;
-(int)subscriberCount;
-(BOOL)tracksForPlaybackNeedRefresh;
-(BOOL)virtualPlayEnabled;
-(void)_radioModelWasDeletedNotification:(id)arg1 ;
-(BOOL)isPreviewOnly;
-(void)setPreviewOnly:(BOOL)arg1 ;
-(void)setTrackDescriptorsForPlayback:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 context:(id)arg2 ;
-(void)addTracksForPlayback:(id)arg1 withExpirationDate:(id)arg2 ;
-(id)artworkURLForSize:(CGSize)arg1 expectedSize:(CGSize*)arg2 ;
-(long long)currentPlayingTrackID;
-(void)removeTrackForPlayback:(id)arg1 ;
-(void)removeAllTracksForPlayback;
-(void)setCurrentPlayingTrack:(id)arg1 ;
-(void).cxx_destruct;
-(void)setAdamID:(long long)arg1 ;
@end

