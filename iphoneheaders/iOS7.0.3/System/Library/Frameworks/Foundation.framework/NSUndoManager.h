/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray;

@interface NSUndoManager : NSObject {

	id _undoStack;
	id _redoStack;
	NSArray* _runLoopModes;
	unsigned long long _NSUndoManagerPrivate1;
	id _target;
	id _proxy;
	void* _NSUndoManagerPrivate2;
	void* _NSUndoManagerPrivate3;

}
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)arg1 ;
+(void)_endTopLevelGroupings;
-(BOOL)isRedoing;
-(void)enableUndoRegistration;
-(void)removeAllActionsWithTarget:(id)arg1 ;
-(id)_methodSignatureForTargetSelector:(SEL)arg1 ;
-(void)_forwardTargetInvocation:(id)arg1 ;
-(id)_undoStack;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg1 ;
-(void)undoNestedGroup;
-(void)_commitUndoGrouping;
-(void)_rollbackUndoGrouping;
-(void)_delayAutomaticTermination:(double)arg1 ;
-(id)runLoopModes;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(void)_prepareEventGrouping;
-(void)_postCheckpointNotification;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)_registerUndoObject:(id)arg1 ;
-(void)_setGroupIdentifier:(id)arg1 ;
-(id)undoActionName;
-(id)undoMenuTitleForUndoActionName:(id)arg1 ;
-(id)redoActionName;
-(id)redoMenuTitleForUndoActionName:(id)arg1 ;
-(void)setLevelsOfUndo:(unsigned)arg1 ;
-(unsigned)levelsOfUndo;
-(void)setRunLoopModes:(id)arg1 ;
-(id)prepareWithInvocationTarget:(id)arg1 ;
-(void)setActionIsDiscardable:(BOOL)arg1 ;
-(BOOL)undoActionIsDiscardable;
-(BOOL)redoActionIsDiscardable;
-(void)dealloc;
-(id)init;
-(BOOL)canUndo;
-(BOOL)canRedo;
-(id)redoMenuItemTitle;
-(id)undoMenuItemTitle;
-(void)undo;
-(void)redo;
-(BOOL)isUndoRegistrationEnabled;
-(void)removeAllActions;
-(void)disableUndoRegistration;
-(BOOL)groupsByEvent;
-(void)setGroupsByEvent:(BOOL)arg1 ;
-(void)beginUndoGrouping;
-(void)endUndoGrouping;
-(void)_processEndOfEventNotification:(id)arg1 ;
-(int)groupingLevel;
-(BOOL)_shouldCoalesceTypingForText:(id)arg1 :(id)arg2 ;
-(void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setActionName:(id)arg1 ;
-(BOOL)isUndoing;
-(void)finalize;
@end

