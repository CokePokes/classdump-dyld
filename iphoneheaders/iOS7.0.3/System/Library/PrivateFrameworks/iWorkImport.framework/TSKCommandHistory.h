/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol TSKPreflightCommand, TSKCommandHistoryDelegate;
@class NSMutableArray, TSKCommand, ;

@interface TSKCommandHistory : TSPObject {

	NSMutableArray* _commands;
	unsigned _undoCount;
	unsigned _mark;
	NSMutableArray* _markedRedoCommands;
	unsigned _undoCountAtUnarchive;
	unsigned _removedCommandCountSinceUnarchive;
	unsigned _undoCountAtLastSave;
	unsigned _removedCommandCountSinceLastSave;
	BOOL _documentEditedSinceLastSave;
	TSKCommand<TSKPreflightCommand>* _pendingPreflightCommand;
	<TSKCommandHistoryDelegate>* _delegate;

}

@property (nonatomic,retain) TSKCommand<TSKPreflightCommand> * pendingPreflightCommand; 
@property (assign,nonatomic) <TSKCommandHistoryDelegate> * delegate;                                 //@synthesize delegate=_delegate - In the implementation block
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)addCommand:(id)arg1 ;
-(void)documentWasSaved;
-(BOOL)isDocumentEditedSinceLastSave;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(id)pendingPreflightCommand;
-(void)setPendingPreflightCommand:(id)arg1 ;
-(id)commandsRemovedByAddingCommand;
-(id)lastCommand;
-(void)replaceLastCommandWithCommand:(id)arg1 ;
-(id)undoActionString;
-(id)redoActionString;
-(unsigned)undoCount;
-(id)popUndo;
-(unsigned)redoCount;
-(id)popRedo;
-(void)beginMark;
-(id)commandsRemovedByAcceptingMarkedCommands;
-(void)acceptMarkedCommands;
-(id)rejectMarkedCommands;
-(NSRange)p_rangeOfRedoCommands;
-(void)p_removeCommandsOverMaxUndoDepthAfterAddingCommandsWithCount:(unsigned)arg1 ;
-(NSRange)p_rangeOfCommandsOverMaxUndoDepthAfterAddingCommandsWithCount:(unsigned)arg1 ;
-(void)p_endMark:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithContext:(id)arg1 ;
-(void)clear;
@end

