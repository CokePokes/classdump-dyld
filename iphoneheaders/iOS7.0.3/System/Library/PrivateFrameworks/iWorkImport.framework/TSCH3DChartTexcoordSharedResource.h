/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DChartMeshSharedResource.h>

@class TSCH3Dvec3DataBuffer, TSCH3DTexCoordGeneration;

@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource {

	TSCH3Dvec3DataBuffer* mVertex;
	TSCH3Dvec3DataBuffer* mNormal;
	TSCH3DTexCoordGeneration* mGenerator;

}

@property (nonatomic,retain) TSCH3Dvec3DataBuffer * vertex; 
@property (nonatomic,retain) TSCH3Dvec3DataBuffer * normal; 
@property (nonatomic,retain) TSCH3DTexCoordGeneration * generator; 
-(id)vertex;
-(void)flushMemory;
-(void)setChildRegenerated:(BOOL)arg1 ;
-(void)setVertex:(id)arg1 normal:(id)arg2 generator:(id)arg3 ;
-(void)setVertex:(id)arg1 ;
-(void)dealloc;
-(void)setGenerator:(id)arg1 ;
-(id)normal;
-(void)setNormal:(id)arg1 ;
-(id)generator;
-(id)get;
@end

