/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHImage : NSObject
+(int)handleFloatingMedia:(id)arg1 state:(id)arg2 ;
+(int)handleFloatingWebView:(id)arg1 state:(id)arg2 ;
+(int)handleInlineMedia:(id)arg1 state:(id)arg2 ;
+(int)handleInlineWebView:(id)arg1 state:(id)arg2 ;
+(int)handleFloatingImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(CGPathRef)arg6 state:(id)arg7 ;
+(int)handleInlineImageBinary:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(CGPathRef)arg5 style:(id)arg6 state:(id)arg7 ;
+(void)handleSimpleImageBinary:(id)arg1 geometry:(id)arg2 style:(id)arg3 state:(id)arg4 ;
+(void)mapMaskedImage:(id)arg1 geometry:(id)arg2 cropGeometry:(id)arg3 maskingShapePath:(id)arg4 alphaMaskBezier:(CGPathRef)arg5 graphicStyle:(id)arg6 isFloating:(BOOL)arg7 state:(id)arg8 ;
+(void)mapCropGeometry:(id)arg1 bounds:(id)arg2 style:(id)arg3 ;
@end

