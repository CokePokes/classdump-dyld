/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DGLHandle.h>

@interface TSCH3DShaderHandle : TSCH3DGLHandle {

	unsigned mType;

}

@property (nonatomic,readonly) unsigned type; 
+(id)handleWithType:(unsigned)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(id)initWithGLHandle:(unsigned)arg1 ;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
@end

