/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@protocol WeekViewAllDayContentsDelegate;
@class ;

@interface WeekViewAllDayContents : UIView {

	<WeekViewAllDayContentsDelegate>* _delegate;

}

@property (__weak) <WeekViewAllDayContentsDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void).cxx_destruct;
@end

