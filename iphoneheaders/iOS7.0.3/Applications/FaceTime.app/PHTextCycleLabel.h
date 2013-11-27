/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UILabel.h>

@class NSArray, NSTimer;

@interface PHTextCycleLabel : UILabel {

	NSArray* _cycleStrings;
	NSTimer* _cycleTimer;
	int _currentCycleStringIndex;

}

@property (retain) NSArray * cycleStrings;                   //@synthesize cycleStrings=_cycleStrings - In the implementation block
@property (retain) NSTimer * cycleTimer;                     //@synthesize cycleTimer=_cycleTimer - In the implementation block
@property (assign) int currentCycleStringIndex;              //@synthesize currentCycleStringIndex=_currentCycleStringIndex - In the implementation block
-(id)cycleStrings;
-(void)setCurrentCycleStringIndex:(int)arg1 ;
-(int)currentCycleStringIndex;
-(id)cycleTimer;
-(void)setCycleTimer:(id)arg1 ;
-(void)cycleToNextString;
-(void)startCyclingStrings;
-(void)setCycleStrings:(id)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
@end

