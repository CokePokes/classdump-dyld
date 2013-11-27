/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Nike/STCustomSheetController.h>
#import <Nike/STWeightPickerDelegate.h>

@class STWeightPicker;

@interface STWeightController : STCustomSheetController <STWeightPickerDelegate> {

	STWeightPicker* _weightPicker;

}
-(void)_weightDidChange;
-(void)weightPicker:(id)arg1 weightUnitDidChange:(int)arg2 ;
-(void)weightPicker:(id)arg1 weightDidChange:(float)arg2 ;
-(void)save;
-(id)init;
-(void)loadView;
@end

