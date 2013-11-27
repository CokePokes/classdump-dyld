/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKLabelTile, NSMapTable, NSMutableArray;

@interface VKLabelNavTileData : NSObject {

	VKLabelTile* _tile;
	NSMapTable* _geoJunctionToJunctionMap;
	NSMutableArray* _tileEdgeJunctions;
	BOOL _foundTileEdgeJunctions;
	BOOL _oppositeCarriagewayJunctionsValid;
	NSMutableArray* _oppositeCarriagewayJunctions;
	vector<LabelNavJunctionInfo, vk_allocator<LabelNavJunctionInfo> >* _junctionInfos;

}

@property (nonatomic,readonly) VKLabelTile * tile;                                         //@synthesize tile=_tile - In the implementation block
@property (assign,nonatomic) BOOL oppositeCarriagewayJunctionsValid;                       //@synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid - In the implementation block
@property (nonatomic,readonly) NSMutableArray * oppositeCarriagewayJunctions;              //@synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions - In the implementation block
-(void)dealloc;
-(id).cxx_construct;
-(id)tile;
-(id)initWithTile:(id)arg1 ;
-(id)oppositeCarriagewayJunctions;
-(void)addJunction:(id)arg1 ;
-(void)_findTileEdgeJunctions;
-(void)initializeJunctionInfos;
-(id)junctionForGeoJunction:(SCD_Struct_VK215*)arg1 ;
-(id)junctionAtCoordinate:(Vec2Imp<float>)arg1 ;
-(id)findTileEdgeJunctionAtCoordinate:(Vec2Imp<float>)arg1 ;
-(void)appendNavJunctionsInWorldRect:(const BRectImp<double>*)arg1 junctions:(id)arg2 ;
-(void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, vk_allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > >*)arg1 distanceThreshold:(double)arg2 ;
-(BOOL)oppositeCarriagewayJunctionsValid;
-(void)setOppositeCarriagewayJunctionsValid:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

