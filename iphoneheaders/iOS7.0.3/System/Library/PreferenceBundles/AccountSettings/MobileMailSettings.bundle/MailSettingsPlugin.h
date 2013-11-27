/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsUI/ACUISettingsPluginProtocol.h>

@protocol ACUISettingsPluginParentProtocol;
@class NSArray, PSRootController, PSViewController, NSConditionLock, NSString;

@interface MailSettingsPlugin : NSObject <ACUISettingsPluginProtocol> {

	NSArray* _allMailAccounts;
	PSRootController* _rootController;
	PSViewController<ACUISettingsPluginParentProtocol>* _parentController;
	NSConditionLock* _signatureLock;
	NSString* _signatureValue;
	int _accountsChangedNotifyToken;

}
+(id)systemVersionDescription;
-(void)dealloc;
-(void)signatureDidChange:(id)arg1 ;
-(void)_mailAccountsDidChange;
-(void)_refreshAccounts;
-(void)_reloadMailAccounts;
-(void)setLinesOfPreview:(id)arg1 withSpecifier:(id)arg2 ;
-(id)linesOfPreview:(id)arg1 ;
-(id)linesOfPreviewTitles;
-(void)setShowToCC:(id)arg1 withSpecifier:(id)arg2 ;
-(id)showToCC:(id)arg1 ;
-(void)setFlagStyle:(id)arg1 withSpecifier:(id)arg2 ;
-(id)flagStyle:(id)arg1 ;
-(void)setConfirmDelete:(id)arg1 withSpecifier:(id)arg2 ;
-(id)confirmDelete:(id)arg1 ;
-(void)setLoadRemoteImages:(id)arg1 withSpecifier:(id)arg2 ;
-(id)loadRemoteImages:(id)arg1 ;
-(void)setEnableThreading:(id)arg1 withSpecifier:(id)arg2 ;
-(id)enableThreading:(id)arg1 ;
-(void)setCCSelf:(id)arg1 withSpecifier:(id)arg2 ;
-(id)ccSelf:(id)arg1 ;
-(void)setCurrentQuoteLevel:(id)arg1 withSpecifier:(id)arg2 ;
-(id)currentQuoteLevel:(id)arg1 ;
-(void)setCurrentSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)getCurrentSignatureAsynchronously:(id)arg1 ;
-(BOOL)_shouldShowDefaultAccountButton;
-(void)setDefaultSendingAccount:(id)arg1 withSpecifier:(id)arg2 ;
-(id)defaultSendingAccount:(id)arg1 ;
-(void)setGlobalGenericPreference:(id)arg1 withSpecifier:(id)arg2 ;
-(id)globalGenericPreference:(id)arg1 ;
-(void)saveSystemLog:(id)arg1 ;
-(id)getCurrentSignatureSynchronously:(id)arg1 ;
-(id)accountValuesForSpecifier:(id)arg1 ;
-(id)accountTitlesForSpecifier:(id)arg1 ;
-(void)setGenericPreference:(id)arg1 withSpecifier:(id)arg2 ;
-(id)genericPreference:(id)arg1 ;
-(void)parentControllerWillDisappear;
-(id)footerText;
-(BOOL)shouldLoadSpecifiersLazily;
-(id)initWithParentController:(id)arg1 ;
-(id)specifiers;
-(id)headerText;
@end

