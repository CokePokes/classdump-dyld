/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlaylist.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MPMediaQuery;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying> {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSMutableDictionary* _properties;
	MPMediaQuery* _itemsQuery;
	void* _clusterPlaylist;

}
-(void)removeAllItems;
-(id)itemsQuery;
-(id)representativeItem;
-(id)mediaLibrary;
-(void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(/*^block*/ id)arg3 ;
-(id)valuesForProperties:(id)arg1 ;
-(id)initWithProperties:(id)arg1 itemsQuery:(id)arg2 ;
-(void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_updateLibraryForPlaylistEdit:(id)arg1 ;
-(void)addItem:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)addItems:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)moveItemFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)populateWithSeedItem:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id*)arg2 ;
-(id)geniusClusterItemsWithCount:(unsigned)arg1 error:(id*)arg2 ;
-(void)endGeneratingGeniusClusterItems;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)items;
-(unsigned)mediaTypes;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)existsInLibrary;
-(void).cxx_destruct;
@end

