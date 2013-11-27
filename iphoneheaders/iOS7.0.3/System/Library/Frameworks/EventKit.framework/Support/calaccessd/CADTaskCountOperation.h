/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSOperation.h>

@class ClientConnection, EKReminderPredicate;

@interface CADTaskCountOperation : NSOperation {

	ClientConnection* _connection;
	EKReminderPredicate* _predicate;
	unsigned _clientPort;
	unsigned long long _clientData;

}
+(id)countOperationWithConnection:(id)arg1 predicate:(id)arg2 clientPort:(unsigned)arg3 clientData:(unsigned long long)arg4 ;
-(id)initWithConnection:(id)arg1 predicate:(id)arg2 clientPort:(unsigned)arg3 clientData:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)main;
@end

