/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/SCATSimpleElement.h>

@protocol SCATGestureFingersElementDelegate;
@class ;

@interface SCATGestureFingersElement : SCATSimpleElement {

	<SCATGestureFingersElementDelegate>* _delegate;

}

@property (assign,nonatomic) <SCATGestureFingersElementDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)scatIndicatesOwnFocus;
-(void)scatDidBecomeFocused:(BOOL)arg1 ;
-(id)scatSpeakableDescription;
-(BOOL)scatPerformAction:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

