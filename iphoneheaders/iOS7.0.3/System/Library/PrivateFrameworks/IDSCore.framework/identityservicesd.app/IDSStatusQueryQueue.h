/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/identityservicesd.app/identityservicesd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface IDSStatusQueryQueue : NSObject {

	NSMutableArray* _queue;

}
-(void)_callStateChanged;
-(void)enqueueQueryBlock:(/*^block*/ id)arg1 cleanup:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
@end

