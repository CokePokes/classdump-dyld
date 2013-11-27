/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccountStore;

@interface AOSAppleAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
+(id)sharedInstance;
-(void)fixFMIPAuthTokenShouldForce:(BOOL)arg1 ;
-(void)syncFMIPAccountInfo;
-(id)initSingleton;
-(void)startMonitoringFMIPAccount;
-(BOOL)populateiCloudAccountInfoIntoAccount:(id)arg1 ;
-(void)setFMIPDataclass:(BOOL)arg1 ;
-(void)_stopMonitoringFMIPAccount;
-(void)iCloudAccountChanged:(id)arg1 ;
-(id)iCloudACAccount;
-(BOOL)isKnownFMIPAccount:(id)arg1 ;
-(id)fmipACAccount;
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

