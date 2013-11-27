/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, StockChartData;

@interface XMLChartParserData : NSObject {

	int state;
	unsigned valueIndex;
	double lastTime;
	BOOL marketTimeZoneSet;
	NSString* _bufferString;
	StockChartData* _chartData;

}

@property (nonatomic,retain) NSString * bufferString;                 //@synthesize bufferString=_bufferString - In the implementation block
@property (nonatomic,retain) StockChartData * chartData;              //@synthesize chartData=_chartData - In the implementation block
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(id)bufferString;
-(void)setBufferString:(id)arg1 ;
-(void).cxx_destruct;
@end

