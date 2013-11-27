/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface ACMAppleConnect : NSObject {

	id _private;

}

@property (assign) id delegate; 
@property (readonly) NSString * version; 
@property (assign,nonatomic) int logLevel; 
+(id)sharedInstance;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)version;
-(void)cancelRequests;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(id)private;
-(void)authenticate:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)realms;
@end

