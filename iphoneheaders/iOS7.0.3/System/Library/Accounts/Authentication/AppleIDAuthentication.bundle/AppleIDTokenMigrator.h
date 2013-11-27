/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Accounts/Authentication/AppleIDAuthentication.bundle/AppleIDAuthentication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AppleIDAuthentication/AppleIDAuthentication-Structs.h>
@interface AppleIDTokenMigrator : NSObject
-(id)_potentialServiceNamesForTokenOfAccount:(id)arg1 ;
-(id)_mostRecentTokenWithServiceName:(id)arg1 matchingAccountNames:(id)arg2 ;
-(void)_removeKeychainItemForUsernames:(id)arg1 services:(id)arg2 ;
-(CFDictionaryRef)_keychainQueryForAllItemsMatchingAccountName:(id)arg1 serviceName:(id)arg2 ;
-(id)migrateAppleIDBasedCredentialForAccount:(id)arg1 ;
@end

