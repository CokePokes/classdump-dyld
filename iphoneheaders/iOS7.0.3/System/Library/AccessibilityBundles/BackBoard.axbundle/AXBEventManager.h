/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <BackBoard/BackBoard-Structs.h>
@class NSString, AXEventRepresentation;

@interface AXBEventManager : NSObject {

	NSString* _eventTapIdentifier;
	BOOL _homeIsDown;
	BOOL _overrideGestureRecognitionState;
	BOOL _eventListenerEnabled;
	IOHIDUserDeviceRef _userDevice;
	AXEventRepresentation* _lastHIDRecord;

}

@property (assign,nonatomic) BOOL homeIsDown;              //@synthesize homeIsDown=_homeIsDown - In the implementation block
+(id)sharedManager;
-(BOOL)homeIsDown;
-(id)lastRecordPostedThroughHID;
-(void)clearLastRecordPostedThrougHID;
-(id)windowServer;
-(unsigned)springBoardPort;
-(void)registerEventListener:(BOOL)arg1 ;
-(void)postEvent:(id)arg1 systemEvent:(BOOL)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4 ;
-(void)enableEventTap:(BOOL)arg1 forApplication:(int)arg2 ;
-(void)setDisableSystemGestureRecognitionInEvents:(BOOL)arg1 ;
-(unsigned)machPortForPoint:(CGPoint)arg1 ;
-(unsigned)clientPortForContextId:(unsigned)arg1 ;
-(id)frontMostApplication;
-(unsigned)contextIdForPosition:(CGPoint)arg1 ;
-(BOOL)_assistiveTouchEventTap:(id)arg1 ;
-(void)_enableAssistiveTouchEventTap:(BOOL)arg1 ;
-(unsigned)frontMostAppPort;
-(void)_processHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_normalizeEventForContext:(id)arg1 ;
-(unsigned)systemEventPort;
-(void)dispatchEventRepresentationToClient:(id)arg1 ;
-(int)springBoardPid;
-(void)setHomeIsDown:(BOOL)arg1 ;
-(id)init;
-(void)wakeUpDeviceIfNecessary;
@end

