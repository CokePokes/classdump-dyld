/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PRDNCSession, NSString;

@interface PRDNCMessage : NSObject {

	PRDNCSession* _receivingConnection;
	NSString* _name;
	NSString* _param;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * param;                                  //@synthesize param=_param - In the implementation block
@property (assign,nonatomic) BOOL paramAsBool; 
@property (nonatomic,readonly) NSString * dncNotificationName; 
@property (nonatomic,readonly) PRDNCSession * receivingConnection;              //@synthesize receivingConnection=_receivingConnection - In the implementation block
+(id)componentsForFullNotificationName:(id)arg1 ;
+(id)fullNotificationNameForBaseName:(id)arg1 param:(id)arg2 ;
-(void)sendACK;
-(id)param;
-(void)setParam:(id)arg1 ;
-(id)initWithReceivingConnection:(id)arg1 name:(id)arg2 param:(id)arg3 ;
-(id)receivingConnection;
-(void)sendBoolReply:(BOOL)arg1 ;
-(void)setParamAsBool:(BOOL)arg1 ;
-(id)dncNotificationName;
-(BOOL)paramAsBool;
-(void)sendStillAlive;
-(void)dealloc;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
@end

