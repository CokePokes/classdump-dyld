/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProxy.h>

@interface NSProtocolChecker : NSProxy
+(id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)_imMethodSignatureForSelector:(SEL)arg1 ;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(const char*)_localClassNameForClass;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)target;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)protocol;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
@end

