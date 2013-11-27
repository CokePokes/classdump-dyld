/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/SetupChoiceController.h>

@class BuddyCloudConfigController, NSError, UILabel, BuddyLabelAndLinkFooterView, SetupChoice, UINavigationController, BuddyCloudConfigAboutConfigurationContainerController;

@interface BuddyCloudConfigDisclosureViewController : SetupChoiceController {

	BOOL _isMandatory;
	BuddyCloudConfigController* _configController;
	NSError* _lastRetrievalError;
	UILabel* _disclosureLabel;
	BuddyLabelAndLinkFooterView* _footer;
	SetupChoice* _acceptChoice;
	SetupChoice* _skipChoice;
	UINavigationController* _aboutController;
	BuddyCloudConfigAboutConfigurationContainerController* _aboutConfigurationContainerController;

}

@property (assign,nonatomic) BuddyCloudConfigController * configController;                                                              //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSError * lastRetrievalError;                                                                               //@synthesize lastRetrievalError=_lastRetrievalError - In the implementation block
@property (nonatomic,retain) UILabel * disclosureLabel;                                                                                  //@synthesize disclosureLabel=_disclosureLabel - In the implementation block
@property (nonatomic,retain) BuddyLabelAndLinkFooterView * footer;                                                                       //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) SetupChoice * acceptChoice;                                                                                 //@synthesize acceptChoice=_acceptChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * skipChoice;                                                                                   //@synthesize skipChoice=_skipChoice - In the implementation block
@property (assign,nonatomic) BOOL isMandatory;                                                                                           //@synthesize isMandatory=_isMandatory - In the implementation block
@property (assign,nonatomic) UINavigationController * aboutController;                                                                   //@synthesize aboutController=_aboutController - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigAboutConfigurationContainerController * aboutConfigurationContainerController;              //@synthesize aboutConfigurationContainerController=_aboutConfigurationContainerController - In the implementation block
-(void)setConfigController:(id)arg1 ;
-(void)setLastRetrievalError:(id)arg1 ;
-(id)configController;
-(id)disclosureLabel;
-(void)_setupForCloudConfigurationState;
-(id)lastRetrievalError;
-(id)acceptChoice;
-(id)skipChoice;
-(id)aboutConfigurationContainerController;
-(void)showAboutConfiguration:(id)arg1 ;
-(void)_retrieveEnterpriseConfiguration;
-(id)aboutController;
-(void)setDisclosureLabel:(id)arg1 ;
-(void)setAcceptChoice:(id)arg1 ;
-(void)setSkipChoice:(id)arg1 ;
-(BOOL)isMandatory;
-(void)setIsMandatory:(BOOL)arg1 ;
-(void)setAboutController:(id)arg1 ;
-(void)setAboutConfigurationContainerController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)footer;
-(void)setFooter:(id)arg1 ;
-(void)controllerDone;
@end

