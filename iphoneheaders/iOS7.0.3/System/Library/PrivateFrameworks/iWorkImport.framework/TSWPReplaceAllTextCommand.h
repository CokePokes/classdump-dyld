/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKReplaceAllChildCommand.h>

@class TSWPStorage;

@interface TSWPReplaceAllTextCommand : TSKReplaceAllChildCommand {

	TSWPStorage* _storage;
	TSWPStorageTransaction* _undoRedoTransaction;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ReplaceAllTextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ReplaceAllTextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_invalidateRange:(NSRange)arg1 ;
-(id)initWithStorage:(id)arg1 parentCommand:(id)arg2 ;
-(TSWPStorageTransaction*)undoRedoTransaction;
-(void)p_invalidateSelection:(id)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(void)undoRedo;
-(BOOL)process;
-(id)actionString;
@end

