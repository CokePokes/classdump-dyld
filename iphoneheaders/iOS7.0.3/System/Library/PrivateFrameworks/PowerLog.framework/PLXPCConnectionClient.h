/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PLXPCConection;

@interface PLXPCConnectionClient : NSObject {

	PLXPCConection* xpcConnection;

}
-(id)init;
-(id)PLXPCSendMessageWithReply:(id)arg1 ;
-(BOOL)PLXPCSendMessage:(id)arg1 ;
-(void)PLXPCinterruptedHandler;
-(void)PLXPCinvalidationHandler;
@end

