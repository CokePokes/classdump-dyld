/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <AVFoundation/MCProfileConnectionObserver.h>

@class UINavigationController, _UIContentUnavailableView, UITabBarController;

@interface VideosRootViewController : UIViewController <MCProfileConnectionObserver> {

	UINavigationController* _singleTabController;
	_UIContentUnavailableView* _noContentView;
	UITabBarController* _portraitViewController;

}

@property (nonatomic,retain) UITabBarController * portraitViewController;              //@synthesize portraitViewController=_portraitViewController - In the implementation block
-(BOOL)handleOpenURLForItem:(id)arg1 ;
-(id)portraitViewController;
-(void)_mediaLibraryContentDidChangeNotification:(id)arg1 ;
-(void)_reloadTabs;
-(id)_navigationControllerForViewControllerIdentifier:(id)arg1 ;
-(id)_wrappedViewControllerForIdentifier:(id)arg1 ;
-(id)_noContentButtonTitle;
-(id)_navigationIdentifierForIdentifier:(id)arg1 ;
-(id)_navigationControllerForIdentifier:(id)arg1 ;
-(id)_orderedIdentifiers;
-(id)_identifierForNavigationIdentifier:(id)arg1 ;
-(void)setPortraitViewController:(id)arg1 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void).cxx_destruct;
@end

