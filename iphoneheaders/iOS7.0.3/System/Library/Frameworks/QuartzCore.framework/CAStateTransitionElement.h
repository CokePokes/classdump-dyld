/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class CALayer, CAAnimation, NSString;

@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding> {

	CALayer* _target;
	CAAnimation* _animation;
	NSString* _key;
	BOOL _enabled;

}

@property (getter=isEnabled) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) CALayer * target;                     //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,copy) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double beginTime; 
@property (assign,nonatomic) double duration; 
+(void)CAMLParserStartElement:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)animation;
-(void)setBeginTime:(double)arg1 ;
-(BOOL)isEnabled;
-(double)beginTime;
-(void)setEnabled:(BOOL)arg1 ;
-(id)target;
-(id)key;
-(void)setAnimation:(id)arg1 ;
-(void)setKey:(id)arg1 ;
@end

