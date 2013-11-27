/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettingsUI.bundle/AccountSettingsUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <AccountSettingsUI/ACUISettingsPluginParentProtocol.h>

@class ACAccountStore, NSArray, NSMutableArray, PSSpecifier, NSMutableDictionary, ACUISettingsPluginManager;

@interface ACUISettingsController : PSListController <ACUISettingsPluginParentProtocol> {

	ACAccountStore* _accountStore;
	NSArray* _accounts;
	NSMutableArray* _accountSpecifiers;
	PSSpecifier* _accountGroupSpecifier;
	PSSpecifier* _addAccountSpecifier;
	NSArray* _loadingInProgressSpecifiers;
	NSArray* _lazyLoadedSpecifiers;
	NSMutableDictionary* _pluginToSpecifiersMap;
	BOOL _isLazyLoadingPluginSpecifiers;
	ACUISettingsPluginManager* _settingsPluginManager;

}
-(id)_visibleAccountTypeIDs;
-(id)_sortedAccountTypeIDs;
-(id)_specifierForUnavailablityWarning;
-(id)_addAccountSpecifier;
-(id)_specifierForScheduleSettings;
-(id)_specifiersForPluginProvidedSettings;
-(BOOL)_shouldGroupAccountsOfType:(id)arg1 ;
-(BOOL)_isAccountModificationDisabledByRestrictions;
-(id)_specifierForAccount:(id)arg1 ;
-(id)_specifierForCollectionCellLinkingToAccounts:(id)arg1 ofType:(id)arg2 ;
-(id)_scheduleSettingsModeForSpecifier:(id)arg1 ;
-(id)_settingsPluginManager;
-(id)_specifiersForSettingsProvidedByPlugin:(id)arg1 ;
-(id)_specifiersForLoadingMessage;
-(void)_fetchLazyLoadedSpecifiers;
-(id)_specifiersForAccountsGroup;
-(BOOL)_isAccount:(id)arg1 inList:(id)arg2 ;
-(BOOL)_lockMailAccounts;
-(BOOL)_isAccountList:(id)arg1 identicalToAccountList:(id)arg2 ;
-(void)_unlockMailAccounts;
-(id)_loadAccounts;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(void)specifiersDidChangeForPlugin:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)_accounts;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
-(id)_accountStore;
@end

