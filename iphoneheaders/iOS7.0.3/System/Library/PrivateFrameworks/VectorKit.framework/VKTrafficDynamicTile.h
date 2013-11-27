/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKTrafficDynamicTile : VKTile {

	GEOTileKey _downloadKey;
	shared_ptr<zilch::TrafficDynamicTile>* _tile;
	unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, vk_allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *> > >* _flows;

}

@property (nonatomic,readonly) long updateTime; 
@property (nonatomic,readonly) unsigned incidentCount; 
-(void)dealloc;
-(id).cxx_construct;
-(int)flowForRoadId:(long long)arg1 buffer:(const Flow*)arg2 maxSize:(int)arg3 ;
-(unsigned)incidentCount;
-(const Incident*)incidentAtIndex:(unsigned)arg1 ;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 data:(id)arg3 ;
-(long)updateTime;
-(void).cxx_destruct;
@end

