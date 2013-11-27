/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol UIWebTouchEventsGestureRecognizerDelegate;
@class , NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

	id _touchTarget;
	SEL _touchAction;
	<UIWebTouchEventsGestureRecognizerDelegate>* _webTouchDelegate;
	unsigned _passedHitTest : 1;
	unsigned _defaultPrevented : 1;
	unsigned _inJavaScriptGesture : 1;
	unsigned _type : 2;
	float _originalGestureDistance;
	float _originalGestureAngle;
	CGPoint _locationInWindow;
	NSMutableArray* _touchLocations;
	NSMutableArray* _touchIdentifiers;
	NSMutableArray* _touchPhases;
	float _scale;
	float _rotation;

}

@property (assign,getter=isDefaultPrevented,nonatomic) BOOL defaultPrevented;              //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,readonly) int type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow;                                   //@synthesize locationInWindow=_locationInWindow - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchLocations;                              //@synthesize touchLocations=_touchLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchIdentifiers;                            //@synthesize touchIdentifiers=_touchIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchPhases;                                 //@synthesize touchPhases=_touchPhases - In the implementation block
@property (nonatomic,readonly) BOOL inJavaScriptGesture;                                   //@synthesize inJavaScriptGesture=_inJavaScriptGesture - In the implementation block
@property (nonatomic,readonly) float scale;                                                //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) float rotation;                                             //@synthesize rotation=_rotation - In the implementation block
-(void)dealloc;
-(id)description;
-(float)scale;
-(int)type;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(float)rotation;
-(void)setTouchLocations:(id)arg1 ;
-(void)setTouchIdentifiers:(id)arg1 ;
-(void)setTouchPhases:(id)arg1 ;
-(id)_phaseDescription:(int)arg1 ;
-(id)_typeDescription;
-(id)_locationsDescription;
-(id)_identifiersDescription;
-(id)_phasesDescription;
-(void)_reset;
-(void)_resetGestureRecognizer;
-(unsigned)_getNextTouchIdentifier;
-(void)_recordTouches:(id)arg1 type:(int)arg2 ;
-(void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3 ;
-(id).cxx_construct;
-(BOOL)isDefaultPrevented;
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(CGPoint)locationInWindow;
-(id)touchLocations;
-(id)touchIdentifiers;
-(id)touchPhases;
-(BOOL)inJavaScriptGesture;
@end

