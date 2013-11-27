/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(BOOL)canEndpointsCoincide;
-(CGRect)orthoRectOfLayout:(id)arg1 outset:(float)arg2 ;
-(CGPoint)axisSnapPoint:(CGPoint)arg1 toXs:(vector<float, std::__1::allocator<float> >*)arg2 toYs:(vector<float, std::__1::allocator<float> >*)arg3 withThreshold:(float)arg4 ;
-(void)addEndpointSnapsToXs:(vector<float, std::__1::allocator<float> >*)arg1 andYs:(vector<float, std::__1::allocator<float> >*)arg2 ;
@end

