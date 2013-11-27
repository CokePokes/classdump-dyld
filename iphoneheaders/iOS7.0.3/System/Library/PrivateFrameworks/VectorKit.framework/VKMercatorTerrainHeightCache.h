/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VKMercatorTerrainHeightProvider;
#import <VectorKit/VectorKit-Structs.h>
@class ;

@interface VKMercatorTerrainHeightCache : NSObject {

	<VKMercatorTerrainHeightProvider>* _heightProvider;
	map<vk::Anchor *, float, std::__1::less<vk::Anchor *>, std::__1::allocator<std::__1::pair<vk::Anchor *const, float> > >* _anchorToHeight;

}

@property (assign,nonatomic) <VKMercatorTerrainHeightProvider> * heightProvider;              //@synthesize heightProvider=_heightProvider - In the implementation block
-(id).cxx_construct;
-(void)setHeightProvider:(id)arg1 ;
-(void)invalidateRect:(const SCD_Struct_VK47*)arg1 ;
-(double)heightForAnchor:(Anchor*)arg1 ;
-(void)removeCachedValueForAnchor:(Anchor*)arg1 ;
-(id)heightProvider;
-(void).cxx_destruct;
@end

