/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>

@class WBSCreditCardData, WBSCreditCardFormatter, NSDateFormatter, PSTextFieldSpecifier, NSArray;

@interface SafariSavedCreditCardDetailController : PSListController {

	WBSCreditCardData* _creditCardData;
	WBSCreditCardFormatter* _creditCardFormatter;
	NSDateFormatter* _expirationDateFormatter;
	PSTextFieldSpecifier* _cardholderSpecifier;
	PSTextFieldSpecifier* _numberSpecifier;
	PSTextFieldSpecifier* _expirationDateSpecifier;
	PSTextFieldSpecifier* _descriptionSpecifier;
	NSArray* _deleteButtonSpecifiers;
	BOOL _hasDefaultDescription;
	BOOL _editing;

}
-(void)setSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_specifierWithName:(id)arg1 ;
-(void)_textChangedInSpecifier:(id)arg1 textField:(id)arg2 ;
-(void)_updateDoneButtonForCardNumberString:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_updateSpecifiers;
-(void)_updateRightBarButtonItem;
-(void)_deleteCreditCard:(id)arg1 ;
-(void)_endEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(id)_deleteButtonSpecifiers;
-(void)_removeCreditCardDataAndPopViewController;
-(id)specifiers;
-(BOOL)shouldSelectResponderOnAppearance;
@end

