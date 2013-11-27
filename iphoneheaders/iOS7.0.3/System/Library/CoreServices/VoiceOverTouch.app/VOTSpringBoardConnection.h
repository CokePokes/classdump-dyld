/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <vot/vot-Structs.h>
@class NSMachPort;

@interface VOTSpringBoardConnection : NSObject {

	NSMachPort* _sbPort;

}
+(id)defaultConnection;
+(void)initialize;
-(void)setSpringBoardCaptionPanelText:(id)arg1 ;
-(void)informConnectionDied;
-(id)_sbPort;
-(void)restartConnection;
-(void)showSpringBoardVOConfirmation:(BOOL)arg1 ;
-(void)sendProgrammaticAppSwitch:(BOOL)arg1 ;
-(void)updateVisualRotor:(id)arg1 ;
-(void)showElementLabelPanel:(BOOL)arg1 currentLabel:(id)arg2 ;
-(void)setSpringBoardCursorFrame:(CGRect)arg1 withPath:(CGPathRef)arg2 withContextId:(unsigned)arg3 ;
-(void)toggleCallState;
-(void)setInPassthroughMode:(BOOL)arg1 ;
-(void)setAXInspectorNotificationInfo:(id)arg1 ;
-(void)setAXInspectorInfo:(id)arg1 ;
-(void)showItemChooser:(BOOL)arg1 withItems:(id)arg2 ;
-(void)setScreenCurtainEnabled:(BOOL)arg1 ;
-(BOOL)isConnected;
-(void)dealloc;
@end

