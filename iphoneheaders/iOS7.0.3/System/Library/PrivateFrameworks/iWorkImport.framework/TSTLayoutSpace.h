/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTLayoutSpaceBundle, TSTCoordinateArray, TSTLayout, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject {

	TSTLayoutSpaceBundle* mBundle;
	int mLayoutSpaceType;
	struct {
		BOOL coordinates;
		BOOL tableOffset;
	}  mInvalidFlags;
	SCD_Struct_TS482 mGridRange;
	BOOL mHeaderColumnsRepeat;
	BOOL mHeaderRowsRepeat;
	float mViewScale;
	CGAffineTransform mTransformToCanvas;
	CGAffineTransform mTransformFromCanvas;
	CGAffineTransform mTransformToDevice;
	CGAffineTransform mTransformFromDevice;
	BOOL mDrawBlackAndWhite;
	BOOL mDrawPreventAntialias;
	CGPoint mTableOffset;
	TSTCoordinateArray* mHeaderRowColumnCoordinates;
	TSTCoordinateArray* mBodyColumnCoordinates;
	TSTCoordinateArray* mHeaderColumnRowCoordinates;
	TSTCoordinateArray* mBodyRowCoordinates;
	CGRect mCachedFrame;
	CGRect mCachedAlignedFrame;
	CGRect mCachedStrokeFrame;
	CGRect mCachedAlignedStrokeFrame;
	BOOL mLayoutDirectionIsLeftToRight;
	opaque_pthread_rwlock_t mLock;

}

@property (nonatomic,readonly) TSTLayoutSpaceBundle * bundle; 
@property (nonatomic,readonly) int layoutSpaceType; 
@property (nonatomic,readonly) TSTLayout * layout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (nonatomic,readonly) BOOL isMain; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isRepeat; 
@property (nonatomic,readonly) BOOL isColumns; 
@property (nonatomic,readonly) BOOL isRows; 
@property (nonatomic,readonly) BOOL isCorner; 
@property (assign,nonatomic) BOOL headerColumnsRepeat; 
@property (assign,nonatomic) BOOL headerRowsRepeat; 
@property (assign,nonatomic) float viewScale; 
@property (assign,nonatomic) CGAffineTransform transformToCanvas; 
@property (assign,nonatomic) CGAffineTransform transformFromCanvas; 
@property (assign,nonatomic) CGAffineTransform transformToDevice; 
@property (assign,nonatomic) CGAffineTransform transformFromDevice; 
@property (assign,nonatomic) BOOL drawBlackAndWhite; 
@property (assign,nonatomic) BOOL drawPreventAntialias; 
@property (assign,nonatomic) CGPoint tableOffset; 
-(float)viewScale;
-(id)masterLayout;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(CGPoint)tableOffset;
-(void)invalidateCoordinates;
-(BOOL)headerRowsRepeat;
-(BOOL)headerColumnsRepeat;
-(void)lockForRead;
-(void)setTransformToCanvas:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformToCanvas;
-(CGAffineTransform)transformToDevice;
-(BOOL)isRepeat;
-(int)layoutSpaceType;
-(BOOL)layoutDirectionIsLeftToRight;
-(void)setHeaderRowsRepeat:(BOOL)arg1 ;
-(void)setHeaderColumnsRepeat:(BOOL)arg1 ;
-(id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2 ;
-(void)lockForWrite;
-(void)validateCachedFrames;
-(int)validateCoordinateCache:(id)arg1 ;
-(int)validateTableOffset:(id)arg1 ;
-(void)setTableOffset:(CGPoint)arg1 ;
-(BOOL)isMain;
-(BOOL)drawPreventAntialias;
-(BOOL)isColumns;
-(BOOL)isRows;
-(BOOL)isCorner;
-(void)invalidateTableOffset;
-(CGAffineTransform)transformFromCanvas;
-(void)setTransformFromCanvas:(CGAffineTransform)arg1 ;
-(void)setTransformToDevice:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformFromDevice;
-(void)setTransformFromDevice:(CGAffineTransform)arg1 ;
-(BOOL)drawBlackAndWhite;
-(void)setDrawBlackAndWhite:(BOOL)arg1 ;
-(void)setDrawPreventAntialias:(BOOL)arg1 ;
-(int)validate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)isFrozen;
-(void)unlock;
-(id)layout;
-(id)bundle;
-(id).cxx_construct;
-(void)setViewScale:(float)arg1 ;
@end

