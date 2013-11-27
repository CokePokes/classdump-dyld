/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSCH3DProtectResourceDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class , NSMutableArray;

@interface TSCH3DShaderCache : NSObject {

	<TSCH3DProtectResourceDelegate>* mProtectResourceDelegate;
	NSMutableArray* mShaderCache;

}

@property (assign,nonatomic) <TSCH3DProtectResourceDelegate> * protectResourceDelegate; 
-(void)setProtectResourceDelegate:(id)arg1 ;
-(id)shaderForObjectState:(const ObjectState*)arg1 version:(id)arg2 initializeProgramBlock:(/*^block*/ id)arg3 ;
-(void)p_unprotectAllCacheItems;
-(void)p_ensureCacheLimit;
-(void)debug_verifyUniqueShadersInCache;
-(id)protectResourceDelegate;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)flush;
@end

