/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DResource, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor {

	EdgeDetectionParameters mEdgeDetectionParameters;
	TSCH3DResource* mVertices;
	TSCH3Dvec3DataBuffer* mEdges;

}

@property (nonatomic,retain) TSCH3DResource * vertices; 
@property (nonatomic,readonly) TSCH3Dvec3DataBuffer * edges; 
-(int)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecs*)arg3 ;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(id)initWithEdgeDetectionParameters:(const EdgeDetectionParameters*)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
-(id)edges;
-(void)setVertices:(id)arg1 ;
-(id)matrix;
-(id)vertices;
@end

