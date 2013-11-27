/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, GKTurnBasedEventHandlerDelegate;
@class NSObject;

@interface GKTurnBasedEventHandler : NSObject {

	NSObject<OS_dispatch_queue>* _lookForEventQueue;
	BOOL _didBecomeActive;
	NSObject<GKTurnBasedEventHandlerDelegate>* _delegateWeak;

}

@property (assign,nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (assign,nonatomic) BOOL didBecomeActive;                                              //@synthesize didBecomeActive=_didBecomeActive - In the implementation block
+(id)sharedTurnBasedEventHandler;
-(void)callTurnEventForMatch:(id)arg1 userTapped:(BOOL)arg2 ;
-(BOOL)didBecomeActive;
-(void)setDidBecomeActive:(BOOL)arg1 ;
-(void)lookForEvent;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end

