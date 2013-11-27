/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <demod/MSDContentServerLocatorDelegate.h>

@class NSTimer, MSDContentServerConnection, MSDContentServerLocator, NSString;

@interface MSDMailProcessor : NSObject <MSDContentServerLocatorDelegate> {

	BOOL _serverAlive;
	BOOL _paused;
	unsigned _fetchInterval;
	NSTimer* _fetchTimer;
	MSDContentServerConnection* _serverConnection;
	MSDContentServerLocator* _serverLocator;
	NSString* _serverAddress;
	NSString* _port;

}

@property (assign) unsigned fetchInterval;                                     //@synthesize fetchInterval=_fetchInterval - In the implementation block
@property (retain) NSTimer * fetchTimer;                                       //@synthesize fetchTimer=_fetchTimer - In the implementation block
@property (retain) MSDContentServerConnection * serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
@property (retain) MSDContentServerLocator * serverLocator;                    //@synthesize serverLocator=_serverLocator - In the implementation block
@property (assign) BOOL serverAlive;                                           //@synthesize serverAlive=_serverAlive - In the implementation block
@property (retain) NSString * serverAddress;                                   //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSString * port;                                            //@synthesize port=_port - In the implementation block
@property (assign) BOOL paused;                                                //@synthesize paused=_paused - In the implementation block
+(id)sharedInstance;
-(void)setServerLocator:(id)arg1 ;
-(id)serverLocator;
-(void)setServerAddress:(id)arg1 ;
-(void)setServerConnection:(id)arg1 ;
-(void)setServerAlive:(BOOL)arg1 ;
-(unsigned)fetchInterval;
-(void)setFetchInterval:(unsigned)arg1 ;
-(void)fetchAndProcessMails:(id)arg1 ;
-(void)setFetchTimer:(id)arg1 ;
-(id)fetchTimer;
-(BOOL)serverAlive;
-(id)fetchMails:(id*)arg1 ;
-(void)processMails:(id)arg1 ;
-(BOOL)removeDeliveredMails:(id*)arg1 ;
-(BOOL)processMail:(id)arg1 ;
-(id)createDeviceInfoKeyList:(id)arg1 ;
-(void)contentServerDidAppear:(id)arg1 port:(id)arg2 ;
-(void)contentServerDidDisappear;
-(void)setPort:(id)arg1 ;
-(id)serverAddress;
-(id)init;
-(BOOL)start;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void).cxx_destruct;
-(id)port;
-(id)serverConnection;
@end

