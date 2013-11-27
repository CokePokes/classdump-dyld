/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:48:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface WFWiFiPasswordAlertItem : SBAlertItem {

	id _delegate;
	NSString* _name;
	BOOL _btStyle;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworkName:(id)arg1 ;
-(void)setBluetoothStyle:(BOOL)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)returnKeyPressed:(id)arg1 ;
-(BOOL)dismissOnLock;
-(void)dismiss:(int)arg1 ;
@end

