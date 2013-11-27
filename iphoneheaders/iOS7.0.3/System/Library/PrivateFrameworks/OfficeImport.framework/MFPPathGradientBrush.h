/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class TSUColor, NSArray, TSDBezierPath;

@interface MFPPathGradientBrush : MFPGradientBrush {

	TSUColor* mCenterColor;
	CGPoint mCenterPoint;
	NSArray* mSurroundColors;
	TSDBezierPath* mPath;

}
-(void)dealloc;
-(void)setPath:(id)arg1 ;
-(id).cxx_construct;
-(void)setCenterColor:(id)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end

