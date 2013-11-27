/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertView.h>
#import <MediaPlayer/MPAudioDeviceControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MPAudioDeviceController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	MPAudioDeviceController* _audioDeviceController;
	BOOL _ignoringInteractionEvents;
	NSArray* _routes;

}
-(void)audioDeviceControllerAudioRoutesChanged:(id)arg1 ;
-(id)initWithAVPlayer:(id)arg1 ;
-(BOOL)_pickRouteAtIndex:(unsigned)arg1 withPassword:(id)arg2 ;
-(void)setAVPlayer:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)requiresPortraitOrientation;
-(void).cxx_destruct;
@end

