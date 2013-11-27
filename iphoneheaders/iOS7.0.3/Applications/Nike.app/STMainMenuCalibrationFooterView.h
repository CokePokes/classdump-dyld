/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Nike/Nike-Structs.h>
#import <UIKit/UIView.h>

@protocol STMainMenuCalibrationDelegate;
@class UIBezierPath, UITouch, , NSDate;

@interface STMainMenuCalibrationFooterView : UIView {

	UIBezierPath* _runRoundedRectPath;
	UIBezierPath* _walkRoundedRectPath;
	CGRect _runFrame;
	CGRect _walkFrame;
	UITouch* _trackingTouch;
	BOOL _touchInsideRunFrame;
	BOOL _touchInsideWalkFrame;
	<STMainMenuCalibrationDelegate>* _delegate;
	NSDate* _runCalibrationDate;
	NSDate* _walkCalibrationDate;

}

@property (assign,nonatomic) <STMainMenuCalibrationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * runCalibrationDate;                             //@synthesize runCalibrationDate=_runCalibrationDate - In the implementation block
@property (nonatomic,retain) NSDate * walkCalibrationDate;                            //@synthesize walkCalibrationDate=_walkCalibrationDate - In the implementation block
-(id)walkCalibrationDate;
-(id)runCalibrationDate;
-(void)setWalkCalibrationDate:(id)arg1 ;
-(void)setRunCalibrationDate:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

