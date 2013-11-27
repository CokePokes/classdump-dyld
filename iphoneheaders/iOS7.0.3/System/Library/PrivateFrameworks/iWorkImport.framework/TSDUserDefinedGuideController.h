/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDecorator.h>
#import <iWorkImport/TSKChangeSourceObserver.h>

@class TSDInteractiveCanvasController, NSArray;

@interface TSDUserDefinedGuideController : NSObject <TSDDecorator, TSKChangeSourceObserver> {

	TSDInteractiveCanvasController* _icc;
	BOOL _editingGuides;
	BOOL _tornDown;
	NSArray* _currentGuides;

}

@property (nonatomic,readonly) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize icc=_icc - In the implementation block
@property (nonatomic,readonly) NSArray * currentGuides;                                                   //@synthesize currentGuides=_currentGuides - In the implementation block
-(id)guideStorage;
-(id)interactiveCanvasController;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(void)showGuides;
-(void)hideGuides;
-(BOOL)shouldShowUserDefinedGuides;
-(void)updateCurrentGuides;
-(id)decoratorOverlayLayers;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)deleteGuide:(id)arg1 ;
-(id)currentGuides;
-(void)p_showUserDefinedGuides;
-(void)p_hideUserDefinedGuides;
-(id)guideClosestToPoint:(CGPoint)arg1 distance:(float*)arg2 requiresSpecifiedType:(BOOL)arg3 desiredType:(int)arg4 ;
-(void)beginEditingGuides;
-(void)endEditingGuides;
-(void)replaceGuide:(id)arg1 withGuideAtPoint:(CGPoint)arg2 ;
-(void)changeOrientationOfGuide:(id)arg1 toType:(int)arg2 withGuideAtPoint:(CGPoint)arg3 ;
-(void)dealloc;
-(void)teardown;
@end

