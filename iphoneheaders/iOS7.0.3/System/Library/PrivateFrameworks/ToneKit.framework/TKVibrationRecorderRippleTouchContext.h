/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderRippleTouchContext : NSObject {

	double _creationTimestamp;
	CGPoint _location;

}

@property (nonatomic,readonly) CGPoint location; 
@property (assign,setter=_setCreationTimestamp:,nonatomic) double _creationTimestamp;              //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (assign,setter=_setLocation:,nonatomic) CGPoint _location;                               //@synthesize location=_location - In the implementation block
-(id)init;
-(CGPoint)location;
-(void)reset;
-(double)_creationTimestamp;
-(void)_setCreationTimestamp:(double)arg1 ;
-(double)timeIntervalSinceCreation;
-(void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CGPoint)arg2 ;
-(CGPoint)_location;
-(void)_setLocation:(CGPoint)arg1 ;
@end

