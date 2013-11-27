/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>
#import <FaceTime/DialerLCDFieldProtocol.h>

@class UILabel;

@interface PHStarkInCallDialerLCDView : UIView <DialerLCDFieldProtocol> {

	UILabel* _mainNumberLabel;

}

@property (retain) UILabel * mainNumberLabel;              //@synthesize mainNumberLabel=_mainNumberLabel - In the implementation block
-(void)setMainNumberLabel:(id)arg1 ;
-(id)mainNumberLabel;
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 ;
-(void)deleteCharacter;
-(BOOL)inCallMode;
-(void)setInCallMode:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)text;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setLabel:(id)arg1 ;
-(BOOL)highlighted;
@end

