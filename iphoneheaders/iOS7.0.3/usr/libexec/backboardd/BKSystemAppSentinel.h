/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <backboardd/backboardd-Structs.h>
@class NSMutableDictionary, BKSystemApplication, NSLock;

@interface BKSystemAppSentinel : NSObject {

	NSMutableDictionary* _checkInPendingPortsByPID;
	BKSystemApplication* _systemApp;
	BOOL _readyForSystemApp;
	BOOL _bootstrapped;
	NSLock* _lock;

}
+(id)sharedInstance;
-(id)systemApp;
-(void)startSystemAppCheckInServer;
-(void)bootstrapSystemApp;
-(void)notePresenceOfSystemApp:(id)arg1 ;
-(void)_systemAppIsWaiting:(unsigned)arg1 token:(SCD_Struct_BK5)arg2 ;
-(void)lock_bootstrap;
-(void)lock_notePresenceOfSystemApp:(id)arg1 ;
-(void)lock_systemAppIsWaiting:(unsigned)arg1 token:(SCD_Struct_BK5)arg2 ;
-(BOOL)lock_watchingSystemApp;
-(void)lock_watchForSystemAppDeath:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

