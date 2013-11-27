/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BulletinBoard/BBXPCConnectionDelegate.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class BBXPCIncomingConnection;

@interface BBDataProviderConnectionResolver : NSObject <BBXPCConnectionDelegate, XPCProxyTarget> {

	BBXPCIncomingConnection* _connection;
	/*^block*/ id _establishedBlock;

}
-(void)dealloc;
-(void)invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)connection:(id)arg1 connectionStateDidChange:(BOOL)arg2 ;
-(void)establishSectionID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 completion:(/*^block*/ id)arg3 ;
@end

