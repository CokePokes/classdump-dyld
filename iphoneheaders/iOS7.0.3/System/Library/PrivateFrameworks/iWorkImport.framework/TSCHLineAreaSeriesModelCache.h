/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartSeries, TSCHChartValueAxis, TSCHChartAxis, TSWPParagraphStyle, TSDStroke, TSDShadow;

@interface TSCHLineAreaSeriesModelCache : NSObject {

	unsigned mSeriesIndex;
	TSCHChartSeries* mSeries;
	TSCHChartValueAxis* mValueAxis;
	TSCHChartAxis* mGroupAxis;
	TSWPParagraphStyle* mParagraphStyle;
	unsigned mLabelPosition;
	int mSymbolType;
	TSDStroke* mSymbolStroke;
	TSDStroke* mSeriesStroke;
	TSDShadow* mSeriesShadow;
	float mDataPointSize;
	float mOpacity;
	int mLineType;
	id mSeriesFill;
	id mSymbolFill;
	BOOL mShowValueLabels;
	CGPathRef mUnitSymbolPath;

}

@property (readonly) unsigned seriesIndex; 
@property (readonly) TSCHChartSeries * series; 
@property (readonly) TSCHChartValueAxis * valueAxis; 
@property (readonly) TSCHChartAxis * groupAxis; 
@property (readonly) TSWPParagraphStyle * paragraphStyle; 
@property (readonly) unsigned labelPosition; 
@property (readonly) int symbolType; 
@property (readonly) TSDStroke * symbolStroke; 
@property (readonly) id symbolFill; 
@property (readonly) TSDStroke * seriesStroke; 
@property (readonly) id seriesFill; 
@property (readonly) float dataPointSize; 
@property (readonly) float opacity; 
@property (readonly) int lineType; 
@property (readonly) BOOL showValueLabels; 
@property (readonly) TSDShadow * seriesShadow; 
@property (readonly) CGPathRef unitSymbolPath; 
-(id)paragraphStyle;
-(id)series;
-(BOOL)showValueLabels;
-(id)valueAxis;
-(id)groupAxis;
-(id)seriesFill;
-(id)symbolStroke;
-(CGPathRef)unitSymbolPath;
-(id)seriesShadow;
-(id)seriesStroke;
-(int)lineType;
-(id)symbolFill;
-(float)dataPointSize;
-(id)initWithChartModel:(id)arg1 forSeries:(unsigned)arg2 ;
-(void)dealloc;
-(float)opacity;
-(unsigned)labelPosition;
-(unsigned)seriesIndex;
-(int)symbolType;
@end

