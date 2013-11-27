/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreBookkeeperClient/SBCXPCService.h>
#import <StoreBookkeeperClient/SBCPlaybackPositionServiceProtocol.h>

@class NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {

	NSString* _databasePath;

}

@property (readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
+(id)bookkeeperForDatabasePath:(id)arg1 ;
-(oneway void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2 ;
-(oneway void)beginUsingPlaybackPositions;
-(oneway void)endUsingPlaybackPositions;
-(oneway void)synchronizeImmediately;
-(oneway void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(oneway void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(id)databasePath;
-(id)initWithServiceInterfaceClass:(Class)arg1 databasePath:(id)arg2 ;
-(void)didConnectToService;
-(oneway void)noteChangedNowPlayingTrackPersistentID:(long long)arg1 ;
-(oneway void)synchronizeLocalChangesSoon;
-(void).cxx_destruct;
@end

