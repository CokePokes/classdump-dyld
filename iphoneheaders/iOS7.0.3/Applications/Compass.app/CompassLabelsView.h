/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Compass/Compass-Structs.h>
#import <CompassUI/CompassRotatingView.h>

@class NSDictionary, UILabel;

@interface CompassLabelsView : CompassRotatingView {

	NSDictionary* _directionLabels;
	UILabel* _bearingLabel;
	float _directionLabelRadius;
	float _bearingLabelRadius;
	float _bearing;
	float _degreesRadius;

}

@property (assign,nonatomic) float degreesRadius;                     //@synthesize degreesRadius=_degreesRadius - In the implementation block
@property (assign,nonatomic) float directionLabelRadius;              //@synthesize directionLabelRadius=_directionLabelRadius - In the implementation block
@property (assign,nonatomic) float bearingLabelRadius;                //@synthesize bearingLabelRadius=_bearingLabelRadius - In the implementation block
@property (assign,nonatomic) float bearing;                           //@synthesize bearing=_bearing - In the implementation block
-(void)setDirectionLabelRadius:(float)arg1 ;
-(void)setBearingLabelRadius:(float)arg1 ;
-(void)setBearing:(float)arg1 animated:(BOOL)arg2 ;
-(id)bearingLabel;
-(void)updateLabelsAnimated:(BOOL)arg1 ;
-(id)directionLabels;
-(void)setDegreesRadius:(float)arg1 ;
-(float)directionLabelRadius;
-(float)bearingLabelRadius;
-(float)degreesRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCompassHeading:(double)arg1 ;
-(void)setBearing:(float)arg1 ;
-(float)bearing;
@end

