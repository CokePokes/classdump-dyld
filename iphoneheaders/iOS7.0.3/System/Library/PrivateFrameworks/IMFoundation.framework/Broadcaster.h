/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSProxy.h>

@class NSArray, IMRemoteObjectBroadcaster, Protocol, IMMessageContext;

@interface Broadcaster : NSProxy {

	NSArray* _targets;
	IMRemoteObjectBroadcaster* _parent;
	Protocol* _protocol;
	IMMessageContext* _messageContext;

}
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 ;
@end

