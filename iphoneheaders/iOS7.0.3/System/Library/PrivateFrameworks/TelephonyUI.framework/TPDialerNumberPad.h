/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TPNumberPad.h>
#import <TelephonyUI/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class , TPDialerSoundController;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {

	BOOL _playsSounds;
	<TPDialerKeypadDelegate>* _delegate;
	TPDialerSoundController* _soundController;

}

@property (assign,nonatomic) BOOL playsSounds;                             //@synthesize playsSounds=_playsSounds - In the implementation block
@property (assign) <TPDialerKeypadDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPDialerSoundController * soundController;              //@synthesize soundController=_soundController - In the implementation block
+(id)dialerNumberPadFullCharacters;
+(id)dialerNumberPadNumericCharacters;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)buttonTapped:(id)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(BOOL)supportsHardPause;
-(void)setSupportsHardPause:(BOOL)arg1 ;
-(void)highlightKeyAtIndex:(int)arg1 ;
-(int)indexForHighlightedKey;
-(id)soundController;
-(void)setSoundController:(id)arg1 ;
-(BOOL)playsSounds;
@end

