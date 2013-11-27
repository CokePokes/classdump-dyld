/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartSeries, NSString, TSDStroke;

@interface TSCHLegendCellModelCache : NSObject {

	int mLegendCellType;
	int mBadgeType;
	unsigned mSeriesIndex;
	TSCHChartSeries* mSeries;
	NSString* mLabelString;
	TSDStroke* mStroke;
	TSDStroke* mSymbolStroke;
	int mSymbolType;
	int mLineType;
	CGSize mCellSize;
	float mEffectiveStrokeWidth;
	float mEffectiveSymbolStrokeWidth;
	CGRect mBadgeFrame;
	CGRect mLabelFrame;
	CGRect mBadgeFillFrame;

}

@property (readonly) int cellType; 
@property (readonly) int badgeType; 
@property (readonly) unsigned seriesIndex; 
@property (readonly) TSCHChartSeries * series; 
@property (readonly) NSString * labelString; 
@property (readonly) CGSize size; 
@property (readonly) CGRect badgeFrame; 
@property (readonly) CGRect labelFrame; 
@property (readonly) CGRect badgeFillFrame; 
@property (readonly) TSDStroke * stroke; 
@property (readonly) id fill; 
@property (readonly) TSDStroke * symbolStroke; 
@property (readonly) id symbolFill; 
@property (readonly) float effectiveStrokeWidth; 
@property (readonly) float effectiveSymbolStrokeWidth; 
@property (readonly) int symbolType; 
@property (readonly) int lineType; 
-(id)labelString;
-(id)series;
-(id)symbolStroke;
-(int)lineType;
-(id)symbolFill;
-(float)effectiveStrokeWidth;
-(CGRect)badgeFillFrame;
-(CGRect)badgeFrame;
-(id)initWithChartModel:(id)arg1 cellType:(int)arg2 seriesIndex:(unsigned)arg3 withMetrics:(id)arg4 overrideLabel:(id)arg5 ;
-(float)effectiveSymbolStrokeWidth;
-(CGRect)labelFrame;
-(void)dealloc;
-(CGSize)size;
-(id)fill;
-(id)stroke;
-(unsigned)seriesIndex;
-(int)badgeType;
-(int)cellType;
-(int)symbolType;
@end

