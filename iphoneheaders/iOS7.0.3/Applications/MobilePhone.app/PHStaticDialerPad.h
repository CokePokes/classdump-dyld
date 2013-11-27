/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <TelephonyUI/TPPhonePad.h>

@interface PHStaticDialerPad : TPPhonePad {

	int _dialerType;

}

@property (assign) int dialerType;              //@synthesize dialerType=_dialerType - In the implementation block
-(int)dialerType;
-(void)setDialerType:(int)arg1 ;
-(id)initWithDialerType:(int)arg1 ;
-(id)_highlightedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_keypadImage;
-(float)_yFudge;
-(id)_pressedImage;
@end

