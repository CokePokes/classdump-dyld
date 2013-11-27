/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccess/DAAccount.h>

@class NSMutableSet, NSMutableArray, LDAPTaskManager;

@interface LDAPAccount : DAAccount {

	NSMutableSet* _searchTaskSet;
	BOOL _isShuttingDown;
	NSMutableArray* _searchSettings;

}

@property (nonatomic,readonly) LDAPTaskManager * taskManager; 
-(void)dealloc;
-(BOOL)isLDAPAccount;
-(void)ingestBackingAccountInfoProperties;
-(void)cancelAllSearchQueries;
-(id)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)addSearchSettings:(id)arg1 ;
-(id)connectionURLWithSSL:(BOOL)arg1 ;
-(void)ldapSearchTask:(id)arg1 finishedWithError:(id)arg2 foundItems:(id)arg3 ;
-(void)ldapGetDefaultSearchBaseTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 defaultSearchBase:(id)arg4 ;
-(void)removeSearchSettings:(id)arg1 ;
-(id)connectionURL;
-(id)searchSettings;
-(void)performSearchQuery:(id)arg1 ;
-(void)cancelSearchQuery:(id)arg1 ;
@end

