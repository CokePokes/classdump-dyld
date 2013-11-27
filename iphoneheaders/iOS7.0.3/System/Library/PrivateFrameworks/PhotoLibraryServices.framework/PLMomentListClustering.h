/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSMutableSet, NSMapTable, NSDateFormatter;

@interface PLMomentListClustering : NSObject {

	unsigned __defaultNumberOfAssetsRequiredForSeeding;
	unsigned __defaultMaxFailuresForExpansion;
	unsigned __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
	unsigned __minimumNumberOfAssetsToAvoidYearAccumulation;
	NSMutableDictionary* __clustersByYearAndMonth;
	NSMutableSet* __visitedMoments;
	NSMapTable* __cachedLocationsByMoment;
	NSDateFormatter* __debugDateFormatter;
	double __maximumTimeThreshold;
	double __maximumTimeThresholdBetweenMomentsWithLocation;
	double __maximumTimeThresholdFromPeakMatch;
	double __maximumTimeThresholdBetweenMomentsWithoutLocation;
	double __maximumTimeThresholdFromPeakWithoutLocation;
	double __maximumDistanceThresholdBetweenMoments;
	double __maximumDistanceThresholdFromPeak;
	double __maximumDistanceBetweenAccumulatedMoments;
	double __megamomentAccumulationMaximumTimeThreshold;

}

@property (nonatomic,readonly) double _maximumTimeThreshold;                                                         //@synthesize _maximumTimeThreshold=__maximumTimeThreshold - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdBetweenMomentsWithLocation;                               //@synthesize _maximumTimeThresholdBetweenMomentsWithLocation=__maximumTimeThresholdBetweenMomentsWithLocation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdFromPeakMatch;                                            //@synthesize _maximumTimeThresholdFromPeakMatch=__maximumTimeThresholdFromPeakMatch - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdBetweenMomentsWithoutLocation;                            //@synthesize _maximumTimeThresholdBetweenMomentsWithoutLocation=__maximumTimeThresholdBetweenMomentsWithoutLocation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdFromPeakWithoutLocation;                                  //@synthesize _maximumTimeThresholdFromPeakWithoutLocation=__maximumTimeThresholdFromPeakWithoutLocation - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceThresholdBetweenMoments;                                       //@synthesize _maximumDistanceThresholdBetweenMoments=__maximumDistanceThresholdBetweenMoments - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceThresholdFromPeak;                                             //@synthesize _maximumDistanceThresholdFromPeak=__maximumDistanceThresholdFromPeak - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceBetweenAccumulatedMoments;                                     //@synthesize _maximumDistanceBetweenAccumulatedMoments=__maximumDistanceBetweenAccumulatedMoments - In the implementation block
@property (nonatomic,readonly) unsigned _defaultNumberOfAssetsRequiredForSeeding;                                    //@synthesize _defaultNumberOfAssetsRequiredForSeeding=__defaultNumberOfAssetsRequiredForSeeding - In the implementation block
@property (nonatomic,readonly) unsigned _defaultMaxFailuresForExpansion;                                             //@synthesize _defaultMaxFailuresForExpansion=__defaultMaxFailuresForExpansion - In the implementation block
@property (nonatomic,readonly) double _megamomentAccumulationMaximumTimeThreshold;                                   //@synthesize _megamomentAccumulationMaximumTimeThreshold=__megamomentAccumulationMaximumTimeThreshold - In the implementation block
@property (nonatomic,readonly) unsigned _minimumNumberOfAssetsToAvoidMegamomentAccumulation;                         //@synthesize _minimumNumberOfAssetsToAvoidMegamomentAccumulation=__minimumNumberOfAssetsToAvoidMegamomentAccumulation - In the implementation block
@property (nonatomic,readonly) unsigned _minimumNumberOfAssetsToAvoidYearAccumulation;                               //@synthesize _minimumNumberOfAssetsToAvoidYearAccumulation=__minimumNumberOfAssetsToAvoidYearAccumulation - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByYearAndMonth;                                        //@synthesize _clustersByYearAndMonth=__clustersByYearAndMonth - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _visitedMoments;                                                       //@synthesize _visitedMoments=__visitedMoments - In the implementation block
@property (setter=_setCachedLocationsByMoment:,nonatomic,retain) NSMapTable * _cachedLocationsByMoment;              //@synthesize _cachedLocationsByMoment=__cachedLocationsByMoment - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _debugDateFormatter;                                                //@synthesize _debugDateFormatter=__debugDateFormatter - In the implementation block
+(double)maximumTimeThresholdBetweenMoments;
-(void)dealloc;
-(id)init;
-(id)_cachedLocationForMoment:(id)arg1 ;
-(double)_maximumTimeThresholdBetweenMomentsWithLocation;
-(BOOL)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(BOOL)arg4 ;
-(double)_maximumTimeThresholdFromPeakMatch;
-(double)_maximumDistanceThresholdBetweenMoments;
-(double)_maximumDistanceThresholdFromPeak;
-(double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
-(double)_maximumTimeThresholdFromPeakWithoutLocation;
-(BOOL)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(BOOL)arg6 haveRejectedMomentsForDistance:(BOOL)arg7 ;
-(id)_cachedLocationsByMoment;
-(void)_verifyMomentsAreSorted:(id)arg1 ;
-(void)_createMomentListClusterCacheForMoments:(id)arg1 ;
-(void)_setCachedLocationsByMoment:(id)arg1 ;
-(unsigned)_defaultNumberOfAssetsRequiredForSeeding;
-(id)_insertNewMegaMomentListWithMoment:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(unsigned)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(BOOL)arg4 outRejectedMoments:(id)arg5 ;
-(void)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2 ;
-(double)_megamomentAccumulationMaximumTimeThreshold;
-(unsigned)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
-(double)_maximumDistanceBetweenAccumulatedMoments;
-(unsigned)_minimumNumberOfAssetsToAvoidYearAccumulation;
-(id)generateMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManagedObjectContext:(id)arg4 ;
-(double)_maximumTimeThreshold;
-(unsigned)_defaultMaxFailuresForExpansion;
-(id)_clustersByYearAndMonth;
-(id)_visitedMoments;
-(id)_debugDateFormatter;
@end

