/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDTileProvider.h>

@interface TSDRepTileProvider : TSDTileProvider
-(id)initWithRep:(id)arg1 ;
-(void)beginDrawingOperation;
-(void)endDrawingOperation;
-(BOOL)isTargetOpaque;
-(BOOL)canTargetDrawInParallel;
-(void)drawTargetInLayer:(id)arg1 context:(CGContextRef)arg2 ;
@end

