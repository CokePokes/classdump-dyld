/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Compass/Compass-Structs.h>
#import <CompassUI/CompassRotatingView.h>

@class UIView;

@interface CompassTriangleView : CompassRotatingView {

	UIView* _triangleView;
	float _triangleRadius;

}

@property (assign,nonatomic) float triangleRadius;              //@synthesize triangleRadius=_triangleRadius - In the implementation block
-(void)setTriangleRadius:(float)arg1 ;
-(id)triangleView;
-(float)triangleRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCompassHeading:(double)arg1 ;
@end

