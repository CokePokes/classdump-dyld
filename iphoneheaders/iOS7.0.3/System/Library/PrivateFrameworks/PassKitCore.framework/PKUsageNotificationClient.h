/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <PassKitCore/PKUsageNotificationClientInterface.h>

@class NSXPCListener, NSMutableSet;

@interface PKUsageNotificationClient : NSObject <NSXPCListenerDelegate, PKUsageNotificationClientInterface> {

	NSXPCListener* _listener;
	NSMutableSet* _connections;
	/*^block*/ id _handler;

}
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)passUsedFromSource:(int)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3 ;
-(void)setPassUsageHandler:(/*^block*/ id)arg1 ;
@end

