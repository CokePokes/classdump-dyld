/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@class UIColor, NSArray;

@interface MKOverlayPathRenderer : MKOverlayRenderer {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	float _lineWidth;
	int _lineJoin;
	int _lineCap;
	float _miterLimit;
	float _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;

}

@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) float lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) float miterLimit; 
@property (assign) float lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign) CGPathRef path; 
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(float)arg2 ;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(float)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)invalidatePath;
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(id)lineDashPattern;
-(float)lineDashPhase;
-(void)setLineDashPhase:(float)arg1 ;
-(void)dealloc;
-(CGPathRef)path;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)fillColor;
-(id)strokeColor;
-(void)setLineCap:(int)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(void)createPath;
-(void)setLineJoin:(int)arg1 ;
-(int)lineJoin;
-(id)initWithOverlay:(id)arg1 ;
-(int)lineCap;
@end

