/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIAccountButtonsDelegate.h>

@class SKUIAccountButtonsViewController, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {

	SKUIAccountButtonsViewController* _accountButtonsViewController;

}

@property (nonatomic,@dynamic,readonly) SKUIAccountButtonsComponent * pageComponent; 
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)willAppearInContext:(id)arg1 ;
-(void)accountButtonsViewControllerDidSignIn:(id)arg1 ;
-(void)accountButtonsViewControllerDidSignOut:(id)arg1 ;
-(id)_accountButtonsViewController;
-(void).cxx_destruct;
-(id)cellForIndexPath:(id)arg1 ;
@end

