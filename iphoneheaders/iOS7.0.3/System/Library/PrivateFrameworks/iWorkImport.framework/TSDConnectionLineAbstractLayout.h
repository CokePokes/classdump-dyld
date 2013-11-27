/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeLayout.h>

@class TSDBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {

	TSDBezierPath* mClippedBezierPath;
	TSDConnectionLinePathSource* mOriginalPathSource;
	TSDConnectionLinePathSource* mConnectedPathSource;
	TSDInfoGeometry* mConnectedInfoGeometry;
	TSDLayout* mConnectedFrom;
	TSDLayout* mConnectedTo;
	TSDBezierPath* mCachedFromWrapPath;
	TSDBezierPath* mCachedToWrapPath;
	float mCachedFromOutset;
	float mCachedToOutset;
	TSDBezierPath* mCachedFromOutsetWrapPath;
	TSDBezierPath* mCachedToOutsetWrapPath;
	TSDLayout* mOldConnectedFrom;
	TSDLayout* mOldConnectedTo;
	BOOL mValidConnections;
	BOOL mVisibleLine;
	BOOL mValidLine;
	CGPoint mLooseEndPosition;
	CGPoint mAcumulatedDrag;
	BOOL mUseResizePoints[3];
	CGPoint mResizeControlPoints[3];
	BOOL mUseDynamicOutsets;
	float mDynamicOutsetFrom;
	float mDynamicOutsetTo;

}

@property (assign,nonatomic) TSDLayout * connectedFrom; 
@property (assign,nonatomic) TSDLayout * connectedTo; 
@property (nonatomic,readonly) BOOL validLine; 
@property (nonatomic,readonly) TSDConnectionLinePathSource * connectedPathSource; 
@property (assign,nonatomic) BOOL useDynamicOutsets; 
@property (assign,nonatomic) float dynamicOutsetFrom; 
@property (assign,nonatomic) float dynamicOutsetTo; 
@property (nonatomic,readonly) float outsetFrom; 
@property (nonatomic,readonly) float outsetTo; 
-(BOOL)supportsRotation;
-(CGRect)boundsForStandardKnobs;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)processChangedProperty:(int)arg1 ;
-(void)invalidatePosition;
-(void)parentDidChange;
-(void)connectedLayoutInvalidated:(id)arg1 ;
-(BOOL)shouldValidate;
-(void)pauseDynamicTransformation;
-(id)reliedOnLayouts;
-(id)additionalLayoutsForRepCreation;
-(BOOL)shouldDisplayGuides;
-(BOOL)supportsResize;
-(BOOL)supportsFlipping;
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(id)pathSource;
-(BOOL)pathIsOpen;
-(BOOL)pathIsLineSegment;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(id)layoutInfoGeometry;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(float)outsetFrom;
-(float)outsetTo;
-(BOOL)isStraightLine;
-(void)beginDynamicOutsetChange;
-(void)setDynamicOutsetFrom:(float)arg1 ;
-(void)setDynamicOutsetTo:(float)arg1 ;
-(void)endDynamicOutsetChange;
-(void)invalidateConnections;
-(void)checkConnections;
-(id)connectedTo;
-(id)connectedFrom;
-(void)setConnectedFrom:(id)arg1 ;
-(void)setConnectedTo:(id)arg1 ;
-(id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(float)arg3 reversed:(BOOL)arg4 isValid:(BOOL*)arg5 ;
-(id)connectedPathSource;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(BOOL)validLine;
-(CGPoint)i_accumulatedDrag;
-(id)connectionLineInfo;
-(void)removeConnections;
-(void)updateRepPath;
-(id)p_infoForConnectingToInfo:(id)arg1 ;
-(BOOL)canEndpointsCoincide;
-(void)updateConnectedPath;
-(void)setUseDynamicOutsets:(BOOL)arg1 ;
-(float)dynamicOutsetFrom;
-(float)dynamicOutsetTo;
-(BOOL)useDynamicOutsets;
-(void)validate;
-(void)invalidatePath;
-(void)dealloc;
-(id)path;
-(BOOL)canFlip;
-(int)connectionType;
-(BOOL)isInvisible;
-(int)wrapType;
@end

