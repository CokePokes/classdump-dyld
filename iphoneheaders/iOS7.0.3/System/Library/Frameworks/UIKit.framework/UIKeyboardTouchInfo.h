/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIKit/UIKit-Structs.h>
@class UITouch, UIKBTree;

@interface UIKeyboardTouchInfo : NSObject {

	UITouch* _touch;
	UIKBTree* _key;
	UIKBTree* _keyplane;
	UIKBTree* _slidOffKey;
	CGPoint _initialPoint;
	CGPoint _initialDragPoint;
	BOOL _dragged;
	int _stage;
	BOOL _maySuppressUpAction;

}

@property (nonatomic,retain) UITouch * touch;                       //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                   //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * slidOffKey;                 //@synthesize slidOffKey=_slidOffKey - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                  //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialDragPoint;              //@synthesize initialDragPoint=_initialDragPoint - In the implementation block
@property (assign,nonatomic) BOOL dragged;                          //@synthesize dragged=_dragged - In the implementation block
@property (assign,nonatomic) int stage;                             //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) BOOL maySuppressUpAction;              //@synthesize maySuppressUpAction=_maySuppressUpAction - In the implementation block
-(void)dealloc;
-(id)touch;
-(id)key;
-(void)setTouch:(id)arg1 ;
-(void)setKey:(id)arg1 ;
-(void)setKeyplane:(id)arg1 ;
-(void)setSlidOffKey:(id)arg1 ;
-(id)keyplane;
-(id)slidOffKey;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(CGPoint)initialDragPoint;
-(void)setInitialDragPoint:(CGPoint)arg1 ;
-(BOOL)dragged;
-(void)setDragged:(BOOL)arg1 ;
-(BOOL)maySuppressUpAction;
-(void)setMaySuppressUpAction:(BOOL)arg1 ;
@end

