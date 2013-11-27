/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UISettings.h>

@interface PTXParallaxSettings : _UISettings {

	BOOL _slideEnabled;
	BOOL _tiltEnabled;
	BOOL _increaseEnabled;
	BOOL _alphaEnabled;
	int _slideDirectionX;
	int _slideDirectionY;
	float _slidePixelsX;
	float _slidePixelsY;
	int _tiltDirectionX;
	int _tiltDirectionY;
	float _tiltDegreesX;
	float _tiltDegreesY;
	int _distanceFromScreen;
	float _perspectiveTransform;
	float _slideIncreaseX;
	float _slideIncreaseY;
	float _tiltIncreaseX;
	float _tiltIncreaseY;
	float _minAlpha;
	float _maxAlpha;

}

@property (assign) BOOL slideEnabled;                       //@synthesize slideEnabled=_slideEnabled - In the implementation block
@property (assign) int slideDirectionX;                     //@synthesize slideDirectionX=_slideDirectionX - In the implementation block
@property (assign) int slideDirectionY;                     //@synthesize slideDirectionY=_slideDirectionY - In the implementation block
@property (assign) float slidePixelsX;                      //@synthesize slidePixelsX=_slidePixelsX - In the implementation block
@property (assign) float slidePixelsY;                      //@synthesize slidePixelsY=_slidePixelsY - In the implementation block
@property (assign) BOOL tiltEnabled;                        //@synthesize tiltEnabled=_tiltEnabled - In the implementation block
@property (assign) int tiltDirectionX;                      //@synthesize tiltDirectionX=_tiltDirectionX - In the implementation block
@property (assign) int tiltDirectionY;                      //@synthesize tiltDirectionY=_tiltDirectionY - In the implementation block
@property (assign) float tiltDegreesX;                      //@synthesize tiltDegreesX=_tiltDegreesX - In the implementation block
@property (assign) float tiltDegreesY;                      //@synthesize tiltDegreesY=_tiltDegreesY - In the implementation block
@property (assign) int distanceFromScreen;                  //@synthesize distanceFromScreen=_distanceFromScreen - In the implementation block
@property (assign) float perspectiveTransform;              //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (assign) BOOL increaseEnabled;                    //@synthesize increaseEnabled=_increaseEnabled - In the implementation block
@property (assign) float slideIncreaseX;                    //@synthesize slideIncreaseX=_slideIncreaseX - In the implementation block
@property (assign) float slideIncreaseY;                    //@synthesize slideIncreaseY=_slideIncreaseY - In the implementation block
@property (assign) float tiltIncreaseX;                     //@synthesize tiltIncreaseX=_tiltIncreaseX - In the implementation block
@property (assign) float tiltIncreaseY;                     //@synthesize tiltIncreaseY=_tiltIncreaseY - In the implementation block
@property (assign) BOOL alphaEnabled;                       //@synthesize alphaEnabled=_alphaEnabled - In the implementation block
@property (assign) float minAlpha;                          //@synthesize minAlpha=_minAlpha - In the implementation block
@property (assign) float maxAlpha;                          //@synthesize maxAlpha=_maxAlpha - In the implementation block
+(id)settingsControllerModule;
-(void)setTiltEnabled:(BOOL)arg1 ;
-(void)setDefaultValues;
-(float)perspectiveTransform;
-(void)setPerspectiveTransform:(float)arg1 ;
-(void)setSlideEnabled:(BOOL)arg1 ;
-(void)setSlideDirectionX:(int)arg1 ;
-(void)setSlideDirectionY:(int)arg1 ;
-(void)setSlidePixelsX:(float)arg1 ;
-(void)setSlidePixelsY:(float)arg1 ;
-(void)setTiltDirectionX:(int)arg1 ;
-(void)setTiltDirectionY:(int)arg1 ;
-(void)setTiltDegreesX:(float)arg1 ;
-(void)setTiltDegreesY:(float)arg1 ;
-(void)setDistanceFromScreen:(int)arg1 ;
-(void)setIncreaseEnabled:(BOOL)arg1 ;
-(void)setSlideIncreaseX:(float)arg1 ;
-(void)setSlideIncreaseY:(float)arg1 ;
-(void)setTiltIncreaseX:(float)arg1 ;
-(void)setTiltIncreaseY:(float)arg1 ;
-(void)setAlphaEnabled:(BOOL)arg1 ;
-(void)setMinAlpha:(float)arg1 ;
-(void)setMaxAlpha:(float)arg1 ;
-(float)maxAlpha;
-(float)minAlpha;
-(BOOL)slideEnabled;
-(int)slideDirectionX;
-(int)slideDirectionY;
-(float)slidePixelsX;
-(float)slidePixelsY;
-(BOOL)tiltEnabled;
-(int)tiltDirectionX;
-(int)tiltDirectionY;
-(float)tiltDegreesX;
-(float)tiltDegreesY;
-(int)distanceFromScreen;
-(BOOL)increaseEnabled;
-(float)slideIncreaseX;
-(float)slideIncreaseY;
-(float)tiltIncreaseX;
-(float)tiltIncreaseY;
-(BOOL)alphaEnabled;
@end

