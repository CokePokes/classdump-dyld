/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface MKLayer : CALayer {

	CGRect _hitBounds;
	CGPoint _hitOffset;
	CGPoint _hitOutset;

}

@property (assign,nonatomic) CGPoint hitOffset;               //@synthesize hitOffset=_hitOffset - In the implementation block
@property (assign,nonatomic) CGPoint hitOutset;               //@synthesize hitOutset=_hitOutset - In the implementation block
@property (nonatomic,readonly) CGRect hitBounds;              //@synthesize hitBounds=_hitBounds - In the implementation block
-(void)setHitOffset:(CGPoint)arg1 ;
-(void)setHitOutset:(CGPoint)arg1 ;
-(CGRect)hitBounds;
-(CGPoint)hitOffset;
-(CGPoint)hitOutset;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
@end

