/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DNormalDirectionMapper.h>

@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {

	int mTopMeshOffset;
	int mAngleSteps;
	int mRadiusSteps;
	int mAngleLimit;
	int mRadiusLimit;

}
-(void)mapFromVertexArray:(const tvec3<float>*)arg1 normalArray:(const tvec3<float>*)arg2 normalMatrix:(const tmat3x3<float>*)arg3 numVertices:(int)arg4 destination:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg5 ;
-(id)initWithTopMeshOffset:(int)arg1 angleSteps:(int)arg2 radiusSteps:(int)arg3 angleLimit:(int)arg4 radiusLimit:(int)arg5 ;
@end

