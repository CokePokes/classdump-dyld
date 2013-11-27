/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaLayout.h>

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout {

	TSDInfoGeometry* mDynamicInfoGeometry;

}
-(BOOL)supportsRotation;
-(void)takeSizeFromTracker:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)endResize;
-(id)layoutGeometryFromInfo;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(void)takeRotationFromTracker:(id)arg1 ;
-(id)i_computeWrapPath;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)movieInfo;
-(CGRect)fullReflectionFrame;
-(CGRect)fullReflectionBoundsForRect:(CGRect)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
@end

