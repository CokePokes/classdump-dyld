/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RadioUI/RadioPushNotificationControllerDelegate.h>

@protocol RURadioDataSourceDelegate;
@class , RadioPushNotificationController, NSMutableSet, NSArray;

@interface RURadioDataSource : NSObject <RadioPushNotificationControllerDelegate> {

	<RURadioDataSourceDelegate>* _delegate;
	RadioPushNotificationController* _pushNotificationController;
	int _stationCountToRefresh;
	NSMutableSet* _stationsBeingRefreshed;
	NSArray* _stations;

}

@property (assign,nonatomic,__weak) <RURadioDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * stations; 
+(void)initialize;
+(BOOL)isRadioAvailable;
+(BOOL)isOptedInToRadio;
+(void)_networkReachabilityDidChangeNotification:(id)arg1 ;
+(void)_reloadRadioAvailability;
-(id)stations;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)checkAcceptedTermsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)optInWithActiveAccountWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)deauthenticateIfNecessary;
-(void)refreshFeaturedStations;
-(void)synchronizeStationsAsAutomaticUpdate:(BOOL)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(id)featuredStations;
-(void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2 ;
-(void)_accountsDidChangeNotification:(id)arg1 ;
-(void)_deauthenticate;
-(void)_notifyAssistantOfStationChanges;
-(void)_sendDelegateShouldPrefetchArtwork;
-(void)_scheduleArtworkPrefetch;
-(void).cxx_destruct;
@end

