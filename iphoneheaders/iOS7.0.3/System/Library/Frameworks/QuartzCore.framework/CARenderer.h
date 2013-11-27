/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CAContext, CALayer;

@interface CARenderer : NSObject {

	CARendererPriv* _priv;

}

@property (retain) CAContext * context; 
@property (assign) <CARendererDelegate> * delegate; 
@property (retain) CALayer * layer; 
@property (assign) CGRect bounds; 
+(id)rendererWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)beginFrameAtTime:(double)arg1 timeStamp:(SCD_Struct_CA27*)arg2 ;
-(void)addUpdateRect:(CGRect)arg1 ;
-(void)render;
-(double)nextFrameTime;
-(id)_initWithOptions:(id)arg1 ;
-(id)_initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(CGRect)updateBounds;
-(BOOL)hasMissingContent;
-(void)dealloc;
-(CGRect)bounds;
-(id)layer;
-(void)setDelegate:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)delegate;
-(void)setLayer:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)endFrame;
@end

