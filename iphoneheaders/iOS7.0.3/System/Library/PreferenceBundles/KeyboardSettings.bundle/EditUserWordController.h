/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <KeyboardSettings/KeyboardSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UITextFieldDelegate;
@class TIUserDictionaryTransaction, TIUserDictionaryController, PSSpecifier, NSString, , ListUserWordsController, UITextField;

@interface EditUserWordController : PSListController <UITextFieldDelegate> {

	TIUserDictionaryTransaction* _transaction;
	TIUserDictionaryController* _dictionaryController;
	PSSpecifier* _groupSpecifier;
	NSString* _footerTitle;
	<UITextFieldDelegate>* _originalTargetDelegate;
	<UITextFieldDelegate>* _originalShortcutDelegate;
	ListUserWordsController* _listUserWordsController;

}

@property (nonatomic,retain) TIUserDictionaryController * dictionaryController;              //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (nonatomic,retain) ListUserWordsController * listUserWordsController;              //@synthesize listUserWordsController=_listUserWordsController - In the implementation block
@property (nonatomic,readonly) TIUserDictionaryTransaction * transaction;                    //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,copy) NSString * target; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;                                           //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,readonly) UITextField * targetTextField; 
@property (nonatomic,readonly) UITextField * shortcutTextField; 
@property (assign,nonatomic) <UITextFieldDelegate> * originalTargetDelegate;                 //@synthesize originalTargetDelegate=_originalTargetDelegate - In the implementation block
@property (assign,nonatomic) <UITextFieldDelegate> * originalShortcutDelegate;               //@synthesize originalShortcutDelegate=_originalShortcutDelegate - In the implementation block
+(id)propertyTitles;
-(void)save;
-(void)dealloc;
-(id)init;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(id)footerTitle;
-(void)setFooterTitle:(id)arg1 ;
-(id)initWithUserWord:(id)arg1 ;
-(void)setListUserWordsController:(id)arg1 ;
-(id)targetTextField;
-(void)setOriginalTargetDelegate:(id)arg1 ;
-(id)shortcutTextField;
-(void)setOriginalShortcutDelegate:(id)arg1 ;
-(BOOL)_shouldSetDefaultFirstResponder;
-(void)setGroupSpecifier:(id)arg1 ;
-(id)validationErrorStringFromError:(int)arg1 ;
-(id)listUserWordsController;
-(id)originalTargetDelegate;
-(id)originalShortcutDelegate;
-(id)transaction;
-(id)specifiers;
-(id)groupSpecifier;
-(void)setDictionaryController:(id)arg1 ;
-(id)dictionaryController;
-(id)shortcut;
-(void)setShortcut:(id)arg1 ;
@end

