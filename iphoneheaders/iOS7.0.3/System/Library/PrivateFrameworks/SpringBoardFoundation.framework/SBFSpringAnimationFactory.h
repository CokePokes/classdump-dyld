/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SBFAnimationFactory.h>

@interface SBFSpringAnimationFactory : SBFAnimationFactory {

	float _mass;
	float _stiffness;
	float _damping;
	float _epsilon;

}

@property (nonatomic,readonly) float mass;                   //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) float stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (nonatomic,readonly) float damping;                //@synthesize damping=_damping - In the implementation block
@property (nonatomic,readonly) float epsilon;                //@synthesize epsilon=_epsilon - In the implementation block
+(id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 ;
+(id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 ;
-(float)stiffness;
-(float)damping;
-(float)mass;
-(float)epsilon;
-(id)_animation;
-(id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 ;
-(void)_calculateDuration;
-(id)_springAnimation;
@end

