/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ObservationTarget : NSObject {

	BOOL _isActive;
	SEL _selector;

}

@property (assign,nonatomic) BOOL isActive;              //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) SEL selector;               //@synthesize selector=_selector - In the implementation block
-(id)description;
-(BOOL)isActive;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setIsActive:(BOOL)arg1 ;
@end

