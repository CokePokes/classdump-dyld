/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSLock, NSArray;

@interface _MFMailAccountProxySource : NSObject {

	NSLock* _lock;
	NSArray* _accountProxies;
	BOOL _registeredForNotifications;
	int _notifyToken;

}
+(id)defaultInstance;
-(void)_deregisterForNotifications_nts;
-(void)_registerForNotifications_nts;
-(void)_resetAccountsChanged:(BOOL)arg1 ;
-(id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
@end

