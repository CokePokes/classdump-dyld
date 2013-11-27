/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUAppender.h>

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender> {

	xpc_connection_sRef _connection;
	NSString* _name;
	dispatch_queue_sRef _backgroundQueue;

}
-(void)dealloc;
-(void)flush;
-(id)initWithName:(id)arg1 ;
-(void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7 ;
-(void)setAppenderDelegate:(id)arg1 ;
@end

