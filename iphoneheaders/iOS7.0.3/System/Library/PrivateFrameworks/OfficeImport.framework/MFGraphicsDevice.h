/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MFDeviceDriver;
#import <OfficeImport/OfficeImport-Structs.h>
@class MFDeviceContext, NSMutableArray, NSObject, MFObjectTable, NSDictionary;

@interface MFGraphicsDevice : NSObject {

	MFDeviceContext* m_currentDC;
	NSMutableArray* m_savedDC;
	NSObject<MFDeviceDriver>* m_deviceDriver;
	MFObjectTable* m_objectTable;
	MFObjectTable* m_stockObjects;
	NSDictionary* m_colorMap;
	NSDictionary* m_fillMap;

}
-(void)dealloc;
-(int)setMiterLimit:(double)arg1 ;
-(void)done;
-(int)setTextColour:(id)arg1 ;
-(int)setTextJustification:(int)arg1 :(int)arg2 ;
-(int)setTextCharExtra:(int)arg1 ;
-(int)setBkColour:(id)arg1 ;
-(int)setBkMode:(int)arg1 ;
-(int)setArcDirection:(int)arg1 ;
-(int)setPolyFillMode:(int)arg1 ;
-(int)setStretchBltMode:(int)arg1 ;
-(int)setRop2:(int)arg1 ;
-(int)setMapMode:(int)arg1 ;
-(int)setWorldTransform:(const CGAffineTransform*)arg1 ;
-(int)modifyWorldTransform:(const CGAffineTransform*)arg1 :(int)arg2 ;
-(int)setWindowExt:(int)arg1 :(int)arg2 ;
-(int)setViewportExt:(int)arg1 :(int)arg2 ;
-(int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)setWindowOrg:(int)arg1 :(int)arg2 ;
-(int)setViewportOrg:(int)arg1 :(int)arg2 ;
-(int)offsetWindowOrg:(int)arg1 :(int)arg2 ;
-(int)offsetViewportOrg:(int)arg1 :(int)arg2 ;
-(int)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4 ;
-(int)patBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(unsigned)arg5 ;
-(id)createBitmap:(unsigned)arg1 :(unsigned)arg2 :(unsigned)arg3 :(unsigned)arg4 :(const char*)arg5 :(unsigned)arg6 ;
-(int)bitBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(unsigned)arg8 :(CGAffineTransform*)arg9 :(unsigned)arg10 ;
-(id)createDIBitmap:(const char*)arg1 :(unsigned)arg2 :(int)arg3 ;
-(int)stretchBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned)arg10 :(CGAffineTransform*)arg11 :(unsigned)arg12 ;
-(int)setTextAlign:(bool)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)textOutEncoded:(int)arg1 :(int)arg2 :(id)arg3 ;
-(int)extTextOutEncoded:(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int*)arg9 :(int)arg10 ;
-(int)rectangle:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)ellipse:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)saveDC;
-(int)restoreDC:(int)arg1 ;
-(int)moveTo:(double)arg1 :(double)arg2 ;
-(int)lineTo:(double)arg1 :(double)arg2 ;
-(int)polygon:(CGPoint*)arg1 :(int)arg2 ;
-(int)polyline:(CGPoint*)arg1 :(int)arg2 ;
-(int)arc:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 ;
-(int)pie:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 ;
-(int)chord:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 ;
-(int)roundRect:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(double)arg5 :(double)arg6 ;
-(int)polyPolygon:(CGPoint*)arg1 :(int*)arg2 :(int)arg3 ;
-(int)selectObject:(int)arg1 ;
-(int)createPatternBrush:(id)arg1 :(unsigned)arg2 usePaletteForBilevel:(BOOL)arg3 ;
-(int)realizePalette;
-(int)createPalette:(id)arg1 :(unsigned)arg2 ;
-(int)setPaletteEntries:(unsigned)arg1 :(id)arg2 :(unsigned)arg3 ;
-(int)resizePalette:(unsigned)arg1 :(unsigned)arg2 ;
-(int)createPen:(int)arg1 :(int)arg2 :(id)arg3 :(double*)arg4 :(unsigned)arg5 ;
-(int)createFontIndirect:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 ;
-(id)createColorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4 ;
-(int)createBrush:(int)arg1 :(id)arg2 :(int)arg3 :(unsigned)arg4 ;
-(int)createRegion:(id)arg1 ;
-(int)fillRgn:(unsigned)arg1 :(unsigned)arg2 ;
-(int)frameRegion:(unsigned)arg1 :(unsigned)arg2 :(int)arg3 :(int)arg4 ;
-(int)invertRgn:(unsigned)arg1 ;
-(int)paintRgn:(unsigned)arg1 ;
-(int)selectClipRegion:(unsigned)arg1 :(int)arg2 ;
-(int)excludeClipRect:(CGRect)arg1 ;
-(int)intersectClipRect:(CGRect)arg1 ;
-(id)initWithCanvas:(CGRect)arg1 ;
-(void)setColorMap:(id)arg1 fillMap:(id)arg2 ;
-(CGRect)getCanvas;
-(int)description:(id)arg1 ;
-(int)getStockObject:(unsigned)arg1 ;
-(int)createFontIndirectW:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22 :(unsigned)arg23 ;
-(id)createDIBitmap:(const char*)arg1 :(unsigned)arg2 :(const char*)arg3 :(unsigned)arg4 :(int)arg5 ;
-(id)getCurrentFont;
-(int)extTextOut:(int)arg1 :(int)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int*)arg9 :(int)arg10 ;
-(int)setBrushOrg:(double)arg1 :(double)arg2 ;
-(int)bezierTo:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 ;
-(int)closeCurrentPath:(bool)arg1 ;
-(int)bezier:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 ;
-(int)arcTo:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 ;
-(int)polyPolyline:(CGPoint*)arg1 :(int*)arg2 :(int)arg3 ;
-(int)angleArc:(int)arg1 :(int)arg2 :(unsigned)arg3 :(double)arg4 :(double)arg5 ;
-(int)maskBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(unsigned)arg11 :(CGAffineTransform*)arg12 :(unsigned)arg13 ;
-(int)plgBlt:(CGPoint*)arg1 :(id)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(id)arg7 :(int)arg8 :(int)arg9 :(CGAffineTransform*)arg10 :(unsigned)arg11 ;
-(int)stretchBlt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(id)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(unsigned)arg10 :(CGAffineTransform*)arg11 :(unsigned)arg12 usePaletteForBilevel:(BOOL)arg13 ;
-(int)beginPath;
-(int)abortPath;
-(int)endPath;
-(int)widenPath;
-(int)strokeAndFillPath:(bool)arg1 :(bool)arg2 ;
-(int)selectClipPath:(int)arg1 ;
-(int)selectClipRegionWithRects:(id)arg1 :(int)arg2 ;
-(int)fillRgnWithRects:(id)arg1 :(unsigned)arg2 ;
-(int)paintRgnWithRects:(id)arg1 ;
-(int)invertRgnWithRects:(id)arg1 ;
-(int)setMetaRgn;
-(id)recolor:(id)arg1 fill:(BOOL)arg2 ;
-(int)textOut:(int)arg1 :(int)arg2 :(id)arg3 ;
-(void)createStockObjects;
-(id)recolor:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 fill:(BOOL)arg4 ;
-(int)comment:(id)arg1 ;
-(int)frameRegionWithRects:(id)arg1 :(unsigned)arg2 :(int)arg3 :(int)arg4 ;
-(int)deleteObject:(int)arg1 ;
@end

