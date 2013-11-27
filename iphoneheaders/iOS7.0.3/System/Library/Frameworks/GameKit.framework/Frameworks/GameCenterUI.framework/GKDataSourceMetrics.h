/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKGridLayoutMetrics.h>

@class NSMutableDictionary, NSArray, GKCollectionViewDataSource, NSString;

@interface GKDataSourceMetrics : GKGridLayoutMetrics {

	NSMutableDictionary* _sectionToMetrics;
	NSArray* _childMetrics;
	GKCollectionViewDataSource* _dataSource;
	NSString* _cachedKey;
	NSRange _globalSectionRange;
	NSRange _localSectionRange;

}

@property (assign,nonatomic) NSRange globalSectionRange;                           //@synthesize globalSectionRange=_globalSectionRange - In the implementation block
@property (assign,nonatomic) NSRange localSectionRange;                            //@synthesize localSectionRange=_localSectionRange - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionToMetrics;               //@synthesize sectionToMetrics=_sectionToMetrics - In the implementation block
@property (nonatomic,retain) NSArray * childMetrics;                               //@synthesize childMetrics=_childMetrics - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * cachedKey;                                 //@synthesize cachedKey=_cachedKey - In the implementation block
+(id)dataSourceMetricsWithMetrics:(id)arg1 dataSource:(id)arg2 ;
-(void)setMetrics:(id)arg1 forSection:(int)arg2 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(void)setLocalSectionRange:(NSRange)arg1 ;
-(id)metricsForSection:(int)arg1 ;
-(id)initWithMetrics:(id)arg1 dataSource:(id)arg2 ;
-(void)setGlobalSectionRange:(NSRange)arg1 ;
-(id)sectionToMetrics;
-(void)setChildMetrics:(id)arg1 ;
-(void)setCachedKey:(id)arg1 ;
-(id)globalLayoutKey;
-(id)globalLayoutKeyForSection:(int)arg1 ;
-(NSRange)globalSectionRange;
-(NSRange)localSectionRange;
-(void)setSectionToMetrics:(id)arg1 ;
-(id)childMetrics;
-(id)cachedKey;
-(void)computeGlobalSectionRangesWithBaseIndex:(int)arg1 ;
-(id)accumulateSections:(id)arg1 layout:(id)arg2 ;
-(id)applyDataSourceMetricsToSections:(id)arg1 withParent:(id)arg2 layout:(id)arg3 ;
-(void)generateMetricDataForLayout:(id)arg1 ;
-(void)prepareLayout:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)description;
-(id)dataSource;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

