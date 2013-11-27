/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CDXClientDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <GameKitServices/GameKitServices-Structs.h>
@class , NSData, NSMutableDictionary, NSError, NSString, NSObject;

@interface CDXClient : NSObject {

	<CDXClientDelegate>* delegate_;
	int holePunchAttemptCount_;
	NSData* preblob_;
	NSMutableDictionary* sessionLookup_;
	NSError* error_;
	int fd_;
	unsigned long long holePunchSID_;
	unsigned long long prevHolePunchSID_;
	NSString* server_;
	unsigned short port_;
	unsigned short localPort_;
	int restartCount_;
	sockaddr_in cdxaddr_ipv4;
	double holePunchInterval_;
	BOOL preblobIsUpToDate_;
	BOOL willReconfigureShortly_;
	SCDynamicStoreRef scDynamicStore_;
	CFRunLoopSourceRef scDynamicStoreRunLoopSource_;
	NSObject<OS_dispatch_queue>* queue_;
	NSObject<OS_dispatch_source>* source_;
	NSObject<OS_dispatch_source>* holePunchTimer_;
	/*^block*/ id preblobCallback_;
	void** padding_[10];

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * queue; 
@property (nonatomic,copy) id preblobCallback; 
@property (assign,nonatomic) <CDXClientDelegate> * delegate; 
@property (readonly) NSData * preblob; 
@property (nonatomic,readonly) NSError * error; 
+(id)sharedClient;
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)invalidate;
-(void)start;
-(id)queue;
-(void)invalidateSession:(id)arg1 ;
-(BOOL)sendRaw:(id)arg1 ;
-(id)initWithOptions:(id)arg1 delegate:(id)arg2 ;
-(void)stopListeningOnSockets;
-(void)stopHolePunchTimer;
-(void)restart;
-(void)sendHolePunch;
-(void)setPreblob:(id)arg1 ;
-(void)resetHolepunchTimer;
-(void)handleFDEvent;
-(void)startListeningOnSockets;
-(BOOL)handleHolePunchEvent;
-(id)preblob;
-(void)networkDidChange;
-(id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2 ;
-(/*^block*/ id)preblobCallback;
-(void)setPreblobCallback:(/*^block*/ id)arg1 ;
-(id)error;
@end

