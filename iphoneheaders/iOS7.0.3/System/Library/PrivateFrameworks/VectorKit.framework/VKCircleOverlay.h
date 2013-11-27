/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlay.h>

@class GEOMapRegion;

@interface VKCircleOverlay : NSObject <VKOverlay> {

	SCD_Struct_VK61 _coordinate;
	GEOMapRegion* _boundingMapRegion;
	double _radius;

}

@property (nonatomic,readonly) SCD_Struct_VK61 coordinate;                    //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) double radius;                                 //@synthesize radius=_radius - In the implementation block
+(id)circleWithCenterCoordinate:(SCD_Struct_VK61)arg1 radius:(double)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
-(double)radius;
-(SCD_Struct_VK61)coordinate;
-(id)_initWithCenterCoordinate:(SCD_Struct_VK61)arg1 radius:(double)arg2 ;
-(id)boundingMapRegion;
@end

