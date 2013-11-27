/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
@required
-(void)handleDisplayModeChanged:(id)arg1;
-(void)handleBrailleDidDisplay:(id)arg1;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1;
-(void)configurationDidChange;
-(void)handleBrailleTableFailedToLoad:(id)arg1;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1;
-(void)handleBrailleDriverDidLoad;
-(void)handleBrailleDriverDisconnected;
-(void)handleBrailleKeypress:(id)arg1;
-(void)handleBrailleKeyWillMemorize:(id)arg1;
-(void)handleBrailleKeyMemorize:(id)arg1;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
@end

