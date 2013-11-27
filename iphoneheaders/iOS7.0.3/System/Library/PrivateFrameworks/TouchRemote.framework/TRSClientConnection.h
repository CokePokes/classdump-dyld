/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRTCPConnection.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TRSClientConnection : TRTCPConnection {

	NSObject<OS_dispatch_queue>* _accessQueue;
	BOOL _authorized;
	NSString* _deviceIdentifier;
	NSObject<OS_dispatch_queue>* _packetEventQueue;

}
-(void)dealloc;
-(id)_initWithUniqueID:(int)arg1 connectionStream:(id)arg2 ;
-(void)_handleReceivedPacketEvent:(id)arg1 ;
-(void).cxx_destruct;
@end

