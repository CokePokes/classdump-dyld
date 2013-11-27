/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {

	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	bool mCategoryAxesReversed;
	bool mCategoryAxesReversedOverridden;
	bool mContainsVolumeStockType;

}
-(void)dealloc;
-(id)graphicProperties;
-(id)axes;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setContainsVolumeStockType:(bool)arg1 ;
-(id)chartTypes;
-(bool)hasSecondaryAxis;
-(bool)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(bool)containsVolumeStockType;
-(bool)isCategoryAxesReversed:(bool)arg1 ;
@end

