/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Notification/MessageAccountNotificationPlugin.bundle/MessageAccountNotificationPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsDaemon/ACDAccountNotificationPlugin.h>

@interface MessageAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	int _updateAutoFetchSettingsRequestCount;

}
+(id)_childMailAccountWithParentAccount:(id)arg1 ;
+(BOOL)_accountHasLeafMailAccountType:(id)arg1 ;
+(BOOL)_accountHasMailAccountParentType:(id)arg1 ;
+(BOOL)_accountHasLeafDeliveryAccountType:(id)arg1 ;
-(void)_updateAutoFetchSettingsAsynchronously;
-(BOOL)_addMailChildAccountToAppleAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_deleteDataWithMailAccount:(id)arg1 ;
-(void)_mailAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)_deliveryAccount:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
@end

