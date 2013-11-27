/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <StoreServices/SSURLConnectionRequestDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class SSURLConnectionRequest, UIAlertView, NSString;

@interface MusicBaseSettingsController : PSListController <SSURLConnectionRequestDelegate, UIActionSheetDelegate> {

	SSURLConnectionRequest* _request;
	UIAlertView* _signedInAlertView;

}

@property (nonatomic,readonly) NSString * stringTable; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * password; 
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)suspend;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(id)musicSpecifiers;
-(id)homeSharingSpecifiers;
-(void)settingsChangedExternally;
-(id)stringTable;
-(void)_verifyHomeSharingAccount;
-(void)_ditchUnsupportedSpecifiersFromArray:(id)arg1 ;
-(id)_resetMediaLibrarySpecifier;
-(void)_fixupVolumeLimitSpecifier:(id)arg1 ;
-(void)_fixupEQSpecifier:(id)arg1 ;
-(void)_fixupSoundCheck:(id)arg1 ;
-(id)_homeSharingGroupSpecifier;
-(id)_homeSharingButtonSpecifier;
-(id)_homeSharingAppleIDSpecifier;
-(id)_homeSharingPasswordSpecifier;
-(void)_resetMediaLibraryAction:(id)arg1 ;
-(void)_updateHomeSharingSpecifiers;
-(void)_resetMediaLibrary;
-(id)videoSpecifiers;
-(void)_signOut;
-(void).cxx_destruct;
-(void)_buttonAction:(id)arg1 ;
@end

