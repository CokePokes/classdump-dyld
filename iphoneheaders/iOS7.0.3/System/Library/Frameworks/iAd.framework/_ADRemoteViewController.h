/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRemoteViewController.h>

@interface _ADRemoteViewController : _UIRemoteViewController {

	BOOL _hasBeenDismissed;
	unsigned _remoteSupportedInterfaceOrientations;

}

@property (assign,nonatomic) unsigned remoteSupportedInterfaceOrientations;              //@synthesize remoteSupportedInterfaceOrientations=_remoteSupportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic) BOOL hasBeenDismissed;                                      //@synthesize hasBeenDismissed=_hasBeenDismissed - In the implementation block
+(id)serviceViewControllerInterface;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)setRemoteSupportedInterfaceOrientations:(unsigned)arg1 ;
-(BOOL)hasBeenDismissed;
-(void)setHasBeenDismissed:(BOOL)arg1 ;
-(unsigned)remoteSupportedInterfaceOrientations;
@end

