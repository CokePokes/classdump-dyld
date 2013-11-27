/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSNumberFormatter, UIColor, NSMutableArray, _MKScaleUnitsView, UIView, NSMutableDictionary, NSString;

@interface MKScaleView : UIView {

	double _distanceInMeters;
	BOOL _useMetric;
	BOOL _useYardsForShortDistances;
	NSNumberFormatter* _floatNumberFormatter;
	double _magicNumbers[3];
	UIColor* _lightSegmentColorRegular;
	UIColor* _darkSegmentColorRegular;
	UIColor* _borderColorRegular;
	UIColor* _lightSegmentColorSatellite;
	UIColor* _darkSegmentColorSatellite;
	UIColor* _borderColorSatellite;
	NSMutableArray* _segments;
	_MKScaleUnitsView* _unitsView;
	int _oldNumberOfSegments;
	UIView* _outlineViewA;
	UIView* _outlineViewB;
	UIView* _displayedOutline;
	float _segmentLengthInPixels;
	double _resultSegmentLength;
	double _resultSegmentLengthInMeters;
	NSMutableDictionary* _formattedNumberCache;
	NSString* _feetAbbreviation;
	NSString* _yardAbbreviation;
	NSString* _milesAbbreviation;
	NSString* _metersAbbreviation;
	NSString* _kilometersAbbreviation;
	int _grQuality;
	int _layoutCounter;

}

@property (assign,nonatomic,@dynamic) BOOL useLightText; 
@property (assign,nonatomic,@dynamic) double distanceInMeters; 
-(void)setUseLightText:(BOOL)arg1 ;
-(void)setDistanceInMeters:(double)arg1 ;
-(void)updateLocale:(id)arg1 ;
-(void)memoryWarning:(id)arg1 ;
-(void)_updateStrings;
-(void)_localizedDistanceStringsWithMeters:(unsigned)arg1 imperial:(double)arg2 useFeet:(BOOL)arg3 inMetric:(BOOL)arg4 displaysYardsForShortDistances:(BOOL)arg5 strings:(id)arg6 ;
-(void)_calculateSegments;
-(id)_formattedStringForFloat:(float)arg1 ;
-(id)_scaleViewFormattedStringForFloat:(float)arg1 ;
-(id)_scaleViewFormattedStringForInteger:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

