/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol _MKUserInteractionGestureRecognizerTouchObserver;
@class NSMutableSet, ;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	<_MKUserInteractionGestureRecognizerTouchObserver>* _touchObserver;

}

@property (assign,nonatomic) <_MKUserInteractionGestureRecognizerTouchObserver> * touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)setTouchObserver:(id)arg1 ;
-(id)touchObserver;
-(void)dealloc;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

