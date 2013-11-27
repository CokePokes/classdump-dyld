/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <aosnotifyd/AOSAccountStore.h>

@class NSMutableArray, AOSFMFAccount;

@interface AOSAccountStoreFMF : NSObject <AOSAccountStore> {

	BOOL _refreshAuthTokens;
	NSMutableArray* _accountsList;
	AOSFMFAccount* _currentActiveAccount;

}

@property (nonatomic,retain) NSMutableArray * accountsList;                            //@synthesize accountsList=_accountsList - In the implementation block
@property (assign,nonatomic) BOOL refreshAuthTokens;                                   //@synthesize refreshAuthTokens=_refreshAuthTokens - In the implementation block
@property (assign,nonatomic,__weak) AOSFMFAccount * currentActiveAccount;              //@synthesize currentActiveAccount=_currentActiveAccount - In the implementation block
-(void)loadExistingAccounts;
-(void)_saveDictionaryForAccount:(id)arg1 ;
-(void)setCurrentActiveAccount:(id)arg1 ;
-(id)accountsList;
-(void)setAccountsList:(id)arg1 ;
-(id)_accountFromLegacyDictionary:(id)arg1 ;
-(id)currentActiveAccount;
-(id)_accountFromDictionary:(id)arg1 ;
-(void)_tokensForAccount:(id)arg1 ;
-(BOOL)refreshAuthTokens;
-(void)setRefreshAuthTokens:(BOOL)arg1 ;
-(void)_fetchAppAuthToken:(id)arg1 ;
-(void)_fetchInternalAuthToken:(id)arg1 ;
-(void)_removeTokensForAccount:(id)arg1 ;
-(void)_saveTokensForAccount:(id)arg1 ;
-(id)_dictionaryFromAccount:(id)arg1 ;
-(void)saveChanges;
-(void)dealloc;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(void).cxx_destruct;
-(void)addAccount:(id)arg1 ;
@end

