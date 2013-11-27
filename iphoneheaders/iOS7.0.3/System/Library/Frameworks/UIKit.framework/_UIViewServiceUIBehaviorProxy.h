/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/_UIViewServiceUIBehaviorInterface.h>

@class _UIViewServiceFencingControlProxy;

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {

	int _remotePID;
	_UIViewServiceFencingControlProxy* _fencingControlProxy;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}
+(id)activeFencePort;
+(id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)retainCount;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(int)__automatic_invalidation_logic;
@end

