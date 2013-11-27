/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmap;
	NSData* _pixelData;

}
-(void)dealloc;
-(id)pixelData;
-(BOOL)getCompressedData:(id*)arg1 usedEncoding:(int*)arg2 ;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(CGContextRef)bitmapContext;
-(id)compressedData;
-(void)finalize;
@end

