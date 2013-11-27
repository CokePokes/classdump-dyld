/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <StoreBookkeeper/SBKSyncKeyValuePair.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKSyncKeyValuePair, NSCopying> {

	BOOL _hasBeenPlayed;
	NSString* _itemIdentifier;
	unsigned _playCount;
	double _timestamp;
	double _bookmarkTime;

}

@property (copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double bookmarkTime;                  //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign) BOOL hasBeenPlayed;                   //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign) unsigned playCount;                   //@synthesize playCount=_playCount - In the implementation block
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(BOOL)arg3 ;
+(id)_testableMetadataItem_1;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
-(double)bookmarkTime;
-(unsigned)playCount;
-(void)setPlayCount:(unsigned)arg1 ;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(id)kvsPayload;
-(id)initAsTestableItem;
-(id)keyValueStorePayload;
-(id)kvsKey;
-(id)kvsValueDescription;
-(void).cxx_destruct;
-(id)itemIdentifier;
-(void)setItemIdentifier:(id)arg1 ;
@end

