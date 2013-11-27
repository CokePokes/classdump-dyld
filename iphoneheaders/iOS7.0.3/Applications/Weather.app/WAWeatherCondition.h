/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CALayer, City, NSMutableArray, CAStateController;

@interface WAWeatherCondition : NSObject {

	CALayer* _rootLayer;
	BOOL _playing;
	BOOL _hidden;
	BOOL _shouldRasterize;
	BOOL _multiCityMode;
	BOOL _forcesCondition;
	City* _city;
	float _balanceValue;
	float _alpha;
	float _speed;
	CALayer* _layer;
	int _condition;
	int _forcesNight;
	NSMutableArray* _gyroLayers;
	CAStateController* _stateController;
	double _timeOffset;

}

@property (assign,nonatomic) City * city;                                      //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) float balanceValue;                               //@synthesize balanceValue=_balanceValue - In the implementation block
@property (assign,nonatomic) BOOL playing;                                     //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) float alpha;                                      //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float speed;                                      //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double timeOffset;                                //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterize;                             //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign,nonatomic) BOOL multiCityMode;                               //@synthesize multiCityMode=_multiCityMode - In the implementation block
@property (assign,nonatomic) int condition;                                    //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL forcesCondition;                             //@synthesize forcesCondition=_forcesCondition - In the implementation block
@property (assign,nonatomic) int forcesNight;                                  //@synthesize forcesNight=_forcesNight - In the implementation block
@property (nonatomic,retain) NSMutableArray * gyroLayers;                      //@synthesize gyroLayers=_gyroLayers - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
-(void)setCondition:(int)arg1 balanceValue:(float)arg2 ;
-(void)_setMultiCityMode:(BOOL)arg1 ;
-(void)setAlpha:(float)arg1 animationDuration:(double)arg2 ;
-(void)setBalanceValue:(float)arg1 ;
-(void)_setMultiCityModeEnabled;
-(void)togglePlaying;
-(void)setMultiCityMode:(BOOL)arg1 ;
-(float)balanceValue;
-(BOOL)multiCityMode;
-(BOOL)forcesCondition;
-(void)setForcesCondition:(BOOL)arg1 ;
-(int)forcesNight;
-(void)setForcesNight:(int)arg1 ;
-(id)gyroLayers;
-(void)setGyroLayers:(id)arg1 ;
-(id)stateController;
-(void)setStateController:(id)arg1 ;
-(id)city;
-(void)setCity:(id)arg1 ;
-(void)_resetState;
-(void)dealloc;
-(id)layer;
-(float)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)setSpeed:(float)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(float)speed;
-(double)timeOffset;
-(BOOL)shouldRasterize;
-(void)setTimeOffset:(double)arg1 ;
-(void)setTime:(float)arg1 ;
-(void)resume;
-(int)condition;
-(void)setCondition:(int)arg1 ;
-(void)pause;
-(void)refresh;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)playing;
-(BOOL)hidden;
@end

