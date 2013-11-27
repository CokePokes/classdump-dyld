/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BBNotificationBehaviorUtilitiesClientProtocol.h>
#import <SpringBoardServices/XPCProxyTarget.h>
#import <BulletinBoard/BBXPCConnectionDelegate.h>

@class BBServerConnection;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol, XPCProxyTarget, BBXPCConnectionDelegate> {

	BBServerConnection* _connection;
	/*^block*/ id _filteringStateChangeHandler;
	/*^block*/ id _activeBehaviorOverridesChangeHandler;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)activeBehaviorOverrideTypesChanged:(unsigned)arg1 ;
-(void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1 ;
-(void)setFilteringStateChangeHandler:(/*^block*/ id)arg1 ;
-(void)setActiveBehaviorOverridesChangeHandler:(/*^block*/ id)arg1 ;
-(void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
@end

