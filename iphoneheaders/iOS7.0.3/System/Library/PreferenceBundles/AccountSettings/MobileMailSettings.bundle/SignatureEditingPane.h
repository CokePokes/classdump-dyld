/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class NSArray, PSListController;

@interface SignatureEditingPane : PSListController {

	NSArray* _defaultSignatureSpecifiers;
	NSArray* _accountSignaturesSpecifiers;
	PSListController* _parentListController;
	BOOL _useAccountSignatures;
	BOOL _singleAccountActive;

}

@property (assign,nonatomic) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
+(BOOL)hasMultipleMailAccounts;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setParentListController:(id)arg1 ;
-(void)_setSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_signatureWithSpecifier:(id)arg1 ;
-(void)_setAccountSignature:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_accountSignatureWithSpecifier:(id)arg1 ;
-(id)accountSignaturesSpecifiers;
-(id)defaultSignatureSpecifiers;
-(id)parentListController;
-(void)commitChangesAndDismissKeyboard:(BOOL)arg1 ;
-(id)specifiers;
@end

