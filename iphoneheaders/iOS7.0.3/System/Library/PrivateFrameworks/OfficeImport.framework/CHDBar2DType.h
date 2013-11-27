/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping {

	int mGapWidth;
	bool mColumn;
	int mOverlap;

}
-(bool)isColumn;
-(bool)isHorizontal;
-(id)initWithChart:(id)arg1 ;
-(void)setOverlap:(int)arg1 ;
-(void)setGapWidth:(int)arg1 ;
-(void)setColumn:(bool)arg1 ;
-(int)defaultLabelPosition;
-(int)gapWidth;
-(int)overlap;
@end

