/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsUI/ACUIViewController.h>

@class PSSpecifier, NSString;

@interface SLTwitterAccountCreationController : ACUIViewController {

	BOOL _geoEnabled;
	BOOL _findByEmail;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;
	NSString* _fullname;
	NSString* _username;
	NSString* _email;
	NSString* _password;
	NSString* _verify;

}

@property (nonatomic,copy) NSString * fullname;              //@synthesize fullname=_fullname - In the implementation block
@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * email;                 //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * verify;                //@synthesize verify=_verify - In the implementation block
+(id)_accountCreationCredential;
-(id)fullNameWithSpecifier:(id)arg1 ;
-(id)usernameWithSpecifier:(id)arg1 ;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(void)_createAccount;
-(id)fullname;
-(void)signUpButtonClicked:(id)arg1 ;
-(void)_presentInvalidEmailAddress;
-(void)_presentPasswordTooShort;
-(void)_presentPasswordVerifyDoNotMatch;
-(id)verify;
-(void)_presentResponseErrors:(id)arg1 ;
-(void)setFullName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setFindByEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)findByEmailWithSpecifier:(id)arg1 ;
-(void)_viewTermsOfServiceLinkTapped:(id)arg1 ;
-(void)_viewPrivacyPolicyLinkTapped:(id)arg1 ;
-(id)localizedTitleForErrorEntry:(id)arg1 ;
-(BOOL)_validateValues;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(id)verifyWithSpecifier:(id)arg1 ;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)emailWithSpecifier:(id)arg1 ;
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(id)locationWithSpecifier:(id)arg1 ;
-(BOOL)_haveEnoughValuesForValidation;
-(void)_presentErrorCreatingAccount;
-(void)setFullname:(id)arg1 ;
-(void)setVerify:(id)arg1 ;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)currentLanguage;
-(void)propertyValueChanged:(id)arg1 ;
-(void)_updateDoneButton;
-(void)updateNavButtons;
-(void)setEmail:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)username;
-(id)email;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(void).cxx_destruct;
@end

