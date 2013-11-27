/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap; 
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(CGPoint)endPoint;
-(void)setColors:(id)arg1 ;
-(void)setLocations:(id)arg1 ;
-(void)setType:(id)arg1 ;
-(id)type;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(id)colors;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(id)locations;
@end

