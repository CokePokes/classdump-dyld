/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <FaceTime/PHHandsetDialerLCDView.h>

@class PHTextCycleLabel;

@interface PHEmergencyHandsetDialerLCDView : PHHandsetDialerLCDView {

	PHTextCycleLabel* _emergencyTitleLabel;

}

@property (readonly) PHTextCycleLabel * emergencyTitleLabel;              //@synthesize emergencyTitleLabel=_emergencyTitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 forDialerType:(int)arg2 ;
-(float)frameHeight;
-(id)lcdColor;
-(id)numberLabelFont;
-(id)newNameAndLabelView;
-(id)newDeleteButton;
-(void)applyLayoutConstraints;
-(id)emergencyTitleLabel;
-(void)dealloc;
@end

