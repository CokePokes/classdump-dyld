/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface CHDrawing : NSObject <NSCopying> {

	CJKChar* _drawing;

}

@property (assign,nonatomic) CJKChar drawing;              //@synthesize drawing=_drawing - In the implementation block
-(CGRect)bounds;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(id).cxx_construct;
-(void)clear;
-(void)addPoint:(CGPoint)arg1 ;
-(void)endStroke;
-(unsigned)pointCountForStrokeIndex:(unsigned)arg1 ;
-(CGPoint)pointForStrokeIndex:(unsigned)arg1 pointIndex:(unsigned)arg2 ;
-(CJKChar*)drawing;
-(void)setDrawing:(CJKChar*)arg1 ;
-(BOOL)isPrefixForDrawing:(id)arg1 ;
-(NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1 ;
-(id)xyRepresentation;
-(Matrix<float>*)bitmapRepresentationForSize:(CGSize)arg1 ;
-(id)sortedDrawing;
-(vector<unsigned long, std::__1::allocator<unsigned long> >*)strokeIndicesSortedByMinXCoordinate;
-(unsigned)pointCount;
-(unsigned)strokeCount;
-(void).cxx_destruct;
@end

