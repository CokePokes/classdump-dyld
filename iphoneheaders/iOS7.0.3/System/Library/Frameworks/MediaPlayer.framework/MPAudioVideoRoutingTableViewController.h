/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>
#import <MediaPlayer/MPAudioDeviceControllerDelegate.h>

@class MPAudioDeviceController, NSArray;

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAudioDeviceControllerDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	int _airPlayPasswordAlertDidCancelToken;
	MPAudioDeviceController* _audioDeviceController;
	unsigned _avItemType;
	BOOL _displayMirroringRoutes;
	NSArray* _displayedRoutes;
	BOOL _wirelessDisplayCapableRouteIsPicked;
	BOOL _wirelessDisplayRouteIsPendingAsPicked;

}

@property (nonatomic,readonly) MPAudioDeviceController * audioDeviceController;              //@synthesize audioDeviceController=_audioDeviceController - In the implementation block
+(id)routesPreferringMirroring;
-(id)audioDeviceController;
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(id)_pickedRoute;
-(id)_availableRoutes;
-(void)_debugButtonAction:(id)arg1 ;
-(id)_displayedRoutes;
-(id)initWithType:(unsigned)arg1 displayMirroringRoutes:(BOOL)arg2 ;
-(BOOL)_wirelessDisplayCapableRouteIsPicked;
-(id)_effectivePickedRouteReturningActualPickedRouteType:(int*)arg1 ;
-(void)_mirroringSwitchValueDidChange:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

