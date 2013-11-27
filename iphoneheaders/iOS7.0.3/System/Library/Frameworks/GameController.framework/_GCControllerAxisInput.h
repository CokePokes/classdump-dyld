/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput {

	float _value;
	/*^block*/ id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;
	BOOL _flipped;
	BOOL _digital;
	GCControllerElement* _collection;

}
-(id)collection;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(BOOL)isDigital;
-(id)positive;
-(id)negative;
-(id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 digital:(BOOL)arg3 ;
-(float)value;
-(BOOL)isFlipped;
-(void).cxx_destruct;
-(BOOL)_setValue:(float)arg1 ;
@end

